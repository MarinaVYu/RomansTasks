#include <stdio.h>

#include "StudentStructure.h"
#include "GetBit.h"
#include "SetBit.h"
#include "GetBitQty.h"
#include "ReverseBits.h"
#include "CatBytesToNum.h"
#include "SplitNumToArray.h"


U8 array_1[4];

int main() {
    printf("-----------Task 1-----------\n");
    U8 ans;
    U8 error_code = GetBit(0x800U, 11U, &ans);
    printf("error_code: %d, ans: %d\n", error_code, ans);

    printf("\n-----------Task 2-----------\n");
    U32 test = 0xFFFFU;
    error_code = SetBit(&test, 0U, 7U);
    printf("error_code: %d, test: %X\n", error_code, test);

    printf("\n-----------Task 3-----------\n");
    U32 inputNum1 = 0x11223344U;
    printf("bit_qty: %d\n", GetBitQty(inputNum1));

    printf("\n-----------Task 4-----------\n");
    printf("reversed num: %X\n", ReverseBits(0x22222222U));

    printf("\n-----------Task 5-----------\n");
    printf("cat result: %X\n", CatBytesToNum(0x10, 0x2, 0x3, 0x4));

    printf("\n-----------Task 6-----------\n");
    SplitNumToArray(inputNum1,array_1);
    for(int i = 0; i<4; i++){
        printf("%x\n", array_1[i]);
    }

    return 0;
};