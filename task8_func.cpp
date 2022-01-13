#include "func.h"
double x, result;
void f() {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}