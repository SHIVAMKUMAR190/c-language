#include<stdio.h>
int main(){
    float celsius;
    printf("enter celsius");
    scanf("%f", & celsius);

    //change in to celsius to fahrenheite=1.8*(celsius)+32)
    printf("change in to fahrenheite%f" , 1.8*(celsius)+32);

    return 0;

}
