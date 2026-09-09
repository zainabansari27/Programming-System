/*
    Name = Zainab Ansari
    Roll No = MT-26-R-CE-18
    Assignment No = 1 
    Title = Check Triangle Type
    Problem No = 20
    Date = 09 sep 2026
*/
//
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three sides of triangle= ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b <= c || a+c <= b || b+c <= a)
    {
        printf("It is not a valid triangle\n");
    }  else if (a == b && b == c)
    {
        printf("Equilateral triangle\n");
    } else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle\n");
    } else{
        printf("Scalene triangle\n");
    }
    return 0;
}