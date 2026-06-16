#include<stdio.h>

void my_strcpy(char target[],char name[]){
int i;
    for (  i = 0;name[i] != '\0'; i++)
    {
    target[i]=name[i];
    
    }
    
      target[i]='\0';
      printf("strcpy =%s\n  %s\n",target,name);

}




int main(){
    char name[]="shivam";
    char target[30];

    my_strcpy(target,name);

    

    return 0;

}