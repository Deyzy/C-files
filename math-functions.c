#include <stdio.h>
#include <math.h>

int main(){

    double a = sqrt(9); //raiz quadrada
    double b = pow (2, 4); //potencia
    int c = round(3.14); //arredondar
    int d = ceil(3.14); //arredondar para cima
    int e = floor(3.99); //arredondar para baixo
    double f = fabs(-100); //torna um numero positivo
    double g;
    double h;
    double i;
    double j;

    printf("%.1lf\n", a);
    printf("%.1lf\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%lf\n", f);


    return 0;
}