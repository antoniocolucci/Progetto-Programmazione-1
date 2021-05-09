#include "lib.h"

/*Questa function stabilisce l'indice del cognome più grande.
* I paramentri di input sono l'elenco e la sua dimensione.
*/

int max_ind_s (Elenco array[][200], int n)
{
    int i, i_max;
    i_max = 0;                            //inizializzo i_max a 0
    for (i=1;i<n;i++)                     //inizio il ciclo for

     if(strcmp(array[i],array[i_max]) >0)

          i_max = i;

    return i_max;
}
