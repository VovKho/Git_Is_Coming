#pragma once

int my_strlen (const char *string);

int my_strcmp (char *string1, char *string2);

char *my_strcpy (char *string2, const char* string1);

char *my_memcpy (char *string2, const char *string1, int len);

char *my_strchr (char *string1, char symbol);

char *my_memchr (char *string1, char symbol, int len);

char *my_memset (char *string, char symbol, int len);