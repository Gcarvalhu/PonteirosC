#include <stdio.h>
#include <stdlib.h>

/* Ponteiros para registros*/
//registros s�o dados agrupados que me fornecem umma inst�ncia
//compra - num1 num2, c1[][], c2[][], c3[][], 
//typedef struct
//{
//	int num1;
//	int num2;
//}compra;

int main(void) {
	//vetor com 10 posi��es
	int vet[10]={0,1,2,3,4,5,6,7,8,9};
	//ponteiro de vetor
	int *pvet;
	
	pvet =vet;
	//ponteiro de vetor posi��o 3
	*(pvet+3) = 13;
	//vetor posi��o 5
	vet[5] = 15;
	
	for(int i=0; i<10; i++)
		printf("vet[%d] = %d\t=(pvet + %d)= %d\n",i,vet[i],i,*(pvet++));
	
	//quantidade de bytes
	printf("\nTamanho de um int = %d \n",sizeof(vet));
	
//-----------------------------------------------------------------------------------------------------------------------	

//	compra c1, *pc1;
//	
//	//& endere�o de c1
//	pc1 = &c1;//Ponteiro pC1 recebe a inst�ncia c1 de compra
//	
//	c1.num1=5;//c1 atribui valores para os atributos
//	c1.num2=6;
//	
//	//Ponteiro imprime os valores de c1
//	//duas formas de acessar (*ponteiro), atributo OU  ponteiro -> Atributo
//	printf("Impressao de compra num1: %d - num2: %d",(*pc1).num1, pc1->num2);
//	
	
	return 0;
}
