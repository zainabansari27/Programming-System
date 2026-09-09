/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1
 Title = Understanding Type Conversion.
 Problem No = 16
 Date = 09 sep 2026
*/
#include <stdio.h>
int main()
{
    int a;
    float b;
    char ch;
    printf("Enter an integer= ");
    scanf("%d",&a);
    b = (float)a;
    printf("Integer value = %d", a);
    printf("\nInteger converted to float = %f", b);
    printf("\nEnter a character= ");
    scanf(" %c",&ch);
    a = (int)ch;
    printf("Character = %c", ch);
    printf("\nCharacter converted to integer = %d", a);

    return 0;
}