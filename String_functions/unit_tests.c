//geroyam slava
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"


void test_my_strlen () { //работает
    char string[] = "hello\n";
    printf ("%d\n", my_strlen (string));
    if (my_strlen(string) == 6) {
        printf ("test_my_strlen - YES\n");
    } else {
        printf ("test_my_strlen - NO\n");
    }
}

void test_my_strcmp () {
    char string1[] = "kek";
    char string2[] = "kek";
    char string3[] = "keek";
    printf ("%d\n", my_strcmp (string1, string2));
    printf ("%d\n", my_strcmp (string1, string3));
    printf ("%d\n", my_strcmp (string3, string1));
    if (my_strcmp (string1, string2) == 0 && my_strcmp (string1, string3) > 0 && my_strcmp (string3, string1) < 0) {
        printf ("test_my_strcmp - YES\n");
    } else {
        printf ("test_my_strcmp - NO\n");
    }
}

void test_my_strcpy () {
    char string1[] = "hello";
    char string2[] = "c";
    char string3[] = "";
    char string[16] = "";
    if (my_strcmp (my_strcpy (string, string1), string1) == 0 && my_strcmp (my_strcpy (string, string2), string2) == 0 && my_strcmp (my_strcpy (string, string3), string3) == 0) {
        printf ("test_my_strcpy - YES\n");
    } else {
        printf ("test_my_strcpy - NO\n");
    }
}

void test_my_memcpy () {
    char BigString[] = "hello";
    char StringCopy[16] = "";
    char string1[] = "hell";
    char string2[] = "he";
    char string3[] = "h";
    int len1 = 4;
    int len2 = 2;
    int len3 = 1;
    if (my_strcmp (my_memcpy (BigString, StringCopy, len1), string1) == 0 && my_strcmp (my_memcpy (BigString, StringCopy, len2), string2) == 0 && my_strcmp (my_memcpy (BigString, StringCopy, len3), string3) == 0) {
        printf ("test_my_memcpy - YES\n");
    } else {
        printf ("test_my_memcpy - NO\n");
    }
}

/*void test_my_strdup () {
    char string1[] = "hello";
    char string2[] = "hi";
    char string3[] = "hey";
    int i = 0;
    char StringCopy[16] = my_strdup (string1);
    if (my_strcmp (StringCopy, string1) == 0) {
        i++;
    } 
    free (StringCopy);
    char StringCopy[16] = my_strdup (string2);
    if (my_strcmp (StringCopy, string2) == 0) {
        i++;
    }
    free (StringCopy);
    char StringCopy[16] = my_strdup (string3);
    if (my_strcmp (StringCopy, string3) == 0) {
        i++;
    }
    free (StringCopy);
    if (i == 3) {
        printf ("test_my_strcpy - YES\n");
    } else {
        printf ("test_my_strcpy - NO\n");
    }
}*/

void test_my_strchr () {
    char string[] = "hello";
    char symbol1 = 'l';
    char string1[] = "llo";
    char symbol2 = 'a';
    char *string2 = NULL;
    char symbol3 = 'H';
    char *string3 = NULL;
    printf ("%d", my_strcmp (my_strchr (string, symbol1), string1));
    printf ("%d", my_strcmp (my_strchr (string, symbol2), "(null)"));
    printf ("%d", my_strcmp (my_strchr (string, symbol3), "(null)"));
    if (my_strcmp (my_strchr (string, symbol1), string1) == 0 && my_strcmp (my_strchr (string, symbol2), string2) == 0 && my_strcmp (my_strchr (string, symbol3), string3) == 0) {
        printf ("test_my_strchr - YES\n");
    } else {
        printf ("test_my_strchr - NO\n");
    }
    printf ("test_my_strchr");
}

void test_my_memchr () {
    char string[] = "hello";
    char symbol1 = 'l';
    char string1[] = "llo";
    int len1 = 4;
    char symbol2 = 'l';
    char *string2 = NULL;
    int len2 = 2;
    char symbol3 = 'a';
    char string3[] = "a";
    int len3 = 4;
    if (my_strcmp (my_strchr (string, symbol1), string1) == 0 && my_strcmp (my_strchr (string, symbol2), string2) == 0 && my_strcmp (my_strchr (string, symbol3), string3) == 0) {
        printf ("test_my_strchr - YES\n");
    } else {
        printf ("test_my_strchr - NO\n");
    }
}

void test_my_memset () {
    char string[] = "EASPORTS";
    char symbol1 = 'E';
    int len1 = 8;
    char string1[] = "EEEEEEEE";
    char symbol2 = 'i';
    int len2 = 3;
    char string2[] = "iiiPORTS";
    char symbol3 = ' ';
    int len3 = 5;
    char string3[] = "     RTS";
    printf ("test_my_memset");
    if (my_strcmp (my_memset (string, symbol1, len1), string1) == 0 && my_strcmp (my_memset (string, symbol2, len2), string2) == 0 && my_strcmp (my_memset (string, symbol3, len3), string3) == 0) {
        printf ("test_my_memset - YES\n");
    } else {
        printf ("test_my_memset - NO\n");
    }
}

void test_my_strstr () {
    char BigString[] = "BigbigString";
    char string1[] = "Big";
    char RetString1[] = "BigbigString";
    char string2[] = "big";
    char RetString2[] = "bigString";
    char string3[] = "biG";
    char *RetString3 = NULL;
    printf ("test_my_strstr");
    if (my_strcmp (my_strstr (BigString, string1), RetString1) == 0 && my_strcmp (my_strstr (BigString, string2), RetString2) == 0 && my_strcmp (my_strstr (BigString, string3), RetString3) == 0) {
        printf ("test_my_strstr - YES\n");
    } else {
        printf ("test_my_strstr - NO\n");
    }
    // if (my_strcmp (my_strstr (BigString, string1), RetString1) != 0) {
    //     return error; 
    // }
    //рубрика эксперимент
}

// int sum(int a, int b) {
//     return a + b;
// }

// error test_sum(){
//     int x_1 = 10, x_2 = 23;
//     if (sum(x_1, x_2) != 33) {
//         printf("sum broke >_<\n");
//         return error;
//     }
//     return ok;
// }




void run_tests () {
    // assert(ok == test_sum());
    // assert ( OK == test_my_memcpy());
    test_my_strlen ();
    test_my_strcmp ();
    test_my_strcpy ();
    test_my_memcpy ();
    //test_my_strdup ();
    test_my_strchr ();
    test_my_memchr ();
    test_my_memset ();
    test_my_strstr ();
}