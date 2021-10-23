#include <stdio.h>
#include "TesterLib.h"
#include "functions.c"

//тест на 1 корень
void single_root_test1 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 1 (one root) - YES;\n");
    }
    else {
        printf ("Test 1 (one root) - NO;\n");
    }
}

//тест на 2 корня
void two_roots_test2 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 2 (two roots) - YES;\n");
    }
    else {
        printf ("Test 2 (two roots) - NO;\n");
    }
}

//тест на D > 0
void rootless_test3 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 3 (no roots (D < 0)) - YES;\n");
    }
    else {
        printf ("Test 3 (no roots) - NO;\n");
    }
}

//тест на линейный корень
void linear_root_test4 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 4 (linear root) - YES;\n");
    }
    else {
        printf ("Test 4 (linear root) - NO;\n");
    }
}

//тест на бесконечное кол-во корней
void any_root_test5 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 5 (any root) - YES;\n");
    }
    else {
        printf ("Test 5 (any root) - NO;\n");
    }
}
//тест на отсутствие корней при a < 0
void no_linear_roots_test6 (double a, double b, double c, double true_x1, double true_x2, double x1, double x2) {
    quadratic_solver(a, b, c, &x1, &x2);
    if (x1 == true_x1 && x2 == true_x2) {
        printf ("Test 6 (no linear roots) - YES;\n");
    }
    else {
        printf ("Test 6 (no linear roots) - NO;\n");
    }
}

