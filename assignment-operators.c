 /* operador de atribuição aumentados = usados para subtituir uma declaraçõa onde um operador recebe uma variavel
    como um de seus argumentos e entao atribui o resultado de volta a mesma variavel
    x = x + 1
    x+=1 
*/

#include <stdio.h>

int main(){
   
    int x = 10;

    // x = x + 2;
    // x+=2;

    // x = x - 3;
    // x-=3;

    // x = x * 4;
    // x*=4;

    // x = x / 5;
    // x/=5;

    // x = x % 2;
    x%=2;


    printf("%d\n", x);

    return 0;
}