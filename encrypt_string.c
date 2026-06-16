#include<stdio.h>
#include<string.h>
int main(){
    char i;
    char str[]="shivam is";
    int encrypt;
        
    
    for ( i = 0; str[i]!='\0'; i++)
    {
        str[i] =str[i]+1;
       // printf("ascii=%s\n",encrypt);
        
       
    }
    printf("ascii=%s\n",str);
    printf("\n");
    return 0;


}