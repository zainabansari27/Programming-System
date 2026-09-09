/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Enter and display your full name.
 Problem No = 12
 Date = 09 sep 2026
*/

#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Welcome %s to SGSITS, Indore", name);
    return 0;
}