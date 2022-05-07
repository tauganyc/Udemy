#include <stdio.h>
#include <string.h>
void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
} 
int main(){
    char nome1[50],nome2[50];
    int idade1,idade2;
    double media;
    printf("dados da primeira pessoa:\n");
    printf("nome: ");
    gets(nome1);
    printf("idade: ");
    scanf("%i",&idade1);
    printf("dados da segunda pessoa:\n");
    printf("nome: ");
    flush_in();
    gets(nome2);
    printf("idade: ");
    scanf("%i",&idade2);
    media=(double)(idade1+idade2)/2;
    printf("a idade media de %s e %s eh de %.1lf\n",nome1,nome2,media);
    return 0;
}
