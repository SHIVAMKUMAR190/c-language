#include <stdio.h>
int main()
{
    int n;
    int i = 1;
    printf("enter n=");
    scanf("%d", &n);

    while (i <= 10)
    {

        printf("table =%d+%d=%d\n", i, n, i + n);
        i++;
    }

    return 0;
}
