
#include <stdlib.h>
int main()
{
    float grados, minutos, segundos, grados_2, minutos_2, segundos_2, val_1, val_2;
    char res, res2;
    do {
        printf("N = NORTE, y S = SUR \n");
        printf("introduce los grados , los minutos y los segundos");

        scanf("%c", &res);
        printf("Latitud [N/S]: %c", res);
        printf("\n");

        scanf("%f", &grados);
        printf("Grados [0-59]: %f", grados);
        printf("\n");

        scanf("%f", &minutos);
        printf("Minutos [0-59]: %f", minutos);
        printf("\n");

        scanf("%f", &segundos);
        printf("Segundos [0-59.9]: %f", segundos);
        printf("\n");

    } while (grados < 0 || minutos < 0 || segundos < 0);
    do {
        printf(" E = ESTE, y O = OESTE \n");
        printf("Introduce los grados, los minutos y los segundos");
        scanf
        ("%c", &res2);

        printf("Longitud [E/O]: %c", res2);
        printf("\n");
        scanf("%f", &grados_2);

        printf("Grados [0-59]: %f", grados_2);
        printf("\n");

        scanf("%f", &minutos_2);
        printf("Minutos [0-59]: %f", minutos_2);
        printf("\n");

        scanf("%f", &segundos_2);
        printf("Segundos [0-59.9]: %f", segundos_2);
        printf("\n");
    } while (grados_2 < 0 || minutos_2 < 0 || segundos_2 < 0);
    if (res == 2)
    {
        val_1 = -((grados)+(minutos / 60) + (segundos / 3600));
    }
    else
    {
        val_1 = ((grados)+(minutos / 60) + (segundos / 3600));

    }
    if (res2 == 2)
    {
        val_2 = -((grados_2)+(minutos_2 / 60) + (segundos_2 / 3600));
    }
    else
    {
        val_2 = ((grados_2)+(minutos_2 / 60) + (segundos_2 / 3600));
    }
    printf("Https://maps.google.com/maps/place/ %f, %f ", val_1, val_2);

    return 0;
}
