#include <iostream>
#include <cmath>
using namespace std;
//функции
double nn(double x, double y) {
	if (x >= y) {
		return pow(x - y, 1 / 3);
	}
	else {
		return pow(x, 2) + (x - y) / sin(x * y);
	}
}

double mm(double x, double y)
{
	double n = nn(x, y);
	if (n < y) {
	
		return (-(n + x) / y + sqrt(pow(sin(x), 2) - cos(y)));
	}
	else {
		if (n == y) {
			return (y * y + tan(n * x));
		}
		else {
			return (pow(y, 3) + n * x * x);
		}
	}
}
int main()
{
	double a,b, n1, m1;
	a = 4.8;
	b = -7.9;
	n1 = nn(a, b);
	m1 = mm(a, b);
	cout << "n=" << n1 << " " << "m=" << m1;
	return 0;
}

