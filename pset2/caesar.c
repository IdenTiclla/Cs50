#include <ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>



int main (int argc, string argv[])
{

if(argc!=2)
{
    printf("use bien el programa\n");
    return 1;
}

string texto=GetString();
char caractercifrado=' ';

int llave=atoi(argv[1]);
    for (int i=0,n=strlen(texto);i<n;i++)
    {
        if (isalpha(texto[i]))
        {
            if(isupper(texto[i]))
            {
                caractercifrado=((texto[i]-'A'+llave)%26)+'A';
                printf("%c",caractercifrado);
            }
            else
            {
                if(islower(texto[i]))
                {
                    caractercifrado=((texto[i]-'a'+llave)%26)+'a';
                    printf("%c",caractercifrado);
                }
            }
        }    
        else 
        {
            printf("%c",texto[i]);
        }
    
        
    }
    printf("\n");


}