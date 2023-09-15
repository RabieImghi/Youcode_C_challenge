#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	char  carac;
	printf("Donne un  caractere  : ");
	carac = getchar();
	if((carac<=90 && carac>=65) || (carac<=112 && carac>=97) ){
		if((carac<=90 && carac>=65))
		printf(" est un alphabet majuscule ");
		else if(carac<=112 && carac>=97) 
		printf(" est un alphabet minuscule ");
	}else{
		printf(" ne pas un alphabet ");
	}
	
	

	
		
}
