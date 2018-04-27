#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100


int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    int opcion;

    do{
      system("cls");
      printf("1. Mostrar el listado de series\n");
      printf("2. Mostrar el listado de usuarios\n");
      printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
      printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven\n");
      printf("5. Salir\n");
      printf("\nOpcion elegida: ");
      scanf("%d", &opcion);

      switch(opcion)
      {
        case 1:
            system("cls");
            mostrarListaSeries(listaDeSeries, TAMSERIE);
            system("pause");
        break;

        case 2:
            system("cls");
            mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
            system("pause");
        break;

        case 3:
        break;

        case 4:
        break;
      }
    }while(opcion<5);


    /*1. Mostrar el listado de series
      2. Mostrar el listado de usuarios
      3. Mostrar el listado de Usuarios con el nombre de la serie que ve
            ListaUsuarioxSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
      4. Mostrar por cada serie, el nombre de los usuarios que la ven
            ListaSeriexUsuario(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);
    */



    return 0;
}
