#include <stdio.h>

void main(){
    int anzahl;
    int start = 0;
    int zahl;
    int maximum = 0;
    int minimum = 0;


    printf("Bitte geben Sie die Anzahl der Zahlen ein, die Sie eingeben moechten");
    scanf("%d",&anzahl);


    while (start < anzahl)
    {
        printf("Gib die %d Zahl ein:\n",start+1);
        scanf("%d", &zahl);
        if (zahl > maximum)
        {
            maximum = zahl;
        }
        else{
            minimum = zahl;
        }
        
        start++;
    }
    printf("%d ist die groesste Zahl\n", maximum);
    printf("%d ist die kleinste Zahl", minimum);
    
}