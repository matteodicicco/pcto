#include <stdio.h>


int main() { 
    int nazione, etaita, etausa, etauk, etafra, etapor, etaspa;
    printf("In quale di queste nazioni devi prendere la patente? \n1) Italia \n2) Stati Uniti \n3) Regno Unito \n4) Spagna \n5) Francia \n6) Portogallo \n");
    scanf("%d", &nazione );

    if (nazione == 1)
    {
        int etaita;
        printf("Quanti anni hai? \n");
        scanf("%d", &etaita);
        if (etaita >= 18)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else if (nazione == 2)
    {
        int etausa;
        printf("Quanti anni hai? \n");
        scanf("%d", &etausa);
        if (etausa >= 16)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else if (nazione == 3)
    {
        int etauk;
        printf("Quanti anni hai? \n");
        scanf("%d", &etauk);
        if (etauk >= 17)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else if (nazione == 4)
    {
        int etaspa;
        printf("Quanti anni hai? \n");
        scanf("%d", &etaspa);
        if (etaspa >= 18)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else if (nazione == 5)
    {
        int etafra;
        printf("Quanti anni hai? \n");
        scanf("%d", &etafra);
        if (etafra >= 18)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else if (nazione == 6)
    {
        int etapor;
        printf("Quanti anni hai? \n");
        scanf("%d", &etapor);
        if (etapor >= 18)
        {
            printf("Puoi prendere la patente. \n");
        }
        else
        {
            printf("Non puoi prendere la patente. \n");
        }
    }

    else
    {
        printf("Inserire un numero compreso tra 1 e 6. \n");
    }
    
return(0);
}