#include <stdio.h>
void menu(){
	printf("_______________________________________\n");
	printf("|                                      |\n");
	printf("|  Chois 1 : Ajoute dans le tableau    |\n");
	printf("|  Chois 2 : affichage de tableau      |\n");
	printf("|  Chois 3 : search dans le tableau    |\n");
	printf("|  Chois 4 : supremme dans le tableau  |\n");
	printf("|  Chois 5 : mittre ajour dans tableau |\n");
	printf("|  Chois 6 : Quitte                    |\n");
	printf("|                                      |\n");
	printf("|______________________________________|\n");
}
void happy(){
	 printf("    *****    \n");
	 printf("  *       *  \n");
	 printf(" *  O   O  * \n");
	 printf("*    \\_/   *\n");
	 printf(" *         * \n");
	 printf("  *       *  \n");
	 printf("    *****    \n");
	 printf("\n");
}
void cure(){
	 printf("\n");
                printf("  ****   ****  \n");
			    printf("******* *******\n");
			    printf("***************\n");
			    printf(" ************* \n");
			    printf("  ***********  \n");
			    printf("    *******    \n");
			    printf("      ***      \n");
			    printf("       *       \n");
}
void sad(){
	printf("\n");
	printf("    *****    \n");
	printf("  *       *  \n");
	printf(" *  ?   ?  * \n");
	printf("*    ___    *\n");
	printf(" *  /  \\ * \n");
	printf("  *       *  \n");
	printf("    *****    \n");
	printf("\n");
}
int main(){
	int chois,NombreElement,i,nombreRecherche,nombreSupreme,nombreMettre;
	int tableDonne[200];
	do{
		menu();
		printf("=======================================\n");
		printf("   Chois un element dans le menu : ");
		scanf("%d",&chois);
		if(chois>7 || chois<0){
			sad();
			printf("\n CHOIS INCORRECT !! \n");
//ajoute dans un tableau =======================================
		}else if(chois==1){
			printf("Donne le nombre des element de table : ");
			scanf("%d",&NombreElement);
			for(i=0;i<NombreElement;i++){
				printf("Donne le nombre %d dans le tableau : ",i+1);
				scanf("%d",&tableDonne[i]);
			}	
			happy();printf("\n Tableau remplire avec succes \n");
//Afichage un tableau =======================================
		}else if(chois==2){
			if(tableDonne[0]!= NULL){
				printf("=================\n");
				for(i=0;i<NombreElement;i++)
				printf("tableau[%d] = %d\n",i+1,tableDonne[i]);
				printf("=================\n");	
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
//cherche dans un tableau =======================================
		}else if(chois==3){
			printf("Donne le nombre que tu recherche : ");
			scanf("%d",&nombreRecherche);
			if(tableDonne[0]!= NULL){
				int test=0;
				for(i=0;i<NombreElement;i++)
					if(nombreRecherche==tableDonne[i]) test=i;
					if(test!=0) printf("\n%d Le nombre que tu recheche se trouve dans la case %d\n",nombreRecherche,test+1);	
					else printf("\n Le nombre que tu recheche ne se trouve pas dans le tableau\n");
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
//supremme dans un tableau =======================================
		}else if(chois==4){
			printf("Donne le nombre que tu supreme : ");
			scanf("%d",&nombreSupreme);
			int caseS;
			if(tableDonne[0]!= NULL){
				for(i=0;i<NombreElement;i++)
					if(nombreSupreme==tableDonne[i])
						caseS=i;
						for(i=caseS;i<NombreElement-1;i++)
							tableDonne[i]=tableDonne[i+1];
							NombreElement--;
							happy();
							printf("\nL'element supremme avec success\n");
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
//mettre a jour dans un tableau =======================================
		}else if(chois==5){
			printf("\n=================\n");
			for(i=0;i<NombreElement;i++)
				printf("case %d = %d\n",i,tableDonne[i]);
				printf("=================\n");
			int caseMettre;
			printf("Donne la case pour mittre ajour : ");
			scanf("%d",&caseMettre);
			if(tableDonne[0]!= NULL){
				for(i=0;i<NombreElement;i++)
					if(caseMettre==i){
						printf("\nDonne la nevaux nombre  : ");
						scanf("%d",&nombreMettre);
						tableDonne[i]=nombreMettre;
					}	
					happy();printf("\nLa case mettre a jour avec success !\n");
					
			}else{
				printf("table vide !!\n");
				sad(); printf("\n");
			}
		}

	}while(chois!=6);
	cure();
	printf("\n=======AU REVOIRE MONSIEUR/MADAME=======\n");
}
