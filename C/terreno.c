#include <stdio.h>
int main(){
    double largura,comprimento,valor,area;
    printf("digite a largura do terreno:\n");
    scanf("%lf",&largura);
    printf("digite comprimento do terreno:\n");
    scanf("%lf",&comprimento);
    printf("digite o valor do metro quadrado:\n");
    scanf("%lf",&valor);
    area=largura*comprimento;
    printf("area do terreno = %.2lf\n",area);
    printf("preco do terreno = %.2lf\n",area*valor);
    return 0;
}
