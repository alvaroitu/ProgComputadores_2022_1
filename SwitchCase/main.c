#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Cabecalho(){

    printf("Prof. Mestre �lvaro Augusto Pereira\n");
    printf("Disciplina: Programa��o para Computadores.\n\n\n");

}

void ImprimiOpcoes(){

    printf("Menu\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Op��o 01 - Somat�ria.\n");
    printf("Op��o 02 - Progress�o Aritm�tica.\n");
    printf("Op��o 03 - Progress�o Geom�trica.\n");

}

void escolha1(){

    printf("escolha1");

}

void escolha2(){

    printf("escolha2");


}

void escolha3(){

    printf("escolha3");

}

void semescolha(){

    printf("sem OP��O");

}

int main(){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    Cabecalho();
    ImprimiOpcoes();


    printf("\nEscolha uma op��o: ");
    scanf("%d", &opcao);


    switch(opcao){
    case 1:
        escolha1();
        break;
    case 2:
        escolha2();
        break;
    case 3:
        escolha3();
        break;
    default:
        semescolha();
        break;
    }


    return 0;




}

