#include <stdio.h>
int main(){
    float n1, n2, d;
    printf("Digite dois valores para o calculo: ");
    scanf("%f%f", &n1, &n2);
    if (n2 == 0)
        printf("Nao existe divisao por 0!");
    else{
        d = n1/n2;
        printf("A divisao eh = %2.f", d);
    }
return 0;
}
