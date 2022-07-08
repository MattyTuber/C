#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio-bis.h>
#include "cadre.h"
#include "aurelie.h"

#define MAX 50

#define letmin 48
#define letmax 57

//Les structures

typedef struct dates{
	
int jour;
int mois;
int annee;	
	
}date;

typedef struct adresses {

char rueNum [MAX];	
int cp ;
char ville[30];
		
}adresse;

typedef struct clients{
	
	char nom[50];
	char prenom[50];
	dates date;
	adresses adresse;
	char telephone[12];
	char email[50];		
	
}client;

typedef struct voyages{
	
char nom [50];
float prixEnfant;
float prixAdulte;

}voyage;

typedef struct employes{

char nom[50];
char prenom [50];
dates date;
char login [15];
char motdepasse[4];

}employe;

//Les prototypes de fonctions et Procédures
void clear(); //Nettoyage																						//A FAIRE
void accueil(int *); //Menu d'accueil																			//FINI
void Menuclient(int *); //Menu du client																		//FINI
void Menuemploye(int *); //Menu de l'employé																	//FINI

//Partie clients
void ajouterclient(client *); //Ajouter un Client																//FINI
void afficherclients();  //Affiche la liste des clients de l'agence 											//FINI

//Partie employés
void ecranlogin(char*, char*); //Affiche l'écran du login de l'employé et récupére login et mot de passe 		//FINI
void ajouteremploye(employe *emp);//Ajoute un employé au fichier enployé										//FINI
void afficheremployes(); //Affiche la liste des employés de l'agence (Menu Caché car mot de passe en clair	    //FINI




