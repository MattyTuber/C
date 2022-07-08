/*Explication sur les fichiers*/
/*Exemple avec fichier binaire et �criture d'une structure dans ce fichier*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*La structure Personnes est d�finie par ses caract�ristiques*/
typedef struct personnes{
	
	/*Variables pour la personne*/	
	char nom [30];
	char prenom [30];
	char sexe;
		
} personne ;


/*Les prototypes de tes fonctions et proc�dures*/
void AfficherPersonne();
void AjouterPersonne();

/*Tu cr�es une sorte de lien de type pointeur vers le fichier*/
FILE *fichierPersonnes;

personne p;

/*Le Main*/
int main(){

int choix;
char rep;
	
do{
	
	
	
	
	printf("Menu\n\t1. Encoder Personne\n\t2. Afficher Personnes\n\t3. Quitter ...\n");
	printf("\nVotre choix: ");
	scanf("%d", &choix);
switch(choix){
	
	case 1:
	
		/*Et ici tu ouvres ton fichier en lui donnant un nom et un type lors de son ouverture*/
		fichierPersonnes = fopen("personnes.dat","a");  //a �criture
	
		/*Etape suivante est de v�rifier si il s'ouvre bien, on va donc utiliser le NULL pour voir si �a se passe bien*/
			if (fichierPersonnes != NULL){		
						    	
				/*Si il est trouv�, donc ouvert tu fais tes traitements
				--> Encodage des donn�es de la personne*/
			
			AjouterPersonne(); //Appel de la proc�dure d'encodage de la personne
	
			}else{
				/*Si pas on affiche un message d'erreur*/    
				printf("Impossible d'ouvrir le fichieR");
			}
	
	fclose(fichierPersonnes); 
	
	break;
	
	
	
	case 2:
	
		printf("\nVoici les personnes du fichier :\n");
		AfficherPersonne();	
	break;
	
	
	case 3:
	
		exit(0);
	
	break;	
		
}

printf("\nVoulez vous continuer le programme ? o-oui / n-non");
fflush(stdin);
rep=getchar();
fflush(stdin);

}while(rep != 'n' && rep!= 'N');

	return 0;
}


/*Proc�dure qui sert � ajouter une personne*/
void AjouterPersonne(){
	
	/*Vu que l'on a besoin du fichier dans cette proc�dure, on la d�clare ici */
	FILE *fichierPersonnes;
	
	/*On donne les donn�es de la structure donc on la d�clare dans cette proc�dure*/
	personne p;
	
	int ok, choix;
	
	char continuer;
	
	do{

		/*Pour chaque �l�ment tu indiques que c'est une personne (p)*/
			printf("\nEntrer le nom de la personne: ");
			scanf("%s", p.nom);
			printf("\nEntrer le prenom de la personne: ");
			scanf("%s", p.prenom);
			fflush(stdin);
			printf("\nSexe de la personne?  (M ou m - F ou f ): ");
			fflush(stdin);
			scanf("%c", &p.sexe);
			
			
		
			/*D�s que l'encodage est fait, il faut �crire l'enregistrement dans le fichier*/
			fwrite(&p,sizeof(p),1,fichierPersonnes);
			//&p --> Pointeur vers l'ensemble de la structure
			//sizeof(p) --> place en m�moire de la structure p
			//1 l'enregistrement dans le fichier fichierPersonnes	

	
	printf("\nEnregistrement de %s %s fait dans le fichier Personnes �ffectu�! ", p.nom, p.prenom);	
		fflush(stdin);
		printf("\n\nContinuer encodage d'une personne ? (o-oui / n-non): " );	
		fflush(stdin);
		scanf("%c",&continuer);
		

			
	}while(continuer != 'n' && continuer !='N');
	

	
}

/*Proc�dure qui va affihcer les personnes*/
void AfficherPersonne(){
	
	/*Tu as besoin de ton  fichier Personnes donc on lui donne son adresse via le pointeur*/
	FILE* fichierPersonnes;

	/*On affiche toutes les personnes donc on la d�clare*/
	personne  p;

//Maintenant on va afficher � l'�cran le contenu de ton fichier
	fichierPersonnes= fopen("personnes.dat","r"); 
	
	/*Si le fichier n'est pas pr�sent alors on affiche le message*/
	if (!fichierPersonnes){
		
		printf("\nErreur: Fichier introuvable");
	
	}else{
		
		/*Ici � la place d'utiliser un fwrite ou lit tout le fichier et on en ressort les enregistrements personnes*/
		fread(&p,sizeof(p),1,fichierPersonnes);

		//Tant que la fin du fichier n'est pas atteinte alors
		while(!feof(fichierPersonnes)){
			
			/*On affiche � l'�cran sous le format que l'on souhaite*/
			printf("\nNom: %s, Prenom: %s, Sexe: %c, telephone: %s ,gsm: %s",p.nom, p.prenom, p.sexe);
			fread(&p,sizeof(p),1,fichierPersonnes);
		}
		
	}
	// Et tu fermes enfin ton fichier
	fclose(fichierPersonnes);

}


