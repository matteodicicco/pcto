#include <stdio.h>


int main() { 
    int anni;
    printf("Quanti anni hai? \n");
    scanf("%d", &anni );
    if (anni > 18)
    {
        printf("Sei maggiorenne \n");
    }
    else if (anni == 18)
    {
        printf("Sei maggiorenne \n");
    }
    else
    {
        printf("Sei minorenne \n");
    }
    

}