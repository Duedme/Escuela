#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *entrada, *salida;
    char c;

    entrada = fopen("entrada.txt", "r");
    if (entrada == NULL) { exit(1); }

    salida = fopen("salida.txt", "w");

    while(!feof(entrada)) {
        c = fgetc(entrada);
        if (c != ' ') { fprintf(salida, "%c", c); }
        else { fprintf(salida, "_"); }
    }

    fclose(entrada);
    fclose(salida);
    
    return 0;
}