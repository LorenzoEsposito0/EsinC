#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argv, char *argc[])
{

    int numeri[5];
    int *p;
    printf("inserisci 5 numeri all'interno di un array \n");
    for (int i = 0; i<5; i++)
    {
        scanf("%d", &numeri[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("il numero in posizione %d è %d \n", i, numeri[i]);
    }
    

    return 0;
    
    
} 