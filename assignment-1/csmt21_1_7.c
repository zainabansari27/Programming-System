/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Enter and display values of different data types.
 Problem No = 07
 Date = 09 sep 2026
*/

#include <stdio.h>
int main()
{
    char ch;
    int i;
    float f;
    double d;

    printf("Enter a character= ");
    scanf(" %c", &ch);
    printf("Enter an integer= ");
    scanf("%d", &i);
    printf("Enter a float value= ");
    scanf("%f", &f);
    printf("Enter a double value= ");
    scanf("%lf", &d);

    printf("\nEntered values are=\n");

    printf("Character = %c\n", ch);
    printf("Integer = %d\n", i);
    printf("Float = %.f\n", f);
    printf("Double = %lf\n", d);

    return 0;
}