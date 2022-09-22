#include <stdio.h>
int main(){
    int num, u, d, soma;
    printf("Entre com um numero de 0 ate 99: ");
    scanf("%i", &num);
    u = num % 10;
    d = num / 10;
    soma = d + u;
    printf("soma de %i + %i eh = %i ", d, u, soma);
return 0;
}
