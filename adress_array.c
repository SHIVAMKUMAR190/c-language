#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = a;
    printf("the value of a is =%u\n adress of a is=%d\n", *(ptr + 3), &a[5]);
    return 0;
}
