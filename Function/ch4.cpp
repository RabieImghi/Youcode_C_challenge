#include <stdio.h>

int max_4(int a,int b,int c,int d){
	int max=a;
	if(max<b) max =b;
	if(max<c) max =c;
	if(max<d) max =d;
	return max;
}
int max_2(int a,int b){
	int max=a;
	if(max<b) max =b;
	return max;
}
int main(){
	int x,y,z,w;
	printf("Donne x : ");
	scanf("%d",&x);
	printf("Donne y : ");
	scanf("%d",&y);
	printf("Donne y : ");
	scanf("%d",&z);
	printf("Donne y : ");
	scanf("%d",&w);
	printf("max 4 nombre %d\n",max_4(x,y,z,w));
	printf("max 2 premier nombre %d",max_2(x,y));
	
}
