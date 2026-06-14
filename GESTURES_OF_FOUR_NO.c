#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    int d;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    printf("enter c:");
    scanf("%d",&c);

    printf("enter d:");
    scanf("%d",&d);

    if (a>=b &&a>=c&&a>=d)
    {
        printf("a is the greatest no:");
    }
     else if (b>=a &&b>=c&&b>=d)
     { printf("b is the greatest no:");
        }

     else if (c>=a &&c>=b&&c>=d)
     { printf("c is the greatest no:");
         }

         else{
            printf("d is the greatest no:");
         }
        
    
    
    
    return 0;
}
