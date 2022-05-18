// São 10 alunos
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int j=0, i=0, x=0;
	
	struct Estudante {
		int matricula;
		char nome[200];
		float media, notas[4];
	};
	
	struct Estudante estudante[3];
	
	for(i=0; i<3; i++){
		
		printf("Digite a matricula do aluno %d: ", i+1);
		scanf("%d", &estudante[i].matricula);
	
		printf("Digite o nome do estudante %d: ", i+1);
		scanf("%s", &estudante[i].nome);
		
		do{
			printf("Digite as 4 notas do aluno: ");
			scanf("%f", &estudante[i].notas[j]);
			j++;
		}while(j < 4);
		j=0;
		estudante[i].media = (estudante[i].notas[0] + estudante[i].notas[1] + estudante[i].notas[2] + estudante[i].notas[3]) / 4; 
	}
		for(i=0; i < 3; i++){
			printf("Matricula: %d\n", estudante[i].matricula);
			printf("Nome: %s\n", estudante[i].nome);
			printf("Notas: %.2f\n", estudante[i].notas[0]);
			printf("Notas: %.2f\n", estudante[i].notas[1]);
			printf("Notas: %.2f\n", estudante[i].notas[2]);
			printf("Notas: %.2f\n", estudante[i].notas[3]);
			printf("Media: %.2f\n", estudante[i].media);
		}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
