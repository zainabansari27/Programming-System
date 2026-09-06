#include<stdio.h>
int main(){
    int a,b;
    float c,d;

    printf("Enter two integers and two floats: " );
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("Integers are : %d and %d \nFloats are : %f and %f", a, b, c, d);
}