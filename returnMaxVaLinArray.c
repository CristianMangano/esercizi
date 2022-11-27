/*questo programma dato un numero N di elementi in un array restituisce il valore massimo*/

#include <stdio.h>
#define NUMBER 4

int main(void) {
    int vector[NUMBER] = {1,2,3,4};

    int massimo_array;

    for (int i = 0; i < NUMBER; i++)
    {
        int massimo = vector[0];
        if (vector[i] > massimo)
        {
            massimo = vector[i];
            massimo_array = massimo;
        }
    }

    printf("il massimo valore nell'array: %d", massimo_array);
}