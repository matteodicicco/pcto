#include <stdio.h>


int main() { 
    
    int x;
    int y = 2;
    int z = 0;
    printf("Scegliere il numero da verificare: \n");
    scanf("%d", &x);

    while (x < y)
    {
        if (x % y == 0)
        {
            z = z + 1;
        }
        y = y + 1;
    }
    if (z == 0)
    {
        printf("Il numero scelto è un numero primo. \n");
    }
    else
    {
        printf("Il numero scelto NON è un numero primo. \n");
    }
return(0);
}
