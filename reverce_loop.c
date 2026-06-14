#include<stdio.h>
int main(){
    int i=10;
    int n;
    printf("enter n:");
    scanf("%d",&n);

    do
    {
        printf("reverse:%d\n",n*i);
        --i;
    } while (i>=1);
    
    return 0;
}
