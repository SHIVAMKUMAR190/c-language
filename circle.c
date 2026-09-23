#include <stdio.h>
int main()
{
    int radius;
    printf("enter radius");
    scanf("%d", &radius);
    // area of circle = 3.14*radius*radius
    printf("area of circle %f", 3.14 * radius * radius);
    return 0;
}