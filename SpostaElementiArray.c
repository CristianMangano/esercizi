#include <stdio.h>

void inverti(int array[], int size, int N) {
    int temp;
    int count = 0;
    while (count < N)
    {
        for (int i = 0; i < (size - 1); i++)
        {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
        count++;
    }
}

void main(void) {
    int array[] = {1,2,3,4,5,6,7};
    int size = 7;
    int N = 3;
    inverti(array, size, N);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
