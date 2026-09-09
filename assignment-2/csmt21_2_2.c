#include<stdio.h>
int main(){
    int num,rem, sum = 0, product = 1;

    printf("Enter 4 digit inetegr = ");
    scanf("%d", &num);
    
    while(num>0){
       rem = num % 10;
       sum += rem;
       product *= rem;
       num/=10; 
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d", product);

}