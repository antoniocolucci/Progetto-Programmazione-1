# Progetto Programmazione I

Traccia 1: Gioco del baseball

Si vuole sviluppare un programma per la simulazione del gioco del baseball.
Supponiamo di avere due giocatori: un battitore e un lanciatore. Il lanciatore tira la
palla che deve essere respinta dal battitore.
Il battitore viene collocato al lato di una mappa regolare di dimensioni come in figura
(rettangolo rosso). Il battitore ha disposizione una mazza da baseball (nero in figura).
Il lanciatore fa un punto se il ricevitore non riesce a respingere la palla altrimenti se il
ricevitore colpisce la palla il punto va al ricevitore.
Il gioco procede in questo modo:
• Il lanciatore lancia la palla con una certa intensità che è identificata da un
numero casuale da 1 a 10.
• Se la palla cade nella cella arancione questa viene respinta dal battitore che
fa strike e quindi un punto.
• Se la palla cade in una cella gialla il punto va al battitore se l’intensità del
tiro è minore di 3 altrimenti il punto va al lanciatore.
• Se la palla ricade in una zona azzurra il punto va al battitore.
• Se la palla viene lanciata sul battitore al lanciatore gli vengono tolti 5 punti.
Il match finisce quando uno dei due giocatori arriva a 100 punti. Stampare il
vincitore.
L’algoritmo usa la function rand() in stdlib per generare numeri casuali: si
ricorda che, per esempio, se numero_casuale è un int, la chiamata
numero_casuale=rand()%11; genera un numero casuale intero (distribuzione uniforme) nell’insieme (0,1,2,3,4,5,6,7,8,9,10). Usare sempre la srand() per
rendere automatica la scelta iniziale del seed della sequenza di numeri casuali.

Traccia 2: Elenco telefonico.

Consideriamo due elenchi telefonici composti da 30 e 50 utenti, rispettivamente.
Ogni utente è identificato da un cognome, nome, domicilio e numero telefonico.
Si supponga che gli utenti inizialmente sono presenti in ordine casuale.
Permettere al programma di
• Fondere i due elenchi in base al cognome e nome.
• Dato un cognome, un nome e un domicilio, cercare il numero corrispondente.
