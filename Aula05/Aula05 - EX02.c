#include <stdio.h>


int main(){
    int c;
    float tam, p = 0;

    printf("Informe o numero de lado: ");
    scanf("%i", &c);

    while(c > 0){
        printf("\nInforme o tamanho do lado: ");
        scanf("%f", &tam);
        p = p + tam;
        c--;
    }
     printf("O perimetro da figura com eh: %.2f ", p);
return 0;
}
