#include <stdio.h>

int main()
{
    int num, temp, reverse, rem, sum;
    for (num = 1; num <= 1000; num++)
    {
        temp = num;
        reverse = 0;
        sum = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            reverse = reverse*10 + rem;
            temp = temp / 10;
        }

        if (num - reverse == sum)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}

