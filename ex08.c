#include <stdio.h>


int main() { 
    int num1, num2, num3, sum12, sum13, sum23;   
    printf("\n Inserisci un numero: \n");
    scanf("%d", &num1);
    printf("\n Inserisci un secondo numero: \n");
    scanf("%d", &num2);
    printf("\n Inserisci un terzo numero: \n");
    scanf("%d", &num3);

    sum12 = num1 + num2;
    sum13 = num1 + num3;
    sum23 = num2 + num3;

    if (sum12 > num3 && sum23> num1 && sum13 > num2)
    {
        printf("\nLe 3 misure possono essere lati di un triangolo.\n");
    }

    else
    {
        printf("\nLe 3 misure NON possono essere lati di un triangolo.\n");
    }
return 0;
}