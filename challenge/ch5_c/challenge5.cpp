#include <stdio.h>
#include <math.h>
int main(){
	int M1,M2,N1,N2,DMN;
	printf("donne les cordonnes de M  ");
	printf("\npoint M1 : ");
	scanf("%d",&M1);
	printf("\npoint M2 : ");
	scanf("%d",&M2);
	printf("\ndonne les cordonnes de N  ");
	printf("\npoint N1 : ");
	scanf("%d",&N1);
	printf("\npoint N2 : ");
	scanf("%d",&N2);
	DMN=sqrt(pow((N1-M1),2) + pow((N2-M2),2)); 
	printf("Distance entre deux points est : %d ",DMN);
	return 0;
}
