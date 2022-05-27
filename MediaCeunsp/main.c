#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d, media;
    int saida = 1;

    do{
        printf("entre com a primeira nota: ");
        scanf("%f", &a);
        printf("\nentre com a segunda nota: ");
        scanf("%f", &b);
        printf("\nentre com a terceira nota: ");
        scanf("%f", &c);
        printf("\nentre com a quarta nota: ");
        scanf("%f", &d);

        media = (a + b + c + d)/4;

        printf("\nA media e: %f", media);

        printf("\n\nDigite 0 para sair ou 1 para calcular novamente: ");
        scanf("%d", &saida);

        system("CLS");

    }while( saida != 0);

    return 0;
}
