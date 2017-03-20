#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wpisz(int *tab)
{
    int c = scanf("%d", tab);
    while(c != 1)
    {
        fflush(stdin);
        printf("Podaj liczbe: ");
        c = scanf("%d", *tab);
    }
}


int main(void)
{
    char nazwa_pliku[100];
    printf("Podaj nazwe pliku: ");
    scanf("%s", nazwa_pliku);
    fflush(stdin);

    FILE *f;
    f = fopen(nazwa_pliku, "w");
    if( f == NULL )
    {
        printf("Nie udalo sie otworzyc pliku :<");
        return -1;
    }

    int tab[10];
    int tab2[10];
    int i = 0;
    for(i; i<10; i++)
    {
        printf("Podaj liczbe: ");
        wpisz(tab+i);
        //printf("%d", *(tab+i));
    }

    for(i = 0; i<10; i++)
    {
        fprintf(f, "%d\n", tab[i]);
    }
    fclose(f);

    f = fopen(nazwa_pliku, "r");
    if( f == NULL )
    {
        printf("Nie udalo sie otworzyc pliku :<");
        return -2;
    }
    i = 0;
    while(feof(f) == 0)
    {
        fscanf(f, "%d", &tab2[i]);
        i++;
    }

    fclose(f);
    float tab3[10];
    for(i=0; i<10; i++)
    {
        tab3[i] = log(tab2[i]) + pow((3*tab2[i]),2);
        printf("%d\t%d", tab2[i], tab3[i]);
    }

    return 0;
}
