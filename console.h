#ifndef _CONSOLE_H
#define _CONSOLE_H

#if defined(_WIN32) || defined(WIN32)
#define OS_Windows
#include <windows.h>
#else
#define OS_Unix
//#include <curses.h>
#endif

#define COLOR_RESET  -1
#define COLOR_BLACK   0
#ifdef OS_Windows
#define COLOR_AQUA    3
#define COLOR_BLUE    1
#define COLOR_CYAN    3
#define COLOR_RED     4
#define COLOR_YELLOW  6
#else
#define COLOR_AQUA    6
#define COLOR_BLUE    4
#define COLOR_CYAN    6
#define COLOR_RED     1
#define COLOR_YELLOW  3
#endif
#define COLOR_GREEN   2
#define COLOR_MAGENTA 5
#define COLOR_FUSCHIA 5
#define COLOR_PURPLE  5
#define COLOR_WHITE   7
#define COLOR_BRIGHT  8

// BRIGHT
#define COLOR_GRAY          (COLOR_BRIGHT | COLOR_BLACK)
#define COLOR_BRIGHTBLACK   (COLOR_BRIGHT | COLOR_BLACK)
#define COLOR_BRIGHTBLUE    (COLOR_BRIGHT | COLOR_BLUE)
#define COLOR_BRIGHTGREEN   (COLOR_BRIGHT | COLOR_GREEN)
#define COLOR_BRIGHTAQUA    (COLOR_BRIGHT | COLOR_AQUA)
#define COLOR_BRIGHTCYAN    (COLOR_BRIGHT | COLOR_CYAN)
#define COLOR_BRIGHTRED     (COLOR_BRIGHT | COLOR_RED)
#define COLOR_BRIGHTMAGENTA (COLOR_BRIGHT | COLOR_MAGENTA)
#define COLOR_BRIGHTFUSCHIA (COLOR_BRIGHT | COLOR_FUSCHIA)
#define COLOR_BRIGHTPURPLE  (COLOR_BRIGHT | COLOR_PURPLE)
#define COLOR_BRIGHTYELLOW  (COLOR_BRIGHT | COLOR_YELLOW)
#define COLOR_BRIGHTWHITE   (COLOR_BRIGHT | COLOR_WHITE)

// 

/* Gets the width of the console buffer.
Written by Oliver Davenport (12033278) */
int getwidth();

/* Gets the height of the console buffer.
Written by Oliver Davenport (12033278) */
int getheight();

/* Clears the console buffer. */
void clrscr();

/* Sleep for a number of milliseconds. */
void pause(int time);

/* Moves the cursor to the specified point. */
void gotoxy(int x, int y);

/* Gets the cursor's current position.
Written by Oliver Davenport (12033278) */
void wherexy(int &x, int &y);

/* Sets the console background color. */
void setbg(int color);

/* Sets the console foreground color. */
void setfg(int color);

/* Sets the console foreground and background color. */
void setrgb(int fg, int bg = -2);

/* Shows or hides the cursor */
void showcursor(bool show = true);

/* Wait for a key to be pressed on the console.
Written by user firedraco @ http://cplusplus.com/forum */
int waitkey(const char* prompt = "");

#endif // !_CONSOLE_H
