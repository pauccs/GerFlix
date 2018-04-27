
#include "Serie.h"
#include <stdio.h>
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void mostrarListaSeries(eSerie series[], int cant)
{
    int i;
    cant = 5;
    printf("\nLista de series:\n");
    printf("ID   Nombre  Genero    Temporadas\n");
    printf("--   ------  ------    ----------\n\n");
    for(i=0; i<cant; i++)
    {
        fflush(stdin);
        printf("%2d  %-6s  %-9s  %5d\n", series[i].idSerie, series[i].nombre, series[i].genero, series[i].cantidadTemporadas);
    }

}

/*void ListaSeriexUsuario(eUsuario usuarios[], int cant1, eSeries series[][], int cant2)
{
    int i;
    cant1 = 15;
    cant2 = 5;
    inicializarUsuariosHardCode();


    printf("\nUsuario   Serie:\n\n");
    for(i=0; i<15; i++)
    {
        if(usuarios[i].idSerie == series[i].idSerie)
        {

        }
    }

}*/
