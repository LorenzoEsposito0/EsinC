#include <stdio.h>
#include <stdlib.h>
/*Si crei un programma che nel momento dell'esecuzione popoli l'array
argv[] con una serie di numeri. Esempio: $ ./a.out 1 5 9 6
Il programma deve quindi chiedere in input un numero e deve cercarlo 
all'interno dell'array argv.
Se il numero è presente il programma deve dare un messaggio positivo
e deve mostrare la posizione dell'elemento, altrimenti deve stampare a 
video: "numero non presente"
Suggerimento: si usi una funzione per ricercare la posizione dell'
elemento. Tale funzione deve tornare la posizione oppure -1.
*/
int ricerca (char *argv[], int n, int numero)
{
    for (int i = 0; i < n; i++)
    {
        if (numero == atoi(argv[i]))
			return i;
        else
            return -1;
    }
    
}
int main(int argc, char  *argv[])
{
    int numero;

    printf("inserisci il numero da ricercare");
    scanf("%d", &numero);

    int pnumero = ricerca(argc, argv, numero)

    if (pnumero>0)
        printf("il numero %d trovato è in posizione %d \n", numero,pnumero );
    else
        printf("numero non presente");

        return 0;

}