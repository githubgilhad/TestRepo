| [Bare_AVR_000_Index](../) | [Bare_AVR_000_Index](../) | [Bare_AVR_002_Začínám](../Bare_AVR_002_Začínám) |
| :--- | :---: | ---: |

# ![logo](../BareAvr.png)  Bare AVR 001 - Úvodní zhrzený rant


Blah blah blah

also [scan_codes.cpp](scan_codes.cpp) and [./scan_codes.h](./scan_codes.h) 

viz též ![header](scan_codes.h)
```C

	// proste jmena klaves, celkem 18*8=144 moznych, psat to do programu je dost nepohodlne a mozna je budu casem jeste nejak prejmenovavat podle potreby
	// numericka klavesnice je Num-1, Num-Enter atd, z dvojice znaku na angl. klavesnici si vybiram nahodne, co se mi vic libi
#ifndef SCAN_CODES_H
#define SCAN_CODES_H
#include <Arduino.h>
#define NUM_ELEM(x) (sizeof (x) / sizeof (*(x)))
#define NUM_ROWS 8
	// pocet radek, porad se pouziva v cyklech
	// NUM_ROWS je prihodne 8, cili 8 bitu, cili jeden byte - bacha, budu to pouzivat bez varovani

#define NUM_COLS 18
	// pocet sloupcu
extern word  scan_codes_press[NUM_COLS][NUM_ROWS] ; // casem doplnim, co budu posilat
extern word  scan_codes_release[NUM_COLS][NUM_ROWS] ; // casem doplnim, co budu posilat
extern const char*  scan_names[NUM_COLS][NUM_ROWS];
#endif
```
