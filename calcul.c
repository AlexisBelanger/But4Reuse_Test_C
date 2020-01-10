#include <stdio.h>


int main(){
	int i;
	int compteur = 100;
	for(i=0; i< 100; i++){
		compteur--;
		int calcul = compteur*i;
		printf("%d", calcul);
		printf("\n ceci est la multiplication de calcul par i");
	}	
}

