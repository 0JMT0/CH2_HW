#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,hours,item = 0;
	float weekly_rate, hour_rate,item_rate, salary, sales;
	while (1)
	{
		printf("please enter your number(-1 to end):");
		scanf_s("%d",&num);
		if (num == -1)
			break;
		switch (num)
		{
			case 1://經理
				printf("please enter company weekly salary:");
				scanf_s("%f", &weekly_rate);
				printf("your weekly salary is %.2f", weekly_rate);
				break;
			case 2://時薪
				printf("please enter company hourly salary:");
				scanf_s("%f", &hour_rate);
				printf("please enter your work hour:");
				scanf_s("%d", &hours);
				salary = (hours < 40) ? hour_rate * hours : hour_rate * 40 + hour_rate * (hours - 40) *1.5;
				printf("your weekly salary is %.2f", salary);
				break;
			case 3://金工
				printf("please enter your weekly sales:");
				scanf_s("%f", &sales);
				salary = 250 + sales * 0.057;
				printf("your weekly salary is %.2f", salary);
				break;
			case 4://零工
				printf("please enter how much money per item:");
				scanf_s("%d", &item);
				printf("please enter the amount of item you produce:");
				scanf_s("%f", &item_rate);
				salary = item * item_rate;
				printf("your weekly salary is %.2f", salary);
				break;
		}
		printf("\n\n");
	}
	return 0;
}
