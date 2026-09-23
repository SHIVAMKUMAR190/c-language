#include <stdio.h>
void score(int *ptr);
void score(int *ptr)
{
    printf("adress of a=%p", ptr);
}
int main()
{
    int a = 47;

    score(&a);

    return 0;
}
