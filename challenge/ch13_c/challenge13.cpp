#include <stdio.h>
#include <math.h>
int main(){
	int annee,jour,mois,heur,minute,seconde;
	printf("Donne en annee : ");
	scanf("%d",&annee);
	if((annee%4==0 && annee%100!=0) || annee%400==0){
		printf("%d cette annee est bissextile :",annee);
		mois=12;
		jour=366;
		heur=jour*24;
		minute=heur*60;
		seconde=minute*60;
	}else{
		printf("%d cette annee Ne pas bissextile :",annee);
		mois=12;
		jour=365;
		heur=jour*24;
		minute=heur*60;
		seconde=minute*60;
	}
	printf("\n nombre des mois : %d",mois);
	printf("\n nombre des jour : %d",jour);
	printf("\n nombre des heur : %d",heur);
	printf("\n nombre des minute : %d",minute);
	printf("\n nombre des seconde : %d",seconde);
		
}
