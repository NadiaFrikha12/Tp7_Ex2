//�crire :
//Une proc�dure void chargement(int *, int *) permettant de saisir un entier 5=n=20 et de
//charger un tableau t par n entiers,
//Une proc�dure void affichage (int, int *) permettant d�afficher les �l�ments de t,
//Le programme principal d�clarant n et un tableau statique d�entiers t[20] et d�appeler les
//deux proc�dures chargement et affichage.
#include<stdio.h>
#include<stdlib.h>

int main(){
	//declaration des fonctions 
	void chargement(int *, int *);
	void affichage (int, int *);
	int n,t[20]; 
	chargement(&n,t);
	affichage (n,t);
	
	return 0;
}

void chargement(int *p1, int *p2){
	int* p3; //pointeur p3 pour parcourir le tableau 
	do{
		printf("donner n: ");
		scanf("%d",p1);
	}while ((*p1<5)||(*p1>20));
	
	for( p3=p2 ; p3< p2+*p1 ; p3++ ){ //p2 pointe vers le d�but du tableau et 
		printf("donner t[%d]:",p3-p2); //p2 + *p1 repr�sente l'adresse m�moire juste apr�s la fin du tableau
		scanf("%d",p3);
	}		
}

void affichage (int n, int *p2){
	int* p3; //pointeur p3 pour parcourir le tableau 
	for (p3=p2; p3<p2+n; p3++){
		printf("t[%d]=%d\n",p3-p2,*p3);
	}
}
