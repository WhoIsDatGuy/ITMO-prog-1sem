#include <stdio.h>
#include "math.h"
int main() {
    int a, b, n;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &n);
    printf("%i\n", n>=a && n<=b);

    scanf("%x", &n);
    printf("%x\n", (n&(1<<17))>>17);
    printf("%x", n || pow(2, 17) / pow(2, 17));

}

