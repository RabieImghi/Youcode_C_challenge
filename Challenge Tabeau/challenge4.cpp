#include <stdio.h>
#include <math.h>
int main(){
	float Notes[100],note,moyenne,somme=0,max=0,min=pow(99,200);
	int nombreNote=0,nbNoteSupMoy=0,i;
	do{
		printf("Donne la note entre (0 et 20) %d : ",nombreNote+1);
		scanf("%f",&Notes[nombreNote]);
		note=Notes[nombreNote];
		nombreNote++;
		if(note==0) printf("Error la note saisi egale a 0");
	}while(note<=20 && note>0);
	nombreNote--;
	if(nombreNote>=1){
	
		printf("\n\nLe nombre des note est : %d\n",nombreNote);
		printf("================================\n\n");
		//calcule somme des note
		for(i=0;i<nombreNote;i++){
			somme+=Notes[i];
		}
		//calcule le moyen
		moyenne=somme/nombreNote;
		printf("La moyenne des notes est : %.2f\n",moyenne);
		printf("================================\n\n");
		//comparer et afiche les note
		printf("Ltous les note que size est : \n");
		printf("================================\n");
		for(i=0;i<nombreNote-1;i++){
			if(Notes[i]<moyenne) 
				printf("La Note %d est %.2f  : inferieur a la moyenne %.2f\n",i+1,Notes[i],moyenne);
			else if(Notes[i]>moyenne) {
				printf("La Note %d est %.2f  : superieur  a la moyenne %.2f\n",i+1,Notes[i],moyenne);
				nbNoteSupMoy++;
			}
			else printf("La Note %d est %.2f  : egal a la moyenne %.2f\n ",i+1,Notes[i],moyenne);
		}
		printf("================================\n\n");
		printf("Les notes superieures a la moyenne : %d\n",nbNoteSupMoy);
		for(i=0;i<nombreNote-1;i++){
			if(Notes[i]>moyenne) {
				printf("La Note  %.2f  : superieur a la moyenne %.2f \n",Notes[i],moyenne);
					
			}	
		}
		//le maximun et le minimun
		for(i=0;i<nombreNote;i++){
			if(Notes[i]<min) min=Notes[i]; 
			if(Notes[i]>max) max=Notes[i];
		}
		printf("================================\n\n");
		printf("le maximun note est : %.2f\n",max);
		printf("le minimun note est : %.2f",min);
			
	}
}
//amend
