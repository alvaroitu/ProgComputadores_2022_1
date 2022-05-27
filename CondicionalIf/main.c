#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 5;
    int B = 6;

    if(A>=B){
        printf("1 - A maior ou igual a B\n");
    } else{
        printf("1 - A nao mairo ou igual a B\n");
    }

    if(A<B){
        printf("2 - A menor que B\n");
    } else{
        printf("2 - A nao e menor que B\n");
    }

   /* if(A/B = 2){
        printf("isso nao existe");
    }*/

    if(A/B == 2.5){
        printf("3 - A divisao igual a 2.5\n");
    } else{
        printf("3 - A divisao nao e igual a 2.5\n");

    }

    if(A>B){
        printf("4 - A maior que B\n");
    } else{
        printf("4 - A nao maior que B\n");
    }

    if(A==B){
            printf("5 - os numeros sao iguais\n");
    } else if(A>B) {
            printf("5 - A maior que B\n");
    } else{
        printf("5 - B maior que A\n");
    }

    return 0;
}
