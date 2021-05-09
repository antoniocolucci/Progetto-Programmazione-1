#include "lib.h"

/*Procedura a cui vengono passati in input il campo e l'intensità della palla
 e restituisce in output il punto e il giocatore a cui va tale punto.*/


void posizione (char campo [4][3], int intensita,int *punto, char *giocatore)
{
   int i, j,nx, ny,nk,nz,nn;
   int lanciatore = 0;
   int battitore = 0;
   char flag;
   int score=0,xscore=0;

   srand(time(NULL));

   //Genera a caso una posizione nella matrice (4x3)

   nx = rand ()%4;//genera un numero casuale da 0 a 3.
   ny = rand ()%3;//genera un numero casuale da 0 a 2

   nn = 1 + rand ()%3;//genera un numero casuale da 1 a 3.
   nz = 2;

   campo  [nx][ny] = ('O');

   for (i = 0; i < 4; i++)
    {
        flag=' ';
        printf (" -------------\n");

        for (j = 0; j < 3; j++)
        {
           printf (" | %c", campo  [i][j]);

           if (i== nn && j==nz)
             {
               flag='B';
               printf ("X");
             }

        }

        if (flag=='B')
            printf ("|\n");  // chiude la tabella con la x.
        else
            printf (" |\n"); // chiude la tabella.
    }


    printf (" -------------\n");
    printf ("\n");
    printf ("La X rappresenta la posizione del battitore. La O rappresenta la posizione della palla.");

   //Inizio calcolo punteggio.

    if ((nn == 1 && nz == 2) && ((nx == 2 && ny == 2) || (nx == 3 && ny == 2)))  //caso in cui il battitore non riesce a respingere la palla.

    {    *punto=1;
         *giocatore='L';

    }
    else if ((nn == 2 && nz == 2) && ((nx == 1 && ny == 2) || (nx == 3 && ny == 2)))
        {
         *punto=1;
         *giocatore='L';
        }

    else if ((nn == 3 && nz == 2) && ((nx == 1 && ny == 2) || (nx == 2 && ny == 2)))
        {
         *punto=1;
         *giocatore='L';

        }

    else if (nn == nx && nz == ny) //caso in cui la palla viene lanciata sul battitore.
        {
         *punto=-5;
         *giocatore='L';
        }
    else if (nx == 2 && ny == 1) //caso in cui il battitore fa strike (cella arancione).
        {
        *punto=1;
        *giocatore='B';
        }


    else if (((nx == 1 && ny == 1) || (nx == 3 && ny == 1)) && (intensita < 3)) //caso in cui la palla cade in una delle due celle gialle. Intensità minore di 3 punto al battitore.
        {*punto=1;
         *giocatore='B';
          printf ("\n\nL'intensita' del lancio e' : %d", intensita);
        }
    else if ((nx == 1 && ny == 1) || (nx == 3 && ny == 1) && (intensita >= 3))  //intensità maggiore di 3, punto al lanciatore.
       {
         *punto=1;
         *giocatore='L';
         printf ("\n\nL'intensita' del lancio e' : %d", intensita);
       }

    else if ((nx == 0 && ny == 0) || //caso in cui la palla cade in una delle 6 celle azzurre.
             (nx == 0 && ny == 1) ||
             (nx == 0 && ny == 2) ||
             (nx == 1 && ny == 0) ||
             (nx == 2 && ny == 0) ||
             (nx == 3 && ny == 0))
        {
            *punto=1;
            *giocatore='B';
        }

    printf ("\n\n\n");
}




