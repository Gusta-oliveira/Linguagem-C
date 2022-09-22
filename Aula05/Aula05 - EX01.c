#include <stdio.h>
#include <conio.h>
int main(){
    int c = 0;
    char n;
    printf("Informe o numero de repeticoes: ");
    scanf("%i", &c);
    while(c>0){
        printf("\nDigite um caracter: ");
        n = getche();
        c--;
    }
return 0;
}
