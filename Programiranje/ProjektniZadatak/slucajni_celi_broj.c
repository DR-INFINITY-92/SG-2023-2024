#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Postavljanje seed-a za generisanje pseudoslučajnih brojeva
    srand(time(NULL));

    // Generisanje slučajnog broja u intervalu od 1 do 6
    int slucajan_broj = rand() % 6 + 1;

    // Ispis slučajnog broja
    printf("Slucajan broj: %d\n", slucajan_broj);

    return 0;
}
