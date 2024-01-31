#include <stdio.h>


int main() { 
    int paninoformaggio, paninosalame;   
    printf("\n Inserisci un numero: \n");
    scanf("%d", &paninoformaggio);
    printf("\n Inserisci un altro numero: \n");
    scanf("%d", &paninosalame);

    if (paninoformaggio % paninosalame == 0)
    {
        printf("\nIl primo numero che hai inserito è un multiplo del secondo. \n");
    }
    else if (paninosalame % paninoformaggio == 0)
    {
        printf("\nIl secondo numero che hai inserito è un multiplo del primo. \n");
    }
    else
    {
        printf("\nNessuno dei sue numeri che hai inserito è multiplo dell'altro. \n");
    }
return 0;
}