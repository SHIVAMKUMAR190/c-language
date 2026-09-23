#include <stdio.h>
int main()
{
    int a = 45;
    int b = 34;
    if (a > b)
    {
        printf("a is the greatest no");
    }
    else if (b > a)
    {
        printf("b is the greatest no");
    }
    else
    {
        printf("invalid operator");
    }

    return 0;
}