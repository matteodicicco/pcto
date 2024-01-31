#include <stdio.h>


int main() {    

    float numero1, numero2, somma, sottrazione, moltiplicazione, divisione, operazione;
    int resto, potenza;
    
    printf("\n Benvenuto nella CALCOLATRICE \n");
    printf("\n Inserisci un numero: \n");
    scanf("%f", &numero1);
    printf("\n Inserisci un secondo numero intero: \n");
    scanf("%f", &numero2);
    printf("\n Scegli una tra queste operazioni indicandola con il numero corrispondente: 1) Addizione 2) Sottrazione 3) Moltiplicazione 4) Divisione 5) Resto della divisione 6) Potenza \n");
    scanf("%f", &operazione);
    somma = numero1 + numero2;      
    sottrazione = numero1 - numero2; 
    moltiplicazione = numero1 * numero2;
    divisione = numero1 / numero2;
    resto = ((int)numero1 % (int)numero2);
//    potenza = 
    if (operazione == 1)
    {
          printf("\n %f + %f = %f \n", numero1, numero2, somma);
    }
     else if (operazione == 2)
    {
          printf("\n %f - %f = %f \n", numero1, numero2, sottrazione);
    }
     else if (operazione == 3)
    {
          printf("\n %f * %f = %f \n", numero1, numero2, moltiplicazione);
    }
     else if (operazione == 4)
    {
          printf("\n %f / %f = %f \n", numero1, numero2, divisione);
    }
     else if (operazione == 5)
    {
          printf("\n Il resto della divisione tra %f e %f è %f \n", numero1, numero2, resto);
    }
     else if (operazione == 6)
     {
            if (numero2 == 0)
            {
                  printf("\n %f alla potenza di 0 = 1 \n", numero1);
            }
            if (numero2 < 0)
            {
                  printf("L'esponente deve essere maggiore di 0. \n");
            }
//            else
//            {
//                  printf("\n Il numero %f elevato alla potenza di %f = %f \n", numero1, numero2, potenza);
//            }
    }
     else printf("\n Per favore inserire solo un numero tra 1, 2, 3, 4 e 5");
    return 0;
}