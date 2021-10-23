
//тест на 1 корень
void single_root_test1 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);

//тест на 2 корня
void two_roots_test2 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);

//тест на D > 0
void rootless_test3 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);

//тест на линейный корень
void linear_root_test4 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);

//тест на бесконечное кол-во корней
void any_root_test5 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);

//тест на отсутствие корней при a < 0
void no_linear_roots_test6 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2);