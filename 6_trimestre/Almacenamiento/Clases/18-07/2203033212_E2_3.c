#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

int main() {
    int calif;

    FILE *entrada;
    entrada = fopen("calif.txt", "r");

    if (entrada == NULL) {
        fprintf(stderr, "Error: %s", strerror(errno));
        exit(1);
    }

    while(!feof(entrada)) {
        if (fscanf(entrada,"%d", &calif) != 1) { break; }

        if (calif <= 5) { fprintf(stdout, "%d ", calif); }
    }
}