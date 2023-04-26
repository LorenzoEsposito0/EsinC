#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

    int base = atoi(argv[1]);
    int esponente = atoi(argv[2]);
    int risultato = 1;
    printf("inserisci la base \n");
    scanf("%d", &base);
    printf("inserisci l'esponente \n");
    scanf("%d", &esponente);

    if (base < 0 || esponente < 0)
    {
        printf("Inserire numeri positivi\n");
        exit(0);
    }

    if (base == 0)
    {
        if (esponente == 0)
        {
            printf("Non puoi elevare 0 per se stesso\n");
            exit(0);
        }
        risultato = 0;
    }

    for (int i = 0; i < esponente; i++)
    {
        risultato = base * risultato;
    }

    printf("Il risultato di %d ^ %d è: %d\n", base, esponente, risultato);
    return 0;
}