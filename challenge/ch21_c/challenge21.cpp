#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int n,i,j;
	printf("donne nombre des ligne : ");
	scanf("%d",&n);
//	for (i=1;i<=n;i++) {
//        for (j=1;j<=n-i;j++) {
//            printf(" ");
//        }
//        for (j= 1; j <= 2*i-1; j++) {
//            printf("*");
//        }
//        printf("\n");
//    }
	n=n*(-1);
	for (i=1;i<=n;i++) {
        for (j=n;j>n-;j++) {
            printf(" ");
        }
        for (j= 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
   
	
		
}
