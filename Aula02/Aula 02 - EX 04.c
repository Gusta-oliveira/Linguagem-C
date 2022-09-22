#include <stdio.h>
int main(){
    float a, b, c, x;
    printf("Formula x = 2ab + 3ac - 4bc \n");
    printf("Informe os valores de 'a', 'b' e 'c'\n");
    scanf("%f%f%f", &a, &b, &c);
    x = (2*a*b) + (3*a*c) - (4*b*c);
    printf("Valor de X = %.2f", x);
return 0;
}
