/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = print real numbers with only 3 digits after decimal point.
 Problem No = 04
 Date = 09 sep 2026
*/

#include <stdio.h>
int main()
{
    int a, b;
    float x, y;

    printf("Enter two integers and two real numbers: ");
    scanf("%d%d %f%f", &a, &b, &x, &y);

    printf("Integer 1 = %d\n", a);
    printf("Integer 2 = %d\n", b);
    printf("Real number 1 = %.3f\n", x);
    printf("Real number 2 = %.3f\n", y);

    return 0;
}