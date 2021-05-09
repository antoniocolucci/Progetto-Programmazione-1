#include "lib.h"

/*Algoritmo di fusione che dati in ingresso due elenchi ordinati con rispettive dimensioni, genera un terzo elenco ordinato
* che avrà come elementi gli elementi dei due elenchi.
*/

void fusione (Elenco elenco_a [][200], int n_a, Elenco elenco_b[][200], int n_b, Elenco elenco_c [][200])
{
    int i_a = 0, i_b = 0, i_c = 0;

    while (i_a < n_a && i_b < n_b)
    {
        if (strcmp(elenco_a[i_a]->cognome,elenco_b[i_b]->cognome) < 0)
             {
                strcpy(elenco_c[i_c]->cognome  ,elenco_a[i_a]->cognome);
                strcpy(elenco_c[i_c]->nome     ,elenco_a[i_a]->nome);
                strcpy(elenco_c[i_c]->domicilio,elenco_a[i_a]->domicilio);
                strcpy(elenco_c[i_c]->numero   ,elenco_a[i_a]->numero);
                i_c++;
                i_a++;
             }
         else if(strcmp(elenco_a[i_a]->cognome,elenco_b[i_b]->cognome) > 0)
             {
                strcpy(elenco_c[i_c]->cognome  ,elenco_b[i_b]->cognome);
                strcpy(elenco_c[i_c]->nome     ,elenco_b[i_b]->nome);
                strcpy(elenco_c[i_c]->domicilio,elenco_b[i_b]->domicilio);
                strcpy(elenco_c[i_c]->numero   ,elenco_b[i_b]->numero);
                i_c++;
                i_b++;
            }
         else if(strcmp(elenco_a[i_a]->nome,elenco_b[i_b]->nome) >= 0)
                {
                    strcpy(elenco_c[i_c]->cognome  ,elenco_b[i_b]->cognome);
                    strcpy(elenco_c[i_c]->nome     ,elenco_b[i_b]->nome);
                    strcpy(elenco_c[i_c]->domicilio,elenco_b[i_b]->domicilio);
                    strcpy(elenco_c[i_c]->numero   ,elenco_b[i_b]->numero);
                    i_c++;
                    i_b++;
                }
          else if (strcmp(elenco_a[i_a]->nome,elenco_b[i_b]->nome) < 0)
                {
                    strcpy(elenco_c[i_c]->cognome  ,elenco_a[i_a]->cognome);
                    strcpy(elenco_c[i_c]->nome     ,elenco_a[i_a]->nome);
                    strcpy(elenco_c[i_c]->domicilio,elenco_a[i_a]->domicilio);
                    strcpy(elenco_c[i_c]->numero   ,elenco_a[i_a]->numero);
                    i_c++;
                    i_a++;
                }
              }

     while (i_a < n_a)
        {
            strcpy(elenco_c[i_c]->cognome  ,elenco_a[i_a]->cognome);
            strcpy(elenco_c[i_c]->nome     ,elenco_a[i_a]->nome);
            strcpy(elenco_c[i_c]->domicilio,elenco_a[i_a]->domicilio);
            strcpy(elenco_c[i_c]->numero ,elenco_a[i_a]->numero);
            i_c++;
            i_a++;
        }
     while (i_b < n_b)
        {
            strcpy(elenco_c[i_c]->cognome  ,elenco_b[i_b]->cognome);
            strcpy(elenco_c[i_c]->nome     ,elenco_b[i_b]->nome);
            strcpy(elenco_c[i_c]->domicilio,elenco_b[i_b]->domicilio);
            strcpy(elenco_c[i_c]->numero   ,elenco_b[i_b]->numero);
            i_c++;
            i_b++;
        }

}
