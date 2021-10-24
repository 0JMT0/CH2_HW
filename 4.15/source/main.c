#include <stdio.h>
#include <math.h>

int main(void)
{
	double principal = 5000;
	double rate;
	int a = 0;
	for (int i = 0;i <= 4;i++)
	{
		switch (a)
		{
		case 0:
			rate = 0.1;
		case 1:
			rate = 0.105;
		case 2:
			rate = 0.11;
		case 3:
			rate = 0.115;
		case 4:
			rate = 0.12;
		}
		printf("%4s%21s\n", "Year", "Amount on deposit");
		for (int year = 1; year <= 15; year++)
		{
			double amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
		a++;
	}
	
	return 0;
}