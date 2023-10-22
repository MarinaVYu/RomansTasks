//
// Created by petry on 22.10.2023.
//

#ifndef ROMANSTASKS_STUDENTSTRUCTURE_H
#define ROMANSTASKS_STUDENTSTRUCTURE_H

#include "typedefs.h"

typedef struct St{
    char second_name[20];
    char first_name[20];
    char father_name[20];
    int group;
    char mark[5];
} student;

void create_student_array(student* Students, U8 len);

#endif //ROMANSTASKS_STUDENTSTRUCTURE_H
