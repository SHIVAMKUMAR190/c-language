#include<stdio.h>
int main(){
    
  float f=3.14;
  float* ptr=&f;
  *ptr= 5.5;

  printf("value of f is =%f",f);
    return 0;
}
