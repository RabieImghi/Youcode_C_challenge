#include <stdio.h>
#include <stdlib.h>
int main(){
	int Number,somme=0,maxNumber=0;
	do{
		printf("Donne un nombre entre 1 et 100: ");
		scanf("%d", &Number);
		if(Number>100){
			printf("donne number inferieur a 100\n");
		}else{
			somme+=Number;
		if(Number>maxNumber) 
			maxNumber = Number;
		}
		
	}while(Number!=0);
	printf("La somme des nombres est : %d \n",somme);
	printf("Maximun nombres est : %d",maxNumber);
	
    

		
}
