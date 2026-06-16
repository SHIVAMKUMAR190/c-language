#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,1,4};
    int count=0;
    for (int i = 0;arr[i]!=i; i++)
    {
        count ++;
    }
    printf("total element=%d",count);

   

    return 0;
}
