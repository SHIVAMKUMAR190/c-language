#include <stdio.h>
int main()
{
    int arr[] = {6, 9, 7, 8, 4, 9};
    int max = arr[0];
    for (int i = 0; i < 6; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("greater no is=%d\n", max);

    return 0;
}