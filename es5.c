#include <stdio.h>
#include <string.h>
int main()
{
    char string1[100];
    char string2[100];
    char stringpari[100];
    char stringdispari[100];
    int contatore = -1;
    int trova = 0;
    int contavocali1[30], contaconsonanti1[30];
    int contavocali2[30], contaconsonanti2[30];

    printf("inserisci una parola di soli caratteri \n");
    scanf("%s", string1);

    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (i % 2 == 0)
            stringpari[i] = string1[i];
        else
            stringdispari[i] = string1[i];
    }
    char stringa2[200];
    printf("inserisci una seconda stringa di sole lettere \n");
    scanf("%s", stringa2);

    int corta = strcmp(string1, string2);
    if (corta == 0)
    {
        printf("la stringa 1 è più corta \n");
    }
    else 
    {
        printf("la stringa 2 è più corta \n");
    }

    for (int i = 0; string1[i] != '\0'; i++)
    {
        if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u')
        {
            contavocali1[i] = string1[i];
        }
        else
        {
            contaconsonanti1[i] = string1[i];
        }
    }

    for (int i = 0; string2[i]; i++)
    {
        if (string1[i] == 'a' || string1[i] == 'e' || string1[i] == 'i' || string1[i] == 'o' || string1[i] == 'u')
        {
            contavocali2[i] = string1[i];
        }
        else
        {
            contaconsonanti2[i] = string1[i];
        }
    }   

    if (contavocali2 > contavocali1)
        printf("la seconda stringa ha più vocali \n");    
    else if (contavocali1==contavocali2)
        printf("le due stringhe sono uguali \n ");   
    else
        printf("la prima stringa ha più vocali \n");
    
      if (contaconsonanti2 > contaconsonanti1)
        printf("la seconda stringa ha più consonanti \n");    
    else if (contaconsonanti1==contaconsonanti2)
        printf("le due stringhe sono uguali \n");   
    else
        printf("la prima stringa ha più consonanti \n");



    return 0;
}