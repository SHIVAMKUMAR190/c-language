#include<stdio.h>
int main(){
    
    char ch;
    printf("enter ch:");
    scanf("%C",& ch);

    if (ch>='a' && ch<='z')
    {printf("lower case");
        
    }
    else if (ch>='A' && ch<='Z')
    {
       printf("upper case"); /* code */
    }
    else{
        printf("not an alphabate");
    }
    
    
    
    return 0;
}