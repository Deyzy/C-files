#include <stdio.h>
#include <string.h>

int main(){

    char nome[25];
    int age;

    printf("Qual o seu nome? ");
    fgets(nome, 25, stdin);  /* Função fgets: lê uma linha de texto da entrada padrão (stdin), ou seja, do teclado, e armazena essa linha na variável nome */
    nome[strlen(nome)-1] = '\0';

    printf("Quantos anos você tem? ");
    scanf("%d", &age); //scanf não ler espaços em brancos

    printf("\nHello %s, como você está?",nome);
    printf("\nyou are %d years old\n", age);

    return 0;
}