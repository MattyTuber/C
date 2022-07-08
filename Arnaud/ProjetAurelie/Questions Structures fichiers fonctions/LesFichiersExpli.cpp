/*Explication sur les fichiers*/
/*Exemple avec fichier binaire et écriture d'une structure dans ce fichier*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*La structure Personnes est définie par ses caractéristiques*/
typedef struct Personnes{
	
	/*Variables pour la personne*/	
	char nom [30];
	char prenom [30];
	char sexe;
	char telephone [10];
	char gsm [11];	
} personne;


/*Les prototypes de tes fonctions et procédures*/
void AfficherPersonne();
void AjouterPersonne(personne *);


/*Le Main*/
int main(){
	
personne p;

int choix;
char continuer;

/*Tu crées une sorte de lien de type pointeur vers le fichier*/
FILE* fichierPersonnes;

/*Et ici tu ouvres ton fichier en lui donnant un nom et un type lors de son ouverture*/
fichierPersonnes = fopen("personnes.dat","a");  //a écriture

/*Etape suivante est de vérifier si il s'ouvre bien, on va donc utiliser le NULL pour voir si ça se passe bien*/
if (fichierPersonnes != NULL){		
					    	
		/*Si il est trouvé, donc ouvert tu fais tes traitements
		--> Encodage des données de la personne
		*/
		do{
			AjouterPersonne(&p);
			fwrite(&p,sizeof(p),1,fichierPersonnes);
			fclose(fichierPersonnes); 
		
		printf("\n\nContinuer encodage d'une personne ? (o-oui / n-non): " );	
		fflush(stdin);
		continuer=getchar();
			
	}while(continuer != 'n' && continuer !='N');
		

		}else{
			/*Si pas on affiche un message d'erreur*/    
			printf("Impossible d'ouvrir le fichieR");
}



		printf("\nVoici les personnes du fichier :");
	AfficherPersonne();	

	return 0;
}



void AjouterPersonne(personne *p){
	
	FILE* fichierPersonnes;
	int ok, choix;


		/*Pour chaque élément tu indiques que c'est une personne (p)*/
			printf("\nEntrer le nom de la personne: ");
			scanf("%s", p->nom);
			printf("\nEntrer le prenom de la personne: ");
			scanf("%s", p->prenom);
			do{
				ok=0;
				printf("\nSexe de la personne?  (M ou m - F ou f ): ");
				fflush(stdin);
				scanf("%c", &p->sexe);
				fflush(stdin);
				if (p->sexe == 'M' || p->sexe == 'm' || p->sexe == 'F' || p->sexe == 'f'){
				ok=1;
				}else{
				printf("\nRecommencez ...\n");
				}
			}while(!ok);
	
			printf("\nEntrer le telephone de la personne (format 064859679): ");
			scanf("%s", p->telephone);
			
			printf("\nEntrer le gsm de la personne (format 049563321): ");
			scanf("%s", p->gsm);
			
			printf("\nEnregistrement de %s %s fait dans le fichier Personnes", p->nom, p->prenom);	
		
}

void AfficherPersonne(){
	
	FILE*fichierPersonnes;
	
	struct Personnes p;

//Maintenant on va afficher à l'écran le contenu de ton fichier
	fichierPersonnes = fopen("personnes.dat","r"); 
	
	if (!fichierPersonnes){
		
		printf("\nErreur: Fichier introuvable");
	
	}else{
		
		/*Ici à la place d'utiliser un fwrite ou lit tout le fichier et on en ressort les enregistrements personnes*/
		fread(&p,sizeof(p),1,fichierPersonnes);
		
		while(!feof(fichierPersonnes)){
			
			
			printf("\nNom: %s, Prenom: %s, Sexe: %c, telephone: %s ,gsm: %s",p.nom,p.prenom,p.sexe,p.telephone,p.gsm);
			fread(&p,sizeof(p),1,fichierPersonnes);
		}
		
	}
	// Femeture du fichier
	fclose(fichierPersonnes);


}

