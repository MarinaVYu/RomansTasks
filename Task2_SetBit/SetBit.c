//
// Created by petry on 22.10.2023.
//

#include "SetBit.h"

union {
    U32 number;
    struct{
        U32 b0:1;
        U32 b1:1;
        U32 b2:1;
        U32 b3:1;
        U32 b4:1;
        U32 b5:1;
        U32 b6:1;
        U32 b7:1;
        U32 b8:1;
        U32 b9:1;
        U32 b10:1;
        U32 b11:1;
        U32 b12:1;
        U32 b13:1;
        U32 b14:1;
        U32 b15:1;
        U32 b16:1;
        U32 b17:1;
        U32 b18:1;
        U32 b19:1;
        U32 b20:1;
        U32 b21:1;
        U32 b22:1;
        U32 b23:1;
        U32 b24:1;
        U32 b25:1;
        U32 b26:1;
        U32 b27:1;
        U32 b28:1;
        U32 b29:1;
        U32 b30:1;
        U32 b31:1;
    }pos;
} num;


U8 SetBit(U32 *inputNum, U8 bitValue, U8 pos) {
    if(inputNum == 0 || bitValue > 1U ){
        return 1;
    }
    num.number = *inputNum;
    switch (pos) {
        case 0U:
            num.pos.b0 = bitValue;
            break;
        case 1U:
            num.pos.b1 = bitValue;
            break;
        case 2U:
            num.pos.b2 = bitValue;
            break;
        case 3U:
            num.pos.b3 = bitValue;
            break;
        case 4U:
            num.pos.b4 = bitValue;
            break;
        case 5U:
            num.pos.b5 = bitValue;
            break;
        case 6U:
            num.pos.b6 = bitValue;
            break;
        case 7U:
            num.pos.b7 = bitValue;
            break;
        case 8U:
            num.pos.b8 = bitValue;
            break;
        case 9U:
            num.pos.b9 = bitValue;
            break;
        case 10U:
            num.pos.b10 = bitValue;
            break;
        case 11U:
            num.pos.b11 = bitValue;
            break;
        case 12U:
            num.pos.b12 = bitValue;
            break;
        case 13U:
            num.pos.b13 = bitValue;
            break;
        case 14U:
            num.pos.b14 = bitValue;
            break;
        case 15U:
            num.pos.b15 = bitValue;
            break;
        case 16U:
            num.pos.b16 = bitValue;
            break;
        case 17U:
            num.pos.b17 = bitValue;
            break;
        case 18U:
            num.pos.b18 = bitValue;
            break;
        case 19U:
            num.pos.b19 = bitValue;
            break;
        case 20U:
            num.pos.b20 = bitValue;
            break;
        case 21U:
            num.pos.b21 = bitValue;
            break;
        case 22U:
            num.pos.b22 = bitValue;
            break;
        case 23U:
            num.pos.b23 = bitValue;
            break;
        case 24U:
            num.pos.b24 = bitValue;
            break;
        case 25U:
            num.pos.b25 = bitValue;
            break;
        case 26U:
            num.pos.b26 = bitValue;
            break;
        case 27U:
            num.pos.b27 = bitValue;
            break;
        case 28U:
            num.pos.b28 = bitValue;
            break;
        case 29U:
            num.pos.b29 = bitValue;
            break;
        case 30U:
            num.pos.b30 = bitValue;
            break;
        case 31U:
            num.pos.b31 = bitValue;
            break;
        default:
            return 1;
    }
    *inputNum = num.number;
    return 0;
}