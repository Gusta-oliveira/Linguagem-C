#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int c;
    for(c = 5 ; c > 0; c = c--){
        printf("%i Patinhos foram passear, \nalem das montanhas parabrincar.\n", c);
        printf("A mamae gritou quaquaquaqua \ne so %i patinho(s) voltaram de la.\n\n", c-=1);
        getch();
    }
    //printf("1 Patinho foi passear, alem das montanhas parabrincar.\n", c);
    //printf("A mamae gritou quaquaquaqua e nenhum patinho voltou de la.\n\n");
return 0;
}
