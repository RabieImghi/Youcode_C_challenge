#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int n=-8,i,j;
	 for (i=1;i<=n;i++) {
        for (j=1;j<=n-i;j++) {
            printf(" ");
        }
        for (j= 1; j <= 2*i-1; j++) {
            printf("*");
        }

        printf("\n");
    }
	
		
}
