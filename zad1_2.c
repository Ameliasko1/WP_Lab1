#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;

void funkcja() {
    // Zmienna lokalna – tworzona na nowo przy każdym wywołaniu funkcji
    licznik++;
    printf("W funkcji: licznik = %d\n", licznik);
}

int main() {
    printf("W main (globalna): licznik = %d\n", licznik);
    funkcja("1: %d\n", licznik);
    funkcja("2: %d\n", licznik);
    funkcja("3: %d\n", licznik);
    printf("Po powrocie do main: licznik = %d\n", licznik);

    return 0;
}