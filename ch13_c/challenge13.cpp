#include <stdio.h>
#include <math.h>
int main(){
	int annee,jour,mois,heur,minute,seconde;
	if((annee%4==0 && annee%100!=0) || annee%400==0){
		printf("%d cette annee est bissextile :",annee);
		mois=12;
		jour=366;
		heur=jour*24;
		minute=heur*60;
		seconde=minute*60;
	}else{
		
	}
		
}
