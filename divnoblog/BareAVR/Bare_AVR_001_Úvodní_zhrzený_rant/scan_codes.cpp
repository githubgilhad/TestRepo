//# vim: fileencoding=utf-8:nomodified:nowrap:textwidth=0:foldmethod=marker:foldcolumn=4:ruler:showcmd:lcs=tab\:|- list:tabstop=12

#include "scan_codes.h"
// proste jmena klaves, celkem 18*8=144 moznych, psat to do programu je dost nepohodlne a mozna je budu casem jeste nejak prejmenovavat podle potreby
// numericka klavesnice je Num-1, Num-Enter atd, z dvojice znaku na angl. klavesnici si vybiram nahodne, co se mi vic libi

word  scan_codes_press[NUM_COLS][NUM_ROWS] ; // casem doplnim, co budu posilat (a pridam tam 'const' )
word  scan_codes_release[NUM_COLS][NUM_ROWS] ; // casem doplnim, co budu posilat (a pridam tam 'const' )


// F9 = #8,0 #9,0
// Ins =  #9,0 #10,0
// Delete =  #10,0 #11,0
// PgUp =  #11,0 #12,0
// Home = #12,0 #13,0 (autorepeat?!)
//
// L-Ctrl = ??15??
// R-Win = ??	#17,*
// Menu = ??	#17,*
// R-Ctrl = ??	#15,*
//
const char*  scan_names[NUM_COLS][NUM_ROWS] = { 
	{	"~",	"1",	"Q",	"Tab",	"A",	"Esc",	"Z",	"#1,5",	},	// P20
	{	"F1",	"2",	"W",	"CapsLck",	"S",	"#1,5",	"X",	"#1,7",	},	// P21
	{	"F2",	"3",	"E",	"F3",	"D",	"F4",	"C",	"#2,7",	},	// P22
	{	"5",	"4",	"R",	"T",	"F",	"G",	"V",	"B",	},	// P23
	{	"6",	"7",	"U",	"Y",	"J",	"H",	"M",	"N",	},	// P24
	{	"+",	"8",	"I",	"]/}",	"K",	"F6",	",/<",	"#5,7",	},	// P25
	{	"F8",	"9",	"O",	"F7",	"L",	"#6,5",	"./>",	"#6,7",	},	// P26
	{	"-",	"0",	"P",	"[/{",	";/:",	"'/\"",	"#7,6",	"//?",	},	// P27
	{	"F9",	"F10",	"#8,2",	"BackSpc",	"\\",	"F5",	"Enter",	"Space",	},	// P10
	{	"Ins",	"F12",	"N-8",	"N-5",	"N-2",	"N-0",	"N-/",	"Right",	},	// P11
	{	"Delete",	"F11",	"N-7",	"N-4",	"N-1",	"#10,5",	"NumLock",	"Down",	},	// P12
	{	"PgUp",	"PgDown",	"N-9",	"N-6",	"N-3",	"N-.",	"N-*",	"N--",	},	// P13
	{	"Home",	"End",	"N-+",	"#12,3",	"N-Enter",	"Up",	"Pause",	"Left",	},	// P14
	{	"#13,0",	"PrtScr",	"ScrLck",	"#13,3",	"#13,4",	"L-Alt",	"#13,6",	"R-Alt",	},	// P15
	{	"#14,0",	"#14,1",	"#14,2",	"L-Shift",	"#14,4",	"#14,5",	"R-Shift",	"#14,7",	},	// P16
	{	"#15,0",	"#15,1",	"#15,2",	"#15,3",	"#15,4",	"#15,5",	"R-Ctrl",	"#15,7",	},	// P17 L-Ctrl, R-Ctrl
	{	"L-Win",	"#16,1",	"#16,2",	"#16,3",	"#16,4",	"#16,5",	"#16,6",	"#16,7",	},	// P30
	{	"#17,0",	"#17,1",	"Menu",	"#17,3",	"R-Win",	"#17,5",	"#17,6",	"#17,7",	},	// P31 R-Win,Menu
};
