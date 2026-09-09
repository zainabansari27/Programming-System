/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Calculate Date of Birth from Current Date and Age.
 Problem No = 19
 Date = 09 sep 2026
*/

#include <stdio.h>

int main() {

    int cDay, cMonth, cYear; 
    int aDay, aMonth, aYear; 
    int bDay, bMonth, bYear; 

    printf("Enter current date (DD MM YYYY): ");
    scanf("%d%d%d", &cDay, &cMonth, &cYear);

    printf("Enter age (Days Months Years): ");
    scanf("%d%d%d", &aDay, &aMonth, &aYear);

    if (cDay<aDay) {
        cDay+=30;
        cMonth-=1;
    }
    bDay=cDay-aDay;

    if (cMonth<aMonth) {
        cMonth+=12;
        cYear-=1;
    }
    bMonth = cMonth-aMonth;

    bYear = cYear-aYear;

    printf("\n Your Date of Birth is: %02d/%02d/%d\n", bDay, bMonth, bYear);

    return 0;
}