/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Check Leap Year
 Problem No = 18
 Date = 09 sep 2026
*/
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year= ");
    scanf("%d", &year);
    if ((year%400 == 0) ||  (year%4 == 0 && year%100 != 0))
    {
        printf("%d is a leap year\n", year);
    } else {   
          printf("%d is not a leap year\n", year);
    }
    return 0;
}