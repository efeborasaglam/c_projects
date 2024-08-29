#include <stdio.h>
#include <math.h>

void main(){
    //Deklerationen
    int nZahlen;    //Anzahl Zahlen
    float summe;    //Variable für die Summe deklarieren
    float summand;  //Variable für die Summanden
    int n;          //Schleifenvariabeln

    //Eingabe
    printf("Bitte geben Sie ein, wieviel Zahlen Sie addieren moechten:");
    scanf("%d", &nZahlen);
    printf("\n\n");

    //Eingabe, Verarbeitung
    summe = 0;
    n = 0;
    while (n < nZahlen)
    {
        printf("Bitte geben Sie die %d. Zahlen ein: ",n+1);
        scanf("%f", &summand);  //Summand einlesen

        summe = summe + summand;//Summand zur Summe hinzuaddieren
        n++;                    //Reinitalisierung der Schleifenvariabeln
    }
    //Ausgabe
    printf("\nDie Summe Ihrer Zahlen betraegt %f\n\n", summe);
    
}