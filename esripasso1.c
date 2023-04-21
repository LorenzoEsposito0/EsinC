#include <stdio.h>
#include <stdlib.h>
//) Leggi una stringa e un carattere e, se il carattere è presente nella stringa, conta quante volte quel carattere è contenuto nella stringa.
//2) Leggi una stringa e verifica se contiene doppie.
int main(int argv, char *argc[])
{
    char string[20];
    char carattere;
    int contacarattere=0;

    printf("inserisci una stringa di massimo 20 parole \n");
    scanf("%s", string);

    printf("inserisci un carattere \n");
    scanf("%s", &carattere);

    for (int i = 0; i < strlen(string); i++)
    {
        if (carattere==string[i])
        {
            contacarattere++;
        }
    }
    printf("il carattere %c è stato ripetuto %d volte", carattere, contacarattere);


        
    
} 