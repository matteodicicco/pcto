#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { 
    int nind, punti, x;
    int r;
    punti = 0;
    printf("\nIl computer genererà un numero randomico.\nIn caso il numero venga indovinato si otterrà 1 punto.\nAl raggiungimento di 5 punti avrai vinto.\n");
    while (punti < 5)
    {
        srand(time(NULL));
         r =  rand() % 11;
         printf("\nScegliere un numero compreso tra 1 e 30. \n");
         scanf("%d", &nind);
         srand(time(NULL));
         printf("Numero generato: %d\n", r);
         if (r == nind)
         {
            printf("\nComplimenti, hai ottenuto un punto!\n");
            punti = punti + 1;
        }
        else printf("Purtroppo hai sbagliato, il numero era: %d \n", r);
    }
    

    return(0);
}