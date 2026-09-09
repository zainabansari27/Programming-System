/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Input and output of integers and floats in a single line.
 Problem No = 02
 Date = 09 sep 2026
*/

#include<stdio.h>
int main(){
    int a,b;
    float c,d;

    printf("Enter two integers and two floats: " );
    scanf("%d%d %f%f", &a, &b, &c, &d);
    printf("Integers are = %d and %d \nFloats are = %f and %f", a, b, c, d);
}