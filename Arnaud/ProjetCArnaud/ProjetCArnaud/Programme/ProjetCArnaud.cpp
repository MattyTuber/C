/*Les bibliothèques*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <conio-bis.h>
#include "cadre.h"
#include <time.h>
#include "arnaud.h"

/*Les Structures*/
	
typedef struct dates{

	/*Variables joueurs*/
	int jour;
	int mois;
	int annee;
		
}date ; //De type date

	/*Ma définition de type joueur*/
typedef struct joueurs{
	
	/*Variables joueurs*/	
	char nom [30];
	char prenom [30];
	char sexe;
	char email [40];
	dates date; //Tytpedef de date
	char telephone [11];
	char gsm [12];
	int  CotisationPayee;	
	
}joueur; //De type joueur

/*Ma définition de type terrain*/
typedef struct terrains{
	
	/*Les variables terrains*/
	int numeroTerrain;
	char surface [13]; 
	int occupe ;

}terrain; //De type terrain


/*Prototypes de Fonctions et Procédures*/

void AfficherMenu(int *); //Procédure qui affiche le Menu (avec pointeur sur le choix)

void AjouterJoueur(joueur *); //Procédure qui ajoute un joueur
void AfficherFichierJoueurs(); //Procédure qui sert à afficher le contenu du fichier de Membres
void VerifierMail(); //Procédure qui vérifie la validité de l'adresse email
int  VerificationAffiliation (int); //Fonction qui vérifie la validité du code d'affiliation

void AjouterTerrain(terrain *); //Procédure qui ajoute un terrain
void AfficherFichierTerrains(); //Procédure qui sert à afficher le contenu du fichier de terrains
void surfaceExiste(char *, int *); //Procédure qui vérifie si la surface entrée par l'utilisateur est présente dans le fichier surfaces.txt

void AfficherFichierHoraire(char *); //Procédure qui affiche l'horaire en fonction de la saison choisier par l'utilisateur

void Copiehoraire (char *, char *); //Procédure qui copie le contenu du fichier Horaire général dans le fichier horaire de chaque terrain crée

void AjouterReservation(); //Procédure qui ajoute une réservation 


/*Divers*/
void Clear();
void AfficherCadre();


