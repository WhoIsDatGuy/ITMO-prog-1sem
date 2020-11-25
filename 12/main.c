#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Записать сумму a+b в файл
    FILE *file;
    file = fopen(argv[3], "w");
    fprintf(file, "Sum = %d", atoi(argv[1]) + atoi(argv[2]));
    fclose(file);
}