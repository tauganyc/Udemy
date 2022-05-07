#include <stdio.h>
int main(){
    int entrada,cont,i;
    double media;
    printf("Digite as idades:\n");
    scanf("%i",&entrada);
    cont=0;
    if (entrada>=0)
    {
        for (i = 0; entrada > 0; i++)
        {
            cont=cont+entrada;
            scanf("%i",&entrada);
        }
        media=(double)cont/i;
        printf("Media = %.2lf\n",media);
    }
    else{
        printf("IMPOSSIVEL CALCULAR\n");
    }
    return 0;
}