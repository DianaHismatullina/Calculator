#include <iostream>
#include "calculator.hpp"

int main()
{
	double a, b;

	printf_s("\n a = "); scanf_s("%lf", &a);
	printf_s("\n b = "); scanf_s("%lf", &b);
	printf_s("\n a + b =%f", summa(a, b));
	printf_s("\n a - b =%f", sub(a, b));
	printf_s("\n a * b =%f", mult(a, b));
	printf_s("\n a / b =%f", dev(a, b));
	printf_s("\n a ^ b =%f", pow(a, b));
	printf_s("\n a^(1/2) =%f", sqrt(a));

	return 0;
}
