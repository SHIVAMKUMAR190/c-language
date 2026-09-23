#include <stdio.h>
int main()
{
    // int length=23;
    // int breadth=67;
    int length;
    int breadth;

    printf("enter length");
    scanf("%d", &length);

    printf("enter breadth");
    scanf("%d", &breadth);

    printf("perimeter of rectangle is %d", 2 * (length + breadth));

    return 0;
}