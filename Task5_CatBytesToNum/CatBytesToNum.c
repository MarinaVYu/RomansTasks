//
// Created by petry on 22.10.2023.
//

#include "CatBytesToNum.h"

#define VAR_NUM     (1U)

#if (VAR_NUM == 1U)
union {
    U32 res;
    struct{
        U8 d;
        U8 c;
        U8 b;
        U8 a;
    }piece;
}st;
#endif


U32 CatBytesToNum(U8 a, U8 b, U8 c, U8 d) {
#if (VAR_NUM == 1U)
    st.piece.a = a;
    st.piece.b = b;
    st.piece.c = c;
    st.piece.d = d;
    return st.res;

#else

    U32 res = (a<<24U | b<<16U|c<<8U|d);
    return res;
#endif
}
