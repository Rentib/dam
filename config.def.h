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

/* layout name replacement values */
static const char *layouts[][2] = {
	/* layout name          replace */
	{ "rivertile - left",   "[]=" },
	{ "rivertile - right",  "=[]" },
	{ "rivertile - top",    "[^]" },
	{ "rivertile - bottom", "[_]" },
	{ NULL,                 "><>" }, /* no layout, last layout */
};

static const char *termcmd[] = { "foot", NULL };

/* button definitions */
/* click can be ClkTagBar, ClkLayout, ClkMode, ClkTitle, ClkStatus */
static const Button buttons[] = {
	/* click     button      function  argument */
	{ ClkTagBar, BTN_LEFT,   command,  {.s = "set-focused-tags"} },
	{ ClkTagBar, BTN_RIGHT,  command,  {.s = "toggle-focused-tags"} },
	{ ClkTagBar, BTN_MIDDLE, command,  {.s = "set-view-tags"} },
	{ ClkTitle,  BTN_LEFT,   command,  {.s = "zoom"} },
	{ ClkStatus, BTN_MIDDLE, spawn,    {.v = termcmd } },
};
