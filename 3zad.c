#include <stdio.h>

extern int DSQRT_();
int main(){
    double prsa;
    prsa = 334.333;
    if(prsa > 0){
        DSQRT_(&prsa);
    }
    return 0;
}


