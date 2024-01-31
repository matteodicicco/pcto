#include <stdio.h>


int main() { 
    int n, y;
    float costo, costo30, costo50;
    y = 0;
    while (n >= 0)
    {
        printf("Inserire il numero di articoli da ordinare:\n");
        scanf("%d", &n);
        if (n > 30 && n <= 50)
        {
            costo30 = n * 5 * 0.9;
            printf("Il costo del tuo ordine è di €%f \n", costo30);
        }
        else if (n > 50)
        {
            costo50 = n * 5 * 0.85;
            printf("Il costo del tuo ordine è di €%f \n", costo50);
        }
        else if (n > 0)
        {
            costo = n * 5;
            printf("Il costo del tuo ordine è di €%f \n", costo);
        }
        else
        {
            break;
        }
        
    }
return(0);
}
