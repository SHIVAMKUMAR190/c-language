#include<stdio.h>
int value(int ptr);
int value(int ptr){
    
    ptr=(ptr)*10;
    printf("calculate of i=%d\n",ptr);

    return 0;
}

int main(){
    int i=5;
    
    printf("value of i=%d\n",i);

    value(i);

    printf("value of i=%d\n",i);

    return 0;
}
