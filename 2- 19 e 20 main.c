#include <stdio.h>
#include "BibliotecaMatrizes.h"

int main(){
	int m[100][100], linhas, cols, maior, menor,i,j;
	printf("Qtde de linhas e colunas:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	maior = m[0][0];
	menor = m[0][0];
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]< menor)
			   menor = m[i][j];
			if(m[i][j]> maior)
			   maior=m[i][j];   
		}// fim for j
	}// fim for i
	printf("Maior elemento:%d\nMenor elemento:%d",maior,menor);
	return 0;
}
