#include <stdio.h>
int main()
{
    /*
       int age=10;
    if (age==11){
    printf("i am 11");
    }
    else{
    printf("i am not 11");
    }
*/
    int x = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        x = x + i;
    }
    printf("%d", x);
    return 0;
}
