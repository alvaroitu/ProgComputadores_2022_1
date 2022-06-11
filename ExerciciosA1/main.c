#include <stdio.h>
#include <stdlib.h>

int main()
{
    //questao 01
    int a = 2;
    float b = 3;
    float c = 4;

    float resultado;

    resultado = b*c/a;
    printf("resultado: %.2f\n", resultado);

    resultado = (b*c)/a;
    printf("resultado: %.2f\n", resultado);

    resultado = b+b/a;
    printf("resultado: %.2f\n", resultado);

    printf("\n");

    //questao 02

    /* se quisesse entrar como o valor de a e b usando scanf, qual seria o comando correto?*/

    //questao 03

    for(int i = 1; i < 4; i++){
            for(int j = 1; j < 4; j++){
                printf(" (%02d,%02d) ", i, j);
            }
            printf("\n");
    }

    printf("\n");

    //questao 04

    for(int i = 1; i < 4; i++){
            for(int j = 1; j < 4; j++){
                    if(i<j){
                        printf(" ( *,* ) ");
                    }else{
                        printf(" (%02d,%02d) ", i, j);
                    }

            }
            printf("\n");
    }

    printf("\n");

    // questao 05

    int x = 0;

    do{
        printf("valor de X: %d", x);
        x = x + 2;
        printf("\n");

    }while(x < 6);

    printf("\n");

    // questao 06

    float nota = 6;
    float presenca = 80;

    if( nota >= 6 && presenca >=75){
        printf("ALUNO APROVADO");
    }else{
        printf("ALUNO REPROVADO");
    }





    return 0;
}
