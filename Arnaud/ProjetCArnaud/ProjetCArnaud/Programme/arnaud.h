#include <stdio.h>
#include <stdlib.h>
#include<conio-bis.h>

void tritableau(int tableau[], int tailletableau){

     int temp, i, j;
 
    for (i=0; i<tailletableau; i++){
     	
        for(j=i; j<tailletableau; j++){
        	
            if(tableau[j]<tableau[i]) {
            	
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;
            }
        }
	}
}

int verifierOk (int valeur ){
	
 	if (valeur == 1) {
 		
 		return 1;
	
	 }else{
	 	
	 	return 0;
	 }
}
	 
int verifierInt (int val, int borneInf, int borneSup){
	
	if(val >=  borneInf && val <= borneSup){
		
	return 1;
		
	}else{
		
	return 0;	
	}
	
}	 

float verifierFloat (float val, float borneInf, float borneSup){
	
	if(val >  borneInf && val <= borneSup){
		
	return 1;
		
	}else{
		
	return 0;	
	}
}

void rechDicho (int val, int tableau[], int taille)
{
	
	int debut = 1, fin = taille, milieu;
	
	milieu = ((debut+fin)/2) ;
	
	while(*(tableau+milieu) != val && debut <= fin){
		
			if (val < (*tableau+milieu)){
				
			fin = milieu - 1;		
				
			}else{
				
			fin = milieu + 1;	
		
			}	
	
		milieu = ((debut+milieu)/2) ;
}
	
	/*
	if (tableau[milieu] == val){
		
		printf("\nL'%cl%cment %d se trouve en position %d",130, 130 , val ,milieu+1);
		
	}else{
		
		printf("\nL'%cl%cment %d ne se trouve pas dans le tableau!!", 130, 130  , val);		
	}*/
	
}

void saisie(char *ch,char *autorise) //Ajouter le numéro de caract max
{
	char c;
	int i;
	
	*(ch+i)=getch();
	while(*(ch+i)!='\r' && *(ch+i)!=27) // \t =<entrée> pour getch()
	{
		if(strchr(autorise,*(ch+i))!=NULL) //Renvoie NULL si pas trouvé
		{
			printf("%c",*(ch+i));
			i++;
		}
		*(ch+i)=getch();
	}
	
	*(ch+i+1)='\0';
}
