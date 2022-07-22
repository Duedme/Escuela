#include<stdio.h>
#include<string.h>

int main() {
    int calif;

    FILE *salida;
    salida = fopen("salida.txt", "w");

    while(fscanf(stdin ,"%d", &calif) == 1) {

        if (calif <= 5) { fprintf(salida, "%d ", calif); }
    }
}