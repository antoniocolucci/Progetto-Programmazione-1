#include "lib.h"

/*Function per la ricerca binaria.
* Questa function permette, una volta ordinato l'elenco, di trovare l'utente desiderato attraverso
* l'immissione del cognome, nome e del domicilio.
*/

int ric_bin (char chiave_cognome [], char chiave_nome [], char chiave_domicilio [], Elenco elenco_3 [][200], int n_3)
{
    int mediano, primo = 0, ultimo = n_3 -1;

    while (primo <= ultimo)
    {
        mediano = (primo + ultimo)/2;

        if(strcmp(chiave_cognome, elenco_3[mediano]->cognome)== 0 && strcmp(chiave_nome, elenco_3[mediano]->nome)== 0 && strcmp(chiave_domicilio, elenco_3[mediano]->domicilio)== 0  )
                   return mediano;
             else if(strcmp(chiave_cognome, elenco_3[mediano]->cognome) < 0)
                        ultimo = mediano-1;
                  else
                        primo = mediano+1;
     }
   return -1;

}

