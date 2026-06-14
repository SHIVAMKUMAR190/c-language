#include<stdio.h>
/* int main(){
  int a[3][10];
   int arr[]={2,7,9};
   
   
   for (int i = 0; i <=2; i++)
   {
    int j=0;
    while (j<10)
    {
        a[i][j]=arr[i]*(j+1);
    printf("table=(%dx%d)\n=%d\n",arr[i],j+1,a[i][j]);
        j++;
        
       
       
        
    }
   
    
   }
   printf("\n");
    return 0;
}
*/
int main(){
  int a[3][10];
  int n1,n2,n3;
  printf("enter the three no");
  scanf("%d %d %d",&n1 , &n2, &n3);
   int arr[]={n1,n2,n3};
   
   
   for (int i = 0; i <=2; i++)
   {
    int j=0;
    while (j<10)
    {
        a[i][j]=arr[i]*(j+1);
    printf("table=(%dx%d)\n=%d\n",arr[i],j+1,a[i][j]);
        j++;
     }
   }
   printf("\n");
    return 0;
}
