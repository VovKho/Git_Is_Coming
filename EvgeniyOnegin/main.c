#include <locale.h>
#include "Func.h"

int main () {

    do_file();

    FILE *file = fopen("EvgeniyOnegin.txt", "rb"); //открытие файла

    fseek (file, 0, SEEK_END);
    size_t file_size = ftell(file); //размер файла
    fseek (file, 0, SEEK_SET);


    char *long_long = ((char*)calloc(sizeof(char), file_size));
    fread (long_long, sizeof(char), file_size, file); //копирование в оперативную память

    delite_smth (long_long); //перевод в более удобный формат

    size_t num = count_lines (long_long, file_size); //считывание количества строк

    char **strings = (char**)calloc(sizeof(*strings), num);

    strings = my_read (strings, long_long, file_size); //создание массива всех строк
    
    for (int i = 0; i < num; i++)
    {
        printf ("%s\n\r", strings[i]); //вывод всех строк в изначальном виде
    }
    
    qsort (strings, num, sizeof(*strings), compar); //сортировка строк в лексикографическом порядке

    for (int i = 0; i < num; i++)
    {
        printf ("%s\n\r", strings[i]); //вывод всех строк в правильном виде
    }
    free (strings);
    fclose(file);
    return 0;
}





