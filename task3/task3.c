#include <stdio.h>
#include <math.h>

double f(double x);     //объявление (прототип) функции f

void main(void)
{
	double x = 64;
	double fres;

	fres = f(x);		

	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", fres);

	printf("x = ");
	scanf_s("%lf", &x);

	fres = f(x);

	printf("f = %.4lf\n", fres);
	system("pause");
}

double f(double x)					
{
	return -sqrt(x);
}