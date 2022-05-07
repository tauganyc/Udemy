#include <stdio.h>
int main(){
    int a,b;
    printf("Digite dois numeros:\n");
    scanf("%i%i",&a,&b);
    if (a>b)
    {
        printf("DECRESCENTE!\n");
    }
    else{
        printf("CRESCENTE!\n");
    }
    
    return 0;
}