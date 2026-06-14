#include<stdio.h>
int main(){
    int i;
    int count=0;
    int arr[]={7,-8,8,9,-4,-8,-2,7,-6};
    for (  i = 0; i < 9 ; i++)
    {
        if (arr[i]>0)
        {
            count++;
            printf("positive number=%d\n",arr[i]);
            
        }
        
       
    }
    printf("count the positive no=%d\n",count);
    printf("\n");

    return 0;
}
