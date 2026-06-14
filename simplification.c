#include<stdio.h>
int main() 
{
    float a;
    float b;
    float c;
    float d;
    float e;
    
    printf("first number;");
    scanf("%f",&a);

    printf("second number;");
    scanf("%f",&b);

    printf("third number;");
    scanf("%f",&c);

    printf("fourth number;");
    scanf("%f",&d);

    printf("fifth number;");
    scanf("%f",&e);

    float simplification = a * b - c * d / e;
    printf("simplification of five number:%f",simplification);
    
    return 0;

}