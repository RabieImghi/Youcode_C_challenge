#include <stdio.h>

int Somme(int a,int b){
	int bgcd;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0)
			bgcd =i;
	}
	return bgcd;
}
int main(){
	int x,y;
	printf("Donne x : ");
	scanf("%d",&x);
	printf("Donne y : ");
	scanf("%d",&y);
	printf("bgcd %d",Somme(x,y));
	
}
