#include <stdio.h>
int main(){
    int entrada,i;
    printf("Deseja a tabuada para qual valor?:\n");
    scanf("%i",&entrada);
    for ( i = 1; i<=10; i++)
    {
        printf("%i X %i = %i\n",entrada,i,entrada*i);
    }
    
    return 0;
}