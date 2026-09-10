#include<stdio.h>
int main(){
    int n, next;
    int first = 0, second = 1;
    next = first + second;

    printf("Enter n = ");
    scanf("%d", &n);

    for(int i=3; i<=n; i++){
        next = first + second;
        first = second;
        second = next;
    }

    printf("The nth Fibonacci number is = %d", next);
    
    return 0;

}