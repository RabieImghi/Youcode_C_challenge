#include <stdio.h>
#include <math.h>
int main(){
	int	tableau[10],max=0,min=pow(10,200);
	for(int i=0;i<10;i++){
		printf("tableau[%d] = ",i+1);
		scanf("%d",&tableau[i]);
		if(tableau[i]<min) min=tableau[i]; 
		if(tableau[i]>max) max=tableau[i]; 
	}
	printf("+++++++++++++++++++\n");
	for(int i=0;i<10;i++){
		printf("tableau[%d] = %d\n",i+1,tableau[i]);
	}
	printf("le max Number est %d \n le min Number est %d",max,min);
	
}