/*Programme Principal*/
int main(){
	
system("cls");
	
//Les variables
//Les entiers 
	int choixEC;
	int choixE;
	int choixC;
	int okcode;
	int okRechM;
	int i;
	int x;
	
//Les caractères et chaînes de caractères
	char QuitterP;
	char repE;
	char repC;
	char repAC;
	char repAE;
	char log[4], mot[4];
	char clientR[50];
	char clitemp[50];
//Les Réels	

//Autres
client cli;

employe emp;

do{		system("cls");
		accueil(&choixEC);
		switch(choixEC){
					
					/*Choix Employé*/
					case 1: 
						do{	
							okcode=0;
							system("cls");
							cadre(75,15,20,1);//Cadre principal
							cadre(25,1,30,7); //Cadre 
							cadre(15,1,42,14); //Cadre login/mdp
							gotoxy(34,8);printf("Entrez votre login ");
							gotoxy(44,15);scanf("%s", log);
							system("cls");
							cadre(75,15,20,1);//Cadre principal
							cadre(25,1,30,7); //Cadre 
							cadre(15,1,42,14); //Cadre login/mdp
							gotoxy(34,8);printf("Votre Mot de passe : ");	
							i=0;
							x=44;
							fflush(stdin);
							//On "crypte le mot de passe
							do{
							gotoxy(44,15);mot[i]=getch();
								
							gotoxy(x,15);printf("*");
							i++;	
							x++;
							}while( i<4 && x<49);
							mot[i]='\0';
							
							//On le compare à un login et mot de passe par défaut
							if(  strcmp(log,"aurelie") || strcmp(mot,"1234"))
							{
							okcode =1;
							}
							else
							{
							okcode=0;
							}
						}while(okcode);
							
						
							do{
								
								//clear();
								system("cls");
								Menuemploye(&choixE);
								switch(choixE)
								{
									
									case 1: 
									
										FILE *fichierEmploye;
										
										fichierEmploye = fopen("employes.dat", "a");
										
											if (fichierEmploye != NULL){
											
													do{
												
														printf("\nVeuillez entrer vos coordonn%ces svp! :\n", 130)	;
														ajouteremploye(&emp); //Appel de la procédure qui demande les données du nouveau employé.	
														fwrite(&emp, sizeof(emp), 1, fichierEmploye)	; //Ecriture dans le fichier employé
												
												printf("\nVoulez-vous encoder un autre employ%c o-oui / n-non?: ", 130);
												fflush(stdin);
												repAE = getchar();
												fflush(stdin);
												}while (repAE != 'n' && repAE != 'N');	
											
											}
											else{
												
												printf("Erreur ouverture fichier employes.dat");
											}
										fclose(fichierEmploye);
									
									break;
									
									case 2: 
									
									break;
									
									case 3:
										system("cls");
										cadre (45,1,15,1);
										gotoxy(18,2);printf("Voici la liste des clients de l'agence: \n");
										afficherclients();
									
									break;
									
									case 4:
									
									break;
									
									case 5:
										
									break;
									
									case 6:
										
										FILE *fichierClient;
										
										fichierClient = fopen("clients.dat", "r");
										
										printf("\nEntrer le nom d'un client: ");
										scanf("%s", clientR);
											
						
										if (fichierClient != NULL){	
								
								
										fread(&cli,sizeof(cli),1,fichierClient);
				
										do{
											
												for(int ncli=0;ncli<strlen(cli.nom);ncli++){
						
													clitemp[ncli]=tolower(cli.nom[ncli]);
												}
								
										
											okRechM=0;
										
												if (strcmp(clientR, clitemp) ==0){
											
												okRechM=1; 
												
												}else{
												
												fread(&cli,sizeof(cli),1,fichierClient);
											}
											
										}while (!okRechM && (!feof(fichierClient)));
												
									if (okRechM)	{
										
										
										system("cls");
										cadre(75,17,20,1);//Cadre principal		
										cadre(70,1,23,2); //Cadre Fiche
									
										gotoxy(40,3); printf("Client trouv%c ! Voici la fiche du client: ", 130);
																			
										gotoxy(25,6); printf("Nom:");
										gotoxy(50,6); printf("%s", cli.nom);
										
										gotoxy(25,8); printf("Pr%cnom:", 130);
										gotoxy(50,8); printf("%s", cli.prenom);
										
										gotoxy(25,10); printf("Date de Naissance:");
										gotoxy(50,10); printf("%d/%d/%d", cli.date.jour, cli.date.mois, cli.date.annee);  
										
										gotoxy(25,12); printf("Adresse:");
										gotoxy(50,12); printf("%s", cli.adresse.rueNum);  
										gotoxy(50,14); printf("%d\t\t%s", cli.adresse.cp,cli.adresse.ville); 
										
										gotoxy(25,16); printf("Num%cro de t%cl%cphone:", 130, 130, 130);
										gotoxy(50,16); printf("%s", cli.telephone);
										
										for(int esp=0; esp<5; esp++){
											printf("\n");
										}
								
							}else{
								
								
							printf("\nLe client %s non trouv%c",clientR, 130);	
								
							}		
							
						}else{
							
							printf("\nImpossible d'ouvrir le fichier client.dat");
						}
										
				break;
										
									break;
									
									case 7:
										printf("\nFin de programme ....");
										exit(0);
									break;
									
									case 8:
										system("cls");
										cadre (45,1,15,1);
										
										gotoxy(18,2);printf("Voici la liste des employ%cs de l'agence: \n", 130);
										afficheremployes();
										
									break;
									default:
										printf("\nMauvais choix ! ... Recommencer svp")	;
									break;
								
							}
							
						fflush(stdin);	
						printf("\n\nVoulez-vous quitter le menu Employ%c ? o-oui/n-non: ", 130);
						fflush(stdin);	
						repE=getchar();	
							
						}while(repE != 'o' && repE != 'O');
					
					break;
					
					/*Choix Client*/
					case 2:
							
							do{
								
								//clear();
								system("cls");
								Menuclient (&choixC);
								switch(choixC)
								{
									
									case 1: 
									
									FILE *fichierClient;
									
									fichierClient = fopen("clients.dat", "a");
									
										if (fichierClient != NULL){
										
												do{
											
													printf("\nVeuillez entrer vos coordonn%ces svp! :\n", 130)	;
													ajouterclient(&cli); //Appel de la procédure qui demande les données du nouveau client.	
													fwrite(&cli, sizeof(cli), 1, fichierClient)	; //Ecriture dans le fichier client
											
											printf("\nVoulez-vous encoder un autre client o-oui / n-non ?: ");
											fflush(stdin);
											repAC = getchar();
											fflush(stdin);
											}while (repAC != 'n' && repAC != 'N');	
										
										}
										else{
											
											printf("Erreur ouverture fichier clients.dat");
										}
									fclose(fichierClient);
								
								
									break;
									
									case 2: 
									
									break;
									
									case 3:
										
									break;
									
									case 4:
									
									break;
									
									case 5:
										printf("\nFin de programme ....");
										exit(0);
									break;
									
									default:
										printf("\nMauvais choix ! ... Recommencer svp")	;
									break;
									
								}
					
					
						fflush(stdin);	
						printf("\nVoulez-vous quitter le menu Clients ? o-oui/n-non: ");
						fflush(stdin);	
						repC=getchar();					
					
						}while(repC != 'o' && repC != 'O');
								
					break;
						
					case 3:
						printf("\nFin du programme en cours");
						exit(0);
					break;
					
				
			
		}//Fin du Switch

fflush(stdin);	
printf("\n\nVoulez - vous quitter le programme ? o-oui / n-non ");
QuitterP=getchar();	
fflush(stdin);	
}while(QuitterP != 'o' && QuitterP != 'O');



}

