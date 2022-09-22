#include <stdio.h>
int main(){
    float num, soma, media, maior, menor;
    int c;
    printf("Informe o numero %i: ", c);
    scanf("%f", &num);
    maior = num;
    menor = num;
    soma = num;
    for(c=2; c<=11; c++){
        printf("Informe o numero %i: ", c);
        scanf("%f", &num);
        soma = soma + num;
        if(num > maior)
            maior = num;
        if(num < menor)
            menor = num;
    }
    media = soma/10;
    printf("O maior numero eh %.2f\n", maior);
    printf("O menor numero eh %.2f\n", menor);
    printf("A soma dos numero foi %.2f\n", soma);
    printf("A media dos numeros foi %.2f\n", media);

return 0;
}
