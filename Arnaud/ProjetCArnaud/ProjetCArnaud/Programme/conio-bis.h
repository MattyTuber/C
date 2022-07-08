/* Updated by:
 * André Lozes <alozes@laas.fr> or <andre.lozes@iut-tlse3.fr>
 * on 2004/12/26
 *
 * ehanced compatibility with conio functions impemented from djgpp
 * 
 */

#ifndef _CONIO_AL_
#define _CONIO_AL_

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// #include <conio.h>  /* see above */
/************* previous conio.h included here ************/
/*   //N : to indicate a new version by A.Lozes  //
/*   //I : to indicate a implemention by A.Lozes //
/*
/*  
    /* A conio implementation for Mingw/Dev-C++.
     *
     * Written by:
     * Hongli Lai <hongli@telekabel.nl>
     * tkorrovi <tkorrovi@altavista.net> on 2002/02/26. 
     * Andrew Westcott <ajwestco@users.sourceforge.net>
     *
     * Offered for use in the public domain without any warranty.
     */
    
    #ifndef _CONIO_H_
    #define _CONIO_H_
    
//    #include <stdio.h>
    
    #ifdef __cplusplus
    extern "C" {
    #endif
    
    #define BLINK 0
    
    typedef enum
    {
        BLACK,
        BLUE,
        GREEN,
        CYAN,
        RED,
        MAGENTA,
        BROWN,
        LIGHTGRAY,
        DARKGRAY,
        LIGHTBLUE,
        LIGHTGREEN,
        LIGHTCYAN,
        LIGHTRED,
        LIGHTMAGENTA,
        YELLOW,
        WHITE
    } COLORS;
    
    
    #define cgets	_cgets
    #define cprintf	_cprintf
    #define cputs	_cputs
    #define cscanf	_cscanf
    #define ScreenClear clrscr
    
    /* blinkvideo */
    
    void clreol (void);                                                //N
    void clrscr (void);                                                //N
    int _conio_gettext (int left, int top, int right, int bottom,      //N
                        char *str); 
    /* _conio_kbhit */   
    void delline (void);                                               //N
    /* gettextinfo */                                                  //I
    void gotoxy(int x, int y);                                         //N
    /*
    highvideo                                                          //I
    insline                                                            //I
    intensevideo   
    lowvideo                                                           //I
    movetext                                                           //I
    normvideo                                                          //I 
    */
    void gotoxy(int x, int y);                                         //N
    //void puttext (int left, int top, int right, int bottom, char *str);
    #define _INT_PUTTEXT
    int puttext (int left, int top, int right, int bottom, char *str); //N
    // int for compatibility with djgpp implementetion

    // Screen Variables
    
    /* ScreenCols
    ScreenGetChar
    ScreenGetCursor
    ScreenMode
    ScreenPutChar
    ScreenPutString
    ScreenRetrieve
    ScreenRows
    ScreenSetCursor
    ScreenUpdate
    ScreenUpdateLine
    ScreenVisualBell
    _set_screen_lines                                                 //I
    */
    
    void _setcursortype (int type);                                   //N
    void textattr (int _attr);                                        //N
    void textbackground (int color);                                  //N
    void textcolor (int color);                                       //N
    /* textmode */                                                    //I
    int wherex (void);                                                //N
    int wherey (void);                                                //N
    /* window */                                                      //I
    
    
    
    /*  The code below was part of Mingw's conio.h  */
    /*
     * conio.h
     *
     * Low level console I/O functions. Pretty please try to use the ANSI
     * standard ones if you are writing new code.
     *
     * This file is part of the Mingw32 package.
     *
     * Contributors:
     *  Created by Colin Peters <colin@bird.fu.is.saga-u.ac.jp>
     *
     *  THIS SOFTWARE IS NOT COPYRIGHTED
     *
     *  This source code is offered for use in the public domain. You may
     *  use, modify or distribute it freely.
     *
     *  This code is distributed in the hope that it will be useful but
     *  WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
     *  DISCLAMED. This includes but is not limited to warranties of
     *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
     *
     * $Revision: 1.4 $
     * $Author: hongli $
     * $Date: 2002/04/26 19:31:25 $
     *
     */
    
    char*	_cgets (char*);                                              //N    
    int	_cprintf (const char*, ...);                                     //N
    int	_cputs (const char*);                                            //N
    int	_cscanf (char*, ...);                                            //N
    
    int	_getch (void);
    int	_getche (void);                                                  //N
    int	_kbhit (void);
    int	_putch (int);                                                    //N
    int	_ungetch (int);
    
    /*
    int	getch (void);
    int	getche (void);                                                   
    int	kbhit (void);
    int	putch (int);                
    int	ungetch (int);
    */
    
    
    #define getch     _getch
    #define getche    _getche
    #define kbhit     _kbhit
    #define putch     _putch
    #define ungetch   _ungetch
                  
    #ifdef __cplusplus
    }
    #endif
    
    #endif /* _CONIO_H_ */

