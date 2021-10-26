#include <stdio.h>
#include <math.h>


void tab1()
{
	int a, b;
	double h;
	/*
	printf("%s", "a ->"); scanf_s("%lf", &a);
	printf("%s", "b ->"); scanf_s("%lf", & b);
	printf("%s", "h ->"); scanf_s("%lf", & h);
	*/
	a = 3;
	b = 8;
	h = 0.2;

	for (double x = a; x <= b; x += h)
	{
		if (x < 5)
		{
			printf("%f1 %f\n", (x / log(5)) * (log(4) / log(5)));
		}
		else if (x < 7 && x <= 5) 
		{
			printf("%f1 %f\n", 1 / pow(x, 2) + 16);
		}
		else if (x >= 7)
		{
			printf("%f1 %f\n", log(x) + cos(x)); 
		}

	}
}

void tab2()
{
	double x, a, b, h, d, s, f, y;
	int n, c; 

	a = 0;
	b = 0.2;
	h = 0.02;
	d = 0.001;

	for (x = a; x <= b; x += h) {

		s = 0;
		f = 1;
		n = 1;

		do {
			f = (2 * n - 1);
			for (c = 1; c <= n; c++) {
				f = f * c;
			}

			y = (pow(x, 2 * n) - 1) / f;
			s += y;
			n++;

		} while (fabs(y) >= d);

		printf("Suma = %lf, x = %.2lf, n = %i, y = %.15lf\n", s, x, n, y);

	}

}

void main()
{
	tab1();

	tab2(); 

	switch()

	return 0;
}


