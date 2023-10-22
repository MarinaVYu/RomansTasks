//
// Created by petry on 22.10.2023.
//

#include "ReverseBits.h"

#define VAR_NUM     (2U)

U32 ReverseBits(U32 inputNum) {
#if (VAR_NUM == 1U)
    U32 res = 0;
    for (U8 i = 0; i<32; i++){
       U32 num_1 = (inputNum & (1U<<i))>>i;
       res = res | (num_1 << (31U-i));
       }
    return res;

#else

    U32 MSBNum =0;
    U8 i =0;
    for (i; i < 16U; i++){
        MSBNum = MSBNum | ((inputNum & (1U<<i))<<(31U-(2U*i)));
    }
    for (i; i < 32U; i++){
        MSBNum = MSBNum | ((inputNum & (1U<<i))>>((2U*i) - 31U));
    }
    return MSBNum;
#endif
}