//Les fonctions et Procédures

//Procédure qui affiche le menu employé et qui fait connaitre le choix employé au main
void Menuemploye(int *choixE){
	
system("COLOR 04")	;

//On dispose les cadres	
cadre(75,17,20,1);//Cadre principal
cadre(70,1,23,2); //Cadre Présentation
cadre(20,1,42,20); //Choix

//On affiche le menu pour les employés
gotoxy (45,3); printf("Bienvenue dans le Menu Employ%c", 130);
gotoxy (45,6);printf("1. Enregistrez - vous!");
gotoxy (45,8);printf("2. Ajouter un voyage");
gotoxy (45,10);printf("3. Consulter la liste des clients");
gotoxy (45,12);printf("4. Modifier/Supprimer un voyage");
gotoxy (45,14);printf("5. Supprimer un client");
gotoxy (45,16);printf("6. Rechercher un client");
gotoxy (45,18);printf("7. Quitter le programme!");
gotoxy (45,21);printf("Votre choix: ");
scanf("%d", choixE);
}

//Procédure qui affiche le menu client et qui fait connaitre le choix client au main
void Menuclient (int *choixC ){

system("COLOR 09")	;

//On dispose les cadres	
cadre(75,15,20,1);//Cadre principal
cadre(70,1,23,2); //Cadre Présentation
cadre(20,1,42,18); //cadre choix

//On affiche le menu pour les clients
gotoxy (45,3); printf("Bienvenue dans le Menu clients");
gotoxy (45,6); printf("1. Enregistrez-vous!");
gotoxy (45,8); printf("2. Consulter la liste des voyages");
gotoxy (45,10); printf("3. Consulter les prix des voyages");
gotoxy (45,12); printf("4. Cr%cer un r%cservation", 130, 130);
gotoxy (45,14); printf("5. Quitter le programme!");
gotoxy (45,19); printf("Votre choix: ");
scanf("%d", choixC);
	
}

//Procédure qui affiche le menu principal et qui fait connaitre le choix employé/client au main
void accueil (int *choixEC){
	
system("COLOR 05")	;

//On dispose les cadres	
cadre(75,15,20,1);//Cadre principal
cadre(70,1,23,2); //Cadre Présentation
cadre(25,1,30,7); //Cadre Employé
cadre(25,1,60,7); //Cadre Client
cadre(15,1,50,10); //Cadre Quitter
cadre(30,1,42,14); //Cadre du choix	

//On affiche l'accueil principal du programme
gotoxy(26,3); printf("Programme de r%cservation de voyages - %c Aur%clie Deschuyteneer - 1IA", 130,184,130);
gotoxy(38,8); printf("1. Employ%c", 130);
gotoxy(69,8); printf("2.Client");
gotoxy(54,11); printf("3. Quitter");
gotoxy(44,15); printf("Entrer votre choix: ");
scanf("%d", choixEC);
	
}


void clear (){



};

//Fonction d'ajout de client dans le fichier
void ajouterclient(client *cli){


	printf("\nEntrer votre nom: ");
	scanf("%s", cli->nom );	
	
	printf("\nEntrer votre prenom: ");
	scanf("%s", cli->prenom );
	
	printf("\nEntrer votre adresse: ");
	
	fflush(stdin); 
	printf("\n\tEntrer votre rue et num%cro: ", 130);
	fgets(cli->adresse.rueNum, MAX, stdin);
	
	
	printf("\n\tEntrer votre code postal: ", 130);
	scanf("%d", &cli->adresse.cp);
	
	printf("\n\tEntrer votre ville: ", 130);
	scanf("%s", cli->adresse.ville);
	
	printf("\nEntrer votre date de naissance: ");
	
	printf("\n\tEntrer le jour (entre 1 et 31): "); //A utiliser ta propre fonction
	scanf("%d", &cli->date.jour);
	
	printf("\n\tEntrer le mois (entre 1 et 12): "); //A utiliser ta propre fonction
	scanf("%d", &cli->date.mois);
	
	printf("\n\tEntrer l'ann%ce: ", 130);  		//A utiliser ta propre fonction //A voir validé pour pouvoir réserver un voyage -18 ans ? 
	scanf("%d", &cli->date.annee);
	

	printf("\nEntrer votre t%cl%cphone : ", 130,130);
	scanf("%s", cli->telephone );
	
	printf("\nEntrer votre email : ");
	scanf("%s", cli->email );
}

