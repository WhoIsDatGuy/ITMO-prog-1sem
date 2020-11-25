#include <stdio.h>
#include "math.h"

int main() {
    double m;
    scanf("%lf", &m);
    double z1 = sqrt(pow(3*m+2,2)-24*m)/(3*sqrt(m)-2/sqrt(m));
    double z2 = -sqrt(m);

    printf("z1 = %f", z1);
    printf("Z2 = %f", z2);
    return 0;
}



