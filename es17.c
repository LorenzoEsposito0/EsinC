#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Vettore(int *arr1, int *arr2, int dim1)
{
    int dim2 = 0;
    for(int i = 0; i < dim1; i++)
    {
        if(*(arr1+i)>0)
        {
            *(arr2+dim2)=*(arr1+i);
            dim2++;
        }
   }
   return dim2;
}
int main(int argc, char *argv[])
{;
    int num1[6];
    int dim1 = 6;
    int num2[dim1];
    for(int i = 0; i < 6; i++)
    {
        printf("inserisci i numeri nell'array \n");
        scanf("%d",&num1[i]);
    }
    int dim2 = Vettore(num1,num2,dim1);
    printf("la dimensione del secondo array è di: %d\n", dim2);
    printf("il secondo vettore è: \n");
    for(int i = 0; i < dim2; i++)
    {
        printf(" %d ", num2[i]);
    }

    return 0;
}