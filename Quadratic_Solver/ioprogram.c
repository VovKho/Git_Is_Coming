#include "functions.c"

int main() {
	double a = 0, b = 0, c = 0, x1 = 0, x2 = 0; exceptions exception = No_solutions;
    save_scan (&a, &b, &c);
    exception = quadratic_solver (a, b, c, &x1, &x2);
    print_answer (x1, x2, exception);
	return 0;
}


