#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main (void)
{
    
    float cambioenfloat = 0;
    
    do
    {
        printf("Ingrese el cambio : ");
        
        cambioenfloat = GetFloat();
        
        
    }
    while( cambioenfloat <= 0);
        

    cambioenfloat = cambioenfloat*100;
    cambioenfloat = roundf(cambioenfloat);
    
    
    
    
    float quarter =0.25;
    quarter=quarter*100;
    quarter=roundf(quarter);
    float dime =0.10;
    dime=dime*100;
    dime=roundf(dime);
    
    float nickel =0.05;
    nickel=nickel*100;
    nickel=roundf(nickel);
    
    float penny =0.01;
    penny=penny*100;
    penny=roundf(penny);
    
    
    
    int contador = 0;
    
    
    
    while(cambioenfloat>=quarter)
    {
        
        cambioenfloat = cambioenfloat - quarter;
        
        contador++;
        
    }
    
    while(cambioenfloat >= dime)
    {
        
        cambioenfloat = cambioenfloat - dime;
        contador++;
        
    }
   while(cambioenfloat >=nickel)
   {
       cambioenfloat = cambioenfloat -nickel;
       contador++;
       
   }
   while(cambioenfloat >=penny)
   {
       
       cambioenfloat = cambioenfloat - penny;
       contador++;
       
   }
    printf("%d\n",contador);
    
    
    
}