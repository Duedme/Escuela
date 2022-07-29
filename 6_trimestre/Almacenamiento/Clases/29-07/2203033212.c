#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

typedef struct {
    char archivo [10];
} Archivos;

Archivos file;

FILE* crear_archivo() {
    FILE *archivo = fopen("personas.txt", "w");
}

void cerrar_archivo(FILE* archivo) {
    if (archivo) { fprinf(stderr, "Problema con Archivo: %s", strerror(errno)); exit(1);}
}

int main() {
    crear_archivo();
    cerrar_archivo();
}