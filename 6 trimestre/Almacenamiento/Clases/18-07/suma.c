#include<stdio.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main() {
    
    int n1, n2;
    FILE *entrada;
    FILE *salida;

    entrada = fopen("entrada.txt", "r");
    salida = fopen("salida.txt", "w");

    if (entrada == NULL) { fprintf(stdout, "El error es: %s", strerror(errno)); exit(1);}

    scanf("%d, %d", &n1, &n2);
    printf("%d", n1 + n2);

    return 0;
}