#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

int main()
{
    int numeros[MAX];
    int par[MAX];
    int impar[MAX];
    int i;
    int contaPar = 0;
    int contaImpar = 0;
    
    srand(time(NULL));

    for(i=0;i<MAX;i++)
    {
       numeros[i] = rand()%10 + 1;  
    }
    

    for(i=0;i<MAX;i++)
    {
        if( numeros[i] % 2 )
        {
            impar[contaImpar] = numeros[i];
            contaImpar++;
        }
        else
        {
            par[contaPar] = numeros[i];
            contaPar++;
        }
    }

    printf("\n Os %d valores gerados sao:\n", MAX);
    for(i=0;i<MAX;i++)
    {
        printf("%d - %d\n", i + 1 , numeros[i]);
    }

    printf("\n Numeros pares: \n");
    for(i=0;i<contaPar;i++)
    {
        printf("%d - %d\n", i + 1  , par[i]);
    }

    printf("\n Numeros impares: \n");
    for(i=0;i<contaImpar;i++)
    {
        printf("%d - %d\n", i + 1 , impar[i]);
    }

    return 0;
}
