#include <stdio.h>
#include <string.h>
int main(){
	char nom[50];
	int sm=0,i=0;
	printf("Donne le nom : ");
	gets(nom);
	// sm = strlen(nom);
	while (nom[i] != '\0') {
        sm++;
        i++;
    }
	printf("%d",sm);

}
