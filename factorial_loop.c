#include <stdio.h>
int main()
{
    int n;

    int factorial = 1;

    printf("enter n=");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {

        if (i != 1)
        {
            printf("%d*", i);
        }

        else
        {
            printf("%d\n", i);
        }
        factorial = factorial * i;
    }
    printf("=%d\n", factorial);

    return 0;
}
