#include <stdio.h>
int main()
{
    int e,idade[e],menores;
    double alturas[e],soma,cont;
    char nomes[e][50];
    soma=0;
    cont=0;
    printf("Quantos serão digitadas? ");
    scanf("%i",&e);
        for ( int i = 0; i < e; i++)
        {
         printf("Dados da %ia pessoa\n",i+1);
         printf("nome: ");
         fseek(stdin, 0,SEEK_END);
         gets(nomes[i]);
         printf("Idade: ");
         scanf("%i",&idade[i]);
         printf("Altura: ");
         scanf("%lf",&alturas[i]);
        }
        for ( int i = 0; i < e; i++)
        {
            soma=soma+alturas[i];
            if (idade[i]<16)
            {
                cont++;
            }   
        }
       // menores=cont*100.00/e;
        printf("\nSOMA = %.2lf\n",soma);
        printf("MEDIA = %.2lf",soma/e);
        printf("Pessoas com menos de 16 anos: %.1lf",menores);
    return 0;
}    
