#include "lib.h"

//Funzione che genera un numero casuale da 1 a 10 che serve per l'intensità della palla.


int lancio ()
{
    int nc;

    srand (time(NULL));
    nc = 1 + rand ()%10; /*Generazione di un numero casuale da 1 a 10.*/
    return nc;
}
