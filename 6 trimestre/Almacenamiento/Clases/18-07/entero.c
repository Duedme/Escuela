#include<stdio.h>
#include<errno.h>
#include<string.h>

int main() {
    int scan, pedido;

    do {
        printf("Entregue un número:\t");
        scan = scanf("%d", &pedido);
    } while (scan == 1);

    fprintf(stderr, "Entregó algo que no es un entero: %s", strerror(1));
    return 0;
}