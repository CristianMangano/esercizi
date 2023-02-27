/* ricerca binaria in array ordinato*/

#include <stdio.h>

void ricercabinaria(int first[], int last[], int key) {
    int c = (last - first)/2;
    if ((key < first[c]) && (last - first) > 1)
    {
        return ricercabinaria(first, first + c, key);
    }
    if ((key > first[c]) && (last - first) > 1)
    {
        first = first + c;
        return ricercabinaria(first, last, key);
    }
    if ((c == 0) && !((key == first[c]) || (key == last[c])))
    {
        puts("elemento non trovato");
    }
    if ((key == first[c]) || (key == last[c]))
    {
        puts("elemento trovato");
    }
}

void main(void) {
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(int);
    int i = size - 1;
    int* last = array + i;
    int key;
    puts("inserisci un intero da cercare");
    scanf("%d", &key);
    ricercabinaria(array, last, key);
}
