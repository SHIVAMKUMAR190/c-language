#include<stdio.h>
int main(){
    int a;
    int b;
    int temp;
    printf("enter a=");
    scanf("%d",&a);

    printf("enter b=");
    scanf("%d",&b);

   
    temp=a;
    a=b;
    b=temp;
    

    printf("a=%d\n,b=%d\n",a,b);
    
    return 0;
}
