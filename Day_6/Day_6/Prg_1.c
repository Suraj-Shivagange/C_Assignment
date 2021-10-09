
#include "Prg_1.h"

#include <stdio.h>
#include <string.h>

STUDENTS student_details( char name[],int age, int roll_number, int marks  )
{

    STUDENTS student_1;
    
    strcpy(student_1.name, name);
    
    student_1.age = age;
    
    student_1.roll_number = roll_number;
    
    student_1.marks = marks;
    
    return student_1;
}
