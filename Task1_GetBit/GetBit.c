//
// Created by petry on 22.10.2023.
//

#include "GetBit.h"

U8 GetBit(U32 inputNum, U8 pos, U8* ans) {
    if(pos > 31U || ans == 0){
        return 1U;
    }
    *ans = (inputNum & (1U<<pos))>>pos;
    return 0U;
}