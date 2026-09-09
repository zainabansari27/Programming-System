/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Calculation of Arithmetic, Geometric, and Harmonic Means.
 Problem No = 14
 Date = 09 sep 2026
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    float am, gm, hm;

    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    am = (a+b)/2.0;
    gm = sqrt(a*b);
    hm = (2.0*a*b)/(a+b);
    printf("Arithmetic Mean = %f\n", am);
    printf("Geometric Mean = %f\n", gm);
    printf("Harmonic Mean = %f\n", hm);

    return 0;
}