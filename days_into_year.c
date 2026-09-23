#include <stdio.h>
int main()
{
    int days;
    int year;

    printf("enter days=");
    scanf("%d", &days);

    printf("convert days into year=%d\n,%d\n", days / 365, days % 365);
}
