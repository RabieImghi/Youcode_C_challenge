#include <stdio.h>
#include <math.h>
int main(){
	int	tableau[10],max=0,min=pow(10,200),i;
	for(i=0;i<10;i++){
		printf("tableau[%d] = ",i+1);
		scanf("%d",&tableau[i]);
		if(tableau[i]<min) min=tableau[i]; 
		if(tableau[i]>max) max=tableau[i]; 
	}
	for(i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(tableau[i]<tableau[j]){
				int temp =tableau[i];
				tableau[i]=tableau[j];
				tableau[j]=temp;
			}
		}
		
	}
	printf("+++++++++++++++++++\n");
	for(i=0;i<10;i++){
		printf("tableau[%d] = %d\n",i+1,tableau[i]);
	}
	printf("le max Number est %d \n le min Number est %d",max,min);
	
}
