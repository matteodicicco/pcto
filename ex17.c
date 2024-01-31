#include <stdio.h>


void fase1()  
{
    float numero1, numero2, somma, sottrazione, moltiplicazione, divisione, operazione;
    int resto, potenza;

    printf("\n Benvenuto nella CALCOLATRICE \n");
    printf("\n Inserisci un numero: \n");
    scanf("%f", &numero1);
    printf("\n Inserisci un secondo numero intero: \n");
    scanf("%f", &numero2);
    printf("\n Scegli una tra queste operazioni indicandola con il numero corrispondente: 1) Addizione 2) Sottrazione 3) Moltiplicazione 4) Divisione 5) Resto della divisione\n");
    scanf("%f", &operazione);
    somma = numero1 + numero2;      
    sottrazione = numero1 - numero2; 
    moltiplicazione = numero1 * numero2;
    divisione = numero1 / numero2;
    resto = ((int)numero1 % (int)numero2);

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
          printf("\n Il resto della divisione tra %f e %f è %d \n", numero1, numero2, resto);
    }
    else printf("\n Per favore inserire solo un numero tra 1, 2, 3, 4 e 5");
}

int main() { 
    int po, ciao;
    po = 1;
    while (po>0)
    {
        fase1();
        printf("\nHai altri calcoli da fare?\nDigita 1)No 2)Si\n");
        scanf("%d", &ciao);
        if (ciao == 1)
        {
            break;
        }
        
    }

}