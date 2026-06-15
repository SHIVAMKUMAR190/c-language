
#include<stdio.h>
void slice(char str[],int m,int n){
    int i=0;
    for ( i = 0; m<=n && str[m]!='\0'; i++)
    {
        str[i]=str[m];
       // printf("slice character=%d",m,n);
        m++;
    }
    str[i]='\0';
    
}

   int main(){
    char str[]="shivamray";
    printf("before slice character=%s\n",str);
    slice(str,1,3);
     printf("after slice character=%s\n",str);

    return 0;

}  

     





    






