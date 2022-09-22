#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float fah, cel;

    printf("Conversao de temperatura!\n");
    printf("Informe a temperatura em Fahrenheit: ");
    scanf("%f", &fah);
    cel = ((fah - 32)* 5) / 9;
    printf("%.2f°F = %.2f°C", fah, cel);
return 0;
}
