#include <stdio.h>
int main(){
	float tpFH,tpDG;
	char sensation[6];
	printf("donne la temperature en Fahrenheit : ");
	scanf("%f",&tpFH);
	tpDG = (tpFH-32)/1.8;
	if(tpDG<=10) printf("\nla temperature est %.2f DG : tres froid",tpDG);
	else if(tpDG<=20) printf("\nla temperature est %.2f DG : froid",tpDG);
	else if(tpDG<=35) printf("\nla temperature est %.2f DG : chaud",tpDG);
	else printf("\nla temperature est %.2f DG : tres chaud",tpDG);
	return 0;
}
