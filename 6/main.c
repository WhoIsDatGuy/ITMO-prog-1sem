#include <stdio.h>
#include <stdlib.h>

int main() {
    int ar[4]; //Создаем массив
    int *p = (int *) &ar; //Создаем указатель на массив
    p[0] = 50; p[1] = 40; p[2] = 30; p[3] = 20;
    for (int i = 0; i < 4; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    int *a;
    a = (int *) calloc(4, sizeof(int));  //Создаем динамический массив
    a[0] = 50; a[1] = 40; a[2] = 30; a[3] = 20;
    for (int i = 0; i < 4; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}