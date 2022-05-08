#include <stdio.h>
int main(){
    int x,y,troca,i,soma;
    printf("Digite dois numeros:\n");
    scanf("%i%i",&x,&y);
    if (x>y)
    {
        troca=x;
        x=y;
        y=troca;
    }
    soma=0;
    for ( i = x+1; i<y; i++)
    {
        if (i%2!=0)
        {
            soma=soma+i;
        }
        
    }
    printf("soma dos impares = %i\n",soma);
    return 0;
}