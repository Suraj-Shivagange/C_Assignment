
#include "Prg_10.h"

#include <stdio.h>

int date_format(int day, int month, int year)
{
    printf("\n");
    
    printf("Enter Day : " );
    scanf(" %d",&day);
    printf("\n");
    
    printf("Input Month No : ");
    scanf("%d",&month);
    
    printf("\n");
    
    printf("Enter Year : ");
    scanf("%d",&year);
       
    
    switch(day)
       {
        case 1:
               printf("%dst\t",day);
               break;
        case 2:
               printf("%dnd\t ",day);
               break;
        case 3:
               printf("%drd\t",day);
               break;
        case 4:
               printf("%dth\t",day);
               break;
        case 5:
                printf("%dth\t",day);
                break;
        case 6:
                printf("%dth\t",day);
                break;
        case 7:
               printf("%dth\t",day);
               break;
        case 8:
               printf("%dth\t",day);
               break;
        case 9:
               printf("%dth\t",day);
               break;
        case 10:
               printf("%dth\t",day);
               break;
        case 11:
               printf("%dth\t",day);
               break;
        case 12:
               printf("%dth\t",day);
               break;
        case 13:
               printf("%dth\t",day);
               break;
        case 14:
                printf("%dth\t",day);
                break;
        case 15:
                printf("%dth\t",day);
                break;
        case 16:
                printf("%dth\t",day);
                break;
        case 17:
                printf("%dth\t",day);
                break;
        case 18:
                printf("%dth\t",day);
                break;
        case 19:
                printf("%dth\t",day);
                break;
        case 20:
                printf("%dth\t",day);
                break;
        case 21:
                printf("%dst\t",day);
                break;
        case 22:
                printf("%dnd\t",day);
                break;
        case 23:
                printf("%drd\t",day);
                break;
        case 24:
                printf("%dth\t",day);
                break;
        case 25:
                printf("%dth\t",day);
                break;
        case 26:
                printf("%dth\t",day);
                break;
        case 27:
                printf("%dth\t",day);
                break;
        case 28:
                printf("%dth\t",day);
                break;
        case 29:
                printf("%dth\t",day);
                break;
        case 30:
                printf("%dth\t",day);
                break;
        case 31:
               printf("%dth\t",day);
               break;
               
        default:
               printf("invalid date number. \nPlease try again ....\n");
               break;
          }
    
    
    switch(month)
       {
        case 1:
               printf("January\t");
               break;
        case 2:
               printf("February\t");
               break;
        case 3:
               printf("March\t");
               break;
        case 4:
               printf("April\t");
               break;
        case 5:
               printf("May\t");
               break;
        case 6:
               printf("June\t");
               break;
        case 7:
               printf("July\t");
               break;
        case 8:
               printf("August\t");
               break;
        case 9:
               printf("September\t");
               break;
        case 10:
               printf("October\t");
               break;
        case 11:
               printf("November\t");
               break;
        case 12:
               printf("December\t");
               break;
        default:
               printf("invalid Month number. \nPlease try again ....\n");
               break;
          }
    
    printf("%d\t",year);
    
    printf("\n");
    
    return 0;
}
