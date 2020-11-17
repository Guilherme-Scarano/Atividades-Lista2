#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaMatrizes.h"


int main()
{
    int matriz[2][2];
    int i, j;
    int soma=0;

    srand( time( NULL ) );

    printf( "Matriz:\n" );
    for( i = 0; i < 2; i++ ){
        for( j = 0; j < 2; j++ ){
            matriz[i][j] = 2 + rand() % 2;
            printf( "%3d", matriz[i][j] );
            if( i==j ){
                soma += matriz[i][j];
            }
        }
        printf( "\n" );
    }
    printf( "Soma da diagonal principal: %d", soma );
    return 0;
}
