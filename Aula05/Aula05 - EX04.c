#include <stdio.h>
int main(){
    int c = 0, soma = 0, somatotal;
    while(c<=100){
        soma = soma + c;
        c++;
    }
    printf("A soma de todos os numero inteiros de 0 a 100 = %i", soma);
return 0;
}
