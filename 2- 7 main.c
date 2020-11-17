#include <stdio.h>
#include <stdlib.h>


int main() {
    int a[8], b[8], c[8], i;
    for (i = 0; i<8; i++) {
        printf("Insira o %d elemento do vetor 1: ", (i+1));
        scanf("%d", &a[i]);
    }
    for (i = 0; i<8; i++) {
        printf("Insira o %do elemento do vetor 2: ", (i+1));
        scanf("%d", &b[i]);
    }
    for (i = 0; i<8; i++) {
        c[i] = a[i] * b[i];
        printf("\n%do elemento do vetor resultante: %d\n", (i+1), c[i]);
    }
    return 0;
}