int main()
{
	
	/*Divers*/
		system("COLOR F4");

		/*Format d'affichage*/
		setlocale(LC_TIME,"");
		
		
		
AfficherCadre();

/*Les Variables*/
	/*Les int*/ int choix, ok, i, consulter, okN; 
	/*Les char*/ char rep,choixEH, repJ, repT;
				char fichierHoraireEte  [15] = "horaireEte.txt";  
				char fichierHoraireHiver[15] = "horaireHiv.txt"; 
				char ete  [25] = "HoraireEte_";
				char hiver[25] = "HoraireHiver_";
				char membre [30];

	/*Les types avec initialisation des variables joueur et terrain*/ 
	joueur j ; 

	terrain t;

	
/*Les Fichiers*/
FILE* fichierJoueurs ;
FILE* fichierTerrains ;
FILE* fichierReservations ;
FILE* fichierSurfaces;
FILE* HoraireN;
FILE* HoraireN2;

/*Début du programme*/

 
do{
	system("COLOR F4");
	 
	/*Affichage du Menu*/
	Clear();
	AfficherMenu(&choix); //Récupère le choix de l'utilisateur
	switch(choix){
		
				/*Case 1 : Ajouter un Joueur dans le fichier Joueurs*/
				case 1:
						fichierJoueurs = fopen ("joueurs.dat", "a");
					    
						if (fichierJoueurs != NULL){		
					      	
							do{
							
							AjouterJoueur(&j);
							fwrite(&j,sizeof(j),1,fichierJoueurs);
							fclose(fichierJoueurs);
							printf("\nAjouter un nouveau membre ? o-oui / n-non ? : ")	;
							fflush(stdin);
							repJ=getchar();
							fflush(stdin);
							
						}while(repJ !='n' && repJ!='N');
						 		 	
				}else{
					    	
					        printf("\nImpossible d'ouvrir le fichier joueurs.dat");
					}

					fclose(fichierJoueurs); 
					    
				break;
				/*Fin du case Ajout joueur*/
				
				
				/*Case 2 : On affiche à l'écran la liste complète des joueurs/joueuses*/
				case 2:
					printf("\nAffichage du fichier des membres du club! \n");
					AfficherFichierJoueurs();	
					
				break;
				/*Fin du case 2*/
				
				/*Case 3 :  Recherche un membre dans le fichier joueurs */
				case 3:
					
						printf("\nEntrer le NOM du membre %c rechercher : ", 133);
						scanf("%s", membre);
						
						fichierJoueurs = fopen("joueurs.dat", "r");
						
							if (fichierJoueurs != NULL){	
								
								
								fread(&j,sizeof(j),1,fichierJoueurs);
				
							do{
								
								okN=0;
								
								if (strcmp(membre, j.nom)==0){
									
										okN=1; 
										
									}else{
										
										fread(&j,sizeof(j),1,fichierJoueurs);
									}
									
							}while (okN && !feof(fichierJoueurs));
										
							if (ok)	{
								
									printf("\n\tLe membre a %ct%c trouv%c !\n", 130, 130, 130);
									printf("\nVoici sa fiche :");
									printf("\nSon nom : %s", j.nom);
									printf("\nSon pr%cnom : %s",130,  j.prenom);
									printf("\nSexe : %c", j.sexe);
									printf("\nSa date de naissance : %d/%d/%d", j.date.jour, j.date.mois, j.date.annee);
									printf("\nSon e-mail : %s", j.email);
									printf("\nSon num%cro de t%cl%cphone : %s",130, 130, 130,  j.telephone);
									printf("\nSon num%cro de gsm       : %s",138,  j.gsm);
									printf("\nAffili%c : %d",130 ,j.CotisationPayee);			
								
							}else{
								
							printf("\nle Membre %s non trouv%c",membre, 130);	
								
							}		
							
						}else{
							
							printf("\nImpossible d'ouvrir le fichier joueurs.dat");
						}
										
				break;
				
				/*Case 4 : Ajouter un Terrain dans le fichier Terrains*/	
				case 4:
						fichierTerrains 	= fopen ("terrains.dat", "a+");
						
						if (fichierTerrains != NULL ){
					    		
					    do{
					    	/*Appel de la procédure qui va permettre l'encodage du terrain*/
					    	AjouterTerrain(&t);
					    	
					    	printf("\nVoulez-vous ajouter un terrain ? o-oui n-non: ");
							fflush(stdin);
							repT=getchar();
							fflush(stdin);
	
						}while ( repT != 'N' && repT != 'n');	
							
											        
					    }else{
					        
							/*Erreur si fichier pas crée*/
					        printf("\nImpossible d'ouvrir le fichier terrains.dat");
					    }
					    
				fclose (fichierTerrains);	
				
				break;
				/*Fin du case 4*/	
				
				
				/*Case 5 : Procédure qui affiche la liste des terrains*/	
				case 5:
					
					printf("\nAffichage du fichier des terrains du club! \n");
					AfficherFichierTerrains();	
						
				break;
				/*Fin du case 5/
				
				
				/*Case 6 : Affichage du fichier horaires été ou hiver ...*/
				case 6:
					
					
					do{
					
						consulter=0;
						
						printf("\nPour quelle saison voulez-vous consulter les horaires (1- Et%c / 2- Hiver)?: ", 130);
						scanf("%d", &choixEH);
					
						if(choixEH ==1 ){
						
						consulter = 1;	
						printf("\nVoici les heures disponibles pour les terrains en saison d'%ct%c!\n\n", 130, 130);	
						AfficherFichierHoraire(fichierHoraireEte);	
						
						}else if (choixEH == 2){
						
						consulter = 1;
						printf("\nVoici les heures disponibles pour les terrains en saison d'hiver!\n\n");	
						AfficherFichierHoraire(fichierHoraireHiver);	
						
						}else if (choixEH != 1 || choixEH != 2 ){
							
							printf("Recommencer svp ... \n");
							consulter = 0;
							
						}	
						
			}while(!consulter);
						
				break;
				/*Fin du Case 6*/
				
				
				/*Case 7 : Afficher les horaires disponible pour le terrain demandé*/	
				case 7:
					
				//printf("\nPour quelle terrain voulez-vous connaitre les horaires ? ");
				//AfficherFichierHoraire(&ete, &hiver);
				
									
				break;
				/*Fin du Case 7*/
					
				/*Case 8 : */	
				case 8:
					fichierReservations = fopen ("reservation.dat", "a");
					
					if(fichierReservations != NULL){
						
						AjouterReservation ();
							
					}else{
						
					printf("\Erreur ouverture du fichier reservation.dat");
						
					}
	
					
				break;
				/*Fin du case 8*/
				
				/*Case 9 :  Fermeture du Programme ... */
				case 9:
				
					printf("\nFermeture du programme ... ");
					exit(0);	
					
				break;
				/*Fin du case 9*/
				
			 
				/*début du case Bonus*/			 
 				case 10:
 					
 					gotoxy(70,1); cadre(27,4,78,1);	
 					gotoxy(79,2); printf("\t   Prix des terrains");
 					gotoxy(79,3); for (int v=0;v<27;v++) printf("=");
 					gotoxy(79,4); printf("Prix Membre : Gratuit");
 					gotoxy(79,5); printf("Prix non Membre : 10/Heure");
 					for (int cc=0;cc<20;cc++) printf("\n");
 					
 				break; 
				/*Fin du case Bonus*/	
						 
			 	default : 
			 	
			 		printf("\nMauvais choix, recommencez ... \n");
			 		system("COLOR 47");
			 		
			 	break;
			 		    
			}

	printf("\n");
	
	
	fflush(stdin);
	printf("\nVoulez-vous continuer %c utiliser le programme o-oui / n-non ?: ", 133);
	fflush(stdin);
	rep=getchar();	

	/*... jusqu'à ce que l'utilisateur souhaite arrêter les tâches*/
	}while (rep != 'n' && rep!='N');
	

	return 0;
}

