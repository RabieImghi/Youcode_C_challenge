#include <stdio.h>
#include <math.h>
int main(){
	int N;
	printf("donne N : ");
	scanf("\n%d",&N);
	int n1=N/100;
	printf("\n%d",n1);
	int n2=(N%100)/10;
	printf("\n%d",n2);
	int n3=(N%100)%10;
	printf("\n%d",n3);
	
	int newN = (n3*100)+(n2*10)+n1;
	printf("\n%d",newN);
	
	
	return 0;
}
