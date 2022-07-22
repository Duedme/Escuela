#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int scan, pedido, suma = 0;
    FILE *entrada;

    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) { fprintf(stderr, "Problema: %s", strerror(errno)); exit(1); }

    do {
        scan = fscanf(entrada,"%d", &pedido);
        suma += pedido;
    } while (scan == 1);

    printf("\nsuma: %d", suma);
    fprintf(stdout, "\nEntregó algo que no es un entero");
    return 0;
}