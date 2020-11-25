#include <stdio.h>

int sumdigit(int a) {
    if (a == 0) {
        return 0;
    } else {
        return (a % 10) + sumdigit(a / 10);
    }
}

void delete_space(int lenstr, char string[], char string2[], int tek_i, int new_i) {
    if (tek_i == lenstr) {
        return;
    }
    if (string[tek_i] == ' ' && string[tek_i - 1] == ' ') {
        delete_space(lenstr, string, string2,tek_i + 1, new_i);

    } else {
        string2[new_i] = string[tek_i];
        delete_space(lenstr, string, string2,tek_i + 1, new_i + 1);
    }

}

int main() {

    //4 Считаем сумму цифр рекурсивно
    printf("4)------------\n");
    int b;
    scanf("%d", &b);
    printf("%d", sumdigit(b));

    //5 Удаляем пробелы из строки
    printf("\n5)------------\n");
    printf("lenstr , str = ");

    int lenstr;
    scanf("%d\n", &lenstr);
    char string[lenstr];
    char string2[lenstr];
    lenstr++;
    fgets(string, lenstr, stdin);

    printf("str = %s", string);
    delete_space(lenstr, string, string2, 1, 1);
    string2[0] = string[0];
    printf("\n New_str = %s", string2);

}
