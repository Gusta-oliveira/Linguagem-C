#include <stdio.h>
#include <conio.h>
int main(){
    int c = 0;
    char ch;
    do{
        printf("Digite algum caractere: ");
        ch = getche();
        c = c+1;
        printf(" %d\n", c);
    }while(ch != '$' && c < 35);
return 0;
}
