#include<stdio.h>

int main() {
    int numero, pedido = 0, limite = 0, suma = 0;
    printf("Entregue n: ");
    scanf("%d", &numero);

    while (limite != numero) {
        printf("Dame número ");
        scanf("%d", &pedido);
        suma += pedido;
        limite++;
    }

    printf("promedio: %d", suma / limite);

    return 0;
}