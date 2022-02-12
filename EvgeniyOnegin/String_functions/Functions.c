#include "functions.h"

int my_strlen (const char *string) { //вычисление длины строки
    int i = 0;
    while (*(string + i) != '\0') {
        i++;
    }
    return i;
}

int my_strcmp (const char *string1, const char *string2) { //сравнение строк
    if (string1 == NULL) {
        string1 = "";
    }
    if (string2 == NULL) {
        string2 = "";
    }
    while (*(string1) == *string2 && *string1 != '\0') {
        string1++;
        string2++;
    }
    return *string1 - *string2;
}

char *my_strcpy (char *string2, const char* string1) { //копирование второй строки в первую
    int j = 0;
    for (j = 0; j < my_strlen(string1); j++) {
        *(string2 + j) = *(string1 + j);
    }
    *(string2 + j) = '\0';
    return string2;
}

void *my_memcpy (void *mas2, const void *mas1, size_t len) { //копирование определённого количества символов из второй строки в первую
    int j = 0;
    for (j = 0; j < len; j++) {
        *((char*)mas2 + j) = *((char*)mas1 + j); 
    }
    *((char*)mas2 + j) = '\0';
    return mas2;
}

char *my_strdup (char *string) { //создаёт копию строки
    char *string2 = calloc (strlen(string), sizeof(char));
    return my_strcpy (string2, string);
}

char *my_strchr (char *string1, char symbol) { //поиск первого вхождения символа в строку
    int i = 0;
    while (*(string1 + i) != symbol && *(string1 + i) != '\0') {
        i++;
    }
    if (*(string1 + i) == symbol) {
        return (string1 + i);
    } else {
        return NULL;
    }
}

char *my_memchr (char *string, char symbol, int len) { //поиск первого вхождения символа в определённой части строки
    int i = 0;
    while (*(string + i) != symbol && i < len - 1) {
        i++;
    }
    if (*(string + i) == symbol) {
        return (string + i);
    } else {
        return NULL;
    }
}

char *my_memset (char *string, char symbol, int len) { //заполняет определённую часть строки определённым сиволом
    for (int i = 0; i < len; i++) {
        *(string + i) = symbol;
    }
    return string;
}

char *my_strstr (char *string1, char *string2) { //ищет первое вхождение второй строки в первую
    int ans = 0;
    int i = 0;
    int j = 0;
    char a = '\0';
    int len1 = my_strlen (string1);
    int len2 = my_strlen (string2);
    while (ans == 0) {
        if (a == *string2) {
            i++;
        }
        while ((*(string1 + i) != *string2) && (i <= len1)) {
            i++;           
        }
        a = *(string1 + i);
        if (i >= len1) {
            ans = -1;
        } else {
            j = 0;
            while ((*(string1 + i + j) == *(string2 + j)) && (i + j < len1) && (j < len2)) {
                j++;
            }
            if (j == len2) {
                ans = 1;
            }
        }
    }
    if (ans == 1) {
        return (string1 + i);
    } else {
        return NULL;
    }
}
