#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

void create(char* filename, int number_of_files, char* files[]){
    FILE *file;
    file = fopen(filename, "w");

    unsigned char filename_size;
    unsigned int body_size;
    int i, j;
    for (i = 0; i < number_of_files; i++){
        filename_size = strlen(files[i]);
        fputc(filename_size, file); // Записали длину имени файла
        for (j = 0; j < (int)filename_size; j++)
            fputc(files[i][j], file);               // Записали имя файла
        FILE *for_archive;
        for_archive = fopen(files[i], "r"); // Открываем файл
        fseek(for_archive, 0, SEEK_END); //Ставим указатель в конец файла
        body_size = ftell(for_archive); //Считаем размер body в файле
        fseek(for_archive, 0, SEEK_SET); //Указатель в начало файла
        fwrite(&body_size, sizeof(unsigned int), 1, file); // Записываем размер файла
        for (j = 0; j < body_size; j++)
            fputc(getc(for_archive), file); // Записываем содержимое файла
    }
}

void extract(char* filename){
    FILE *file;
    file = fopen(filename, "r");
    fseek(file, 0, SEEK_END); //Указатель в конец файла
    unsigned int end_of_file = ftell(file);  //Запоминаем конец файла
    fseek(file, 0, SEEK_SET); //Указатель в начало файла
    int i;

    while(ftell(file) < end_of_file){  //Пока не дошли до конца
        unsigned int size = getc(file);  //Читаем размер очередного запакованного файла
        char name_of_file[size];
        for (i = 0; i < size; i++)
            name_of_file[i] = getc(file);  //Запооминаем название
        fread(&size, sizeof(unsigned int), 1, file); //считываем массив в 1 элемент из файла
        FILE *new_file;                                    // и сохраняем его в память
        new_file = fopen(name_of_file, "w");
        for (i = 0; i < size; i++)       //Записываем дату в файл из распаковки
            fputc(getc(file), new_file);
        fclose(new_file);
    }
}

void list(char* filename){
    FILE *file;
    file = fopen(filename, "r");
    fseek(file, 0, SEEK_END);
    unsigned int end_of_file = ftell(file);
    fseek(file, 0, SEEK_SET);
    int i;

    while(ftell(file) < end_of_file){
        unsigned int size = getc(file);
        char name_of_file[size];
        for (i = 0; i < size; i++)
            name_of_file[i] = getc(file);
        printf("%s\n", name_of_file);
        fread(&size, sizeof(unsigned int), 1, file);
        fseek(file, size, SEEK_CUR);
    }
}

int main (int argc, char* argv[]){
    char filename[20];

    strcpy(filename, argv[2]);
    if (argc > 4){
        int number_of_files = argc - 4;
        create(filename, number_of_files, &argv[4]);
    }
    else if (!(strcmp(argv[3], "--extract"))){
        extract(filename);
    }
    else{
        list(filename);
    }
    printf("---------------------------\n");
    return 0;
}
//  --file data.arc --create 1.txt 2.psg 3.third
//  --file data.arc --list
//  --file data.arc --extract