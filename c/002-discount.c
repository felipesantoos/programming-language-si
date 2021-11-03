#include <stdio.h>

int main() {
    float merchandise_value;
    float discount_percentage;

    printf("Insira o valor da mercadoria: ");
    scanf("%f", &merchandise_value);
    printf("Insira o percentual de desconto: ");
    scanf("%f", &discount_percentage);

    float discount_value = (merchandise_value * discount_percentage) / 100;
    float price = merchandise_value - discount_value;

    printf("Valor do desconto: R$ %.2f\n", discount_value);
    printf("Valor a ser pago: R$ %.2f\n", price);

    return 0;
}
