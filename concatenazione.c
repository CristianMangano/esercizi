#include <stdio.h>
#define N 5

struct Elem
{
  int data;
  int prossimo
};

struct Lista
{
  struct Elem array[N];
  int inizio, inizio_ll;
};

void main(void) {
  struct Lista lista;
  lista.inizio = -1;
  lista.inizio_ll = 0;
  
  for(int i = 0; i < (N - 1); i++)
    lista.array[lista.inizio_ll + i].prossimo = i + 1;
    
  lista.array[N - 1].prossimo = -1;
  
  int temp;
  temp = lista.array[lista.inizio_ll].prossimo; // lo specifico elemento della lista vuota che contiene l'indice prossimo
  lista.array[lista.inizio_ll].prossimo = lista.inizio; // mette il valore -1 nel campo prossimo del primo elemento della lista vuota
  
  lista.array[lista.inizio_ll].data = 3;  // il dato fondamentale che decide dove verrà inserito l'input è inizio_ll
  
  lista.inizio = lista.inizio_ll;  // mette il valore di inizio_ll in inizio
  
  lista.inizio_ll = temp; // il generico inizio della lista vuota (quello dichiarato subio dopo il main)
  
}
