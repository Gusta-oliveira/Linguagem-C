#include <stdio.h>
int main(){
    char nome[30];
    float nota1, nota2, media;
    printf("Informe o Nome do Aluno: ");
    scanf("%s", &nome);
    printf("Informe as duas notas: ");
    scanf("%f%f", &nota1, &nota2);
    media = (nota1+nota2)/2;
    printf("O aluno %s ficou com media %.2f", nome, media);
return 0;
}
