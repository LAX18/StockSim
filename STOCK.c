////////////////////////////////////////
// { StockSim } { 1.o CE }
// Author: The REAL LAX18
// License: MIT
// Description:
////////////////////////////////////////

/* Keep these headers */
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <tice.h>

/* Standard headers */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Other available headers: stdarg.h, setjmp.h, assert.h, ctype.h, float.h, iso646.h, limits.h, errno.h */
    /* Setup Values: */
    #define TSTOCKS 28
/* Put function prototypes here */
void printText(const char *text, uint8_t xpos, uint8_t ypos);
void printTextSmall(const char *text, uint8_t xpos, uint8_t ypos);


/* Put all your code here */
void main(void)
{

    const char *STOCKS[TSTOCKS+1]; /* String Array */
    int PRICES[TSTOCKS+1];
    int OWN[TSTOCKS+1];
    int CHANGE[TSTOCKS+1];
    int CHG[TSTOCKS+1];
    int PCHG[TSTOCKS+1];
    int HIS[TSTOCKS+1][6];
    int PPUR[6][5];
    int MONTH = 0;
    int WORTH = 0;
    int WALLET = 0;
    const char * COPYRIGHT="(C) 2018 Nicholas Pease";
    const char * VERSION="1.0 BETA";
    // Add Stock Names

    /* Clear the Graphscreen */
    os_ClrHome();
    /* Setup*/
setup:

    /* Define */
    #define BOOL char
    #define FALSE 0
    #define TRUE 1




    /* Display a few strings */
   /* printText(HelloWorld, 0, 0);
    printText(Welcome, 0, 1); */

    /* Wait for a key press */
    while (!os_GetCSC());
}

/* Draw text on the homescreen at the given X/Y location */
void printText(const char *text, uint8_t xpos, uint8_t ypos)
{
    os_SetCursorPos(ypos, xpos);
    os_PutStrFull(text);
}
