#include <stdio.h>
int main(){
    float lado, area, peri;
    printf("Informe o valor do lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * 2;
    peri = 4 * lado;
    printf("A area do quadrado = %.2f e o perimetro = %.2f", area, peri);
return 0;
}
