#include <stdio.h>
int main(){
	char nom[20], prenom[20], sexe[10];
	int age, numeroTele;
	printf("Write your first name pleas : ");
	scanf("%s",&prenom);
	printf("\nWrite you last name pleas : ");
	scanf("%s",&nom);
	printf("\nWrite you AGE F/M : ");
	scanf("%s",&sexe);
	printf("\nWrite you year pleas : ");
	scanf("%d",&age);
	printf("\nWrite you number Phone pleas : ");
	scanf("%d",&numeroTele);
	printf("\n\nThas your information :");
	printf("\nyour name : %s %s\nyour year : %d\nyour sex : %s\nyour phone : %d"
	,prenom,nom,age,sexe,numeroTele);
	return 0;
}
