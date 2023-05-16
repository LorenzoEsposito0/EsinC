#include <stdio.h>
#include <string.h>
int Palindroma (char stringa[])
{
    int k = strlen(stringa);
    for (int i = 0; i < k / 2; i++) 
    {
        if (stringa[i] != stringa[k-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char parola[30];
    printf("Inserisci una parola: \n");
    scanf("%s", parola);
    if (Palindroma(parola))
    {
        printf("La parola è palindroma");
    }
    else
    {
        printf("La parola non è palindroma");
    }
    return 0;
}