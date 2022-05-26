#include <stdio.h>
int main()
{
    int entrada,vet[entrada],i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%i",&entrada);
    if (entrada<=10&&entrada>0)
    {
        for ( i = 0; i <= entrada-1; i++)
        {
             printf("Digite um numero: ");
             scanf("%i",&vet[i]);
        }
         printf("\nNumeros negativos\n");
        for ( i = 0; i <= entrada-1; i++)
        {
            if (vet[i]<0)
            {
                 printf("%i\n",vet[i]);
            }
            
        }
        
    }
    else{
         printf("digitou um numero de entrada invalido, apenas numeros de 0 ate 10\n");
    }
    return 0;
}    
