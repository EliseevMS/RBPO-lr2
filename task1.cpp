#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Enter x: ";
	double x;
	cin >> x;
	double f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	printf("f: %.4f\n", f);
	system("pause");
	return 0;
}