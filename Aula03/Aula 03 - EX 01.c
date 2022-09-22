#include <stdio.h>
int main(){
    float n1, n2, n3, n4, n5, soma, media, maior, menor;
    printf("Informe 5 valores: ");
    scanf("%f%f%f%f%f", &n1, &n2, &n3, &n4, &n5);
    maior = n1;
    menor = n1;

    soma = (n1+n2+n3+n4+n5);
    media = soma / 5;

    //Verificando o maior valor digitado
    if (n2 > maior)
        maior = n2;
    if (n3 > maior)
        maior = n3;
    if (n4 > maior)
        maior = n4;
    if (n5 > maior)
        maior = n5;

    //Verificando o menor valor digitado
    if (n2 < menor)
        menor = n2;
    if (n3 < menor)
        menor = n3;
    if (n4 < menor)
        menor = n4;
    if (n5 < menor)
        menor = n5;


    printf("O manior numero digitado foi %.1f e o menor %.1f\n", maior, menor);
    printf("A soma dos valores = %.2f e a media = %.2f", soma, media);
return 0;
}
