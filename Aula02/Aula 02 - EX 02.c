#include <stdio.h>
int main(){
    float alt, base, area;
    printf("Informe o valor da altura: ");
    scanf("%f", &alt);
    printf("Informe o valor da base: ");
    scanf("%f", &base);
    area = (base * alt)/2;
    printf("A area para os valores informados eh = %.2f", area);

return 0;
}
