#include <stdio.h>
int main(){
	int a,b,c,d,somme;
	float moyen;
	printf("donne a : ");
	scanf("%d",&a);
	printf("donne b : ");
	scanf("%d",&b);
	printf("donne c : ");
	scanf("%d",&c);
	printf("donne d : ");
	scanf("%d",&d);
	somme = a+b+c+d;
	moyen=float(somme)/4;
	printf("\nla somme des 4 number = %d",somme);
	printf("\nla moyen des 4 number = %.3f",moyen);
	return 0;
}
