#include <stdio.h>

struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

void obtenerDatos(struct alumno *alumno);

void obtenerDatos(struct alumno *alumno)
{
    printf("Ingrese datos para el alumno:\n");

    printf("Matricula: ");
    scanf("%d", &alumno->matricula);

    fflush(stdin);  // Limpiar el búfer del teclado

    printf("Nombre: ");
    gets(alumno->nombre);

    printf("Dirección: ");
    gets(alumno->direccion);

    printf("Carrera: ");
    gets(alumno->carrera);

    printf("Promedio: ");
    scanf("%f", &alumno->promedio);
}


