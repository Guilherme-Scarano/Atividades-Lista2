#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaMatrizes.h"

int main(){
	int alunos, i, j, acertos = 0;
	char gabarito[10], respostas[10];
	
	//cart�o gabarito
	printf("Gabarito: \n");
	for(j=0;j<10;j++){
		printf("Questao %d: ",j+1);
		scanf("%s",&gabarito[j]);
	}
	
	//pegando o numero de alunos
	printf("\n Numero de Alunos?\n");
	scanf("%d",&alunos);
	
	//corre��o
	for(i=1;i<=alunos;i++){
		printf("\Aluno %d",i);
		acertos=0;
		for(j=0;j<10;j++){
			printf("\nResposta %d\n",j+1);
			scanf("%s",&respostas[j]);
			if(respostas[j] == gabarito[j]){
				acertos++;
			}
		}
		printf("\n %d acertos\n",acertos);
	}
	return 0;
}
