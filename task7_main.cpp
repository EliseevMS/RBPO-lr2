#include <iostream>
using namespace std;

extern double x, result;
extern void f();

int main() {
	cout << "Enter x: ";
	cin >> x;
	f();
	printf("f: %.4f\n", result);
	cout << "Enter x: ";
	cin >> x;
	f();
	printf("f: %.4f\n", result);
	system("pause");
	return 0;
}