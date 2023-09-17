#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	float  moyene;
	printf("Donne la moyenne d'etudiant  : ");
	scanf("%f",&moyene);
	if(moyene>=16) printf("La moyene est tres bien ");
	else if(moyene>=14) printf("La moyene est bien");
	else if(moyene>=12) printf("La moyene est assez bien");
	else if(moyene>=10) printf("La moyene est passable");
	else printf("La moyene est recale");
	
		
}
