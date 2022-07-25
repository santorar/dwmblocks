//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "~/.local/bin/statusbar/sb-upgrade",					3600,		0},
	{"", "~/.local/bin/statusbar/sb-internet",					180,		0},
	{"", "~/.local/bin/statusbar/sb-clock",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
