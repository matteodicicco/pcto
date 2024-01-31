#include <stdio.h>

int main() { 

    int num1, num2, num3, dif1, dif2;
    printf("\n Inserisci un numero: \n");
    scanf("%d", &num1);
    printf("\n Inserisci un secondo numero: \n");
    scanf("%d", &num2);
     printf("\n Inserisci un terzo numero: \n");
    scanf("%d", &num3);
    dif2 = num3 - num2;
    dif1 = num2 - num1;
    if (dif1 == dif2)
    {
        printf("\nI 3 numeri inseriti sono una successione aritmetica.\n");
    }
    else
    {
        printf("\nI 3 numeri non sono una successione aritemtica. \n");
    }
return 0;
}