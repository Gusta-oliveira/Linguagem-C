#include <stdio.h>

int main(){
    int a = 1, res = 0, soma = 0;

    printf("Calculo da somatoria!");
    while(a <= 7){
        res = (3*(a*a))+ a - 2;
        soma = soma + res;
        a++;
    }
    printf("O total da somatoria foi: %i", soma);
return 0;
}
