#include "lib.h"

/*Function che scambia i cognomi in ordine crescente mettendo il più grande nell'ultima posizione
* e utilizzando una variabile di appoggio, temp, per permettere lo scambio.
*/

void scambiare_c( Elenco *s1, Elenco *s2)
{
     char temp_cognome[100];
     char temp_nome[100];
     char temp_domicilio[100];
     char temp_numero[100];


  strcpy (temp_cognome,s1->cognome);
  strcpy (s1->cognome,s2->cognome);
  strcpy (s2->cognome,temp_cognome);

  strcpy (temp_nome,s1->nome);
  strcpy (s1->nome,s2->nome);
  strcpy (s2->nome,temp_nome);

  strcpy (temp_domicilio,s1->domicilio);
  strcpy (s1->domicilio,s2->domicilio);
  strcpy (s2->domicilio,temp_domicilio);

  strcpy (temp_numero,s1->numero);
  strcpy (s1->numero,s2->numero);
  strcpy (s2->numero,temp_numero);



}