/*Fonctions et Procédures*/

void AjouterJoueur(joueur *j){
	
	//FILE *fichierJoueurs;
	
	int okAffiliation, okteleph, okgsm,okMail, okSexe, jourOK, moisOK, anneeOK, okNom, okPrenom; //Validité coordonnées
	int em;
	
	char c, d; //Lecture de caractères pour le téléphone et le gsm
	char gsm[12], tel[11];
	char NomTmp [30] , PrenomTmp [30];
	char arob [13]= "@tcmanage.be";
	int i, g, t;// Compteurs
	
	//Encodage des données du joueurs

	
		//Encodage et vérification du nom du joueur
		 do{
		 	 okNom = 0;
		 	 
			 printf("\nEntrer le nom du joueur: ");
			 scanf("%s", j->nom);
			 	
			 if(strlen(j->nom)<=2){
			 	
			 	okNom =0;
			 	
				printf("\nVeuillez entrer un nom correct ! \n");
						
			}else{
				
			okNom =1;
			
			}
		 	
		 }while (!okNom);
			
		
		//Encodage et vérification du nom du joueur
		do{
			okPrenom =0;	
			printf("\nEntrer le pr%cnom du joueur: ", 138);
			scanf("%s", j->prenom);
			
			if(strlen(j->prenom)<=2) {
				
				okPrenom = 0;
				
				printf("\nVeuillez entrer un pr%cnom correct ! ",130);
					
			}else{
				
				okPrenom =1;
			
			}	
			
		}while(!okPrenom);
			
		
		//Encodage du sexe du joueur/joueuse
		do{
			okSexe=0;
			printf("\nSexe du membre ?  (M ou m - F ou f ): ");
			fflush(stdin);
			scanf("%c", &j->sexe);
			fflush(stdin);
			
			if (j->sexe == 'M' || j->sexe == 'm' || j->sexe == 'F' || j->sexe == 'f'){
				
				okSexe=1;
				
			}else{
				
				printf("\nErreur, recommencez svp  ...\n");
			}
		}while(!okSexe);
		
		
		//Encodage et vérification de l'adresse mail de l'utilisateur
			
			strcpy(NomTmp, j->nom);
			
			strcpy (PrenomTmp, j->prenom);
			
			strcat(PrenomTmp,arob);
			
			strcat (NomTmp, PrenomTmp);
			
			strcpy(j->email, NomTmp);
			
			for(em=0;em<strlen(j->email);em++){
				
				j->email[em]=tolower(j->email[em]);
			}
			
			printf("\nVotre email du club g%cn%cr%c : %s\n", 130,130, 130, j->email);
			
		//Encodage et vérification de la date de naissance

	        	printf("\nEntrer la date de naissance du membre %s %s : ", j->nom, j->prenom);
	        	
				//Partie jour
				do{
					jourOK=0;	        	
					printf("\n\tLe jour (format: jj): ");
		        	scanf("%d", &j->date.jour);
		        	
		        	if (  verifierInt(j->date.jour,1,31)   ){
		        		
		        		jourOK = 1;	
		        		
		        		}else{
		        			
		        		printf("\t\tErreur ... recommencez svp");
		        		
						jourOK = 0;
						
					}			
				}while(!jourOK) ;       	
					
		        //Partie Mois
		        do{
					moisOK=0;
					printf("\n\tLe mois (format : mm): ");
	        		scanf("%d", &j->date.mois);
	        		
	        		if (verifierInt(j->date.mois,1,12)){
	        			
		        		moisOK = 1;	
		        		
		        		}else{
		        			
		        		printf("\t\tErreur ... recommencez svp");
		        		
						moisOK = 0;
					}			
				
				}while(!moisOK) ; 
				
				//Partie Année
				do{
					anneeOK=0;
					
					printf("\n\tL'ann%ce (format  : aaaa): ", 130);
	        		scanf("%d", &j->date.annee);
	        		
	        		if (verifierInt(j->date.annee,1900,2018)){
	        			
		        		anneeOK = 1;	
		        		
		        		}else{
		        			
		        		printf("\t\tErreur ... recommencez svp");
		        		
						anneeOK = 0;
					}	
				
				}while(!anneeOK); 
	
				printf("\n\t\tLa date de naissance compl%cte est : %d/%d/%d \n",138,  j->date.jour,j->date.mois, j->date.annee);
				
		
		//Encodage et vérification du numéro de téléphone
				
				printf("\nEntrer le num%cro de t%cl%cphone du joueur: ", 130, 130, 130);
				t=0;
				tel[t]='0';
				printf("%c",tel[t]);
				t++;
				do {
					
				    d=getch();
				    
				    if(d>='0' && d<='9') {
				    	
				        tel[t]=d;
				        printf("%c",d);
				        t++;
				    }
				    
				    if(d==8){ 
					
						if(t>1) {
				       	t--;
				       	printf("\b \b");
				      }
				      
					if(t==3) {
						 t--;
				        printf("\b \b");
				      }
				    }
				    
					if((t==3)){
				      
					   tel[t]='/';
				       printf("%c",tel[t]);
				       t++;
				    }  
				       
				}while(t<10);
				tel[t]='\0';
				
				
				strcpy(j->telephone, tel);
				
			
		//Encodage et vérification du numéro de gsm

				printf("\n\nEntrer le num%cro de gsm du joueur: ", 130);
				g=0;
				gsm[g]='0';
				gsm[g+1] = '4';
				printf("%c%c",gsm[g], gsm[g+1]);
				g++;
				do{
				    c=getch();
				    
				    if(c>='0' && c<='9') {
				        gsm[g]=c;
				        printf("%c",c);
				        g++;
				    }
				    
					if(c==8){ 
						if(g>1)
				      {
				       g--;
				       printf("\b \b");
				      }
				      if(g==5){ 
					  	g--;
				        printf("\b \b");
				      }
				    }
				    
					if((g==3)){
				       gsm[g]='/';
				       printf("%c",gsm[g]);
				       g++;
				    }  
				       
				}while(g<10);
				gsm[g]='\0';
				
				strcpy(j->gsm, gsm);
				
				
		//On test si la valeur de la cotisatin payée entrée par l'utilisateur est correcte
			do{
				okAffiliation=0;
				printf("\n\nEn odre d'affiliation (1 pour oui / 0 pour non ): ");
				scanf("%d", &j->CotisationPayee);
				okAffiliation = VerificationAffiliation(j->CotisationPayee);					
													
		}while (!okAffiliation);
		
		printf("\nLe code d'affiliation est : %d", j->CotisationPayee);
	
	printf("\nFin de l'encodage de %s %s\n", j->nom,j->prenom);
			
}


