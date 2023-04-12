#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int numMenor = buscarMenor();
    printf("%d", numMenor);

    return 0;
}

int buscarMenor()
{
    int i;
    Pila aux, menor, dada;
    inicpila(&aux);
    inicpila(&dada);
    inicpila(&menor);

    for(i=0; i<5; i++)
    {
        leer(&dada);
    }
    apilar(&menor, desapilar(&dada));

    while(!pilavacia(&dada))
    {
        if(tope(&dada)<(tope(&menor)))
    {
        apilar(&aux, desapilar(&menor));
        apilar(&menor, desapilar(&dada));
    }
    else{
        apilar(&aux, desapilar(&dada));
    }

}
int numMenor = tope(&menor);
}


