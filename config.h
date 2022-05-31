static const char *fonts[] = { "monospace:size=13" };
static const char *prompt = NULL;
static const char worddelimiters[] = " ";
static const int min_width = 200;
static const unsigned int border_width = 1;
static int centered = 1;
static int fuzzy = 1;
static int topbar = 1;
static unsigned int lines = 6;

static const char *colors[SchemeLast][2] = {
    //                           fg         bg
    [SchemeNorm]          = { "#d8dee9", "#2e3440" },
    [SchemeSel]           = { "#d8dee9", "#000000" },
	[SchemeSelHighlight]  = { "#bf616a", "#000000" },
	[SchemeNormHighlight] = { "#bf616a", "#2e3440" },
    [SchemeOut]           = { "#d8dee9", "#2e3440" },
};
