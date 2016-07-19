///DECLARANDO TODAS LAS LIBRERIAS A UTILIZAR
#include <ctype.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<cs50.h>
//DECLARANDO UNA FUNCION QUE ME DIRA SI UN TEXTO PLANO ES O NO UNA PALABRA
bool Espalabra(string palabra);

int main (int argc, string argv[])
{
    ///SI LA ENTRADA NO ES DOS o SI EL ARGUMENTO NO ES UNA PALABRA
    if ((argc!=2) || (!(Espalabra(argv[1]))))
    {
       
      //SI NO CUMPLE CON LAS ESPECTATIVAS DE ENTRADA
        printf("use bien el programa tiene que ejecutar el programa seguido de una palabra\n");
        return 1;
       
    }
    //SI CUMPLE TODAS LAS ESPECTATIVAS SIGUE CON EL PROCESO DE EL PROGRAMA
    
     
    
    
 
    //PIDE UNA ENTRADA TIPO CADENA AL USUARIO
    string texto=GetString();
    int longtexto=strlen(texto);
    int ultimocaracter=strlen(argv[1])-1;
    char caractercifrado;
    int j=0;
   
   for(int i=0;i<longtexto;i++)
   {
      
      if (isalpha(texto[i]))
      {
         if(isupper(texto[i]))
         {
            if (isupper(argv[1][j]))
            {
               
               caractercifrado=(texto[i]-65+argv[1][j]-65)%26;
               caractercifrado=caractercifrado+65;
               printf("%c",caractercifrado);
               if(j==ultimocaracter)
               {
                  j=0;
               }
               else
               {
                  j++;
               }
            }
            else
            {
               if(islower(argv[1][j]))
               {
               
                  caractercifrado=(texto[i]-65+argv[1][j]-97)%26;
                  caractercifrado=caractercifrado+65;
                  printf("%c",caractercifrado);
                  if(j==ultimocaracter)
                  {
                     j=0;
                  }
                  else
                  {
                     j++;
                  }
               }
            }
            
            
            
         }
         //si el caracter iesimo de la palabra es minuscula
         if(islower(texto[i]))
         {
            //si el caracter iesimo de la llave es mayuscula
            if (isupper(argv[1][j]))
            {
               
               caractercifrado=(texto[i]-97+argv[1][j]-65)%26;
               caractercifrado=caractercifrado+97;
               printf("%c",caractercifrado);
               if(j==ultimocaracter)
               {
                  j=0;
               }
               else
               {
                  j++;
               }
            }
            else
            {
               if(islower(argv[1][j]))
               {
               
                  caractercifrado=(texto[i]-97+argv[1][j]-97)%26;
                  caractercifrado=caractercifrado+97;
                  printf("%c",caractercifrado);
                  if(j==ultimocaracter)
                  {
                     j=0;
                  }
                  else
                  {
                     j++;
                  }
               }
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

///CODIGO DE LA FUNCION  Espalabra  RECIBE UN DATO TIPO STRING Y DEVUELE UN BOOLEANO SI ES CIERTO TRUE, SI ES FALSO FALSE
bool Espalabra(string palabra)
{
    int cont_no_pal=0;
    bool espalabra;
    int longpalabra= strlen(palabra);
    
    for (int i=0;i<longpalabra;i++)
    {
        if(!(isalpha(palabra[i])))
        {
            cont_no_pal=cont_no_pal+1;
        }
    }
    if(cont_no_pal>0)
    {
        espalabra=false;
    }
    else
    {
        espalabra=true;
    }
    
    return espalabra;
}