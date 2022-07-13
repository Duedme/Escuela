#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int int_a, int_b, sum;
    char plus;
    FILE *entrada, *salida;

    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) { exit(1); }

    fscanf(entrada, "%d", &int_a);
    fscanf(entrada, "%c", &plus);
    fscanf(entrada, "%d", &int_b);

    sum = int_a + int_b;

    salida = fopen("salida.txt", "w");

    fprintf(salida, "%d", sum);

    fclose(entrada);
    fclose(salida);

    return 0;
}       