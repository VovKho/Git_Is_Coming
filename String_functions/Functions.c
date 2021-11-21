#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen (const char *string) {
    int i = 0;
    while (*(string + i) != '\0') {
        i++;
    }
    return i;
}//работает

int my_strcmp (char *string1, char *string2) {
    while (*(string1) == *string2 && *string1 != '\0') {
        string1++;
        string2++;
    }
    return *string1 - *string2;
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

/*char* my_strdup (char *string) {
    char *string2 = calloc (strlen(string), sizeof(char));
    return my_strcpy (string2, string);
}*/

char *my_strchr (char *string1, char symbol) {
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

char *my_memchr (char *string, char symbol, int len) {
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

char *my_memset (char *string, char symbol, int len) {
    for (int i = 0; i < len; i++) {
        *(string + i) = symbol;
    }
    return string;
}

char *my_strstr (char *string1, char *string2) {
    int ans = 0;
    int i = 0;
    int j = 0;
    int len1 = my_strlen (string1);
    int len2 = my_strlen (string2);
    while (ans == 0) {
        while ((*(string1 + i) != *string2) && (i < len1)) {
            i++;
        }
        if (i >= len1) {
            ans = -1;
        } else {
            while (*(string1 + i + j) == *(string2 + j) && i + j < len1) {j++;}
            if (i + j >= len2) {
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