void AfficherMenu (int *choix)
	{
	
	AfficherCadre();
	
	/*Partie Heure et Date*/
	wchar_t str[100];
    time_t tI = time(NULL);
    wcsftime(str, 100, L"%A %c", localtime(&tI));
	
	/*Affichge de l'heure et de la date*/	
	gotoxy (5,2) ; wprintf(L"Date et heure : %Ls", str);	
	
	/*Affichage de l'entête du programme*/
	gotoxy(5,4);printf("Travail de fin d'ann%ce - Projet de Programmation  - Arnaud", 130);
		
	/*Menu Partie Joueurs*/
	gotoxy (10,7);  printf("\t\t====Menu Membres====");
	gotoxy (10,8);  printf("1. Ajouter Membre");
	gotoxy (10,9); printf("2. Afficher Membre");
	gotoxy (10,10); printf("3. Rechercher Membre");
	gotoxy (10,11); for (int des=0;des<53;des++ )printf("*"); 
	
	/*Menu Partie Terrains*/
	gotoxy (10,12); printf("\t\t ====Menu Terrains====");
	gotoxy (10,13); printf("4. Ajouter terrain");
	gotoxy (10,14); printf("5. Afficher terrains");
	gotoxy (10,15); for (int des=0;des<53;des++ )printf("*");
	
	/*Menu Partie Horaire et réservations*/
	gotoxy (10,16); printf("\t====Menu Horaires et r%cservations====", 130);
	gotoxy (10,17); printf("6. Afficher Horraire ouverture des terrains");
	gotoxy (10,18); printf("7. Afficher Heures Disponibles");
	gotoxy (10,19); printf("8. Ajouter une r%cservation" ,130);
	
	/*Menu Divers*/
	gotoxy (10,20);	for (int des=0;des<53;des++ )printf("*");
	gotoxy (10,21); printf("9. Quitter le programme");
	
	/*Demande du choix*/
	gotoxy (4,24); printf("Entrer votre choix : ");
	scanf("%d", choix);	
			
	}

