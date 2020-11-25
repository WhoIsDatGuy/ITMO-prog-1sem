#include <stdio.h>

int main() {
    int n;
    int m;

    scanf("%i", &n);

    printf("%o\n", n);

    printf("%o  %o\n", n, n<<1);

    printf("%o  %o\n", n, ~n);

    scanf("%i", &m);

    printf("%i", n^m);

    return 0;
}

