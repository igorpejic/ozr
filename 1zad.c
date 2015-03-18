#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>

const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

int main(){
    printf("Maximalni: %f\n", FLT_MAX);
    printf("Minimalni(exponent): %g\n", FLT_MIN);
    printf("Minimalni(decimal): %.128f\n", FLT_MIN);
    float max = FLT_MAX;
    unsigned int* ptr = (unsigned int*)&max;
    char a, b, c, d;
    a = *ptr >>8;
    *ptr >>= 8;
    b = *ptr >>8;
    *ptr >>= 8;
    c = *ptr >>8;
    *ptr >>= 8;
    d = *ptr >>8;
    printf("Maximal bits: ");
    printf("%s", byte_to_binary(a));
    printf("%s", byte_to_binary(b));
    printf("%s", byte_to_binary(c));
    printf("%s\n", byte_to_binary(d));
    float min = FLT_MIN;
    ptr = (unsigned int*)&min;
    a = *ptr >>8;
    *ptr >>= 8;
    b = *ptr >>8;
    *ptr >>= 8;
    c = *ptr >>8;
    *ptr >>= 8;
    d = *ptr >>8;
    printf("Minimal bits: ");
    printf("%s", byte_to_binary(a));
    printf("%s", byte_to_binary(b));
    printf("%s", byte_to_binary(c));
    printf("%s\n", byte_to_binary(d));
    return 0;
}
