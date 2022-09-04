/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static const char passchar = '-';   /* -P  option; Replace all input sith passchar */


static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int incremental = 0;                 /* -r  option; if 1, outputs text each time a key is pressed */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=15"
};
/* colorscheme */
static const char col_alert[]    = "#f59554";
static const char col_back[]     = "#010101";
static const char col_four[]     = "#0097ff";
//static const char col_back[]      = "#9997ff";
//static const char col_back[]      = "#975fd7";
//static const char col_back[]      = "#976f97";
//static const char col_four[]      = "#f32323";

static const char *colors[SchemeLast][2] = {
	/*               fg         bg       */
  [SchemeNorm] = { col_four, col_back  },
  [SchemeSel] =  { col_back, col_four  },
  [SchemeOut] =  { col_back, col_alert },

};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = "/?\"&[] ";

/* Size of the window border */
static unsigned int border_width = 2;
