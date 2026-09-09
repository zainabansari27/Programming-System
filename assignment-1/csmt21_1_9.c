/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Perform all operations on two integers and two float values.
 Problem No = 09
 Date = 09 sep 2026
*/

#include <stdio.h>
int main()
{
    int a, b;
    float x, y;
    char ch;

    printf("Enter two integers= ");
    scanf("%d%d", &a, &b);
    printf("Enter two float values= ");
    scanf("%f%f", &x, &y);

    printf("Enter a character= ");
    scanf("%c", &ch);

    printf("\nInteger Operators=\n");
    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    printf("a/b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("\nFloat Operators=\n");
    printf("x+y = %f\n", x + y);
    printf("x-y = %f\n", x - y);
    printf("x*y = %f\n", x * y);
    printf("x/y = %f\n", x / y);


    return 0;
}