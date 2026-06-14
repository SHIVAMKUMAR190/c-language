#include<stdio.h>
int main(){
    int n;
    int count=0;
    
    printf("enter no:");
    scanf("%d",&n);

    for ( int i = 1; i <=n ; i++)
    {
        if ( n%i==0 )
        {
            
            count++;
        
        }
    }
         if(count==2)
         {
            printf("these are prime no:\n");
         }
         else
       {

            printf("these are not prime no:\n");
        }
        
        printf("\n");

       
        
    return 0;
}