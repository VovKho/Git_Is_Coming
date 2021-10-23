typedef enum { /* тип переменной, которая указывает, как и какой ответ выводить пользователю в print_answer */
    One_solution, /* один корень при D = 0 */
    Two_solutions, /* два корня при D > 0 */
    No_solutions, /* нет корней при D < 0 */
    Linear_infinity_solution, /* бесконечное количество корней при a == 0 && b == 0 && c == 0 */
    Linear_one_solution, /* один корень линейного уравнения (a == 0) */
    Linear_no_solution /* нет корней при a == 0 && b == 0 && c != 0 */
} exceptions;

const double Epsilon = 1.0E-7;  /* Эпсилон */


void save_scan (double* a, double* b, double* c);    //ввод переменных

exceptions quadratic_solver (double a, double b, double c, double* x1, double* x2);   //решатель квадратки

exceptions linear_solver (double b, double c, double* x1);  // решатель линейных случаев

void print_answer (double x1, double x2, exceptions exception);    //выводит ответ по енаму