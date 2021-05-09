#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct elenco
      {
         char cognome   [15];
         char nome      [15];
         char domicilio [15];
         char numero    [15];
      } ;

typedef struct elenco Elenco;

//prototipi funzioni
void ord_sel_max (Elenco array[][200],int n);
void scambiare_c (Elenco *s1, Elenco *s2);
void fusione     (Elenco elenco_a [][200], int n_a, Elenco elenco_b[][200], int n_b, Elenco elenco_c [][200]);
int max_ind_s    (Elenco array[][200],int n);
int ric_bin      (char chiave_cognome [], char chiave_nome [], char chiave_domicilio [], Elenco elenco_3 [][200], int n_3);

