#include "Prg_1.h"

#include <stdio.h>

int 

int i;
   printf("Enter information of students:\n");

   // storing information
   for (i = 0; i < 5; ++i) {
       s[i].roll = i + 1;
       printf("\nFor roll number%d,\n", s[i].roll);
       printf("Enter first name: ");
       scanf("%s", s[i].firstName);
       printf("Enter marks: ");
       scanf("%f", &s[i].marks);
   }
   printf("Displaying Information:\n\n");

   // displaying information
   for (i = 0; i < 5; ++i) {
       printf("\nRoll number: %d\n", i + 1);
       printf("First name: ");
       puts(s[i].firstName);
       printf("Marks: %.1f", s[i].marks);
       printf("\n");
   }
   return 0;
