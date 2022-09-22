#include <stdio.h>
int main(){
    float sal_func, ir, ir_m;
    printf("Informe o salario: ");
    scanf("%f", &sal_func);

    if (sal_func <= 1903.98)
        printf("Voce esta isento do IR!");
    else if (sal_func <= 2826.65){
        ir_m = (sal_func * 7.5 / 100);
        ir = 12 * ((sal_func * 7.5 / 100) - 142.80);
        printf("mes %.2f\n", ir_m);
        printf("A porcentagem de aliquota eh 7.5%% e o valor deduzido R$142.80\n");
        printf("O valor a ser pago de IR(anual) eh de R$%.2f", ir);
    }
        else if (sal_func <= 3751.05){
            ir_m = (sal_func * 15 / 100);
            ir = 12 * ((sal_func * 15 / 100) - 354.80);
            printf("mes %.2f\n", ir_m);
            printf("A porcentagem de aliquota eh 15%% e o valor deduzido R$354.80\n");
            printf("O valor a ser pago de IR(anual) eh de R$%.2f", ir);
        }
            else if (sal_func <= 4664.68){
                ir_m = (sal_func * 22.5 / 100);
                ir = 12 * ((sal_func * 22.5 / 100) - 636.13);
                printf("mes %.2f\n", ir_m);
                printf("A porcentagem de aliquota eh 22.5%% e o valor deduzido R$636.13\n");
                printf("O valor a ser pago de IR(anual) eh de R$%.2f", ir);
            }
                else{
                    ir_m = (sal_func * 27.5 / 100);
                    ir = 12 * ((sal_func * 27.5 / 100) - 869.36);
                    printf("mes %.2f\n", ir_m);
                    printf("A porcentagem de aliquota eh 27.5%% e o valor deduzido R$869.36\n");
                    printf("O valor a ser pago de IR(anual) eh de R$%.2f", ir);
                }

return 0;
}
