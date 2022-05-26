#include <stdio.h>
int main()
{
    int e;
    double vet[e],soma;
    soma=0;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%i",&e);
        for ( int i = 0; i <= e-1; i++)
        {
         printf("Digite um numero: ");
         scanf("%lf",&vet[i]);
        }
        printf("valores = ");
        for ( int i = 0; i <= e-1; i++)
        {
            soma=soma+vet[i];
            printf("%.1lf ",vet[i]);
        }
        printf("\nSOMA = %.2lf\n",soma);
        printf("MEDIA = %.2lf",soma/e);
    return 0;
}    
