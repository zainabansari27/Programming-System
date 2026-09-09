#include<stdio.h>
int main(){
    int num , product = 1;
    
    printf("Enter number = ");
    scanf("%d", &num);

    if(num < 0){
      printf("The given number is negative.\n");
      num = -num;
      printf("Absolute value of given number is = %d\n", num);
    } 

    while(num > 0){
        int rem = num % 10;
        product =product * rem;
        num = num / 10;
    }

    printf("Product of digits = %d", product);
    
}