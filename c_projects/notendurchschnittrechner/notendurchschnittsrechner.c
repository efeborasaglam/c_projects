#include <stdio.h>
#include <math.h>

void main(){
    float note;
    float anzahl;
    float anzahlone;
    float summe;
    float divison;
    float durchschnitt;

    printf("Wie viel Noten haben sie schon bekommen?");
    scanf("%f",&anzahl);

    summe = 0;
    anzahlone = 0;

    while (anzahl > anzahlone)
    {
        anzahlone = anzahlone + 1;
        do
        {
            printf("\nGeben sie ihr %f. Note ein",anzahlone);
            scanf("%f",&note);
            if (note > 6)
            {
                printf("\nDie Note %f ist ungultig",note);
            }
            
        } while (note > 6);
    summe = summe + note;    
    }
    durchschnitt = summe/anzahl;
    printf("\nDurchschnitt von %f Noten sind %f", anzahlone, durchschnitt);
}