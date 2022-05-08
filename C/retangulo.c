#include <stdio.h>
#include <math.h>
int main(){
    double base,altura,diagonal;
    printf("digite a base:\n");
    scanf("%lf",&base);
    printf("digite a altura:\n");
    scanf("%lf",&altura);
    diagonal= sqrt (pow(base,2.0) + pow(altura,2.0));
    printf("area = %.4lf\n",base*altura);
    printf("perimetro = %.4lf\n",(2*base)+(2*altura));
    printf("diagonal = %.4lf\n",diagonal);
    return 0;
}
