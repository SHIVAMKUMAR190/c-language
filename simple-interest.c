#include<stdio.h>
int main(){
    float principal;
    float rate;
    float time;
    
    printf("enter principal = ");
    scanf("%f", & principal);

    printf("enter rate = ");
    scanf("%f", & rate);

    printf("enter time = ");
    scanf("%f", & time);

    //simple interest=p*r*t
     printf("find the simple interest = %f",(principal*rate*time)/100);


    return 0;
}
