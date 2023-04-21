#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//2) Leggi una stringa e verifica se contiene doppie.
int main(int argv, char *argc[])
{
    int trova1 = 0;
    char str1[20];
    do
    {
        trova1 = 0;
        printf("Inserisci la prima stringa: \n");
        scanf(" %s", str1);
        for (int i = 0; i < strlen(str1); i++)
        {
            if ((str1[i] < 'a' || str1[i] > 'z')) 
            {
                printf("Inserisci solo caratteri dell'alfabeto. \n");
                trova1 = 1;
                break;
            }
        }
    } while (trova1 == 1);
    int doppia;

    for (int i = 0; i < strlen(str1); i++)
    {
        if(str1[i]==str1[i+1])
        {
            doppia++;
        }
    }

    if(doppia>=1)
    {
        printf("la parola contiene doppie \n");
    }
    else
    {
        printf("la parola non contiene doppie \n");
    }
    


}

