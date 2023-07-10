#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define Maxalumnos 50

typedef struct{ //estructura "Alumno" para añadir los datos de los alumnos
    char nombre[50];
    char carrera[50];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
}Alumno;


void guardarDatos(Alumno alumnos[], int cantAlumnos){ //función guardarDatos para ingresar los datos en el archivo plano.
    FILE *archivo;
    archivo = fopen("Datosalumnos.txt", "a+");
    
    for(int i = 0; i < cantAlumnos; i++){ //función for para contar la cantidad de alumnos y agregar sus datos.
        fprintf(archivo, "%d. ", i + 1);
        fprintf(archivo, "%s ; ", alumnos[i].nombre);
        fprintf(archivo, "%s ; ", alumnos[i].carrera);
        fprintf(archivo, "%.2f ; ", alumnos[i].nota1);
        fprintf(archivo, "%.2f ; ", alumnos[i].nota2);
        fprintf(archivo, "%.2f ; ", alumnos[i].nota3);
        fprintf(archivo, "%.2f\n", alumnos[i].promedio);


    }
    fclose(archivo);

}


int main(){ //funcion main para que corran todas las funciones 
    Alumno alumnos[Maxalumnos];
    int cantAlumnos;
    printf("Ingrese la cantidad de alumnos: ");
    scanf("%d", &cantAlumnos);
    for(int i = 0; i < cantAlumnos; i++){ //funcion for para que el usuario elija la cantidad de alumnos y que se agreguen sus datos haciendo conteo.
        printf("%d.\n", i + 1);
        printf("Ingrese el nombre del alumno: ");
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese la carrera: ");
        scanf("%s", alumnos[i].carrera);
        printf("Ingrese la nota del primer progreso: ");
        scanf("%f", &alumnos[i].nota1);
        printf("Ingrese la nota del segundo progreso:");
        scanf("%f", &alumnos[i].nota2);
        printf("Ingrese la nota del tercer progreso:");
        scanf("%f", &alumnos[i].nota3);
        alumnos[i].promedio = (alumnos[i].nota1 + alumnos[i].nota2 + alumnos[i].nota3) / 3;
    }
    guardarDatos(alumnos, cantAlumnos);
    return 0;

}