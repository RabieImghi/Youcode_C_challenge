#include <stdio.h>
int main(){
	int L,C,i,sm=0;
	do{
		printf("Donne la dimension de table L (max 50): ");
		scanf("%d",&L);
		printf("Donne la dimension de table C (max 50): ");
		scanf("%d",&C);	
		if((C>50 || C<=0)) 	printf("C > 50 !! ");
		if((L>50 || L<=0))	printf("L > 50 !! ");
	}while((C>50 || C<=0) || (L>50 || L<=0));
	
	char T[L][C];
	for(i=0;i<L;i++)
		for(int j=0;j<C;j++){
			printf("la case T[%d][%d] = ",i+1,j+1);
			scanf("%d",&T[i][j]);	
		}
	for(i=0;i<L;i++){
		for(int j=0;j<C;j++){
			printf("T[%d][%d] = %d\t",i+1,j+1,T[i][j]);
			sm+=T[i][j];
		}
		printf("\n");
	}
	printf("la somme est %d",sm);	
}
