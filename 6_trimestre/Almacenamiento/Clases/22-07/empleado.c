#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

typedef struct {
        char numero_economico [20];
        char nombre [20];
        char apellido_materno [20];
        char apellido_paterno [20];
    } Empleado;

Empleado emp;

void crearArchivo() {
    FILE *archivo = fopen("EmpleadoUAM.txt", "w");
    fprintf(stdout, "\n\nCrearndo archivo...");
    fclose(archivo);

}

void insertarEmpleado() {
    FILE *archivo = fopen("EmpleadoUAM.txt", "r+");
    int idEmpleado;

    if (archivo == NULL) { 
        fprintf(stderr, "Error: %s", strerror(errno));
        crearArchivo(); 
    }

    printf("\nNúmero Económico:");
    scanf("%20[^\n]", &emp.numero_economico);
    idEmpleado = atoi(emp.numero_economico);
    while (getchar() != '\n');

    printf("\nNombre:");
    scanf("%20[^\n]", &emp.nombre);
    while (getchar() != '\n');

    printf("\nApellido Materno:");
    scanf("%20[^\n]", &emp.apellido_materno);
    while (getchar() != '\n');

    printf("\nApellido Paterno:");
    scanf("%20[^\n]", &emp.apellido_paterno);
    while (getchar() != '\n');

    fseek(archivo, idEmpleado*sizeof(Empleado), SEEK_SET);
    fwrite(&emp, sizeof(Empleado), 1, archivo);

    fclose(archivo);
}

void consultarArchivo() {
    FILE *archivo = fopen("EmpleadoUAM.txt", "r");

    if (archivo == NULL) { fprintf(stderr, "Error: %s", strerror(errno)); exit(1); }

    while (!feof(archivo)) {
        fread(&emp, sizeof(Empleado), 1, archivo);
        if(strlen(emp.nombre) > 0) {
            printf("Número económico: %s\n", emp.numero_economico);
            printf("Nombre: %s\n", emp.nombre);
            printf("Apellido Materno: %s\n", emp.apellido_materno);
            printf("Apellido Paterno: %s\n", emp.apellido_paterno);
        }
    }
    strcpy(emp.nombre, "");

    fclose(archivo);
}

int main() {
    insertarEmpleado();
    consultarArchivo();
    return 0;
}