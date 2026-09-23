#include <stdio.h>
int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 7)
    {
        sum = sum + i;
        i++;
        printf("sum of first 10 natural no:%d\n", sum);
    }

    return 0;
}
