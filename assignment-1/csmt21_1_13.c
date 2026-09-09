/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Validation of Input and output of different data types.
 Problem No = 13
 Date = 09 sep 2026
*/
#include <stdio.h>
int main()
{
    int num;
    float value;
    char ch;
    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1)
        printf("Valid integer input\n");
 else
        printf("Invalid integer input\n");
    printf("Enter a float: ");
    if (scanf("%f", &value) == 1)
     printf("Valid float input\n");
else
     printf("Invalid float input\n");
    printf("Enter a character: ");
 if (scanf(" %c", &ch) == 1)
    printf("Valid character input\n");
    else
        printf("Invalid character input\n");
    return 0;
}