void AjouterTerrain(terrain *t){
	
	FILE *fichierTerrains;
	FILE *HoraireN;
	FILE *HoraireN2;

	int surfaceTrouvee;
	char surfaceFichier[13];
	int okSurface;
	
	char filenameT [2];
	char filenameT2[2];
	
	char ete  [25] = "HoraireEte_";
	char hiver[25] = "HoraireHiver_";
		
	char repT;
	char c;
	char surface [13];
	int existe = 0;
	int okNumT;
			
	/*Encodage des données du terrain*/
	
	do{
		okNumT =0;
		printf("\nEntrer le num%cro du terrain: ", 130);
		scanf("%d", &t->numeroTerrain);
		okNumT = verifierInt(t->numeroTerrain,1,15);	
		
	}while(!okNumT);
		
		
	itoa (t->numeroTerrain,filenameT,16);

	strcat(ete, filenameT);
	strcat(hiver,filenameT);
	
	strcat(ete, ".txt");
	strcat(hiver, ".txt");
	
	HoraireN  = fopen(ete,"a");
	HoraireN2 = fopen(hiver, "a");
	
	do{
	
	existe = 0;
		
	printf("\nEntrer la surface du terrain: ");
	scanf("%s", surface);
			
	surfaceExiste(surface,&existe); //Vérification si la surface entrée est présente dans le fichier 
	
	if(!existe) printf ("\nLa surface %s n'existe pas!\n",surface);		
		
	}while (!existe);
			

			
	printf("\nLe terrain %d a %ct%c cr%c%c, sa surface est : %s", t->numeroTerrain, 130, 130, 130,130, t->surface);	
		

}

