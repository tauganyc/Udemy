#include <stdio.h>
int main(){
int a,b,c;
scanf("%i%i%i",&a,&b,&c);
if (a+b>c&&a+c>b&&b+c>a)
{
   if (a==b&&a==c)
   {
       printf("equilatero");
   }
   else if (a==b||b==c || a==c)
   {
       printf("isoceles");
   }
   else{
       printf("escaleno");
   }
}
else{
    printf("nao triangulo");
}
    return 0;
}