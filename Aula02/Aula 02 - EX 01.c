#include <stdio.h>
int main()
{
    int v1, v2, v3, v4;
    float media;
    printf("Informe os 4 valores para media! \n");
    scanf("%i%i%i%i", &v1, &v2, &v3, &v4);
    media = (float)(v1+v2+v3+v4)/4;
    printf("Media = %.2f", media);
return 0;
}
