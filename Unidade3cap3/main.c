#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int vnum[5]; // numero de posições vnum[0] vnum[1] vnum[2] vnum[3] vnum[4]
	int *pvnum;
	
	int i=0;
	
	printf("ORIGINAL\n");
	for(i=0; i<5; i++)
	{
		vnum[i]=i;
		printf("\n valor de %d = %i",i,vnum[i]);
	}
	
	pvnum = &vnum[0];
	
	for(i=0; i<5; i++)
		*(pvnum+i) = 0; //Atribuição de 0 no vetor
	
	printf("\n\nMUDADO PELO PONTEIRO\n");
	*pvnum = 5;
	*(pvnum+1) = 5;
	
	for(i=0;i<5;i++)
		printf("\n valor de %d = %i",i,vnum[i]);
	
	
	
	
	getchar();
	return 0;
}
