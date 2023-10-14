#include <stdio.h>
#include <limits.h>

int main() {
    printf("Zakresy danych całkowitoliczbowych:\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}
