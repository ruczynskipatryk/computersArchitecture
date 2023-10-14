#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Zakresy liczb całkowitych w typach zmiennoprzecinkowych:\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    printf("float: %E to %E\n", FLT_MIN, FLT_MAX);
    printf("double: %E to %E\n", DBL_MIN, DBL_MAX);
    printf("long double: %LE to %LE\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
