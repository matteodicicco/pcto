#include <stdio.h>


int main() { 
    int x, y;
    float media, z;
    y = 0;
    z = 0;
    while (x >= 0)
    {
        printf("Inserire un numero >= 0:\n");
        scanf("%d", &x);
        if (x >= 0)
        {
            y = y + 1;
            z = z + x;
            media = z / y;
            printf("La media dei tuoi numeri è: %f \n", media);
        }
        else
        {
            break;
        }
        
    }
return(0);
}
