#include <stdio.h>
int main()
{
    int i = 1;
    int n;

    printf("enter no:");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("repeat the no =%d\n", n);
        i++;
    }

    return 0;
}