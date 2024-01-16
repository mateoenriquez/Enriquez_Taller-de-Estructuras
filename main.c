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
void mostrarDatos(struct alumno *alumno);

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

void mostrarDatos(struct alumno *alumno)
{
    printf("\nDatos del alumno:\n");
    printf("Matricula: %d\n", alumno->matricula);
    printf("Nombre: %s\n", alumno->nombre);
    printf("Dirección: %s\n", alumno->direccion);
    printf("Carrera: %s\n", alumno->carrera);
    printf("Promedio: %.2f\n", alumno->promedio);
}

int main()
{
    struct alumno unAlumno;

    // Obtener datos del único alumno
    obtenerDatos(&unAlumno);

    // Mostrar datos del único alumno
    mostrarDatos(&unAlumno);

    return 0;
}


