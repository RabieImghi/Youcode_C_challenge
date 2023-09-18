#include <stdio.h>
#include <stdlib.h>
FILE *compte;
char comptExist,nomPrenom[20],ligne[100],username[20];
int option;
void menu2(){
	printf("_______________________________________\n");
	printf("|                                      |\n");
	printf("|  Option 1 : login to your acounte    |\n");
	printf("|  Oprion 2 : Make a new acounte       |\n");
	printf("|______________________________________|\n");
	printf("Choose one of the options : ");
	scanf("%d",&option);
}
void menu(){
	printf("_________________________________________\n");
	printf("|                                       |\n");
	printf("|  Option 1 : Ajoute un nevau sold      |\n");
	printf("|  Option 2 : Afichge votre sold        |\n");
	printf("|  Option 3 : Retier sold               |\n");
	printf("|  Option 4 : Transfer sold             |\n");
	printf("|  Option 5 : History de votre operation|\n");
	printf("|  Option 6 : Quitte votre compte       |\n");
	printf("|                                       |\n");
	printf("|_______________________________________|\n");
}
void ouvrirCompt(){
	printf("Give me yor complet Name : ");
	scanf(" %[^\n]",nomPrenom);
	printf("Give me username for your acount : ");
	scanf("%s",&username);  
	char comptName[20];
	sprintf(comptName, "%s.txt", username);
	compte =fopen(comptName,"w");
	fprintf(compte,nomPrenom);
	printf("\nBonjour ");
	fseek(compte, 0, SEEK_SET);
	compte =fopen(comptName,"r");
	while (fgets(ligne, sizeof(ligne), compte) != NULL) {
	    printf("%s", ligne); 
	    break;
	}
	printf("\n ");
	menu();
}
void compteExiste(char username[20]){
	char comptName[20];
	sprintf(comptName, "%s", username);
	compte =fopen(comptName,"r");
	printf("Bonjour ");
	while (fgets(ligne, sizeof(ligne), compte) != NULL) {
       	printf("%s", ligne); 
       	break;
	}
	printf("\n");
	menu();
}
int main(){
	//option of login and sign up
	do{
		menu2();
		if(option==1){
			printf("What is the username of your acount : ");
			scanf("%s",username);
			char comptName[20];
			sprintf(comptName, "%s.txt", username);
			compte =fopen(comptName,"r");
			if(compte){
				compteExiste(comptName);
			}else {
				printf("There is no account with this name \n");
				menu2();	
			}
		}else if(option==2){
			ouvrirCompt();
		}	
	}while(option!=1 && option!=2);
	
	
	
//		
//	if(compte){
//		compteExiste();
//	}else{
//		printf("Compte N'exist pas. vous pouvez cree u compte ? (Oui(o)/Non(n)) : ");
//		comptExist=getchar();
//		if(comptExist =='o' || comptExist=='O'){
//			ouvrirCompt();
//		}
//	}
	
	
	
	
	
	
	

//Ajoute dans un fichie----------------------------------------------------------
//	char text[]="Les fichie";
//	compte =fopen("Compt.txt","w");
//	fprintf(compte,text);

//afichege un fichie----------------------------------------------------------
//	compte =fopen("Compt.txt","r");
//	char ligne[100];
//	while (fgets(ligne, sizeof(ligne), compte) != NULL) {
//        printf("%s", ligne); 
//    }

//mettre ajour un fichieX dans un fichie----------------------------------------------------------
//	compte =fopen("Compt.txt","r+");
//	char ligne[100];
//	if (fgets(ligne, sizeof(ligne), compte) != NULL) {
//        snprintf(ligne, sizeof(ligne), "Ceci est une nouvelle ligne avec des modifications.\n");
//        rewind(compte);
//        fputs(ligne, compte);
//    }
	
}
