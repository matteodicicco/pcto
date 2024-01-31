#include <stdio.h>


int main() { 
    int anno, num1, num2, num3, num4, num5;   
    printf("\n Inserisci un anno per verificare se esso è bisestile: \n");
    scanf("%d", &anno);

    if (anno % 4 == 0 && anno % 100 != 0 || anno % 400 == 0)
    {
        printf("\nL'anno inserito è bisestile.\n");
    }

    else
    {
        printf("\nL'anno inserito non è bisestile.\n");
    }
return 0;
}