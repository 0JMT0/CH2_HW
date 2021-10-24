#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales = 0;
	float salary;
	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &sales);
		if (sales == -1)
			break;
		salary = 200 + sales * 0.09;
		printf("Salary is:%.2f" ,salary);
		printf("\n\n");
	}
	return 0;
}