#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, suma = 0, cuenta = 0;
    float promedio;
    FILE *entrada, *salida;

    entrada = fopen("entrada.txt", "r");
    salida = fopen("salida.txt", "w");

    while(!feof(entrada)) {
        fscanf(entrada, "%d", &num);
        suma += num;
        cuenta++;
    }

    promedio = suma / cuenta;
    fprintf(salida, "%f", promedio);

    fclose(entrada);
    fclose(salida);

    return 0;
}