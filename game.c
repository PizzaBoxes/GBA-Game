#include "main.h"
#include <stdio.h>
#include <stdlib.h>

extern Pengu pengu;

void buttonUpdate(void) {
    u32 currentButtons = BUTTONS;

    if (KEY_DOWN(BUTTON_DOWN, currentButtons)) {
        if (pengu.row >= 144) {
            pengu.row = 144;
        } else {
            pengu.row += MOVEINC;
        }
    }
    if (KEY_DOWN(BUTTON_UP, currentButtons)) {
        if (pengu.row <= 0) {
            pengu.row = 0;
        } else {
            pengu.row -= MOVEINC;
        }
    }
    if (KEY_DOWN(BUTTON_LEFT, currentButtons)) {
        if (pengu.col <= 0) {
            pengu.col = 0;
        } else {
            pengu.col -= MOVEINC;
        }
    }
    if (KEY_DOWN(BUTTON_RIGHT, currentButtons)) {
        if (pengu.col >= 224) {
            pengu.col = 224;
        } else {
            pengu.col += MOVEINC;
        }
    }
}

void movement(void) {
    drawRectDMA(pengu.row, pengu.col, pengu.width, pengu.height, LGREEN);
    buttonUpdate();

}
