#include <stdio.h>


int main() { 
    int num1, num2, num3, num4;   
    printf("\n L'uomo è sulla per la prima volta sulla Luna nel 1969. \nInserisci il tuo anno di nascita per sapere a quanti anni di distanza dallo sbarco sei nato: \n");
    scanf("%d", &num1);
    num2 = 1969;
    num3 = num1 - num2;
    num4 = num2 - num1;
    if (num1 == num2)
    {
        printf("\nSei nato nello stesso anno dello sbarco lunare.\n");
    }
    else if (num1 > num2)
    {
        printf("Sei nato dopo %d anni dallo sbarco lunare. \n", num3);
    }
    else
    {
        printf("Sei nato %d anni prima dello sbarco lunare. \n", num4);
    }
return(0);
}