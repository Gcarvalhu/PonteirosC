#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o e atribui��o de valores
	int num = 10; double numf = 25.4; char letra = 'a';
	
	//o uso de * mostra que a variavel � um ponteiro
	int *pnum; double *pnumf; char *pletra;
	
	//pegando o endere�o das vari�veis
	pnum = &num; pnumf = &numf; pletra = &letra;
	
	printf("----------------------- pnum - pnumf - pletra");
	printf("\n Valores das vari�veis: %d - %f - %c", num, numf, letra);
	printf("\n Valores dos ponteiros: %d - %f - %c", *pnum, *pnumf, *pletra);
	printf("\n Endere�o dos ponteiros: %p - %p - %p", pnum, pnumf, pletra);

	//mudando os valores dos ponteiros
	*pnum = 5;
	
	//%p imprime o ENDERE�O do ponteiro ou vari�vel
	printf("\n Valores de NUM :%d ", num);
	printf("\n Valores PNUM :%d ", *pnum);
	printf("\n Endere�o PNUM :%p ", pnum);

	getchar();
	
	return 0;
}
