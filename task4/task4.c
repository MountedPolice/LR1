#include <stdio.h>
#include <math.h>

void f(void);
double x = 128;
double result;

void main(void)
{
	f();								//вызов функции для вычисления f

	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", result);

	printf("x = ");
	scanf_s("%lf", &x);

	f();

	printf("f = %.4lf\n", result);
	system("pause");
}

void f(void)
{
	result = -sqrt(x);					// в переменную result записывается результат вычисления
}