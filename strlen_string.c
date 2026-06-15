#include<stdio.h>
int main(){
    char i;
    char str[]={'1','4','9','2','7','4','\0'};
    int count=0;
    
    for ( i = 0; str[i]!='\0'; i++)
    {
        printf("total char=%c\n",str[i]);
        count++;
    }
    printf("total no=%d\n",count);
    printf("\n");
    return 0;


}