#include <stdio.h>

#define LOST_MINUTES 10
#define DAYS_IN_A_YEAR 365
#define MINUTES_IN_A_DAY 1440

int main() {
    int cigarette_quantity;
    int years;

    printf("Quantidade de cigarros fumados por dia: ");
    scanf("%d", &cigarette_quantity);
    printf("Há quantos anos fuma: ");
    scanf("%d", &years);

    int lost_days = cigarette_quantity * LOST_MINUTES / MINUTES_IN_A_DAY;
    int days_quantity = years * DAYS_IN_A_YEAR;
    int lost_life_time = lost_days * days_quantity;

    printf("Quantidade de dias perdidos: %d.\n", lost_life_time);

    return 0;
}
