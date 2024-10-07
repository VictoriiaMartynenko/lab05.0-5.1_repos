// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double g(const double a, const double b, const double c); // прототип
int main()
{
	double x, y;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	double z = g(pow(x, 2), 1, y) - g(pow(y, 2), x, 1);
	cout << "z = " << z << endl;
	return 0;
}
double g(const double a, const double b, const double c) // визначення
{
	return (pow(a, 2) + sin(b) + 1) / (1 + pow(c, 2));
}