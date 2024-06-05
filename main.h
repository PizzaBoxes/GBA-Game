#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/
typedef struct pengu {
    int row;
    int oldRow;
    int col;
    int oldCol;
    int height;
    int width;
    int score;
} Pengu;

typedef struct frend {
    int row;
    int col;
    int height;
    int width;
    int points;
    int collected;
} Frend;

//void buttonUpdate(void);
//void movement(void);

#define MOVEINC 1

#endif
