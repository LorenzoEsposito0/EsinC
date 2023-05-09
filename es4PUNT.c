#include <stdio.h>
#include <limits.h>
int genera(int numeri[]) //questa funzione ci permette di inserire i numeri finchè non si inserisce -1
{
	int valore = 0, n = 0;
	while (1)
	{
		printf("inserisci un numero, inserisci 1 per terminare l'inserimento dei numeri  \n");
		scanf("%d", &valore);
		if (valore == -1)
		{
			return n;
		}
		numeri[n] = valore;
		n++;
	}
}
void Stampa(int array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("Il valore in posizione %d è: %d\n", i, array[i]);
}

void StampaContraria(int array[], int n)
{
	for (int i = n - 1; i >= 0; i--)
		printf("Il valore in posizione %d è: %d\n", i, array[i]);
}
int Max(int array[], int n)
{
	int max = array[0];
	for (int i = 1; i < n; i++)
		if (array[i] > max)
			max = array[i];

	return max;
}
int RicercaNumero(int array[], int n, int valore)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] == valore)
		{
			return i;
		}
	}
	return -1;
}

int InserimentoPosizione(int array[], int *n, int posizione, int valore)
{
	for (int i = *n; i > posizione; i--)
	{
		array[i] = array[i - 1];
	}
	array[posizione] = valore;
	(*n)++;
	return posizione;
}

int InserisciInCoda(int array[], int *n, int numero)
{
	array[*n] = numero;
	(*n)++;

	return *n;
}

int Modifica(int array[], int posizione, int valore)
{

	array[posizione] = valore;
	return posizione;
}

int Cancella(int array[], int *n, int posizione)
{

	for (int i = posizione; i < *n; i++)
	{
		array[i] = array[i + 1];
	}
	(*n)--;
	return posizione;
}

void Operazione(int s, int numeri[], int *n)
{

	if (s == 1)
	{
		Stampa(numeri, *n);
	}
	if (s == 2)
	{
		int numero, posizione;
		printf("inserisci un numero: ");
		scanf("%d", &numero);
		posizione = InserisciInCoda(numeri, n, numero);
		printf("Valore inserito in posizione: %d", posizione);
	}
	if (s == 3)
	{
		int valore, posizione;
		printf("Inserisci il valore da sostituire: ");
		scanf("%d", &valore);
		posizione = RicercaNumero(numeri, *n, valore);

		if (posizione > -1)
		{
			printf("Inserisci il nuovo valore: ");
			scanf("%d", &valore);
			Modifica(numeri, posizione, valore);
		}
		else
		{
			printf("valore non esistente");
		}
	}
	if (s == 4)
	{
		int valore, posizione;
		printf("Inserisci il valore da eliminare: ");
		scanf("%d", &valore);
		posizione = RicercaNumero(numeri, *n, valore);

		if (posizione > -1)
		{
			Cancella(numeri, n, posizione);
		}
		else
		{
			printf("valore non esistente");
		}
	}
	if (s == 5)
	{
		int posizione, valore;
		printf("Inserisci il valore da ricercare: ");
		scanf("%d", &valore);
		posizione = RicercaNumero(numeri, *n, valore);

		if (posizione > -1)
		{
			printf("valore trovato in posizione %d", posizione);
		}
		else
		{
			printf("valore non esistente");
		}
	}

	if (s == 6)
	{
		int valore, posizione;
		printf("Inserisci il valore da aggiungere: ");
		scanf("%d", &valore);
		printf("Inserisci la posizione: ");
		scanf("%d", &posizione);

		if (posizione < *n)
		{
			InserimentoPosizione(numeri, n, posizione, valore);
		}
		else
		{
			printf("valore non esistente");
		}
	}
	if (s == 7)
	{
		StampaContraria(numeri, *n);
	}

	if (s == 8)
	{
		int max = Max(numeri, *n);
		printf("Il massimo dell'array è: %d", max);
	}
}

int menu()
{

	int scelta;

	printf("\n\npremere 1 per mostrare il contenuto dell'array\n");
	printf("premere 2 per inserire un elemento in coda\n");
	printf("premere 3 per modificare un elemento\n");
	printf("premere 4 per eliminare un elemento\n");
	printf("premere 5 per ricercare un elemento\n");
	printf("premere 6 per inserire un elemento in una certa posizione\n");
	printf("premere 7 per mostrare il contenuto dell'array all'inverso\n");
	printf("premere 8 per mostrare il valore massimo dell'array\n");
	printf("premere 0 per terminare\n");

	scanf("%d", &scelta);

	return scelta;
}

int main(int argc, char *argv[])
{

	int scelta, numeri[SHRT_MAX], n = genera(numeri);

	while (1)
	{
		scelta = menu();

		if (scelta == 0)
		{
			printf("\tprogramma terminato\n");
			return 0;
		}
		Operazione(scelta, numeri, &n);
	}
	return 0;
}