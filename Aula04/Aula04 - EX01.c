#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    char c[250];
    int x;
    printf("Digite uma mensagem zé: ");
    gets(c);
    for(x=1; x<=10; x++)
        printf("%s\n", c);
return 0;
}
