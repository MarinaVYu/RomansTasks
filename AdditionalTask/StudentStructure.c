//
// Created by petry on 22.10.2023.
//

#include "StudentStructure.h"
#include <stdio.h>

void create_student_array(student* Students, U8 len) {
    for(int i = 0; i<len;i++){
        printf("Input second name:");
        scanf("%s", Students[i].second_name);
        printf("Input first name:");
        scanf("%s", Students[i].first_name);
        printf("Input father name:");
        scanf("%s", Students[i].father_name);
        printf("Input group:");
        scanf("%d", &(Students[i].group));
        printf("Input mark:");
        scanf("%s", Students[i].mark);
    }

    for (int im = 0; im<len-1; im++){
        for (int jm = 0; jm<(len - im -1); jm++){
            if (Students[jm].group>Students[jm+1].group){
                student a = Students[jm];
                Students[jm] = Students[jm+1];
                Students[jm+1] = a;
            }
        }
    }
}
