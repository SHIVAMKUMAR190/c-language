#include <stdio.h>

int main() {
    int a, b, sum;
    printf("Enter a Number");
    scanf("%d", &a);
    printf("Enter second Number");
    scanf("%d" ,&b);

    sum = a - b;
    printf("The sum is %d", sum);

    return 0;
}