#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i;
    for (i = 8; i >= 0; i--)
    {
        printf("reverce no=%d\n", arr[i]);
    }

    return 0;
}
