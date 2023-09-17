#include <stdio.h>
int main(){
	int number;
	printf("donne un nombre : ");
	scanf("%d",&number);
	if(number%2==0) printf("le nombre est paire");
	if(number%2!=0) printf("le nombre est impaire");
	return 0;
}
