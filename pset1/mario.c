#include<stdio.h>
#include<cs50.h>
void espacio(int x);
void imprimirsharp(int a);
int main (void)
{
    int altura = 0;
    
    do
    {
        printf("ingrese la altura de la torre : ");
        altura = GetInt();
        
        if (altura == 0)
        {
                return 0;
            
        }
        
    }
    while(!((altura>0) && (altura<24)));
    
    
    int espacios= altura-1;

        for (int j=2;j<=altura+1;j++)
        {
                espacio(espacios);        
                imprimirsharp(j);
                espacios--;
                printf("\n");

        }
    
}

void imprimirsharp(int a)
{
    for (int b=1;b<=a;b++)
    {
        printf("#");
    }
    
}
void espacio(int a)
{
    for (int b=1;b<=a;b++)
    {
        printf(" ");
    }
    
}
