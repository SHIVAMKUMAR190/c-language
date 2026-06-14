#include<stdio.h>
int main()
/*
{
    int arr[10];
    int i=5;
    for ( i = 0; i < 10; i++)
    {

    arr[i]=(i+1)*5;
    printf("print the table=%d*%d=%d\n",5,i+1,arr[i]);
    }
    printf("\n");
    return 0;
}*/
{
    int arr[10];
    int i=0;
    int a;
    printf("enter the number");
    scanf("%d",&a);
    for ( i = 0; i < 10; i++)
    {

    arr[i]=(i+1)*a;
    printf("print the table=%d*%d=%d\n",a,i+1,arr[i]);
    }
    printf("\n");

    return 0;
}
