#include <stdio.h>

int main(){

    //formato especifico % = define e formata um tipo de dado a ser exibido 

    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = inteiro

    // %.1 = posição decimal 
    // %1 = largura minima de campo 
    // %- = alinhamento a esquerda 

    char a = 'd' ;
    char b[] = "deise";
    float item2 = 10.00;
    double item3 = 100.99;
    int item4 = 10;


    printf("caracter: %c\n", a);
    printf("nome %s\n", b);
    printf("item 2: $%.2f\n", item2);
    printf("item 3: $%.2lf\n", item3);
    printf("item 4: %d\n", item4);
    printf("item 4: %5d\n", item4);
    printf("item 4: %-10d", item4);


    return 0;

}