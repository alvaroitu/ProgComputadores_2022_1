#include <stdio.h>
#include <stdlib.h>

void pulaLinha(){
    printf("\n");
}

int main()
{

    int vetor[9] = {5,3,1,2,4,6,8,9,7};
    int vetorOriginal[10];
    int transicao, posicao;


    for(int index = 0; index<10; index++){
            vetorOriginal[index] = vetor[index];
            //printf("%d ", vetor[index]);
    }

    for(int index = 0; index<9; index++){
            for(int index2 = index + 1; index2<=9; index2++){
                if(vetor[index]>vetor[index2]){
                    transicao = vetor[index];
                    vetor[index] = vetor[index2];
                    vetor[index2] = transicao;
                }
            }
    }

    printf("\n");

    for(int index = 0; index<10; index++){
            printf("%d ", vetorOriginal[index]);
    }

    printf("\n");

    for(int index = 0; index<10; index++){
            printf("%d ", vetor[index]);
    }

    //printf("\n");

    for(int index = 0; index<10; index++){
            if(vetorOriginal[index] == 9){
                posicao = index+1;
            }
            //printf("%d ", vetor[index]);
    }

    printf("\n");

    printf("%d ", posicao);

    printf("\n");


    int vetorSoma[9] = {10, 20, 30, 15, 13, 40, 1, 2, 3};
    int index = 0;

    for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= 3; j++){
                    printf("%02d ", vetorSoma[index]);
                    index++;

            }
            printf("\n");

    }

    printf("\n");

    int somaLinha = 0;
    index = 0;

    for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= 3; j++){
                    somaLinha = somaLinha + vetorSoma[index];
                    index++;

            }
            printf("Soma da linha: %d ", somaLinha);
            somaLinha = 0;
            printf("\n");

    }

    pulaLinha();

    int ordem;
    printf("entre com a ordem da matriz: ");
    scanf("%d", &ordem);
    int matriz[ordem][ordem];

    for(int i = 0; i < ordem; i++){
            for(int j = 0; j < ordem; j++){
                    printf("(%02d,%02d) ", i+1, j+1);

            }
            pulaLinha();
    }

    pulaLinha();

   /* for(int i = 0; i < ordem; i++){
            for(int j = 0; j < ordem; j++){
                    printf("entre com o elemento Linha %d Coluna %d: ", i+1, j+1);
                    scanf("%d", &matriz[i][j]);

            }
    }

    for(int i = 0; i < ordem; i++){
            for(int j = 0; j < ordem; j++){
                    printf(" %02d ", matriz[i][j]);

            }
            pulaLinha();
    }*/




    return 0;
}
