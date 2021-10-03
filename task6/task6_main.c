#include <stdio.h>

void f(void);
extern double x, result;		//объявление переменных с внешним связыванием

void main(void)
{
	f();								

	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", result);

	printf("x = ");
	scanf_s("%lf", &x);

	f();

	printf("f = %.4lf\n", result);
	system("pause");
}
