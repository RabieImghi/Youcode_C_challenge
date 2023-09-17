#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,r1,r2,delta;
	printf("donne le nombre a dans l'equation ax²+bx+c : a = ");
	scanf("%d",&a);
	printf("donne le nombre b dans l'equation ax²+bx+c : b = ");
	scanf("%d",&b);
	printf("donne le nombre c dans l'equation ax²+bx+c : c = ");
	scanf("%d",&c);
	delta=(b*b)-4*a*c;
	if(delta>0){
		r1= (-(b*b)-sqrt(delta))/2*a;
		r1= (-(b*b)+sqrt(delta))/2*a;
		printf("les deux soliution de l'exuation est r1 = %d, r2 = %d",r1,r2);		
	}else if (delta=0){
		r1 = (-b*b)/2*a;
		printf("la soliution de l'exuation est r = %d",r1);	
	}else 	printf("pas de soliution de l'exuation");	
}
