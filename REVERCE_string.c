#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char str[]={'1','2','3','4','5','6','7' ,'8','9','\0'};
    
    

    for ( i=8; i>=0; --i)
    {
        printf("reverce string=%c\n",str[i]);
    }
    
printf("\n");
    
    return 0;

}