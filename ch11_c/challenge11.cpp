#include <stdio.h>
int main(){
	int a,b,somme ;
	printf("donne a : ");
	scanf("%d",&a);	
	printf("donne b : ");
	scanf("%d",&b);	
	if(a==b){
		somme = (a+b)*3;
		printf("le triple de leur somme est : %d",somme);
	}else{
		somme = a+b;
		printf("la somme est : %d",somme);
	}
	return 0;

}
