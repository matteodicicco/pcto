#include <stdio.h>


int main() { 
    float paninoformaggio, paninosalame, far, cel, kel, far2;   
    printf("\n Inserisci la temperatura in gradi Celsius: \n");
    scanf("%f", &paninoformaggio);
    if (paninoformaggio < 273.15)
    {
        far = paninoformaggio * 1.8 + 32;
        far2 = far + 32;
        kel = paninoformaggio + 273.15;
        printf("\nLa temperatura che hai inserito in Celsius corrisponde a:\n%f Kelvin \n%f Fahrenheit \n", kel, far);
    }
    else
    {
        printf("\nLa temperatura che hai inserito è sotto lo zero assoluto (-273,15 C) \n");
    }
return 0;
}