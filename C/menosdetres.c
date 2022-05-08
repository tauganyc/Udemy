#include <stdio.h>
int main(){
    int a,b,c;
    printf("primeiro valor: ");
    scanf("%i",&a);
    printf("segundo valor:2 ");
    scanf("%i",&b);
    printf("terceiro valor: ");
    scanf("%i",&c);
    if (a<b&&a<c)
    {
        printf("menor = %i\n",a);
    }
    else if (b<a&&b<c)
    {
        printf("menor = %i\n",b);
    }
    else
    {
        printf("menor = %i\n",c);
    }
    
    return 0;
}