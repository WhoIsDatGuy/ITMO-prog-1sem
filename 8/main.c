#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    { // Задача 2
        int size1, size2;
        char *str1, *str2;

        printf("Input lenght1:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char *) malloc(size1 * sizeof(char));
        printf("Input 1:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Input lenght2:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char *) malloc(size2 * sizeof(char));
        printf("Input2:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }

        printf("Input n:\n");
        int n;
        scanf("%d", &n);

        char *str3;
        int size3 = size1 + size2 - 2;
        str3 = (char *) malloc(size3 * sizeof(char));
        for (int i = 1; i < size1; i++) {
            str3[i - 1] = str1[i];
        }
        for (int i = 1; i <= n; i++) {
            str3[i + size1 - 2] = str2[i];
        }

        for (int i = 0; i < size3; i++) {
            printf("%c", str3[i]);
        }
        printf("\n");
    }
    { // Задача 4
        int size1, size2;
        char *str1, *str2;

        printf("Input lenght1:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char *) malloc(size1 * sizeof(char));
        printf("Input 1:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Input lenght2:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char *) malloc(size2 * sizeof(char));
        printf("Input 2:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }

        printf("Input n:");
        int n;
        scanf("%d", &n);

        int flag = 0;
        for (int i = 0; i < size2; i++) {
            if (str2[i] != str1[i]) {
                flag = 1;
            }
        }
        if (flag == 1) {
            printf("String are not equals\n");
        } else {
            printf("String are equals\n");
        }
    }
    { // Задача 6
        int size1, size2;
        char *str1, *str2;

        printf("Input lenght1:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char *) malloc(size1 * sizeof(char));
        printf("Input 1:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Input lenght2:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char *) malloc(size2 * sizeof(char));
        printf("Input 2:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }
        printf("\n");

        printf("Input n: \n");
        int n;
        scanf("%d", &n);

        int old_size2 = size2;
        size2 += n;
        str2 = (char *) realloc(str2, size2);
        for (int i = 0; i < n; i++) {
            str2[i] = str1[i];
        }
        for (int i = 0; i < size2; i++) {
            printf("%c", str2[i]);
        }
        printf("\n");
    }
    { // Задача 8
        int size1, size2;
        char *str1, *str2;

        printf("Input lenght1:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char *) malloc(size1 * sizeof(char));
        printf("Input 1:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }

        printf("Input char: \n");
        char c;
        scanf("%c", &c);
        scanf("%c", &c);

        for (int i = 1; i < size1; i++) {
            if (str1[i] == c) {
                printf("Found\n");
                break;
            }
        }
        printf("Not found\n");
    }
    {
        //Задача 13
        int size1, size2;
        char *str1, *str2;

        printf("Input lenght1:\n");
        scanf("%d", &size1);
        size1++;
        str1 = (char *) malloc(size1 * sizeof(char));
        printf("Input 1:\n");
        for (int i = 0; i < size1; i++) {
            scanf("%c", &str1[i]);
        }


        printf("Input lenght2:\n");
        scanf("%d", &size2);
        size2++;
        str2 = (char *) malloc(size2 * sizeof(char));
        printf("Input 2:\n");
        for (int i = 0; i < size2; i++) {
            scanf("%c", &str2[i]);
        }


        int cnt = 0;
        for (int i = 1; i < size1; i++) {
            int ok = 1;
            for (int j = 1; j < size2; j++) {
                if (str1[i] == str2[j]) {
                    ok = 0;
                }
            }
            if (ok == 1) {
                cnt++;
            }
        }
        printf("Len of the line: %d", cnt);
    }
    return 0;
}