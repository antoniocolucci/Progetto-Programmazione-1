#include "lib.h"

/* Il seguente programma gestisce la fusione in base al cognome e al nome di due elenchi telefonici
 * composti rispettivamente da 30 e 50 utenti. E' prevista una funzione di ricerca del numero telefonico
 * attraverso l'inserimento del cognome, nome e domicilio.
 */

void main ()
{


 Elenco elenco_1[][200] =  {{"Contini"      ,"Giuseppe"  ,"Via Ruoppolo"    ,"081/5624233"}
                            ,{"Russo"       ,"Filippo"   ,"Via Chiaia"      ,"081/8624977"}
                            ,{"Bianco"      ,"Stefano"   ,"Via Manzoni"     ,"081/6237841"}
                            ,{"Longobardi"  ,"Maria"     ,"Via Roma"        ,"081/1235067"}
                            ,{"Bruno"       ,"Felice"    ,"Via dei Mille"   ,"081/8556902"}
                            ,{"Ravella"     ,"Matteo"    ,"Via Pigna"       ,"081/4367008"}
                            ,{"Morra"       ,"Silvana"   ,"Via Scarlatti"   ,"081/7965412"}
                            ,{"Frate"       ,"Ciro"      ,"Via Roma"	    ,"081/5459021"}
                            ,{"Fele"        ,"Luigi"     ,"Via Venezia"     ,"081/4345581"}
                            ,{"Colucci"     ,"Antonio"   ,"Via Trieste"     ,"081/7965878"}
                            ,{"Abate"       ,"Carmela"   ,"Via Giuduce"		,"081/7234629"}
                            ,{"Aedi"        ,"Carmine"   ,"Via Longo"       ,"081/5234629"}
                            ,{"Abaterusso"  ,"Cesare"    ,"Via Alberto"     ,"081/5244629"}
                            ,{"Abbadessa"   ,"Chiara"    ,"Via Labriola"    ,"081/5234629"}
                            ,{"Abbagnano"   ,"Ciro"      ,"Via Cozzolino"   ,"081/5238549"}
                            ,{"Abbamondi"   ,"Claudia"   ,"Via Belvedere"   ,"081/5232229"}
                            ,{"Abbandonato" ,"Claudio"   ,"Via Bologna"     ,"081/5232229"}
                            ,{"Abbate"      ,"Clemente"  ,"Via Campanella"  ,"081/5232891"}
                            ,{"Abbiento"    ,"Concetta"  ,"Via Crispi"      ,"081/5232229"}
                            ,{"Abbinante"   ,"Corrado"   ,"Via Alighieri"   ,"081/5232843"}
                            ,{"Abbondando"  ,"Costantino","Via Dante"       ,"081/5232024"}
                            ,{"Abbondante"  ,"Pace"      ,"Via Dei Milioni" ,"081/5235654"}
                            ,{"Abbondati"   ,"Tammaro"   ,"Via Dei Mille"   ,"081/5232229"}
                            ,{"Abbreccia"   ,"Tania"     ,"Via Grifeo"      ,"081/5232654"}
                            ,{"Abbruzzese"  ,"Tecla"     ,"Via Margherita"  ,"081/8445654"}
                            ,{"Abbiate"     ,"Alessandra","Via Minzoni"     ,"081/5232229"}
                            ,{"Abbundo"     ,"Alessandra","Via Gianturco"   ,"081/5232229"}
                            ,{"Abete"       ,"Alessandro","Via Baracca"     ,"081/5272229"}
                            ,{"Abiosi"      ,"Alex"      ,"Via Cilea"       ,"081/1272229"}
                            ,{"Abitabile"   ,"Alfonsina" ,"Via Cilea"       ,"081/8854545"}
                            ,{"Abaco"       ,"Alfredo"   ,"Via Regine"      ,"081/5543485"}
                            ,{"Abramo"      ,"Amedeo"    ,"Via Turati"      ,"081/8899444"}
                            ,{"Abrate"      ,"Andrea"    ,"Via Fiorentino"  ,"081/1254652"}
                            ,{"Macario"     ,"Angela"    ,"Via Marconi"     ,"081/1274671"}
                            ,{"Maccari"     ,"Angelo"    ,"Via Pascoli"     ,"081/1274672"}
                            ,{"Maccaroni"   ,"Anna"      ,"Via Centro"      ,"081/1877562"}
                            ,{"Macchiaroli" ,"Anna"      ,"Via Verdi"       ,"081/1278458"}
                            ,{"Macchioni"   ,"Anna"      ,"Via Marconi"     ,"081/1454678"}
                            ,{"Macciocchi"  ,"Annalisa"  ,"Via Matteotti"   ,"081/1889548"}
                            ,{"Macri"       ,"Antonella" ,"Via Gabriele"    ,"081/1214678"}
                            ,{"Maddalena"   ,"Antonietta","Via Garibaldi"   ,"081/1277458"}
                            ,{"Maddaloni"   ,"Antonino"  ,"Via Giacinto"    ,"081/1274549"}
                            ,{"Maddaluno"   ,"Antonio"   ,"Via Iannelli"    ,"081/0127 68"}
                            ,{"Madonna"     ,"Arduino"   ,"Via Inghilterra" ,"081/1274508"}
                            ,{"Maestrini"   ,"Armando"   ,"Via Luca"        ,"081/1027458"}
                            ,{"Maestrino"   ,"Armando"   ,"Via Schipa"      ,"081/1274568"}
                            ,{"Maffei"      ,"Assunta"   ,"Via Ciccio"      ,"081/1232178"}
                            ,{"Maffettone"  ,"Aurora"    ,"Via Mannu"       ,"081/1274528"}
                            ,{"Maffia"      ,"Carlo"     ,"Via Manzoni"     ,"081/1275453"}
                            ,{"Maggi"       ,"Carmela"   ,"Via Manzoni"     ,"081/1245657"}


                         };
 int n_1 = 50;

Elenco elenco_2[][200] = {{"Paolone"     ,"Nicola"    ,"Via Napoli"      ,"081/96478523"}
                         ,{"Maggiulli"   ,"Claudia"   ,"Via Menna"       ,"081/18342154"}
                         ,{"Magli"       ,"Claudio"   ,"Via Venuti"      ,"081/18345767"}
                         ,{"Radice"      ,"Tania"     ,"Via Pittore"     ,"081/18356405"}
                         ,{"Masliano"    ,"Clemente"  ,"Via Napoli"      ,"081/54518324"}
                         ,{"Maggio"      ,"Carmine"   ,"Via Marechiaro"  ,"081/12745041"}
                         ,{"Maggiolini"  ,"Cesare"    ,"Via Mariano"     ,"081/12740812"}
                         ,{"Maggioni"    ,"Chiara"    ,"Via Piscicelli"  ,"081/18745678"}
                         ,{"Maggiore"    ,"Ciro"      ,"Via Monfalcone"  ,"081/03348473"}
                         ,{"Maggiulli"   ,"Claudia"   ,"Via Menna"       ,"081/96345678"}
                         ,{"Magli"       ,"Claudio"   ,"Via Venuti"      ,"081/74345678"}
                         ,{"Magliano"    ,"Clemente"  ,"Via Napolitano"  ,"081/18348100"}
                         ,{"Maglio"      ,"Concetta"  ,"Via Onofrio"     ,"081/29346789"}
                         ,{"Rabuano"     ,"Corrado"   ,"Via Fragnito"    ,"081/27335674"}
                         ,{"Racca"       ,"Costante"  ,"Via Castellino"  ,"081/32345215"}
                         ,{"Raccone"     ,"Pace"      ,"Via Petrarca"    ,"081/00345678"}
                         ,{"Bussetti"    ,"Giacomo"   ,"Via Petrarca"    ,"081/23845567"}
                         ,{"Radice"      ,"Tania"     ,"Via Pittore"     ,"081/81345678"}
                         ,{"Rado"        ,"Tecla"     ,"Via Posilipo"    ,"081/32345615"}
                         ,{"Raffaele"    ,"Teodora"   ,"Via Vimercate"   ,"081/24345614"}
                         ,{"Raffio"      ,"Teodoro"   ,"Via Torino"      ,"081/18345678"}
                         ,{"Raganati"    ,"Teresa"    ,"Via Simone"      ,"081/94322298"}
                         ,{"Raglia"      ,"Tilde"     ,"Via Tasso"       ,"081/31345616"}
                         ,{"Rago"        ,"Tina"      ,"Via Tasso"       ,"081/20345678"}
                         ,{"Ragone"		 ,"Tito"      ,"Via Tommaso"     ,"081/10345101"}
                         ,{"Ragosta"	 ,"Tiziana"   ,"Via Tufarelli"   ,"081/33345678"}
                         ,{"Pagliarulo"	 ,"Rocco"     ,"Via Tufarelli"   ,"081/45316537"}
                         ,{"Lucia"	     ,"Federico"  ,"Via Vittoria"    ,"081/12345678"}
                         ,{"Giambelli"	 ,"Emiliano"  ,"Via Aminei"      ,"081/86345678"}
                         ,{"Fini"		 ,"Cosimo"    ,"Via Savoia"      ,"081/35345602"}
                         };

 int n_2 = 30;

 int n_3 = n_1+n_2;


 Elenco elenco_3 [n_3][200];



 ord_sel_max(elenco_1,n_1);                       // ordinamento del primo   elenco
 ord_sel_max(elenco_2,n_2);                       // ordinamento del secondo elenco

 printf ("Elenco fuso : \n\n");

 fusione(elenco_1,n_1,elenco_2,n_2,elenco_3);    // fusione elenchi


 for (int i = 0; i < n_3; i++)                  // visualizzo la fusione dei due elenchi in un unico elenco
    {
        printf ("%s %s %s %s \n",elenco_3[i]->cognome,elenco_3[i]->nome,elenco_3[i]->domicilio,elenco_3[i]->numero);
        printf ("\n");
    }


 printf ("------------------------------------------------\n\n");
                                                //Dichiarazione Variabili
 char chiave_nome        [50];
 char chiave_cognome     [50];
 char chiave_domicilio   [50];

 printf("\nInserire il cognome dell'utente desiderato:");
 gets(chiave_cognome);

 printf("\nInserire il nome dell'utente desiderato:");
 gets(chiave_nome);

 printf("\nInserire il domicilio dell'utente desiderato:");
 gets(chiave_domicilio);

 // Richiamo la funzione per la ricerca binaria

 if (ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)== -1)

    printf("\nL'utente non e' stato trovato\n\n");
 else


    printf ("\nIl numero telefonico di %s %s residente in %s e': %s\n\n", elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->cognome, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->nome, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->domicilio, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->numero);


    while(ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)== -1)
    {
        printf("\nInserire il cognome dell'utente desiderato:");
        gets(chiave_cognome);

        printf("\nInserire il nome dell'utente desiderato:");
        gets(chiave_nome);

        printf("\nInserire il domicilio dell'utente desiderato:");
        gets(chiave_domicilio);

        if (ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)== -1)
            printf("\nL'utente non e' stato trovato\n\n");
        else

            printf ("\nIl numero telefonico di %s %s residente in %s e': %s\n\n", elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->cognome, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->nome, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->domicilio, elenco_3[ric_bin(chiave_cognome, chiave_nome, chiave_domicilio, elenco_3, n_3)]->numero);
    }


 system ("pause");
}





