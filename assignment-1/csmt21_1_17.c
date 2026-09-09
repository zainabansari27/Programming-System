/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = branching statements using if else.
 Problem No = 17
 Date = 09 sep 2026
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number= ");
    scanf("%d", &n);
    if (n>0) {
        printf("1. Number is positive\n");
    }
    else {
         printf("1. Number is not positive\n");
    }
        
    if (n<0) {
        printf("2. Number is negative\n");
    }
    else {
        printf("2. Number is not negative\n");
    }
    if (n==0){
        printf("3. Number is zero\n");
    }
    else{
        printf("3. Number is not zero\n");
    }
    if (n%2 == 0){
        printf("4. Number is even\n");
    }
    else {
        printf("4. Number is odd\n");
    }
    if (n>10){
        printf("5. Number is greater than 10\n");
    }
    else{
        printf("5. Number is not greater than 10\n");
    }
    if (n<10){
        printf("6. Number is less than 10\n");
    }
    else{
        printf("6. Number is not less than 10\n");
    }
    if (n%5 == 0){
        printf("7. Number is divisible by 5\n");
    }
    else{
        printf("7. Number is not divisible by 5\n");
    }
    if (n%3 == 0){
        printf("8. Number is divisible by 3\n");
    }
    else {
        printf("8. Number is not divisible by 3\n");
    }
    if (n>=18){
        printf("9. Number is greater than or equal to 18\n");
    }
    else {
        printf("9. Number is less than 18\n");
    }
    if (n<=100) {
        printf("10. Number is less than or equal to 100\n");
    }
    else{
        printf("10. Number is greater than 100\n");
    }
    return 0;
}