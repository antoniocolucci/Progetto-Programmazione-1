#include "lib.h"

/*Questa function ordina in senso crescente  i nominativi nell'elenco
*I parametri di Input sono l'elenco e la sua dimensione.
*/


void ord_sel_max (Elenco array[][200],int n)
{
     int i;

     for(i=n-1;i>0;i--)

       scambiare_c   (array[i],array[max_ind_s(array,i+1)]);

}
