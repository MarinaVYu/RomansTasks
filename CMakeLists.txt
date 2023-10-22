cmake_minimum_required(VERSION 3.16)
project(RomansTasks C)

set(CMAKE_C_STANDARD 11)

include_directories(
        ./
        AdditionalTask
        Task1_GetBit
        Task2_SetBit
        Task3_GetBitQty
        Task4_ReverseBits
        Task5_CatBytesToNum
        Task6_SplitNumToArray
)

add_executable(RomansTasks main.c Task1_GetBit/GetBit.c Task1_GetBit/GetBit.h Task2_SetBit/SetBit.c Task2_SetBit/SetBit.h Task3_GetBitQty/GetBitQty.c Task3_GetBitQty/GetBitQty.h Task4_ReverseBits/ReverseBits.c Task4_ReverseBits/ReverseBits.h Task5_CatBytesToNum/CatBytesToNum.c Task5_CatBytesToNum/CatBytesToNum.h Task6_SplitNumToArray/SplitNumToArray.c Task6_SplitNumToArray/SplitNumToArray.h typedefs.h AdditionalTask/StudentStructure.c AdditionalTask/StudentStructure.h)