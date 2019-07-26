/*Scivere un programma che genera un numero a caso e chieda all'utente un numero fino a quando
non è uguale a quello generato casualmente, ad ogni nuova immissione da parte dell'utente deve
stampare se il numero inserito è > o < di quello generato casualmente */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()	{

	int a,r;
	
	srand ( time(NULL) );
	//r=rand()%20+1;  ---> non usare perchè scorretto
	
	printf("\nOra devi indovinare un numero tra 0 e 20");

	r = (int) (20.0*rand()/RAND_MAX);

	do
	{
		printf("\nInserisci un numero\n");
		scanf("%d",&a);
		if (a>r)
		{
			printf("\nIl numero è troppo grande");

		} else if (a<r)
		{
			printf("\nIl numero è troppo piccolo");
						
		}
		
		
	} while (a!=r);

	printf("\nBravo/a, hai indovinato il numero!");

	return 0;
	
}