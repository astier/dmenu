static const char *fonts[] = { "monospace:size=13" };
static const char *prompt = NULL;
static const char worddelimiters[] = " ";
static int topbar = 1;
static unsigned int lines = 0;

static const char *colors[SchemeLast][2] = {
    //               fg         bg
    [SchemeNorm] = { "#d8dee9", "#2e3440" },
    [SchemeSel]  = { "#d8dee9", "#000000" },
    [SchemeOut]  = { "#d8dee9", "#2e3440" },
};
