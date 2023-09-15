#include <stdio.h>
#include <math.h>
int main(){
	int nombre;
	printf("Donne un nombre : ");
	scanf("%d",&nombre);
	if(nombre<0) printf("est un nombre negatife");
	else if(nombre>0) printf("est un nombre positive");
	else printf("est un nombre null");
	
		
}
