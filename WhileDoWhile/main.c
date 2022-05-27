#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    while(i<10){
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    i = 0;

    do{
        printf("digite um numero qualquer: \n");
        scanf("%d", &i);
    }while(i != 6);

    return 0;
}
