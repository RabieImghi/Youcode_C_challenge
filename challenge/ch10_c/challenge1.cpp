#include <stdio.h>
int main(){
	char ch;
	printf("donne un character : ");
	ch = getchar();
	switch(ch){
		case 'a':printf("%c est voyelle ",ch); break;
		case 'e':printf("%c est voyelle ",ch); break;
		case 'i':printf("%c est voyelle ",ch); break;
		case 'o':printf("%c est voyelle ",ch); break;
		case 'y':printf("%c est voyelle ",ch); break;
		case 'u':printf("%c est voyelle ",ch); break;
		default  :printf("%c non voyelle ",ch); break;
	}
	return 0;

}