/*****************************************************************************/
/* Adding conio implementation for compatibility whit djgpp
/*   //N : to indicate a new version by A.Lozes //
/*   //I : to indicate a implemented function by A.Lozes //
*/
    #ifdef __cplusplus
    extern "C" {
    #endif
    
    struct text_info 
    {
        unsigned char winleft;
        unsigned char wintop;
        unsigned char winright;
        unsigned char winbottom;
        unsigned char attribute;
        unsigned char normattr;
        unsigned char currmode;
        unsigned char screenheight;
        unsigned char screenwidth;
        unsigned char curx;
        unsigned char cury;
    };

    typedef enum
    {
        _NOCURSOR,
        _SOLIDCURSOR,
        _NORMALCURSOR
    } CURSORS;

    enum text_modes
    {
        /* DOS-compatible modes */
    
        LASTMODE = -1,
        BW40     = 0,
        C40,
        BW80,
        C80,
        MONO     = 7,
        C4350    = 64,
    
        /* New Color modes */
    
        C40X14   = 8,
        C40X21,
        C40X28,
        C40X43,
        C40X50,
        C40X60,
    
        C80X14,
        C80X21,
        C80X28,
        C80X43,
        C80X50,
        C80X60,
    
        /* New Black & White modes */
    
        BW40X14,
        BW40X21,
        BW40X28,
        BW40X43,
        BW40X50,
        BW40X60,
    
        BW80X14,
        BW80X21,
        BW80X28,
        BW80X43,
        BW80X50,
        BW80X60,
    
        /* New Monochrome modes */
    
        MONO14,             /* Invalid VGA mode */
        MONO21,
        MONO28,
        MONO43,
        MONO50,
        MONO60,
    
        _ORIGMODE = 65      /* original mode at program startup */
    };
    
    void gettextinfo(struct text_info * txt_info );             // I
    void highvideo (void);                                      // I 
    void insline (void);                                        // I
    void lowvideo (void);                                       // I
    int  movetext (int left, int top, int right, int bottom, 
              int dest_left, int dest_top);                     // I
    void normvideo (void);                                      // I
    void _set_screen_lines(int nlines);                         // I   
             // Adjust the length of the screen beetween 25 and 60. 
             // The width is fixed to 80 characters. 
    void textmode(int _mode);                                   // I 
    void window (int left, int top, int right, int bottom);     // I

/*****************************************************************************/
/* Static variables and their initial values (not djgpp implementation)
/* Direct access on this variables is hazardous !
/*****************************************************************************/
    /* absolute coordinates : column or x : 0..79   , line or y : 0..24   
     * used for window primitives (for the initial C80 mode)
     *
     * relative coordinates : column or x : 1..Xmax , line or y : 1..Ymax 
     * used for msdos ( Screen related or Window_text related ) primitives
     *
     * window_text is a window inside the "DOS screen" (or console window) 
     */ 
   /*
    static bool  __BWSCREEN    = false;          // black and white screen
    static bool  __FULLSCREEN  = true;           // window fill DOS screen
    static int   __LASTMODE    = C80;            // last mode of DOS screen
    static int   __BACKGROUND  = BLACK;          // current background color 
    static int   __FOREGROUND  = LIGHTGRAY;      // current text color 
    static SMALL_RECT __WINDBOUND={0,0,79,24};   // Absolute bounds of window 
    static COORD __SCREENCONS={80,25};           // size of DOS screen
    static char __KEYBOARD_BUFFER[2048];         // buffer of the keyboard 
    static char __SCREEN_BUFFER[2048];           // buffer of the DOS screen 
    */

/*****************************************************************************/
/* Micellaneous functions which not belong to djgpp implementation 
/*****************************************************************************/
    int  __Inside_Window_Relative (COORD c); // 1 iff c (relative) is inside 
    int  __Inside_Window_Absolute (COORD c); // 1 iff c (absolute) is inside 
    void __To_Relative (COORD * c);   // convert c from absolute to relative 
    void __To_Absolute (COORD * c);   // convert c from relative to absolute 
    void __Scroll_Up(); // scroll up the contents of current windows 
     
    void _pokech(char ch);         // as putch() but the cursor is unchanged
    void _fullscreenwindow(void);  // window(1,1,__SCREENCONS.X,__SCREENCONS.Y)
    int  _resize_screen (short int col, short int row);
                     //  Resize the console screen with col by row characters.
    void waitkeypressed ();
        // Wait for the user to press one key and discard buffered character(s)
    int getxkey ();
        // Waits for the user to press one key, then returns this extended code.  
        // The files keys.h and keys-fr.h have symbolic names for all keys.

    #ifdef __cplusplus
    }
    #endif
/***************** end of new conio-bis.h ***************/ 
#include <conio-bis.c>

#endif /* _CONIO_AL_ */
