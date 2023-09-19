#include <stdio.h>
void bonjour(){
	printf("Youcode\n");
}
int Somme(int a,int b){
	return a+b;
}
int main(){
	int x,y;
	bonjour();
	printf("Donne x : ");
	scanf("%d",&x);
	printf("Donne y : ");
	scanf("%d",&y);
	printf("La some de x+y = %d",Somme(x,y));
	
}
