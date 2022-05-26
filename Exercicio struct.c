/*
Nome: Gustavo Maxwel de Sousa Oliveira
Matrícula: UC21101257
Matéria: Programação estruturada
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int j=0, i=0, x=0;
	
	struct Estudante {
		char matricula[20], nome[200];
		float media, notas[4];
	};
	
	struct Estudante estudante[10];
	
	for(i = 0; i < 2; i++){		
	
		printf("Digite a matrícula do aluno %d: ", i+1);
		scanf("%s", &estudante[i].matricula);
		fflush(stdin);
		printf("Digite o nome do estudante %d: ", i+1);
		scanf("%[^\n]s", &estudante[i].nome);
		fflush(stdin);
		
		do{
			printf("Digite as 4 notas do aluno %d: ", i+1);
			scanf("%f", &estudante[i].notas[j]);
			fflush(stdin);
			j++;
		}while(j < 4);
		
		j=0;
	
		estudante[i].media = (estudante[i].notas[0] + estudante[i].notas[1] + estudante[i].notas[2] + estudante[i].notas[3]) / 4; 
	}
	
	system("cls");
	
	for(i=0; i < 2; i++){
		
		printf("Estudante %d:\n", i+1);
		printf("Matrícula: %s\n", estudante[i].matricula);
		printf("Nome: %s\n", estudante[i].nome);
		printf("Notas: %.2f\n", estudante[i].notas[0]);
		printf("Notas: %.2f\n", estudante[i].notas[1]);
		printf("Notas: %.2f\n", estudante[i].notas[2]);
		printf("Notas: %.2f\n", estudante[i].notas[3]);
		printf("Média: %.2f\n\n", estudante[i].media);
	}	
	
	return 0;
}
