/* Scrivere un programma che prende in input una stringa e la restituisce con ogni carattere ripetuto 3 volte. Esempio il programma riceve in input la 
stringa 'abcd' e restitutisce la stringa 'aaabbbcccddd' */

#include <stdio.h>
#define N 10
#define REP 3
typedef enum {FALSE, TRUE} Boolean;

int main(void) {
    char stringa[N];
    Boolean bool = TRUE;    // variabile bool del tipo Boolean

    printf("inserisci una parola di massimo 10 caratteri\n");
    scanf("%s", stringa);
    
    int j = 0;
    int i = 0;
    
    while (i < N)
    {
        if ((bool) && (j < REP))
        {
            printf("%c ", *(stringa + i));
            j++;
        } else
        {
            j = 0;
            bool = FALSE;
        }

        if (!bool)
        {
            i++;
            bool = TRUE;
        }
    }
    // printf("%c", *stringa+2);    // dovrebbe stampare c
    return 0;
}
