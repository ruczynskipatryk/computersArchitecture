#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Funkcja konwertująca liczbę dziesiętną na format IEEE 754
uint32_t floatToIEEE754(float num) {
    uint32_t result = 0;
    
    // Przekształć float na 32-bitową reprezentację IEEE 754
    memcpy(&result, &num, sizeof(float));
    
    return result;
}

int main() {
    float decimalValue = 4.368; // Tutaj podaj swoją liczbę dziesiętną
    
    uint32_t ieee754Value = floatToIEEE754(decimalValue);
    
    printf("Liczba dziesiętna: %f\n", decimalValue);
    printf("Reprezentacja IEEE 754: 0x%08X\n", ieee754Value);
    
    return 0;
}
