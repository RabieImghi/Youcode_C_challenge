#include <stdio.h>
#include <stdlib.h>
int main(){
	int Number, i,test=1;
	printf("Donne un nombre : ");
	scanf("%d", &Number);
    if(Number<=1){
       test =0;
	}else for(i=2;i<=Number/2;i++)	{
		if(Number %i==0){
			test =0;
	    	break;
		} 
	}
    if(test)	{
	printf("est premier");
	} else	printf("ne pas premier");

		
}
