#include "Func.h"

void delete_smth (char *long_long) { //меняет все управляющие знаки на \0 и удаляет лишние \0
    char *from = long_long, *to = long_long;

    while (*long_long != '\0') {
        
        if (*long_long == '\r' || *long_long == '\n' || *long_long == ' ') {
            *long_long = '\0';
        }
        long_long++;
    }

    while (from != long_long) {
        int flag = 0;
        while (*from == '\0' && from != long_long) {
            from++;
            flag = 1;
        }
        if (flag) {
            from--;
        }
        *to = *from;
        to++;
        from++;
    }
}

size_t count_lines(const char *long_long, size_t file_size) { //считает количество строк
    char symbol = 0;
    size_t num = 0;
    for (size_t i = 0; i <= file_size; i++)
    {
        if (long_long[i] == '\0') {
            num++;
        }
    }
    return num;
}

char **my_read (char **strings, char *long_long, const size_t file_size) { //расставляет указатели на отдельные слова

    int j = 1;
    
    strings[0] = long_long;
    
    for (int i = 0; i < file_size; i++)
    {
        long_long++;
        if (*long_long == '\0') {
            strings[j] = long_long+1;
            j++;
        } 
    }
    
    return strings;
}

int compar (const void* p1, const void* p2) { //сравнивает строки
    return my_strcmp (*(const char **)p1, *(const char **)p2);
}

