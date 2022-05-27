#include <stdio.h>
#include <stdlib.h>

void pulaLinha(void){

    printf("\n");

}

int main()
{

    for(int i = 1; i <= 10; i++){
        printf("valor: %d \n", i);
    }

    pulaLinha();

    for(int i = 10; i >=1; i--){
        printf("valor: %d \n", i);
    }

    pulaLinha();

    for(int i = 1; i <= 10; i++){
        printf("valor: %d \n", i*2);
    }

    pulaLinha();

    for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                printf(" (%02d,%02d) ", i, j);
            }
            pulaLinha();
    }

    pulaLinha();

    for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                    if(i == j){
                        printf(" ( *, *) ");
                    }else{
                        printf(" (%02d,%02d) ", i, j);
                    }

            }
            pulaLinha();
    }

    pulaLinha();

    for(int i = 1; i <= 10; i++){
            for(int j = 1; j <= 10; j++){
                    if(i + j == 11){
                        printf(" ( *, *) ");
                    }else{
                        printf(" (%02d,%02d) ", i, j);
                    }

            }
            pulaLinha();
    }


    return 0;
}
