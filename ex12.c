#include <stdio.h>


int main() { 
    int x, y;
    printf("Scegliere il numero di cui calcolare il fattoriale: \n");
    scanf("%d", &x);
    y = 1;
    while (x>0)
    {
        y = y * x;
        x = x - 1;
    }
        printf("%d\n", y);
return(0);
}
