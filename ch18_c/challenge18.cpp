#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int jour,mois,annee;
	printf("donne une date : ");
	scanf("%d/%d/%d",&jour,&mois,&annee);
	switch(mois){
		case 1 : printf("la date est : %d/Janvier/%d ",jour,annee);break;
		case 2 : printf("la date est : %d/fevrier/%d ",jour,annee);break;
		case 3 : printf("la date est : %d/mars/%d ",jour,annee);break;
		case 4 : printf("la date est : %d/avril/%d ",jour,annee);break;
		case 5 : printf("la date est : %d/mai/%d ",jour,annee);break;
		case 6 : printf("la date est : %d/juin/%d ",jour,annee);break;
		case 7 : printf("la date est : %d/juillet/%d ",jour,annee);break;
		case 8 : printf("la date est : %d/août/%d ",jour,annee);break;
		case 9 : printf("la date est : %d/septembre/%d ",jour,annee);break;
		case 10 : printf("la date est : %d/octobre/%d ",jour,annee);break;
		case 11 : printf("la date est : %d/novembre /%d ",jour,annee);break;
		case 12 : printf("la date est : %d/décembre /%d ",jour,annee);break;
		default   : printf("la date incorect ");break;	
	}
	
	
		
}
