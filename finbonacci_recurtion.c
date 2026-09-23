#include <stdio.h>
int fiboonaci(int n);
int fiboonaci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    return fiboonaci(n - 1) + fiboonaci(n - 2);
}
int main()
{
    int n = 6;
    /* for (i = 0; i <20; i++)
     {
        printf("to calculate the n th element of fiboonaci=%d\n",i,fiboonaci(i));
     }*/

    printf("to calculate the n th element of fiboonaci=%d is %d", n, fiboonaci(n));
    return 0;
}
