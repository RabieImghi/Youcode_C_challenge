#include <stdio.h>
#include <string.h>

int main(){
	char mot[20]="Quel sinistre mot !",ch[20];
	char temp[2];
	int test;
	for(int i=0;i<strlen(mot);i++){
		if(mot[i]=='s') {
			printf("La premiere lettre 's' se trouve dans la position : %d\n",i);
			break;
		}
	}
	for(int i=0;i<strlen(mot);i++){
		if(mot[i]=='m'){
			printf("La lettre 'm' se trouve dans la position : %d\n",i);
			break;	
		} 
	}
	for(int i=0;i<strlen(mot);i++){
		if(mot[i]=='m'){
			mot[i]='s';
		} 
	}
	for(int i=0;i<strlen(mot);i++){
		if(mot[i]=='s'){
			mot[i]='m';
			break;
		} 
	}
	printf("%s\n",mot);
	printf("saisir une lettre quelconque : ");
	gets(ch);
	for(int i=0;i<strlen(mot);i++){
		if(mot[i] == ch[0]) {
			test=0;
			printf("La lettre %c se trouve dans la case %d",ch[0],i);
			break;
		}
		else test=1;
	}
	if(test == 1) printf("La lettre (%c) ne se trouve pas dans la chaine",ch[0]);

	}
	
