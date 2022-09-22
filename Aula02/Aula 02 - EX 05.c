#include <stdio.h>
int main(){
    float a, b, aux;
    printf("Informe os valores de A e B! \n");
    scanf("%f%f", &a, &b);
    printf("Valores atribuidos pelo usuario de A = %.1f e B = %.1f\n", a, b);
    aux = a;
    a = b;
    b = aux;
    printf("Valores apos a troca de A = %.1f e B = %.1f", a, b);
return 0;
}
