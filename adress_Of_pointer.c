#include<stdio.h>
void adress(int* ptr);
void adress(int* ptr){

 printf("value of =%d\n",*ptr);
 printf("adress of =%p\n",ptr);
 
 
 
}
int main(){

    int i=43;
    int b=78;
    int c=45;
    printf("adress of i=%p\n",&i);

    adress(&i);
    adress(&b);
    adress(&c);
    
    return 0;
}
