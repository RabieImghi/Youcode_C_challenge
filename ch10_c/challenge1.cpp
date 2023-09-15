#include <stdio.h>
int main(){
	char ch;
	printf("donne un character : ");
	ch = getchar();
	switch(ch){
		case 'a':printf("nombre est voyelle "); break;
		case 'e':printf("nombre est voyelle "); break;
		case 'i':printf("nombre est voyelle "); break;
		case 'o':printf("nombre est voyelle "); break;
		case 'y':printf("nombre est voyelle "); break;
		case 'u':printf("nombre est voyelle "); break;
		default  :printf("nombre non voyelle "); break;
	}
	return 0;

}
