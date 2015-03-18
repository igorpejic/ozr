#include <stdio.h>
#include <float.h>

int epsilon(){
    int pow = 0;
    float epsilon = 1.0;
    while(epsilon + 1 != 1){
        epsilon /= 2;
        --pow;
    }
    return pow + 1;
}

int main(){
    printf("Epsilon for float is: 2^(%d) == %g\n", epsilon(), FLT_EPSILON);
    return 0;
}
