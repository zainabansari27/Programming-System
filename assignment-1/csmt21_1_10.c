/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Calculate the area of a triangle.
 Problem No = 10
 Date = 09 sep 2026
*/

#include <stdio.h>
int main()
{
    int base, height;
    float area;
    printf("Enter base= ");
    scanf("%d",&base);
    printf("Enter height= ");
    scanf("%d",&height);
    area = 0.5 * base*height;
    printf("Area of triangle = %f\n", area);

    return 0;
}