//Procédure d'affichage de la liste des clients de l'agence	
void afficherclients() 
{
	
	
	FILE *fichierClient;
	
	client cli;
 
	
	fichierClient=fopen("clients.dat", "r"); 
	
	
	if (fichierClient != NULL){
		
	
	fread(&cli,sizeof(cli),1,fichierClient);
		
		while(!feof(fichierClient))
		{
			
			/*gotoxy(25,4);*/ printf("\n\nNom: "); printf("%s", cli.nom );
			/*gotoxy(25,6);*/ printf("\nPr%cnom: ", 130);printf("%s", cli.prenom );
			/*gotoxy(25,8);*/ printf("\nDate De Naissance: ");printf("%d/%d/%d", cli.date.jour, cli.date.mois,cli.date.annee );
			/*gotoxy(25,10);*/ printf("\nAdresse: "); printf("%s%d%s", cli.adresse.rueNum, cli.adresse.cp, cli.adresse.ville);
			/*gotoxy(25,12);*/ printf("\nEmail: ");printf("%s", cli.email);
			/*gotoxy(25,14);*/ printf("\nT%cl%cphone/Gsm: ", 130,130);printf("%s\n", cli.telephone);
			fread(&cli,sizeof(cli),1,fichierClient);
		}
		
	}	
	
	else{
		
		printf("\nErreur d'ouverture du fichier clients.dat");
			
	}
	// Femeture du fichier
	fclose(fichierClient);
}


void ajouteremploye(employe *emp){

	char chaine[] = " ";
    int lettre,n;
    char prenom[50];

	printf("\nEntrer votre nom: ");
	scanf("%s", emp->nom );	
	
	printf("\nEntrer votre pr%cnom: ", 130);
	scanf("%s", prenom );
	
/*	for(n=1;n<strlen(prenom);n++){
				
	prenom[n]=tolower(prenom[n]);

}

strcpy(emp->login,prenom);*/
	
	printf("\nEntrer votre date de naissance: ");
	
	printf("\n\tEntrer le jour (entre 1 et 31): "); //A utiliser ta propre fonction
	scanf("%d", &emp->date.jour);
	
	printf("\n\tEntrer le mois (entre 1 et 12): "); //A utiliser ta propre fonction
	scanf("%d", &emp->date.mois);
	
	printf("\n\tEntrer l'ann%ce: ", 130);  		
	scanf("%d", &emp->date.annee);
	
	//On génère le login
	strcpy(emp->login, emp->prenom);
	printf("\nVotre login g%cn%cr%c est : %s\n",130,130,130,  emp->login);
	
	//On génère le mot de passe
	srand (time(NULL));
 
    for(lettre=0 ; lettre<4 ; lettre++){
    chaine[lettre] = (char)((rand () % (letmax - letmin + 1)) + letmin);	
	}
	
	strcpy(emp->motdepasse,chaine);
        
	printf("\nVotre mot de passe g%cn%cr%c est : %s\n",130,130,130, emp->motdepasse);
	
}

//Procédure d'affichage de la liste des clients de l'agence	
void afficheremployes()
{
	
	FILE *fichierEmploye;
	
	employe emp;
 
	
	fichierEmploye=fopen("employes.dat", "r"); 
			
	if (fichierEmploye != NULL){
		
	fread(&emp,sizeof(emp),1,fichierEmploye);
		
		while(!feof(fichierEmploye))
		{	
			/*gotoxy(25,4);*/ printf("\n\nNom: "); printf("%s", emp.nom);
			/*gotoxy(25,6);*/ printf("\nPr%cnom: ", 130);printf("%s", emp.prenom);
			/*gotoxy(25,8);*/ printf("\nDate De Naissance: ");printf("%d/%d/%d", emp.date.jour, emp.date.mois,emp.date.annee);
			/*gotoxy(25,10);*/ printf("\nLogin: "); printf("%s", emp.login);
			/*gotoxy(25,12);*/ printf("\nMot de passe: ");printf("%s\n", emp.motdepasse);
	
			fread(&emp,sizeof(emp),1,fichierEmploye);	
	
		}
	
	}	
	
	else{
		
		printf("\nErreur d'ouverture du fichier employes.dat");
			
	}
	// Femeture du fichier
	fclose(fichierEmploye);
}
