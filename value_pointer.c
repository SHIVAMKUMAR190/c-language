#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int **r = q;

    printf("value of *q=%d", **r);
    return 0;
}