/*Procédure qui affiche la liste des joueurs*/
void AfficherFichierJoueurs()
{
	
	FILE * fichierJoueurs;
	
	joueur j;
 
	
	fichierJoueurs=fopen("joueurs.dat", "r"); 
	
	// Si le fichier n'existe pas...
	if (fichierJoueurs != NULL){
	
	fread(&j,sizeof(j),1,fichierJoueurs);
		
		while(!feof(fichierJoueurs))
		{
			printf("\nMembre : %s %s N%c(e) le %d/%d/%d, \nEmail: %s, Tel : %s, Gsm : %s, \nCotisation : %d\n",j.nom, j.prenom, 130, j.date.jour, j.date.mois, j.date.annee, j.email, j.telephone, j.gsm, j.CotisationPayee);
			fread(&j,sizeof(j),1,fichierJoueurs);
		}
		
	}	
	// Sinon...
	else{
		
		printf("\nErreur d'ouverture du fichier joueurs.dat");
			
	}
	// Femeture du fichier
	fclose(fichierJoueurs);
}

/*Procédure qui affiche la liste des terrains*/	
void AfficherFichierTerrains()
{
	
	FILE * fichierTerrains;
	terrain t;

	fichierTerrains=fopen("terrains.dat", "r"); 
	
	// Si le fichier n'existe pas...
	if (fichierTerrains !=NULL ){
		
		fread(&t,sizeof(t),1,fichierTerrains);
		while(!feof(fichierTerrains))
		{
			printf("\nNum%cro du terrain: %d, Surface: %s",130,t.numeroTerrain, t.surface);
			fread(&t,sizeof(t),1,fichierTerrains);
		}	
	
		
		
	}else{
		
		printf("\nErreur: Fichier introuvable");
			
	}
	// Femeture du fichier
	fclose(fichierTerrains);
}	

/*Procédure qui affiche le fichier Horaire été ou Horaire Hiver selon le choix de l'utilisateur*/
void AfficherFichierHoraire(char *filename){
	
	
	FILE * fichierHoraire;
	char caractereActuel;

	
	fichierHoraire =fopen(filename, "r"); 
	// Si le fichier n'existe pas...
	if (fichierHoraire != NULL ){
	
	
	do{
		
            caractereActuel = fgetc(fichierHoraire); 
            printf("%c", caractereActuel ); 
            
        } while (  caractereActuel != EOF )  ;
	
	}else{
		
	 printf("\nErreur: Fichier introuvable");
		
	}
	
	// Femeture du fichier
	fclose(fichierHoraire);
	
}	


