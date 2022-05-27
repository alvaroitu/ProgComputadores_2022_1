#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   float primeiroMes, segundoMes, terceiroMes, valorInicial, valorFinal, rendimento;

   valorInicial = 500;
   rendimento = 0.01;

   primeiroMes = valorInicial + valorInicial*rendimento;

   segundoMes = primeiroMes + primeiroMes*rendimento;

   terceiroMes = segundoMes + segundoMes*rendimento;

   valorFinal = terceiroMes;

   printf("O valor total final é %.2f.\n", valorFinal);

   valorFinal = valorInicial*(pow( (1 + rendimento) , 3 ) );

   printf("O valor total final é %.2f.\n", valorFinal);

   return 0;
}

