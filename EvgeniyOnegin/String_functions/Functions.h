#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen (const char *string);

int my_strcmp (const char *string1, const char *string2);

char *my_strcpy (char *string2, const char* string1);

void *my_memcpy (void *mas2, const void *mas1, size_t len);

char *my_strdup (char *string);

char *my_strchr (char *string1, char symbol);

char *my_memchr (char *string, char symbol, int len);

char *my_memset (char *string, char symbol, int len);

char *my_strstr (char *string1, char *string2);