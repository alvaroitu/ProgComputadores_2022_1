#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Cabecalho(){

    printf("Prof. Mestre Álvaro Augusto Pereira\n");
    printf("Disciplina: Programação para Computadores.\n\n\n");

}

void ImprimiOpcoes(){

    printf("Menu\n");
    printf("Escolha o que gostaria de fazer.\n");
    printf("Opção 01 - Somatória.\n");
    printf("Opção 02 - Progressão Aritmética.\n");
    printf("Opção 03 - Progressão Geométrica.\n");

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

    printf("sem OPÇÃO");

}

int main(){

    int opcao;

    setlocale(LC_ALL, "Portuguese");

    Cabecalho();
    ImprimiOpcoes();


    printf("\nEscolha uma opção: ");
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

