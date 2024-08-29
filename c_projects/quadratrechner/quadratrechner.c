#include <stdio.h>
#include <math.h>

void main(){

int ja;
double zahl;
printf("Quadrat\n");
printf("-----------------------------------------\n\n");
printf("\ngib zahl:");
scanf("%lf",&zahl);
zahl = zahl*zahl;
printf("\n%f quadrat\n",zahl);

do
{
    printf("Noch eine Rechnung? (nein = 0) (ja = 1)");
    scanf("%d",&ja);
    printf("-----------------------------------------\n");
    switch (ja)
    {
    case 1:
    printf("\ngib zahl:");
    scanf("%lf",&zahl);    
        zahl = zahl * zahl;
        printf("der Quadrat ist %f",zahl);


    break;
    case 0:
    printf("\nTschuess");
    break;
    
    default:
    printf("\nBitte wählen sie 1 oder 2\n");
    ;
    break;
    }
    zahl = 0;
} while (ja > 0);

}
