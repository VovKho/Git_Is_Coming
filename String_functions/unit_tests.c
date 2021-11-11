//geroyam slava
#include <stdio.h>
#include <string.h>
#include "functions.h"

void test_my_strlen () { //работает
    char string[] = "hello";
    if (my_strlen(string) == 6) {
        printf ("test_my_strlen - YES\n");
    } else {
        printf ("test_my_strlen - NO\n");
    }
}

void test_my_strcmp () {
    char *string1 = "kek", *string2 = "kfkf";
    if (my_strcmp (string1, string2) == -1) {
        printf ("test_my_strcmp - YES\n");
    } else {
        printf ("test_my_strcmp - NO\n");
    }
}

void test_my_strcpy () {
    char string1[] = "hello";
    char string2[16] = "";
    if (my_strcpy (string2, string1) == strcpy (string2, string1)) {
        printf ("test_my_strcpy - YES\n");
    } else {
        printf ("test_my_strcpy - NO\n");
    }
}

void test_my_memcpy () {
    char string1[] = "hello";
    char string2[16] = "";
    int len = 3;
    if (my_memcpy (string2, string1, len) == memcpy (string2, string1, len)) {
        printf ("test_my_memcpy - YES\n");
    } else {
        printf ("test_my_memcpy - NO\n");
    }
    
}

void test_my_strchr () {
    char string1[] = "hello";
    char symbol = 'l';
    if (my_strchr (string1, symbol) == strchr(string1, symbol)) {
        printf ("test_my_strchr - YES\n");
    } else {
        printf ("test_my_strchr - NO\n");
    }
}

void test_my_memchr () {
    char string1[] = "hello";
    char symbol = 'o';
    int len = 4;
    //printf ("%s", my_memchr (string1, symbol, len));
    //printf ("%s", memchr (string1, symbol, len));
    if (my_memchr (string1, symbol, len) == memchr (string1, symbol, len)) {
        printf ("test_my_memchr - YES\n");
    } else {
        printf ("test_my_memchr - NO\n");
    }
}

void test_my_memset () {
    char string[] = "hello";
    char symbol = 'a';
    char len = 4;
    printf ("%s", my_memset (string, symbol, len));
}

/*void test_my_strstr () {
    char string1[] = "abcbcc";
    char string2[] = "bcb";
    if (my_strstr(string1, string2) == strstr (string1, string2)) {
        printf ("test_my_strstr - YES\n");
    } else {
        printf ("test_my_strstr - NO\n");
    }
}*/

void run_tests () {
    test_my_strlen ();
    test_my_strcmp ();
    test_my_strcpy ();
    test_my_memcpy ();
    test_my_strchr ();
    test_my_memchr ();
    test_my_memset ();
}