#include <stdio.h>
#include <stdlib.h>
int main(int argv, char *argc[])
{
    int n = atoi(argc[1]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || i == n-1 || j == 0 || j == n-1)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" \n");
    }
    
}