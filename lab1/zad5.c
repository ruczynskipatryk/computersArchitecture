#include <stdio.h>
#include <CoreFoundation/CoreFoundation.h>

void swapBytes(int *num) {
    *num = CFSwapInt32(*num);
}

void printBinary(char byte) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (byte >> i) & 1);
    }
}

int main() {
    int x = 0xFAFBAC10; // liczba całkowita 4 bajtowa (little endian)
    char *px = NULL;
    px = (char *)&x;
    
    printf("x = %x\n", x);
    printf("bajt 1 x: = %x (binarnie: ", *(px + 0) & 0xFF);
    printBinary(*(px + 0) & 0xFF);
    printf(")\n");
    
    printf("bajt 2 x: = %x (binarnie: ", *(px + 1) & 0xFF);
    printBinary(*(px + 1) & 0xFF);
    printf(")\n");
    
    printf("bajt 3 x: = %x (binarnie: ", *(px + 2) & 0xFF);
    printBinary(*(px + 2) & 0xFF);
    printf(")\n");
    
    printf("bajt 4 x: = %x (binarnie: ", *(px + 3) & 0xFF);
    printBinary(*(px + 3) & 0xFF);
    printf(")\n");

    swapBytes(&x);

    printf("Po odwróceniu kolejności bajtów:\n");
    printf("x = %x\n", x);
    printf("bajt 1 x: = %x (binarnie: ", *(px + 0) & 0xFF);
    printBinary(*(px + 0) & 0xFF);
    printf(")\n");
    
    printf("bajt 2 x: = %x (binarnie: ", *(px + 1) & 0xFF);
    printBinary(*(px + 1) & 0xFF);
    printf(")\n");
    
    printf("bajt 3 x: = %x (binarnie: ", *(px + 2) & 0xFF);
    printBinary(*(px + 2) & 0xFF);
    printf(")\n");
    
    printf("bajt 4 x: = %x (binarnie: ", *(px + 3) & 0xFF);
    printBinary(*(px + 3) & 0xFF);
    printf(")\n");

    return 0;
}
