#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int op, op1, x, c, res = 1;
    float n1, n2, n3, soma, maior;
    do{
        printf("==========================\n");
        printf("  [1] Soma \n");
        printf("  [2] Maior numero \n");
        printf("  [3] Fatorial \n");
        printf("  [4] Exponenciacao \n");
        printf("  [0] Sair\n");
        printf("==========================\n");
        scanf("%i", &op);
        if(op < 0 || op > 4)
            printf("Entre com uma opcao valida!\n");
        system("pause");
        system("cls");
    }while(op != 1 && op != 2 && op != 3 && op != 4);
    switch(op){
    case 1:
        printf("Opcao 1 escolhida: Soma!\n");
        printf("Valor 1: ");
        scanf("%f", &n1);
        printf("Valor 2: ");
        scanf("%f", &n2);
        soma = n1 + n2;
        printf("Soma %.2f + %.2f = %.2f", n1, n2, soma);
        break;
    case 2:
        printf("Opcao 2 escolhida: Maior numero!\n");
        printf("Digite TRES valores: ");
        scanf("%f%f%f", &n1, &n2, &n3);
        maior = n1;
        if(n2 > maior)
            maior = n2;
        if(n3 > maior)
            maior = n3;
        printf("O maior numero digitado foi %.2f", maior);
        break;
    case 3:
        printf("Opcao 3 escolhida: Fatorial!\n");
        printf("Informe numero a ser fatorado: ");
        scanf("%i", &x);
        c = 1;
        for(c; c <= x; c++){
            res = c * res;
        }
        printf("O fatorial eh %i", res);
        break;
    case 4:
        printf("Opcao 4 escolhiuda: Exponenciacao!\n");
        printf("Informe o valor da base: ");
        scanf("%f", &n1);
        printf("Informe o expoente: ");
        scanf("%i", &x);
        c = 2;
        soma = n1;
        for(c; c <= x; c++){
            soma = soma * n1;
        }
        printf("%.2f ^ %i = %.2f", n1, x, soma);
        break;
    }

return 0;
}
