#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void do_file () {
    int x = 97, y = 122; 
    FILE *file = fopen("EvgeniyOnegin.txt", "w");
    for (int j = 0; j < 10; j++) {
    
    srand(time(NULL) + j);
    for (int i = 0; i < rand() % 10 + 4; i++)
    {
        fprintf (file, "%c", rand() % (y-x) + x);    
    }
    fprintf (file, "\r");
    }
    
    fprintf(file, "%d\r", 234);
    fprintf(file, "%d\r", 123); //добавим числа для красоты
    fclose (file);
}