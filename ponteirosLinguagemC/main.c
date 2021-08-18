#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//função troca que recebe 2 ints como argumento
void troca(int *x, int *y)
{
	//vatiável temporária para salvar valor de X
	int temp;
	temp = *x;
	//x recebe o valor de y
	*x = *y;
	//y recebe o valor antigo de X, que foi armazenado em temp
	*y = temp;
	printf("valor de x em troca(): %d \n", *x);
	printf("valor de y em troca(): %d \n", *y);
	
}


int main() 
{
	int a = 5;
	int b = 10;
	
	printf("Valor de a antes da troca() %d \n", a);
	printf("Valor de b antes da troca() %d \n", b);
	
	//a e b representam X e y na função troca 
	troca(&a,&b);
	
	printf("Valor de a depois da troca: %d \n", a);
	printf("Valor de b depois da troca %d \n", b);
	
	return 0;
}
