#include <stdio.h>

void cercaarray(int array[], int size, int key, int i) {
    if (array[i] == key)
    {
        puts("elemento trovato");
    }
    if ((array[i] != key) && (i < (size - 1)))
    {
        i = i + 1;
        return cercaarray(array, size, key, i);
    }
    if ((i == (size - 1)) && !(array[i] == key))
    {
        puts("elemento non presente");
    }
}

void main(void) {
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(int);
    int key;
    puts("digita un numero da ricercare");
    scanf("%d", &key);
    cercaarray(array, size, key, 0);
}
