//
// Created by petry on 22.10.2023.
//

#include "SplitNumToArray.h"

union {
    U32 res;
    struct{
        U8 d;
        U8 c;
        U8 b;
        U8 a;
    }piece;
}st;

U8 SplitNumToArray(U32 inputNum, U8* array) {
    if (array == 0){
        return 1;
    }
    st.res = inputNum;
    array[0] = st.piece.a;
    array[1] = st.piece.b;
    array[2] = st.piece.c;
    array[3] = st.piece.d;
    return 0;
}
