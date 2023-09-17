#include <stdio.h>
#include <math.h>
int main(){
	int N;
	printf("donne N : ");
	scanf("\n%d",&N);
	int n1=N/100;
	int n2=(N%100)/10;
	int n3=(N%100)%10;
	int newN = (n3*100)+(n2*10)+n1;
	printf("\n%d",newN);
	
	
	return 0;
}
