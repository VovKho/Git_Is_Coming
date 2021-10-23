#include "funcList.h"
#include <math.h>
#include <stdio.h>
#include <assert.h>

//безопасный ввод переменных, который не позволяет вводить символы, не являющиеся числами:
void save_scan (double* a, double* b, double* c) {
	printf ("Hey, Im quadratic solver, enter three numbers\n");
	assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);
	while (scanf("%lf %lf %lf", a, b, c) != 3) {
		printf("what? Its not a number, try again\n");
        while (getchar() != '\n');
	}
}

//решатель квадратного уравнения:
exceptions quadratic_solver (double a, double b, double c, double* x1, double* x2) {   
    if (fabs(a) > Epsilon) {
        double D = b * b - 4 * a * c;
        if (fabs(D) < Epsilon) {
            *x1 = (-b) / (2 * a); 
            return One_solution;   //1 корень
        }
        else if (D < 0) { 
            return No_solutions;  //корней нет
        }
        else {      
            *x1 = (-b + sqrt(D)) / (2 * a);
            *x2 = (-b - sqrt(D)) / (2 * a);
            return Two_solutions;   //2 корня
        }
    } 
    else {
        return (linear_solver (b, c, x1));   //линейный случай
    }
}

//решатель линейного случая:
exceptions linear_solver (double b, double c, double* x1) {
    if (fabs(b) < Epsilon && fabs(c) < Epsilon) {
        return Linear_infinity_solution;    //любой корень
    }
    else if (fabs(b) < Epsilon) {   
        return Linear_no_solution;    //нет корней
    }
    else {
        *x1 = (-c) / b;
        return Linear_one_solution;     //линейный корень
    }
}




//вывод ответа:
void print_answer (double x1, double x2, exceptions exception) { 
    if (exception == One_solution) {	//выводит один корень
        printf ("%lf\n", x1);
    }
    else if (exception == Two_solutions) {    //выводит два корня
        printf ("%lf %lf\n", x1, x2);
    }
    else if (exception == No_solutions) {    //выводит "нет корней"
        printf ("No root\n");
    }
    else if (exception == Linear_infinity_solution) {    //выводит "любой X"
        printf ("any root\n");
    }
    else if (exception == Linear_no_solution) {    //выводит "нет корней"
        printf ("No root\n");
    }
    else if (exception == Linear_one_solution) {    //выводит один корень
        printf ("%lf\n", x1);
    }
}




