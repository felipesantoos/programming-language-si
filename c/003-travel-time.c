#include <stdio.h>

int main() {
    float d;
    float vm;

    printf("Distância a ser percorrida (km): ");
    scanf("%f", &d);
    printf("Velocidade média esperada (km/h): ");
    scanf("%f", &vm);

    float t = d / vm;

    printf("Tempo de viagem: %.2fh\n", t);

    return 0;
}
