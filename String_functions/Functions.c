#include <stdio.h>
#include <string.h>

int my_strlen (const char *string) {
    int i = 0;
    while (*(string + i) != '\0') {
        i++;
    }
    return ++i; 
}//работает

int my_strcmp (char *string1, char *string2) {
    int i = 0;
    int j = 0;
    while (*(string1 + j) == *(string2 + j)) {j++;}
    if ((int)*(string1 + j) > (int)*(string2 +j)) {
        i = 1;
    }
    else if ((int)*(string1 + j) < (int)*(string2 +j)) {
        i = -1;
    }
    
    return i;
}

char *my_strcpy (char *string2, const char* string1) {
    int j = 0;
    for (j = 0; j < my_strlen(string1); j++) {
        *(string2 + j) = *(string1 + j);
    }
    *(string2 + j) = '\0';
    return string2;
}

char *my_memcpy (char *string2, const char *string1, int len) {
    int j = 0;
    for (j = 0; j < len; j++) {
        *(string2 + j) = *(string1 + j); 
    }
    *(string2 + j) = '\0';
    return string2;
}

char *my_strchr (char *string1, char symbol) {
    int i = 0;
    while (*(string1 + i) != symbol && *(string1 + i) != '\0') {
        i++;
    }
    if (*(string1 + i) == symbol) {
        /*for (int j = 0; j < (my_strlen(string1) - i); j++) {
            *(string2 + j) = *(string1 + i - 1 + j);
        }*/
        return (string1 + i);
    } else {
        return NULL;
    }
}

char *my_memchr (char *string1, char symbol, int len) {
    int i = 0;
    while (*(string1 + i) != symbol && i < len - 1) {
        i++;
    }
    if (*(string1 + i) == symbol) {
        return (string1 + i);
    } else {
        return NULL;
    }
}

char *my_memset (char *string, char symbol, int len) {
    for (int i = 0; i < len; i++) {
        *(string + i) = symbol;
    }
    return string;
}

/*char *my_strstr (char *string1, char *string2) {
    int len = my_strlen (string2);
    int i = 0;
    int j = 0;
    while (i < my_strlen (string1)) {
        while (j < len) {
            while (*(string1 + i + j) )
        } 
    }
}

char *my_strstr (char *string1, char *string2) {
    int len_1 = my_strlen(string1), len_2 = my_strlen(string2);
    char string3[16] = "";        


        //if *(string1 + i) == *(string2) && *(string1 + i + 1) == *(string2 + 1) && (...) ==> ответ 
        //надо попробовать через strchr и memchr
}*/


















/*int i;
int *arr =[1,2,3];
for (size_t i = 0; i < 2; i++)
{
    arr[i] === i[arr] === *(arr + i)
    arr++

}*/
