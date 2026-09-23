#include <stdio.h>
int main()
{

    int i = 9;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (i = 8; i >= 0; --i)
    {

        printf("reverce the array=%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}
