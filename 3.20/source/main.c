#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float rate,salary;
	int hours = 0;
	while (hours != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of thr worker($00.00):");
		scanf_s("%f", &rate);
		salary = (hours < 40) ? rate * hours : rate * 40 + rate * (hours - 40) *1.5;
		printf("Salary is %.2f", salary);
		printf("\n\n");
	}
	return 0;
}