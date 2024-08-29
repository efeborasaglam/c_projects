#include <stdio.h>
#include <math.h>



void main(){
double summe;
double zahl;
double anzahl;
double anzahlone;
printf("Geben sie die Anzahl Zahl ein den sie ausrechnen moechten");
scanf("%lf",&anzahl);

summe = 0;
while (anzahl > anzahlone)
{
    anzahlone = anzahlone + 1;
    printf("\n\nGeben sie ihr %f. Zahl ein", anzahlone);
    scanf("%lf",&zahl);
    summe = summe + zahl;
}
printf("Die Summe ist %f",summe);
}