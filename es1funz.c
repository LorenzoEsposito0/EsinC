#include <stdio.h>
float npositivo (float n)
{
    if (n>0)
        return n;
    else
        return -1;    
}
float addizione (float a, float b)
{
    float c = a + b;
    return c;
}
float moltiplicazione (int a, float b)
{
    float c = a * b;
    return c;
}
float divisione (float a, float b)
{
    float c = a / b;
    return c;
}
int sottrazione (float a, float b)
{
    float c = a - b;
    return c;
}

int main()
{
    float num1, num2, somma, per,meno;
    float diviso;

    do
    {
        printf("inserisci un numero positivo \n");
        scanf("%f", &num1);
    } while (npositivo(num1)<0);

    do
    {
        printf("inserisci un numero positivo \n");
        scanf("%f", &num2);
    } while (npositivo(num2)<0);

    somma = addizione(num1,num2);
    per = moltiplicazione(num1,num2);
    meno = sottrazione(num1,num2);
    diviso = divisione(num1,num2);

    printf("la somma è %f \n", somma);
    printf("la molitplicazione è %f \n", per);
    printf("la sottrazione è %f \n", meno);
    printf("la divisione è %f \n", diviso);

    return 0;
    
}