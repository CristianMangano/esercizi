/*si leggano da input dei caratteri alfabetici al massimo 10, non memorizzando i caratteri già inseriti, e stamparli tutti*/

#include <stdio.h>
#define N 10

int main(void) {
    int escape = 1;
    char vector [N];
    int isFull = 0;
    char input;
    
    while ((isFull < N) && (escape == 1))
    {
        printf("inserisci i caratteri e premi invio per un massimo di %d caratteri. inserisci -1 o 0 per uscire.\n", N);

        for (int i = 0; i < N; i++)
        {
            if (escape == 1)
            {
                scanf("%c", &input);
                vector[i] = input;
                isFull++;
                printf("hai digitato %d caratteri\n", isFull);
                escape++;
                if (i == N - 1)
                {
                    escape = 0;
                }
            }
            while (escape == 2)
            {
                scanf("%d", &escape);
                if (escape > 0)
                {
                    escape = 1;
                } else escape = 0;
            }
        }
    }

    printf("\ni caratteri che hai inserito sono:\n");

    if (isFull == N)
    {
        for (int i = 0; i < N; i++)
        {
            if (i != N - 1)
            {
                printf("%c, ", vector[i]);
            } else printf(" %c", vector[i]);
        }
    }
    
    if (isFull != N)
    {
        for (int i = 0; i < isFull; i++)
        {
            if(i != isFull - 1)
            {
                printf("%c, ", vector[i]);
            } else printf(" %c", vector[i]);
        }
    }

    return 0;
}