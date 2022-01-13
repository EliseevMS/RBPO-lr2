#include <iostream>
#include <cmath>
using namespace std;

void f(const double&, double&);

int main() {
	double x;
	double result;
	cout << "Enter x: ";
	cin >> x;
	f(x,result);
	printf("f: %.4f\n", result);
	cout << "Enter x: ";
	cin >> x;
	f(x, result);
	printf("f: %.4f\n", result);
	system("pause");
	return 0;
}


void f(const double& x, double& result) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}