#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hora,minuto, tempoDeViagem,velocidadeMedia,distanciaPercorrida, consumoVeiculo, consumoTotalVeiculo;

    velocidadeMedia = 100;
    consumoVeiculo = 12;

    printf("digite o tempo total de viagem, entre com o tempo da seguinte forma (HH MM): ");
    scanf("%f %f", &hora, &minuto);



    tempoDeViagem = (hora * 60 + minuto) / 60;

    printf("\ntempo de viagem %f", tempoDeViagem);

    distanciaPercorrida = velocidadeMedia * tempoDeViagem;

    printf("\ndistancia percorrida %f", distanciaPercorrida);

    consumoTotalVeiculo = distanciaPercorrida / consumoVeiculo;

    printf("\no consumo total é de: %f litros", consumoTotalVeiculo);


}
