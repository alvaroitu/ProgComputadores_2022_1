#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int y; float z;
    int A, B;

    A = 5;
    B = 2;

    y = 2 + 3 * 4;
    printf("valor de y: %d\n", y);

    z = (11 - 1) / (1 - 3);
    printf("valor de z: %.2f\n", z);

    y = 1.5 + 1;
    printf("valor de y: %d\n", y);

    z = z / y;
    printf("valor de z: %.2f\n", z);

    if(A/B == 2.5){
            printf("valor de AB: %d\n", A/B);
    } else{
         printf("errado");

    }

    z = pow(A,B);

    printf("valor de z: %.2f\n", z);

    scanf("%d", &y);
    printf("valor de y: %d\n", y);

    scanf("%f", &z);
    printf("valor de z: %.2f\n", z);

    return 0;
}
