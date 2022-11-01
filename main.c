#include <stdio.h>
#include <stdlib.h>

int main()
{

    int habitacionActual=4, habitacionIzq=6;
    int habitacionDer=2;
    int num=50;

    printf(" ______________________________________________________\n");
    printf("|_________________________%i____________________________|\n", habitacionActual);
    printf("|______________________________________________________|\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|      ___________                  ___________        |\n");
    printf("|      |         |                  |         |        |\n");
    printf("|      |    %i    |                  |    %i    |        |\n", habitacionIzq, habitacionDer);
    printf("|      |         |       ____       |         |        |\n");
    printf("|      |         |      |    |      |         |        |\n");
    printf("|      |         |      |____|      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |       __|__      |         |        |\n");
    printf("|      |         |         |        |         |        |\n");
    printf("|      |         |        / \\       |         |        |\n");
    printf("|______|_________|_______/___\\_____ |_________|________|\n");


    printf(" ______________________________________________________\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                   cargando %i                               |\n", num);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf(" ______________________________________________________\n");


  mostrarCarga();

    return 0;
}

void mostrarCarga()
{
    int num=0;

    while (num<=100)
    {
        printf(" ______________________________________________________\n");
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf("|                   cargando %i                               |\n", num);
    printf("|                                                      |\n");
    printf("|                                                      |\n");
    printf(" ______________________________________________________\n");

    num=num+10;
    }
}
