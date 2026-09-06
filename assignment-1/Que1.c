#include<stdio.h>
int main(){
    int a,b;
    float c,d;

    printf("Enter first integer:" );
    scanf("%d", &a);
    printf("Enter second integer:" );
    scanf("%d", &b);

    printf("Enter first float:" );
    scanf("%f", &c);    
    printf("Enter second float:" );
    scanf("%f", &d);

    printf("First integer: %d\n", a);
    printf("Second integer: %d\n", b);
    printf("First float: %f\n", c);
    printf("Second float: %f\n", d);
}