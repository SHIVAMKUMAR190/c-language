#include <stdio.h>
int main()
{

    float radius;

    printf("enter radius=");
    scanf("%f", &radius);

    printf("find the diameter=%f\n", 2 * radius);
    printf("find the area of circle=%f\n", 2 * 3.14 * radius);
    return 0;
}