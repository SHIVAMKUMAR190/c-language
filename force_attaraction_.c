#include <stdio.h>
float force(float m, float g);

float force(float m, float g)
{
    return m * g;
}
int main()
{
    float m = 4;
    float g = 9.8;
    printf("to find the force of attraction=%f", m * g);
    return 0;
}
