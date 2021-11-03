#include <stdio.h>

#define CAR_VALUE 60.00
#define KM_VALUE 0.15

int main() {
    float km;
    int days;

    printf("Quantidade de km percorridos: ");
    scanf("%f", &km);
    printf("Quantidade de dias que o carro foi alugado: ");
    scanf("%d", &days);

    float price = days * CAR_VALUE + km * KM_VALUE;

    printf("Valor a ser pago: R$ %.2f\n", price);

    return 0;
}
