#include <stdio.h>
int main(){
    int c, qtd = 0;
    float nota, nota1, maior, menor, media_turma, nota_geral;
    printf("Calculo de media SALA!!\n");
    printf("Insira a nota do aluno 1: ");
    scanf("%f", &nota);
    maior = nota;
    menor = nota;
    nota_geral = nota;
    nota1 = nota;
    for(c = 2; c <=5; c++){
        printf("Insira a nota do aluno %i: ", c);
        scanf("%f", &nota);
        nota_geral = (nota_geral + nota);
        media_turma = nota_geral/c;
        if(nota > maior)
            maior = nota;
        if(nota < menor)
            menor = nota;
        if(nota < media_turma)
            qtd++;

        }
    if(nota1 < media_turma)
        qtd++;

    printf("A maior nota foi: %.2f\n", maior);
    printf("A menor nota foi: %.2f\n", menor);
    printf("A media da turma foi: %.2f\n", media_turma);
    printf("A nota geeral %.2f\n", nota_geral);
    printf("Tiveram %i abaixo da media!! ", qtd);
return 0;
}
