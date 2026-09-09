#include<stdio.h>
int main(){
    int num,rem ,sum;
    int evenProduct = 1;
    int oddProduct = 1;
    printf("Enter 4 digit number = ");
    scanf("%d", &num);
    
    for(int i=0; i<4 && num>0; i++){
        rem = num % 10;
        if(i==0 || i==2){
            evenProduct *= rem;
        } else {
            oddProduct *= rem;
        }
        num = num / 10;
    }
    sum = evenProduct + oddProduct;
    printf("Sum of product of even position digits and odd position digits = %d", sum); 
}