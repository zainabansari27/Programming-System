/*
 Name = Zainab Ansari
 Roll No = MT-26-R-CE-18
 Assignment No = 1 
 Title = Understanding the Range of Data Types.
 Problem No = 15
 Date = 09 sep 2026
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("char = %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char = %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char = 0 to %u\n", UCHAR_MAX);
    printf("short int = %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short int = 0 to %u\n", USHRT_MAX);
    printf("int = %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int = 0 to %u\n", UINT_MAX);
    printf("long int = %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int = 0 to %lu\n", ULONG_MAX);
    printf("long long int = %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int = 0 to %llu\n",
           ULLONG_MAX);
    printf("float = %e to %e\n", -FLT_MAX, FLT_MAX);
    printf("double = %e to %e\n", -DBL_MAX, DBL_MAX);

    return 0;
}