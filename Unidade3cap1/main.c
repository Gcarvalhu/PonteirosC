#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	//declaração e atribuição de valores
	int num = 10; double numf = 25.4; char letra = 'a';
	
	//o uso de * mostra que a variavel é um ponteiro
	int *pnum; double *pnumf; char *pletra;
	
	//pegando o endereço das variáveis
	pnum = &num; pnumf = &numf; pletra = &letra;
	
	printf("----------------------- pnum - pnumf - pletra");
	printf("\n Valores das variáveis: %d - %f - %c", num, numf, letra);
	printf("\n Valores dos ponteiros: %d - %f - %c", *pnum, *pnumf, *pletra);
	printf("\n Endereço dos ponteiros: %p - %p - %p", pnum, pnumf, pletra);

	//mudando os valores dos ponteiros
	*pnum = 5;
	
	//%p imprime o ENDEREÇO do ponteiro ou variável
	printf("\n Valores de NUM :%d ", num);
	printf("\n Valores PNUM :%d ", *pnum);
	printf("\n Endereço PNUM :%p ", pnum);

	getchar();
	
	return 0;
}
