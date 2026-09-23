#include <stdio.h>
int main()
{
    int days;
    int week;
    int year;

    printf("enter days=");
    scanf("%d", &days);

    printf("convert days into year=%d\n", days / 365);
    printf("total week=%d\n", days / 7);
    printf("total days=%d\n", days % 365);

    return 0;
}