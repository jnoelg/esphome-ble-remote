# the HidUsageTables.json file is from https://www.usb.org/hid 
# It's embedded in the HID Usage Tables PDF file, as an attachment
# and can be extracted with a tool like https://www.konwerter.net/en/ExtractPdfAttachments/ 

# the generated files are written in the generated_hid_usages folder

# only the "consumer.h", "generic_desktop.h" and "keyboard_keypad.h" files are used in the project
# thet are manully copied in the "ble_client_hid" component folder

import json
import re
with open("HidUsageTables.json", "r", encoding='utf-8') as hid_usages_file:
    data = json.load(hid_usages_file)
    usage_pages = data["UsagePages"]
    for page in usage_pages:
        page_name : str = page["Name"]
        page_name = re.sub('[^a-zA-Z0-9]+','_',page_name)
        with open(f"./generated_hid_usages/{page_name.lower()}.h", "w", encoding='utf-8') as header_file:
            usage_page : str = f'#define USAGE_PAGE_{page_name.upper()} {{\"{page["Name"]}\", {{\\\n'
            for usage in page["UsageIds"]:
                safe_usage_name = usage["Name"].replace(chr(0x2010), '-') # fix ambiguous '-' char
                usage_name = safe_usage_name.replace('é', 'e') # 'é' is used once, in "Moiré"
                usage_name = re.sub('[^a-zA-Z0-9]+', '_', usage_name)
                usage_name = usage_name.upper()
                usage_kinds : str = ""
                for kind in usage["Kinds"]:
                    kind = kind.upper()
                    usage_kinds += f"\"{kind}\""
                    usage_kinds += ","

                usage_kinds = usage_kinds[:len(usage_kinds)-1]
                header_file.write(f'#define USAGE_{usage_name} \"{safe_usage_name}\"\n')
                usage_page += f'\t{{{usage["Id"]}, USAGE_{usage_name}}},\\\n'

            header_file.write("\n\n")
            header_file.write(usage_page)
            header_file.write(f'}}}}\n')