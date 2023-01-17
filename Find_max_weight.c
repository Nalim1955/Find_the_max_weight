#include <stdio.h>
#include <string.h>

#define pocet 10

/* ***************** 8C **************************
Vytvorte program, ktory umozni zadanie vysky a vahy 10 osob. Nasledne zisti
najvyssiu zadanu vahu a vypise aj vysku tejto osoby.
******************** 8C ************************** */

typedef struct clovek
{
    char meno[20];
    char priezvisko[40];
    float vaha;
    float vyska;
} IDN_CLOVEK;   		// Nazov premennej

int main(void)
{
    IDN_CLOVEK arr_udaje[pocet];

    int i=0,k=0,max_vaha=0, vzor_data=0;

    printf("\n Je moznost pouzit vzorove demo data.");
    printf("\n Pre demo data: 0 | Pre manualne zadavanie: 1 az 9 ");
    printf("\n Vasa volba :");
    scanf("%d", &vzor_data);

    if (vzor_data ==0)
    {

        strcpy(arr_udaje[0].meno, "Jano");
        strcpy(arr_udaje[0].priezvisko, "Rabbit");
        arr_udaje[0].vaha = 135.25;
        arr_udaje[0].vyska = 210;

        strcpy(arr_udaje[1].meno, "Peter");
        strcpy(arr_udaje[1].priezvisko, "Zajac");
        arr_udaje[1].vaha = 65.25;
        arr_udaje[1].vyska = 169;

        strcpy(arr_udaje[2].meno, "Martin");
        strcpy(arr_udaje[2].priezvisko, "Kralik");
        arr_udaje[2].vaha = 65.2;
        arr_udaje[2].vyska = 110;

        strcpy(arr_udaje[3].meno, "Fero");
        strcpy(arr_udaje[3].priezvisko, "Poslusny");
        arr_udaje[3].vaha = 95.122;
        arr_udaje[3].vyska = 180;

        strcpy(arr_udaje[4].meno, "Majo");
        strcpy(arr_udaje[4].priezvisko, "Neposlusny");
        arr_udaje[4].vaha = 193.2;
        arr_udaje[4].vyska = 198;

        strcpy(arr_udaje[5].meno, "Andrea");
        strcpy(arr_udaje[5].priezvisko, "Pospisilova");
        arr_udaje[5].vaha = 93.52;
        arr_udaje[5].vyska = 200.1;

        strcpy(arr_udaje[6].meno, "Martina");
        strcpy(arr_udaje[6].priezvisko, "Ukricana");
        arr_udaje[6].vaha = 75.2;
        arr_udaje[6].vyska = 157.13;

        strcpy(arr_udaje[7].meno, "Tomas");
        strcpy(arr_udaje[7].priezvisko, "Vozar");
        arr_udaje[7].vaha = 85.2;
        arr_udaje[7].vyska = 190;

        strcpy(arr_udaje[8].meno, "Darina");
        strcpy(arr_udaje[8].priezvisko, "Vozarova");
        arr_udaje[8].vaha = 45.2;
        arr_udaje[8].vyska = 140.55;

        strcpy(arr_udaje[9].meno, "Filip");
        strcpy(arr_udaje[9].priezvisko, "Otcenas");
        arr_udaje[9].vaha = 85.6234;
        arr_udaje[9].vyska = 187;

    }
    else
    {
        for (i=0; i < pocet; i++)
        {
            printf("\nZadaj udaje o uzivatelovi c. %d\n\n", i+1);

            printf("Zadaj meno:");
            scanf("%s", &arr_udaje[i].meno);

            printf("Zadaj priezvisko:");
            scanf("%s", &arr_udaje[i].priezvisko);

            do
            {
                printf("Zadaj vahu v[kg]:");
                scanf("%f", &arr_udaje[i].vaha);
            }
            while(arr_udaje[i].vaha <= 0);

            do
            {
                printf("Zadaj vysku v [cm]:");
                scanf("%f", &arr_udaje[i].vyska);
            }
            while(arr_udaje[i].vyska <= 0);

        }

    }

    for(i=0; i< pocet; i++)
    {
        if(arr_udaje[i].vaha>arr_udaje[max_vaha].vaha)
        {
            max_vaha=i; //zisti max vahu
            k=0; //resetuje
        }

        if (arr_udaje[i].vaha == arr_udaje[max_vaha].vaha && i != max_vaha)
        {
            k+=1; //Ak su rovnake vahy pripocita
        }

    }


    if (k == 0)
    {
        printf("\n Osoba s najvyzsiou vahou je: \n %s %s \t %f \t %f \n", arr_udaje[max_vaha].meno,arr_udaje[max_vaha].priezvisko,arr_udaje[max_vaha].vaha,arr_udaje[max_vaha].vyska);
    }
    else
    {
        printf("\n Osoby s rovnakou najvyzsiou vahou su: ");
        for(i=0; i< pocet; i++)
        {
            if (arr_udaje[i].vaha == arr_udaje[max_vaha].vaha)
            {
                printf("\n %s %s \t %f \t %f", arr_udaje[i].meno,arr_udaje[i].priezvisko,arr_udaje[i].vaha,arr_udaje[i].vyska);
            }
        }
        printf("\n");
    }

    return 0;
}