/*Fonction qui vérifie la validité de la CotisationPayée */
int VerificationAffiliation (int CotisationPayee){
	
	if(CotisationPayee == 0 || CotisationPayee == 1){
		
	return 1;
	
	}else{
		
	return 0;
	}
}


void Clear(){
	for (int y=0;y<100;y++){
		gotoxy(1,y);printf("                                                                                                                                                    ");
	}
}

void AfficherCadre()	{
/*Disposition des cadres*/	
cadre(75,  3,1, 1);
cadre(75, 15,1, 6);
cadre(30,  1,1,23);	
	
}

void surfaceExiste (char *surface,int *existe){

	FILE *fichierSurfaces;
	terrain t;	
	int longueur = strlen (surface);
	

	char surface_bis[longueur];
  
  if (longueur > 0) {
  	
    fichierSurfaces     = fopen ("surfaces.txt","r");
    
    do {
      
	  fscanf (fichierSurfaces,"%s", surface_bis);
      
      if (strcmp(surface_bis,surface)==0){
      printf ("\nLa surface %s existe ! ",surface);
     *existe=1;     
		
      }
      
    }while (!feof(fichierSurfaces) && strcmp(surface_bis,surface)!=0);
  }
  
  

}

void Copiehoraire (char *ete, char *hiver){
	
	//Ouverture des fichiers horaires valable pour la totalité des cours
	FILE *fichierHoraireEte = fopen("horaireEte.txt","r");
	FILE *fichierHoraireHiver = fopen ("horaireHiv.txt","r");
	
	//Ouverture des fichiers horaires spécifiques au cours
	FILE *HoraireN  =  fopen(ete,"a");
	FILE *HoraireN2 =  fopen(hiver,"a");
	
	//Caractères lus pour les fichiers horaires
	char caractereActuelE;
	char caractereActuelH;
	
	//Si les fichier existent alors
	if (fichierHoraireEte != NULL && fichierHoraireHiver != NULL){
		
		//Alors
		do{
		
		//On lit caractère par caractère les fichiers horaires	
		 caractereActuelE = fgetc(fichierHoraireEte); 
		 caractereActuelH = fgetc(fichierHoraireHiver); 
		 
        //Et on écrit dans les fichiers horaires des différents terrains
		printf(ete, "%c", caractereActuelE ); 	
		
		printf(hiver, "%c", caractereActuelH ); 		
		
		//Tant que le caractère ne soit pas celui de la fin du fichier
		}while (caractereActuelE != EOF && caractereActuelH != EOF);
			
		
	}else{
		
	printf("Erreur d'ouverture de fichier!");
	
	//On ferme la totalité des fichiers 
	fclose (fichierHoraireEte);
	fclose (fichierHoraireHiver);
	fclose (HoraireN);
	fclose (HoraireN);
		
	}
	
}

/*Procédure qui ajoute une réservation */
void AjouterReservation (){
	
	char nomReservation [30];
	
	joueur j;
	
	terrain t;
	
	char repReservation ;

		do{
			scanf("%s", nomReservation);	
			printf("Le nom est : %s", nomReservation);
			
			//RechercheJoueur(); A FAIRE A o'aide de la partie 3 du programme
			
			if (nomReservation == j.nom){
				
				printf("\nLe membre %s trouv%c dans le fichier !  ", nomReservation, 130);
				
					if(j.CotisationPayee == 0 ){
						
						printf("\nLe membre %s ne peut pas r%cserver de terrain, affiliation non pay%ce", nomReservation, 130, 130);
						
					}else{
					
							/*
							***************************************
							*************************************** A FAIRE RECHERCHE
											*/	
						
					}
			}else{
				
				printf("\nLe membre %s n'a pas %ct%c trouv%c dans le fichier !", 130,130,130);
				
			}
			
fflush(stdin);			
printf("\nAjouter une r%cservation ? o-oui / n-non : ", 130);
fflush(stdin);
repReservation = getchar();
	
}while(repReservation != 'n' && repReservation != 'n');

}
