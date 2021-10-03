#include <stdio.h>
#include<math.h>

double f(double x)					//определение функции для вычисления f
{
	return -sqrt(x);				//возврат значения функции
}

void main(void)
{
	double x = 16;
	double fres;

	fres = f(x);				    //вызов функции f(x) и сохранение значения

	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", fres);
	
	printf("x = ");
	scanf_s("%lf", &x);

	fres = f(x);

	printf("f = %.4lf\n", fres);
	system("pause");
}

