#include <stdio.h>
#include <math.h>
int main(){
	int r;
	float cr;
	printf("donne le rayon de cercle r : ");
	scanf("%d",&r);
	cr = 2*3.14*r;
	printf("la circonference du cercle  : %.3f",cr);
	return 0;
}
