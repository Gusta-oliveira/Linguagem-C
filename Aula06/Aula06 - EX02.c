#include <stdio.h>
#include <stdlib.h>
int main(){
    int num, soma =0, qtd =0;
    do{
        printf("Digite numeros positivos e inteiros: ");
        scanf("%i", &num);
        soma = soma + num;
        qtd = qtd + 1;
    }while(num > 0);
    printf("Soma: %i\n", soma);
    printf("Quantidade numeros: %i", qtd - 1);
return 0;
}
