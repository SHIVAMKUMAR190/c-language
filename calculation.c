#include <stdio.h>

int main()
{

    int choice;
    printf("Enter your choice:\n");
    printf("1. Area of Rectangle\n");
    printf("2. Multiplication of 2 numbers\n");
    printf("3. Check Even or Odd\n");
    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        // Rectangle ka area
        float length, breadth;
        printf("Enter length and breadth: ");
        scanf("%f %f", &length, &breadth);
        printf("Area of Rectangle = %.2f\n", length * breadth);
    }

    else if (choice == 2)
    {
        // 2 number ka multiplication
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Multiplication = %d\n", a * b);
    }

    else if (choice == 3)
    {
        // Even ya Odd check karna
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("%d is Even\n", num);
        }
        else
        {
            printf("%d is Odd\n", num);
        }
    }

    else
    {
        // Galat choice pe ye chalega
        printf("Output not available\n");
    }

    return 0;
}
