#include <stdio.h>
#include <math.h>

enum sweets {
    PIE, CAKE, BROWNIE, ICECREAM, CANDY      //Инициализация данных перечисляемого типа
};

struct L {
    float x, y; //Объявляем структуру отрезка: расположение начала и конца
};

union ADSL {
    struct ADSl_mod {
        unsigned int DSL: 1; //Отводим по одному биту на состояния в структуре
        unsigned int PPP: 1;
        unsigned int Link: 1;
    } stats;
    unsigned int input; //Объединяем с input
};

int main() {
    enum sweets sweet = CANDY; //Объявляю sweets типа sweet
    printf("%d\n", sweet); // Вывожу число, соответсвующее конфете

    struct L line = {4, 8}; //Объявляем переменную класса L
    double lenght = fabsf(line.x - line.y); //Вычисляем его длину
    printf("%lf\n", lenght);

    union ADSL adsl;
    scanf("%x", &adsl.input);
    printf("DSL: %s\n", adsl.stats.DSL ? "ON" : "OFF");
    printf("PPP: %s\n", adsl.stats.PPP ? "ON" : "OFF");
    printf("Link: %s\n", adsl.stats.Link ? "ON" : "OFF");
    return 0;
}
