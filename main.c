#include <stdio.h>

int main() {

    int i, num1, num2, somma;
    somma = 0;

    do {
        printf("inserisci il primo numero:\n");
        scanf("%d", &num1);

        printf("inserisci il secondo numero:\n");
        scanf("%d", &num2);
    } while (num2 <= num1);

    for (i = num1; i <= num2; i++)
        somma += i;

    printf("la somma totale e' %d", somma);

    return 0;
}
