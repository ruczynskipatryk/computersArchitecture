#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Funkcja konwertująca liczbę dziesiętną na format IEEE 754
uint32_t floatToIEEE754(float num) {
    uint32_t result = 0;
    memcpy(&result, &num, sizeof(float));
    return result;
}

int main() {
    int I1 = 4;  // Przykładowe wartości dla Imie1 i Nazwisko1
    int N1 = 3;
    int I2 = 6;  // Przykładowe wartości dla Imie2 i Nazwisko2
    int N2 = 8;
    
    // Obliczenie liczba_dec: I1 + N1 + I2 + N2
    float liczba_dec = (float)(I1 + N1 + I2 + N2);
    
    // Konwersja liczba_dec na format IEEE 754
    uint32_t ieee754Value = floatToIEEE754(liczba_dec);
    
    printf("I1: %d\n", I1);
    printf("N1: %d\n", N1);
    printf("I2: %d\n", I2);
    printf("N2: %d\n", N2);
    printf("Liczba dziesiętna: %f\n", liczba_dec);
    printf("Reprezentacja IEEE 754: 0x%08X\n", ieee754Value);
    
    return 0;
}
