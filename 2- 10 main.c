#include<stdio.h>

int main(void){
    int matriz[8][2] = {{0},{0}}, numero;
    int i, n, elemento = 0, novo;

    for(i = 0; i < 8; i++){
        printf("Elemento %d = ", i + 1);
        scanf("%d", &numero);

        if(numero < 0){
            break;
        }

        for(n = 0, novo = 1; n <= i; n++){
            if(matriz[n][0] == numero){                
                matriz[n][1]++;
                novo = 0;
                break;
            }
        }

        if(novo){
            matriz[elemento][0] = numero;
            matriz[elemento][1]++;
            elemento++;          
        }
    }

    for(i = 0; i < elemento; i++){
        if(matriz[i][1] > 1){
            printf(" O numero %d aparece %d vezes\n", matriz[i][0], matriz[i][1]);
        }
    }

    return 0;
}
