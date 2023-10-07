#include <stdio.h>

int main() {
    float num = 123.45f;  // Przykładowa liczba FLOAT
    unsigned char *bytePtr = (unsigned char *)&num;

    printf("Liczba FLOAT: %f\n", num);
    printf("4 bajty w układzie szesnastkowym: ");
    for (int i = sizeof(float) - 1; i >= 0; i--) {
        printf("%02X ", bytePtr[i]);
    }
    printf("\n");

    return 0;
}
