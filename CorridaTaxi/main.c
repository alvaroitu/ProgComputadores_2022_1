#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int distanciaPercorrida;
    float valorBandeirada, valorPorKm, valorTotalCorrida;

    valorBandeirada =  7.5;
    valorPorKm = 2.5;

    printf("O valor da bandeirada é: %.3f e do km é: %.3f.\n\n", valorBandeirada, valorPorKm);

    printf("Entre com o valor da distancia: ");
    scanf("%d", &distanciaPercorrida);

    printf("\nA distancia percorrida foi de: %d\n\n", distanciaPercorrida);

    valorTotalCorrida = valorBandeirada + valorPorKm*distanciaPercorrida;

    printf("O valor total da corrida é: %.2f.\n", valorTotalCorrida);

    return 0;
}
