#include<stdio.h>
int main(){
    char a ,b,e,f;
    double c,d,g,h;
    printf("Enter characters : " );
    scanf("%c %c", &a, &b);
    printf("Enter two double values : " );
    scanf("%lf %lf", &c, &d);
    printf("Characters are : %c and %c ", a,b);
    printf("\nDouble values are : %lf and %lf", c,d);

    printf("\nEnter two characters and two double values : " );
    scanf(" %c %c %lf %lf", &e, &f, &g, &h);
    printf("\nCharacters are : %c and %c and double values are : %lf and %lf", e,f,g,h);
}