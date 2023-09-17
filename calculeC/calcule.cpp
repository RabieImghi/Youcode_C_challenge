#include <stdio.h>
#include <math.h>
int addit(int a, int b){
	return a+b;
}
int sust(int a, int b){
	return a-b;
}
int multi(int a, int b){
	return a*b;
}
int divi(int a, int b){
	if(b>0)
	return a/b;
	else return 0;
}
int racin(int a){
	if(a>0)
	return sqrt(a);
	else return 0;
}
int pwiss(int a){
	if(a>0) 
	return a*a;
	else return 0;
}

int main(){
	int a,b,chois,result,;
	
	do {
		printf("Choise un operation \n");
		printf("1) addition + \n2) substraction - \n3) multiplication *\n");
		printf("4) division / \n5) Racin carre \n6) pwissans \n7) Quitte\n");
		printf("==========================\n");
		scanf("%d",&chois);
		if(chois== 5 || chois==6){
			printf("donne un nombre ");
			scanf("%d",&a);
		}else if(chois>=1 && chois<=4){
			printf("donne premier nombre ");
			scanf("%d",&a);
			printf("donne deuxieme nombre ");
			scanf("%d",&b);
		}
		switch(chois){
			case 1: {
				printf("%d + %d = %d \n=====================",a,b,addit(a,b));break;
			}
			case 2: {
				printf("%d - %d = %d \n=====================",a,b,sust(a,b)); break;
			}	
			case 3: {
				printf("%d * %d = %d \n=====================",a,b,multi(a,b)); break;
			}
			case 4: {
				printf("%d / %d = %d \n=====================",a,b,divi(a,b)); break;
			}			
			case 5: {
				printf("racin %d = %d\n=====================",a,racin(a)); break;
			}
			case 6: {
				printf("pow %d = %d \n=====================",a,pwiss(a)); break;
			}
			case 7: {
				printf("Merci "); break;
			}
			default : 	printf("choise un operation correcte pleas ! (entre 1 et 7 ) \n");
		}
	}while(chois!=7);
}
