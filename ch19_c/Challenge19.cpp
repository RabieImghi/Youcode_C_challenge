#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int number = rand()%7+1;
	switch(number){
		case 1 : printf("lundi");break;
		case 2 : printf("mardi");break;
		case 3 : printf("mercredi");break;
		case 4 : printf("jeudi");break;
		case 5 : printf("vendredi");break;
		case 6 : printf("samudi");break;
		case 7 : printf("dimanch");break;
	}
		
}
