#include <stdio.h>
int main()
{
    int n;

    printf("enter no:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}