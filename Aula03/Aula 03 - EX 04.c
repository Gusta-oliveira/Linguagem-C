#include <stdio.h>
int main(){
    char nome[60];
    float n1, n2, n3, n4, media, nota_exame;
    printf("Nome aluno: ");
    scanf("%s", &nome);
    printf("Informe a nota 1 do aluno: ");
    scanf("%f", &n1);
    printf("Informe a nota 2 do aluno: ");
    scanf("%f", &n2);
    printf("Informe a nota 3 do aluno: ");
    scanf("%f", &n3);
    printf("Informe a nota 4 do aluno: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;
    if (media >= 7)
        printf("O aluno %s teve media %.2f e foi APROVADO!!", nome, media);
    else if (media >= 5){
        nota_exame = 10 - media;
        printf("O aluno %s teve media %.2f e esta de EXAME!!\n", nome, media);
        printf("A nota necessaria no exame eh %.2f", nota_exame);
        }
        else
            printf("O aluno %s teve media %.2f e esta REPROVADO!!", nome, media);
return 0;
}
