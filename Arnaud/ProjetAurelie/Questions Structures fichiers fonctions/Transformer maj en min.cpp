#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <locale.h>

int main()
{
	
setlocale(LC_ALL,"");
	
char nom[30] = {"AuRÈLiE"};
char prenom[30] = {"dEsChUyTeNeEr"};
int n;
int p;

printf("\n%s", nom);	
printf("\n%s", prenom);	
	
nom[0]= toupper(nom[0]);
for(n=1;n<strlen(nom);n++){
				
nom[n]=tolower(nom[n]);

}


prenom[0]=	toupper(prenom[0]);		
for(p=1;p<strlen(prenom);p++){
				
prenom[p]=tolower(prenom[p]);

}			
		
printf("\n\t%s",nom );	
printf("\n\t%s",prenom );		
			
	return 0;
}
