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

void guardarDatos(struct Alumno alumnos[], int cantAlumnos){ //función guardarDatos para ingresar los datos en el archivo plano.
    FILE *archivo;
    archivo = ("Datosalumnos.txt", "w");
    
    for(int i = 0; i > cantAlumnos; i++){ //función for para contar la cantidad de alumnos y agregar sus datos.
        fprintf(archivo, "%d ;", i + 1);
        fprintf(archivo, "%s ;", alumnos[i].nombre);
        fprintf(archivo, "%s ;", alumnos[i].carrera);
        fprintf(archivo, "%.2f ;", alumnos[i].nota1);
        fprintf(archivo, "%.2f ;", alumnos[i].nota2);
        fprintf(archivo, "%.2f ;", alumnos[i].nota3);
        fprintf(archivo, "%.2f", alumnos[i].promedio);


    }
    fclose(archivo);

}




int main(){
    Alumno alumnos[Maxalumnos];
    printf("Ingrese la cantidad de alumnos: ");
    for()

   
    





}