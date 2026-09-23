#include <stdio.h>
int main()
{

    float maths;
    float english;
    float science;
    float percentage;

    printf("enter maths marks");
    scanf("%f", &maths);

    printf("enter english marks");
    scanf("%f", &english);

    printf("enter science marks");
    scanf("%f", &science);

    printf("sum of three subject%f\n", maths + english + science);

    percentage = (maths + english + science) * 100 / 300;

    printf("find the percentage%f\n", (maths + english + science) * 100 / 300);

    if (percentage < 40)
    {
        printf("student is fail");
    }

    else
    {
        if (maths >= 33 && english >= 33 && science >= 33)
            printf("student is passed");

        else
        {
            printf("student is failed due to less marks");
        }
    }

    return 0;
}