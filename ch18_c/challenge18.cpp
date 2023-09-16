#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char Date2[10];
	const char sl[2]="/";
	char *token;
	int i;
	char *dete[]={"Janvier","fevrier","mars","avril","mai","juin","juillet",
					"août","septembre","octobre","novembre","décembre"};
	printf("donne une date d'une format dd/mm/aaaa : ");
	scanf("%s",&Date2);
	printf("la date est : ");
	token = strtok(Date2,sl);
	int jeur = atoi(token);
	if(jeur>0 && jeur<31)
	printf("%s/",token);
	else printf("INCOREECT JOUR/");
	token=strtok(NULL, sl);
	int mois = atoi(token);
	if(mois>0 && mois <13)
		for(int i=0;i<12;i++){
			if(mois==i+1) printf("%s",dete[i]); 
		}
	else printf("INCOREECT MOIS");
	token = strtok(NULL, sl);	
	printf("/%s",token);
	
}
