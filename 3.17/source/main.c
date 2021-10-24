#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int account = 0;
	float bbalance,charge,credit,credit_limit,nbalance;
	while (account != -1)
	{
		printf("%s", "Enter account number (-1 to end):");
		scanf_s("%d", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance:");
		scanf_s("%f", &bbalance);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &credit_limit);
		printf("Account:\t%d\n", account);
		nbalance = bbalance + charge - credit;
		printf("Credit limit:\t%f\n", credit_limit);
		printf("Balance:\t%f\n", nbalance);
		if (nbalance > credit_limit)
			printf("Credit Limit Exceeded.\n");
		printf("\n");
	}
	return 0;
}