#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num);
    if (num % 2 == 0)
        printf("O numero %i eh par!", num);
    else
        printf("O numero %d eh impar!", num);
return 0;
}
