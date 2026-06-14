#include<stdio.h>

float celsius(float a);
float celsius(float a){
    printf("to find the fahrenheit=%f\n",(1.8*a)+32);
    
    
}

int main(){
    float a=45;
    float b=78;
   
    celsius(a);
    celsius(b);
    return 0;
}
