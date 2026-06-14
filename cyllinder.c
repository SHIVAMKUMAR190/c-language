#include<stdio.h>
int main(){
    int radius;
    int height;
    printf("enter radius");
    scanf("%d" , & radius);

    printf("enter height");
    scanf("%d" , & height);

    
    // volume of cyllinder =3.14*radius*radius*height
    // area of circle =3.14*radius*radius

    printf("volume of cyllinder%f\n",3.14*radius*radius*height);
    printf("area of circle%f\n",3.14*radius*radius);


    return 0;
}