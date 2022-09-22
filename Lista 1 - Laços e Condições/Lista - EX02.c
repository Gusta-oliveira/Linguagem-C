#include <stdio.h>
#include <stdlib.h>
int main(){
    int c;
    float raio, raio1 = 1, vol;
    printf("Calculo volume esfera!\n\n");
    do{
        printf("Informe o raio: ");
        scanf("%f", &raio);
        if(raio <= 0)
            printf("Informe um valor maior que ZERO para o calculo!\n");
            printf("\n\n\n\n");
        system("pause");
        system("cls");
    }while(raio <= 0);
    for(c = 1; c <= 3; c++){
        raio1 = raio1 * raio;
    }
    vol = (4 * 3.14 * raio1) / 3;
    printf("O volume eh: %.2f\n\n", vol);
return 0;
}
