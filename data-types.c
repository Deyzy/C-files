#include <stdio.h>
#include <stdbool.h> //valores booleanos 1=true, 0=false     unsigned=somente numeros positivos como não possui negativos você ganha o dobro dos positivos 

int main(){

    char a = 'C';              //single character      %c
    char b[] = "deyzy";        //array of characters    %s

    float c = 4.29346723649832;                  //4 bytes (32 bits of precision) 6 a 7 digits %f
    double d = 8.8349823748327423409824902848;  //8 bystes (64 bits of precision) 15 a 16 digits %lf

    bool e = true;                   //1 byte (true or false) %d

    char f = 100;                    //1 byte (-127 to +127) %d or %c 
    unsigned char g = 255;           //1 byte (0 to +255) %d or %c armazena somente numeros positivos em um intervalo maior 

    short int h = 2024;               // 2 byte (-32,768 to +32,767) %d
    unsigned short int i = 20252;       //2 bytes (0 to +65,535) %d

    int j = 2147483647;                //4 bytes (-2,147,483,638 to +2,147,483,647) %d
    unsigned int k = 4294967295;        //4 bytes (0 to +4,294,967,295 ) %u

    long long int l = 9223372036854775807U;    // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion ) %llu

    //printf("%0.2f\n", c); //float
    //printf("%0.2lf\n", d); //double "double é mais preciso e utiliza mais memória" 

    //printf("%d\n", e); //bool

    //printf("%c\n", f);  ao %c, será exibido o seu valor conforme a tabela ASCII

    //printf("%c\n", g); //armazena somente numeros positivos em um de 0 - 255

    //printf("%d\n", h); //short int, numeros positivos e negativos
    //printf("%d\n", i); //unsigned short numeros positivos 

    //printf("%d\n", j); //int
    //printf("%u\n", k); //unsigned int

    printf("%lld\n", l); //long long int
    printf("%llu\n", m); //unsigned long long int 

    return 0;
}