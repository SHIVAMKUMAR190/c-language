#include <stdio.h>
//area 0f triangle
int main()
{
    float base;
    float height;
    float area;

    printf("base of triangle:");
    scanf("%f",&base);

    printf("height of triangle: ");
    scanf("%f",&height);



    area = 0.5* base* height;

    printf("The area of the triangle is: %f\n", area);

    return 0;
}