#include<stdio.h>
int main(){
    
    int arr[2][3][4];
    int* ptr=&arr[2][3][4];
     printf("the adress of arr[2][3][4] is=%d\n",&arr[2][3][4]);
    return 0;
}

