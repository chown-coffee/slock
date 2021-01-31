/* user and group to drop privileges to */
static const char *user  = "coffee";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#9932CC",   /* during input */
	// [FAILED] = "#620000",   /* wrong password */
	[FAILED] = "#4d004d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "... NAVI stopped ...";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "6x13";
