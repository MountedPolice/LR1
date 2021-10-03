#include <stdio.h>
#include<math.h>

void main(void)
{
	double x = 4;					//определение  x
	double f;						//определение f

	f = -sqrt(x);					//вычисление f

	printf("x = %.4lf\n", x);		    //вывод x
	printf("f = %.4lf\n", f);		//вывод f с 4 знаками после запятой

	printf("x = ");					 
	scanf_s("%lf", &x);				//ввод x с клавиатуры

	f = -sqrt(x);

	printf("f = %.4lf\n", f);	
	system("pause");				//оставляет окно открытым после выполнения программы
}

