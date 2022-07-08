#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
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
	
