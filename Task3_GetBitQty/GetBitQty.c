//
// Created by petry on 22.10.2023.
//

#include "GetBitQty.h"

U8 GetBitQty(U32 inputNum) {
    U8 num_r = 0;
    for(U8 pos = 0U; pos < 32U; pos++){
        if (inputNum & (1U<<pos)){
            num_r++;
        }
    }
    return num_r;
}