#include "lib.h"


/*Il seguente programma simula una partita di Baseball durante la quale, all'interno del campo
*formato da una matrice (4x3), verranno mostrati la posizione del battitore (X) e la posizione della
*palla (O). In base a dove si troveranno il battitore e la palla, il punto verrà assegnato o al lanciatore
*o al battitore a seconda delle regole del gioco.
*La partita finirà quando uno dei giocatori arriverà a 100 punti.*/






void main ()
{
    //dichiarazione variabili.
    int  intensita, r,c,xpunto,totale,tot_b=0,tot_l=0,conta;
    char xgiocatore,scelta,tipogiocatore[15];

	system ("color B");
    printf ("Benvenuto nel gioco del Baseball.");

    while ((tot_b <= 100) || (tot_l <=100)) //ciclo while per ripetere ogni volta il lancio della palla finchè uno dei due giocatori non raggiunge 100 punti.
    {
        conta=conta+1; //variabile conta per contare il numero del lancio.

        fflush(stdin);

        printf ("\n\nVuoi lanciare la palla? (s/n):");

        scanf ("%c",&scelta);

        char campo [4][3] =  {{' ', ' ', ' '},
                              {' ', ' ', ' '},
                              {' ', ' ', ' '},
                              {' ', ' ', ' '}};

           switch(scelta)
           {                                               //costrutto di selezione switch per permettere all'utente di scegliere se vuole lanciare la palla, (s), oppure se sceglie di non lanciarla (n).
             case 's':
                    printf ("\n Lancio n. %d\n",conta);
                    intensita = lancio ();                             //ricavo l'intensità  del lancio richiamando la funzione lancio.

                    posizione (campo,intensita,&xpunto,&xgiocatore);   //ricavo il punto e il giocatore a cui va il punto richiamando la procedura posizione.


                    if (xgiocatore=='B')
                        tot_b=tot_b+xpunto;
                    else
                        tot_l=tot_l+xpunto;



                    if (tot_b==100)
                        {printf ("\nIl vincitore e' il battitore.\n");
                         printf("\n");
                         system("Pause");
                         exit(EXIT_SUCCESS);

                        }

                    else if (tot_l==100)
                        {printf ("\nIl vincitore e' il lanciatore.\n");
                         printf("\n");
                         system("Pause");
                         exit(EXIT_SUCCESS);
                        }

                    else
                        if (xgiocatore=='B')
                           {
                            printf("Il punto va al Battitore.");
                            printf("\nTotale Battitore: %d\n ",tot_b);
                           }
                        else
                            if (xpunto==-5)
                                {
                                    printf("Il Lanciatore perde 5 punti.");
                                    printf("\nTotale Lanciatore: %d \n",tot_l);
                                }
                            else
                                {
                                    printf("Il punto va al Lanciatore.");
                                    printf("\nTotale Lanciatore: %d\n ",tot_l);
                                }

                    break;

           case 'n':
               system ("PAUSE");
               exit(EXIT_SUCCESS);break;                                 //caso in cui viene pigiato il tasto n il programma si chiude.

           default:printf("\nInserimento non corretto.Riprova\n");break; //caso in cui viene pigiato un tasto diverso da s o n.

        }
     }


     system ("PAUSE");

}


