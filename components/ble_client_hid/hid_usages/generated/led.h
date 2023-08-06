#define USAGE_NUM_LOCK "Num Lock"
#define USAGE_CAPS_LOCK "Caps Lock"
#define USAGE_SCROLL_LOCK "Scroll Lock"
#define USAGE_COMPOSE "Compose"
#define USAGE_KANA "Kana"
#define USAGE_POWER "Power"
#define USAGE_SHIFT "Shift"
#define USAGE_DO_NOT_DISTURB "Do Not Disturb"
#define USAGE_MUTE "Mute"
#define USAGE_TONE_ENABLE "Tone Enable"
#define USAGE_HIGH_CUT_FILTER "High Cut Filter"
#define USAGE_LOW_CUT_FILTER "Low Cut Filter"
#define USAGE_EQUALIZER_ENABLE "Equalizer Enable"
#define USAGE_SOUND_FIELD_ON "Sound Field On"
#define USAGE_SURROUND_ON "Surround On"
#define USAGE_REPEAT "Repeat"
#define USAGE_STEREO "Stereo"
#define USAGE_SAMPLING_RATE_DETECT "Sampling Rate Detect"
#define USAGE_SPINNING "Spinning"
#define USAGE_CAV "CAV"
#define USAGE_CLV "CLV"
#define USAGE_RECORDING_FORMAT_DETECT "Recording Format Detect"
#define USAGE_OFF_HOOK "Off-Hook"
#define USAGE_RING "Ring"
#define USAGE_MESSAGE_WAITING "Message Waiting"
#define USAGE_DATA_MODE "Data Mode"
#define USAGE_BATTERY_OPERATION "Battery Operation"
#define USAGE_BATTERY_OK "Battery OK"
#define USAGE_BATTERY_LOW "Battery Low"
#define USAGE_SPEAKER "Speaker"
#define USAGE_HEADSET "Headset"
#define USAGE_HOLD "Hold"
#define USAGE_MICROPHONE "Microphone"
#define USAGE_COVERAGE "Coverage"
#define USAGE_NIGHT_MODE "Night Mode"
#define USAGE_SEND_CALLS "Send Calls"
#define USAGE_CALL_PICKUP "Call Pickup"
#define USAGE_CONFERENCE "Conference"
#define USAGE_STAND_BY "Stand-by"
#define USAGE_CAMERA_ON "Camera On"
#define USAGE_CAMERA_OFF "Camera Off"
#define USAGE_ON_LINE "On-Line"
#define USAGE_OFF_LINE "Off-Line"
#define USAGE_BUSY "Busy"
#define USAGE_READY "Ready"
#define USAGE_PAPER_OUT "Paper-Out"
#define USAGE_PAPER_JAM "Paper-Jam"
#define USAGE_REMOTE "Remote"
#define USAGE_FORWARD "Forward"
#define USAGE_REVERSE "Reverse"
#define USAGE_STOP "Stop"
#define USAGE_REWIND "Rewind"
#define USAGE_FAST_FORWARD "Fast Forward"
#define USAGE_PLAY "Play"
#define USAGE_PAUSE "Pause"
#define USAGE_RECORD "Record"
#define USAGE_ERROR "Error"
#define USAGE_USAGE_SELECTED_INDICATOR "Usage Selected Indicator"
#define USAGE_USAGE_IN_USE_INDICATOR "Usage In Use Indicator"
#define USAGE_USAGE_MULTI_MODE_INDICATOR "Usage Multi Mode Indicator"
#define USAGE_INDICATOR_ON "Indicator On"
#define USAGE_INDICATOR_FLASH "Indicator Flash"
#define USAGE_INDICATOR_SLOW_BLINK "Indicator Slow Blink"
#define USAGE_INDICATOR_FAST_BLINK "Indicator Fast Blink"
#define USAGE_INDICATOR_OFF "Indicator Off"
#define USAGE_FLASH_ON_TIME "Flash On Time"
#define USAGE_SLOW_BLINK_ON_TIME "Slow Blink On Time"
#define USAGE_SLOW_BLINK_OFF_TIME "Slow Blink Off Time"
#define USAGE_FAST_BLINK_ON_TIME "Fast Blink On Time"
#define USAGE_FAST_BLINK_OFF_TIME "Fast Blink Off Time"
#define USAGE_USAGE_INDICATOR_COLOR "Usage Indicator Color"
#define USAGE_INDICATOR_RED "Indicator Red"
#define USAGE_INDICATOR_GREEN "Indicator Green"
#define USAGE_INDICATOR_AMBER "Indicator Amber"
#define USAGE_GENERIC_INDICATOR "Generic Indicator"
#define USAGE_SYSTEM_SUSPEND "System Suspend"
#define USAGE_EXTERNAL_POWER_CONNECTED "External Power Connected"
#define USAGE_INDICATOR_BLUE "Indicator Blue"
#define USAGE_INDICATOR_ORANGE "Indicator Orange"
#define USAGE_GOOD_STATUS "Good Status"
#define USAGE_WARNING_STATUS "Warning Status"
#define USAGE_RGB_LED "RGB LED"
#define USAGE_RED_LED_CHANNEL "Red LED Channel"
#define USAGE_BLUE_LED_CHANNEL "Blue LED Channel"
#define USAGE_GREEN_LED_CHANNEL "Green LED Channel"
#define USAGE_LED_INTENSITY "LED Intensity"
#define USAGE_SYSTEM_MICROPHONE_MUTE "System Microphone Mute"
#define USAGE_PLAYER_INDICATOR "Player Indicator"
#define USAGE_PLAYER_1 "Player 1"
#define USAGE_PLAYER_2 "Player 2"
#define USAGE_PLAYER_3 "Player 3"
#define USAGE_PLAYER_4 "Player 4"
#define USAGE_PLAYER_5 "Player 5"
#define USAGE_PLAYER_6 "Player 6"
#define USAGE_PLAYER_7 "Player 7"
#define USAGE_PLAYER_8 "Player 8"


