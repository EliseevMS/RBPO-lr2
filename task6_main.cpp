#include <iostream>
using namespace std;

double f(double);

int main() {
	cout << "Enter x: ";
	double x;
	cin >> x;
	double result = f(x);
	printf("f: %.4f\n", result);
	system("pause");
	return 0;
}