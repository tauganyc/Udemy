#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,delta,x1,x2;
    printf("Digite a:");
    scanf("%lf",&a);
    printf("Digite b:");
    scanf("%lf",&b);
    printf("Digite c:");
    scanf("%lf",&c);
    delta=(b*b)-(4*a*c);
    x1=(-b + sqrt(delta))/(2*a);
    x2=(+b + sqrt(delta))/(2*a);
    if (delta<0||a==0)
    {
        printf("Esta equacao nao possui raizes reais\n");
    }
    else{
        printf("x1 q= %.4lf\n",x1);
        printf("x2 = %.4lf\n",x2);
    }
    return 0;
}