#define USAGE_PAGE_LED {"LED", {\
	{1, USAGE_NUM_LOCK},\
	{2, USAGE_CAPS_LOCK},\
	{3, USAGE_SCROLL_LOCK},\
	{4, USAGE_COMPOSE},\
	{5, USAGE_KANA},\
	{6, USAGE_POWER},\
	{7, USAGE_SHIFT},\
	{8, USAGE_DO_NOT_DISTURB},\
	{9, USAGE_MUTE},\
	{10, USAGE_TONE_ENABLE},\
	{11, USAGE_HIGH_CUT_FILTER},\
	{12, USAGE_LOW_CUT_FILTER},\
	{13, USAGE_EQUALIZER_ENABLE},\
	{14, USAGE_SOUND_FIELD_ON},\
	{15, USAGE_SURROUND_ON},\
	{16, USAGE_REPEAT},\
	{17, USAGE_STEREO},\
	{18, USAGE_SAMPLING_RATE_DETECT},\
	{19, USAGE_SPINNING},\
	{20, USAGE_CAV},\
	{21, USAGE_CLV},\
	{22, USAGE_RECORDING_FORMAT_DETECT},\
	{23, USAGE_OFF_HOOK},\
	{24, USAGE_RING},\
	{25, USAGE_MESSAGE_WAITING},\
	{26, USAGE_DATA_MODE},\
	{27, USAGE_BATTERY_OPERATION},\
	{28, USAGE_BATTERY_OK},\
	{29, USAGE_BATTERY_LOW},\
	{30, USAGE_SPEAKER},\
	{31, USAGE_HEADSET},\
	{32, USAGE_HOLD},\
	{33, USAGE_MICROPHONE},\
	{34, USAGE_COVERAGE},\
	{35, USAGE_NIGHT_MODE},\
	{36, USAGE_SEND_CALLS},\
	{37, USAGE_CALL_PICKUP},\
	{38, USAGE_CONFERENCE},\
	{39, USAGE_STAND_BY},\
	{40, USAGE_CAMERA_ON},\
	{41, USAGE_CAMERA_OFF},\
	{42, USAGE_ON_LINE},\
	{43, USAGE_OFF_LINE},\
	{44, USAGE_BUSY},\
	{45, USAGE_READY},\
	{46, USAGE_PAPER_OUT},\
	{47, USAGE_PAPER_JAM},\
	{48, USAGE_REMOTE},\
	{49, USAGE_FORWARD},\
	{50, USAGE_REVERSE},\
	{51, USAGE_STOP},\
	{52, USAGE_REWIND},\
	{53, USAGE_FAST_FORWARD},\
	{54, USAGE_PLAY},\
	{55, USAGE_PAUSE},\
	{56, USAGE_RECORD},\
	{57, USAGE_ERROR},\
	{58, USAGE_USAGE_SELECTED_INDICATOR},\
	{59, USAGE_USAGE_IN_USE_INDICATOR},\
	{60, USAGE_USAGE_MULTI_MODE_INDICATOR},\
	{61, USAGE_INDICATOR_ON},\
	{62, USAGE_INDICATOR_FLASH},\
	{63, USAGE_INDICATOR_SLOW_BLINK},\
	{64, USAGE_INDICATOR_FAST_BLINK},\
	{65, USAGE_INDICATOR_OFF},\
	{66, USAGE_FLASH_ON_TIME},\
	{67, USAGE_SLOW_BLINK_ON_TIME},\
	{68, USAGE_SLOW_BLINK_OFF_TIME},\
	{69, USAGE_FAST_BLINK_ON_TIME},\
	{70, USAGE_FAST_BLINK_OFF_TIME},\
	{71, USAGE_USAGE_INDICATOR_COLOR},\
	{72, USAGE_INDICATOR_RED},\
	{73, USAGE_INDICATOR_GREEN},\
	{74, USAGE_INDICATOR_AMBER},\
	{75, USAGE_GENERIC_INDICATOR},\
	{76, USAGE_SYSTEM_SUSPEND},\
	{77, USAGE_EXTERNAL_POWER_CONNECTED},\
	{78, USAGE_INDICATOR_BLUE},\
	{79, USAGE_INDICATOR_ORANGE},\
	{80, USAGE_GOOD_STATUS},\
	{81, USAGE_WARNING_STATUS},\
	{82, USAGE_RGB_LED},\
	{83, USAGE_RED_LED_CHANNEL},\
	{84, USAGE_BLUE_LED_CHANNEL},\
	{85, USAGE_GREEN_LED_CHANNEL},\
	{86, USAGE_LED_INTENSITY},\
	{87, USAGE_SYSTEM_MICROPHONE_MUTE},\
	{96, USAGE_PLAYER_INDICATOR},\
	{97, USAGE_PLAYER_1},\
	{98, USAGE_PLAYER_2},\
	{99, USAGE_PLAYER_3},\
	{100, USAGE_PLAYER_4},\
	{101, USAGE_PLAYER_5},\
	{102, USAGE_PLAYER_6},\
	{103, USAGE_PLAYER_7},\
	{104, USAGE_PLAYER_8},\
}}
