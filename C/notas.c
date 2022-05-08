#include <stdio.h>
int main(){
    double nota1,nota2,notafinal;
    printf("digite a nota 1:");
    scanf("%lf",&nota1);
    printf("digite a nota 2:");
    scanf("%lf",&nota2);
    notafinal=nota1+nota2;
    printf("Nota final = %.1lf\n",notafinal);
    if (notafinal<60.0)
    {
    printf("REPROVADO\n");
    }
    
    return 0;
}
