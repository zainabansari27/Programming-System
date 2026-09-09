#include<stdio.h>
int main(){
    int num; 
    printf("Enter number = ");
    scanf("%d", &num);

    if( (num%2 == 0) && (num%3 == 0) && (num%4 == 0) && (num%12 == 0)){
        printf("The given number is divisible by 2,3,4 and 12");
    } else {
        printf("The given number is not divisible by 2,3,4 and 12");
    }
}