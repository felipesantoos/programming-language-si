#include <stdio.h>

int main() {
    float salary;
    float percentage;

    printf("Insira o valor do salário: ");
    scanf("%f", &salary);
    printf("Insira a porcentagem de aumento: ");
    scanf("%f", &percentage);

    float increase = (salary * percentage) / 100;
    float new_salary = salary + increase;

    printf("Valor do aumento: R$ %.2f\n", increase);
    printf("Valor do novo salário: R$ %.2f\n", new_salary);

    return 0;
}
