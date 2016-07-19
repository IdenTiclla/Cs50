#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main (void)
{
 string name =GetString();
 int length=strlen(name);
 int i=0;
 
 while(i<length)
 {
    
    if (i==0 && isalpha(name[i])){
      printf("%c",toupper (name[i]));
    }
    
    
    if (isalpha(name[i]) && name[i-1]==' ')
    {
     printf("%c",toupper(name[i]));
     
    }
    
    i++;
 }
 printf("\n");
 

}