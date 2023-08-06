#define USAGE_MSR_DEVICE_READ_ONLY "MSR Device Read-Only"
#define USAGE_TRACK_1_LENGTH "Track 1 Length"
#define USAGE_TRACK_2_LENGTH "Track 2 Length"
#define USAGE_TRACK_3_LENGTH "Track 3 Length"
#define USAGE_TRACK_JIS_LENGTH "Track JIS Length"
#define USAGE_TRACK_DATA "Track Data"
#define USAGE_TRACK_1_DATA "Track 1 Data"
#define USAGE_TRACK_2_DATA "Track 2 Data"
#define USAGE_TRACK_3_DATA "Track 3 Data"
#define USAGE_TRACK_JIS_DATA "Track JIS Data"


#define USAGE_PAGE_MAGNETIC_STRIPE_READER {"Magnetic Stripe Reader", {\
	{1, USAGE_MSR_DEVICE_READ_ONLY},\
	{17, USAGE_TRACK_1_LENGTH},\
	{18, USAGE_TRACK_2_LENGTH},\
	{19, USAGE_TRACK_3_LENGTH},\
	{20, USAGE_TRACK_JIS_LENGTH},\
	{32, USAGE_TRACK_DATA},\
	{33, USAGE_TRACK_1_DATA},\
	{34, USAGE_TRACK_2_DATA},\
	{35, USAGE_TRACK_3_DATA},\
	{36, USAGE_TRACK_JIS_DATA},\
}}
