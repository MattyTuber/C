#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio-bis.h>
#include "cadre.h"
#include "aurelie.h"


//Les prototypes de fonctions et Procédures
void clear(); //Nettoyage																						
void accueil(int *); //Menu d'accueil																			
void Menuclient(int *); //Menu du client																		
void Menuemploye(int *); //Menu de l'employé																	


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
//Les Réels	


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
							i++;	//Position du caractère à attendre la frappe
							x++;	//x du gotoxy à faire varier si la variation ne se fait pas aucune étoile ne s'affichera
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
									
									break;
									
									case 2: 
									
									break;
									
									case 3:
										
									break;
									
									case 4:
									
									break;
									
									case 5:
										
									break;
									
									case 6:
										
									break;
									
									case 7:
										printf("\nFin de programme ....");
										exit(0);
									break;
									
									case 8:
										
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




