#include <stdio.h>
void menu(){
	printf("_______________________________________\n");
	printf("|                                      |\n");
	printf("|  Chois 1 : Ajoiute dans le tableau   |\n");
	printf("|  Chois 2 : affichage de tableau      |\n");
	printf("|  Chois 3 : search dans le tableau    |\n");
	printf("|  Chois 4 : supremme dans le tableau  |\n");
	printf("|  Chois 5 : mittre ajour dans tableau |\n");
	printf("|  Chois 6 : Quitte                    |\n");
	printf("|                                      |\n");
	printf("|______________________________________|\n");
}
void sad(){
	printf("   *  *  \n");
	printf(" * ?  ? *  \n");
	printf("*   ^    *  \n");
	printf(" * ---- *  \n");
	printf("   *  *  \n");
}
int main(){
	int chois,NombreElement,i,nombreRecherche;
	int tableDonne[200];
	do{
		menu();
		printf("Chois un element dans le menu : ");
		scanf("%d",&chois);
		if(chois>7 || chois<0){
			sad();
			printf("\n CHOIS INCORRECT !! \n");
		}else if(chois==1){
			printf("Donne le nombre des element de table : ");
			scanf("%d",&NombreElement);
			for(i=0;i<NombreElement;i++){
				printf("Donne le nombre %d dans le tableau : ",i+1);
				scanf("%d",&tableDonne[i]);
			}	
		}else if(chois==2){
			if(tableDonne[0]!= NULL){
				for(i=0;i<NombreElement;i++)
					printf("%d\n",tableDonne[i]);
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
		}else if(chois==3){
			printf("Donne le nombre que tu recherche : ");
			scanf("%d",&nombreRecherche);
			if(tableDonne[0]!= NULL){
				int test=0;
				for(i=0;i<NombreElement;i++)
					if(nombreRecherche==tableDonne[i]) test=i;
					if(test!=0) printf("\n Le nombre que tu recheche se trouve dans la case %d\n",test);	
					else printf("\n Le nombre que tu recheche ne se trouve pas dans le tableau\n");
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
		}
	}while(chois!=6);
}