//geroyam slava
#include "unit_tests.h"

test test_my_strlen () { //работает
    char string[] = "hello\n";
    if (my_strlen (string) == 6) {
        printf ("test_my_strlen - YES\n");
        return YES;
    } else {
        printf ("test_my_strlen - NO\n");
        return NO;
    }
}

test test_my_strcmp () {
    char string1[] = "kek";
    char string2[] = "kek";
    char string3[] = "keek";
    if (my_strcmp (string1, string2) != 0) {
        printf ("test_my_strcmp - NO\n");
        return NO;
    }
    else if (my_strcmp (string1, string3) <= 0) {
        printf ("test_my_strcmp - NO\n");
        return NO;
    }
    else if (my_strcmp (string3, string1) >= 0) {
        printf ("test_my_strcmp - NO\n");
        return NO;
    }
    else {
        printf ("test_my_strcmp - YES\n");
        return YES;
    }
}

test test_my_strcpy () {
    char string1[] = "hello";
    char string2[] = "c";
    char string3[] = "";
    char string[16] = "";
    if (my_strcmp (my_strcpy (string, string1), string1) != 0) {
        printf ("test_my_strcpy - NO\n");
        return NO;
    }
    else if (my_strcmp (my_strcpy (string, string2), string2) != 0) {
        printf ("test_my_strcpy - NO\n");
        return NO;
    }
    else if (my_strcmp (my_strcpy (string, string3), string3) != 0) {
        printf ("test_my_strcpy - NO\n");
        return NO;
    } else {
        printf ("test_my_strcpy - YES\n");
        return YES;
    }
}

test test_my_memcpy () {
    char BigString[] = "hello";
    char *StringCopy = calloc (16, sizeof (char));
    char string1[] = "h";
    char string2[] = "he";
    char string3[] = "hell";
    int len1 = 1;
    int len2 = 2;
    int len3 = 4;
    if (my_strcmp (my_memcpy (StringCopy, BigString, len1), string1) != 0) {
        printf ("test_my_memcpy - NO\n");
        return NO;
    } 
    else if (my_strcmp (my_memcpy (StringCopy, BigString, len2), string2) != 0) {
        printf ("test_my_memcpy - NO\n");
        free (StringCopy);
        return NO;
    }
    else if (my_strcmp (my_memcpy (StringCopy, BigString, len3), string3) != 0) {
        printf ("test_my_memcpy - NO\n");
        free (StringCopy);
        return NO;
    } else {
        printf ("test_my_memcpy - YES\n");
        free (StringCopy);
        return YES;
    }
    free (StringCopy);
}

test test_my_strdup () {
    char string1[] = "hello";
    char string2[] = "hi";
    char string3[] = "hey";
    int i = 0;
    char *StringCopy1 = my_strdup (string1);
    if (my_strcmp (StringCopy1, string1) == 0) {
        i++;
    } 
    free (StringCopy1);
    char *StringCopy2 = my_strdup (string2);
    if (my_strcmp (StringCopy2, string2) == 0) {
        i++;
    }
    free (StringCopy2);
    char *StringCopy3 = my_strdup (string3);
    if (my_strcmp (StringCopy3, string3) == 0) {
        i++;
    }
    free (StringCopy3);
    if (i == 3) {
        printf ("test_my_strdup - YES\n");
        return YES;
    } else {
        printf ("test_my_strdup - NO\n");
        return NO;
    }
}

test test_my_strchr () {
    char string[] = "hello";
    char symbol1 = 'l';
    char string1[] = "llo";
    char symbol2 = 'e';
    char string2[] = "ello";
    char symbol3 = 'h';
    char string3[] = "hello";
    if (my_strcmp (my_strchr (string, symbol1), string1) != 0) {
        printf ("test_my_strchr - NO\n");
        return NO;
    }
    else if (my_strcmp (my_strchr (string, symbol2), string2) != 0) {
        printf ("test_my_strchr - NO\n");
        return NO;
    }
    else if (my_strcmp (my_strchr (string, symbol3), string3) != 0) {
        printf ("test_my_strchr - NO\n");
        return NO;
    } else {
        printf ("test_my_strchr - YES\n");
        return YES;
    }
}

test test_my_memchr () {
    char string[] = "hello";
    char symbol1 = 'l';
    char string1[] = "llo";
    int len1 = 4;
    char symbol2 = 'H';
    char *string2 = NULL;
    int len2 = 2;
    char symbol3 = 'a';
    char *string3 = NULL;
    int len3 = 4;
    if (my_strcmp (my_memchr (string, symbol1, len1), string1) != 0) {
        printf ("test_my_memchr - NO\n");
        return NO;
    }
    else if (my_strcmp (my_memchr (string, symbol2, len2), string2) != 0) {
        printf ("test_my_memchr - NO\n");
        return NO;
    }
    else if (my_strcmp (my_memchr (string, symbol3, len3), string3) != 0) {
        printf ("test_my_memchr - NO\n");
        return NO;
    } else {
        printf ("test_my_memchr - YES\n");
        return YES;
    }
    return YES;
}

test test_my_memset () {
    char string[] = "EASPORTS";
    char symbol1 = 'i';
    int len1 = 3;
    char string1[] = "iiiPORTS";
    char symbol2 = ' ';
    int len2 = 5;
    char string2[] = "     RTS";
    char symbol3 = 'E';
    int len3 = 8;
    char string3[] = "EEEEEEEE";
    if (my_strcmp (my_memset (string, symbol1, len1), string1) != 0) {
        printf ("test_my_memset - NO\n");
        return NO;
    }
    else if (my_strcmp (my_memset (string, symbol2, len2), string2) != 0) {
        printf ("test_my_memset - NO\n");
        return NO;
    }
    else if (my_strcmp (my_memset (string, symbol3, len3), string3) != 0) {
        printf ("test_my_memset - NO\n");
        return NO;
    } else {
        printf ("test_my_memset - YES\n");
        return YES;
    }
}

test test_my_strstr () {
    char BigString[] = "BigbigString";
    char string1[] = "Big";
    char RetString1[] = "BigbigString";
    char string2[] = "big";
    char RetString2[] = "bigString";
    char string3[] = "biG";
    char *RetString3 = NULL;
    if (my_strcmp (my_strstr (BigString, string1), RetString1) != 0) {
        printf ("test_my_strstr - NO1\n");
        return NO;
    } 
    else if (my_strcmp (my_strstr (BigString, string2), RetString2) != 0) {
        printf ("test_my_strstr - NO2\n");
        return NO;
    } 
    else if (my_strcmp (my_strstr (BigString, string3), RetString3) != 0) {
        printf ("test_my_strstr - NO3\n");
        return NO;
    } else {
        printf ("test_my_strstr - YES\n");
        return YES;
    }
}

void run_tests () {
    assert (YES == test_my_strlen());
    assert (YES == test_my_strcmp());
    assert (YES == test_my_strcpy());
    assert (YES == test_my_memcpy());
    assert (YES == test_my_strdup());
    assert (YES == test_my_strchr());
    assert (YES == test_my_memchr());
    assert (YES == test_my_memset());
    assert (YES == test_my_strstr());
}