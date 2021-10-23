#include "TesterFunc.c"

int main () {
    /* тест (a, b, c, правильный x1, правильный x2, x1, x2)
    (x1 и x2 по умолчанию равны эпсилон)*/
    single_root_test1 (1, 6, 9, -3, Epsilon, Epsilon, Epsilon);
    two_roots_test2 (2, 10, 12, -2, -3, Epsilon, Epsilon);
    rootless_test3 (-3, -2, -2, Epsilon, Epsilon, Epsilon, Epsilon); 
    linear_root_test4 (0, 1, 0, 0, Epsilon, Epsilon, Epsilon);
    any_root_test5 (0, 0, 0, Epsilon, Epsilon, Epsilon, Epsilon);
    no_linear_roots_test6 (0, 0, 7, Epsilon, Epsilon, Epsilon, Epsilon);
    return 0;
}