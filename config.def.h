/* appearance */
static int showbar           = 1; /* 0 means no bar */
static int topbar            = 1; /* 0 means bottom bar */
static int showtitle         = 1; /* 0 means no title */
static int showmode          = 1; /* 0 means no mode */
static int showlayout        = 1; /* 0 means no layout */
static int barheight         = 20; /* 0 for font height bar */
static const char *fonts[]   = { "monospace:size=10" };
static uint32_t colors[][3]  = {
	/*               fg          bg         */
	[SchemeNorm] = { 0xbbbbbbff, 0x222222ff },
	[SchemeSel]  = { 0xeeeeeeff, 0x005577ff },
};

/* tagging */
static char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
static int tagspadding = 4;
