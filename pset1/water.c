#include<stdio.h>
#include<cs50.h>

int main (void)
{
    printf("minutes: ");
    
    
    int DuracionDelaDucha = 0;
    
    do
    {
        
        DuracionDelaDucha = GetInt();
        
        
    }while(DuracionDelaDucha<1);
    
    printf("bottles: %d\n",DuracionDelaDucha*12);
    
    
    
    
}
