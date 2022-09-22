#include <stdio.h>
int main(){
    float vm, vd, pd, desc;
    printf("Informe valor do produto: ");
    scanf("%f", &vm);
    printf("Informe qual o desconto (%%): ");
    scanf("%f", &vd);
    desc =(vm * vd / 100);
    pd = vm - desc;
    printf("Valor produto R$%.2f! Com desconto de R$%.2f. Sai por: R$%.2f", vm, desc, pd);

return 0;
}
