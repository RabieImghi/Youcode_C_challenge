#include <stdio.h>
int main(){
	int numberDes,i=0,j,mod;
	int octal[20],HexaDecimal[20];
	printf("donne un nombre dicemal : ");
	scanf("%d",&numberDes);
	int temp=numberDes;
	while(temp!=0){
		octal[i] =  temp%8;
		temp=temp/8;
		i++;
	};
	printf("%d en octale est : ",numberDes);
	for(j=i-1;j>=0;j--){
		printf("%d",octal[j]);
	}
	printf("\n======================\n");
	int fakeNb=numberDes;
	j=0;
	while(fakeNb!=0){
		HexaDecimal[j]=fakeNb%16;
		fakeNb=fakeNb/16;
		j++;
	}
	printf("%d en HexaDecimal est : ",numberDes);
	for(i=j-1;i>=0;i--){
		if(HexaDecimal[i]==10) printf("A");
		else if(HexaDecimal[i]==11) printf("B");
		else if(HexaDecimal[i]==12) printf("C");
		else if(HexaDecimal[i]==13) printf("D");
		else if(HexaDecimal[i]==14) printf("E");
		else if(HexaDecimal[i]==15) printf("F");
		else
		printf("%d",HexaDecimal[i]);
	}
	
	
 









	return 0;
}

