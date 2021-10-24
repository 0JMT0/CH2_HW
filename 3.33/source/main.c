#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length,breadth,i,j= 0;
	printf("Enter length and breadth:");
	scanf_s("%d%d", &length , &breadth);
	if (length == 0 || breadth == 0)
	{
		printf("fuck man");
		return 0;
	}
	if (length == 1)
	{
		for (i = 0; i < breadth; i++)
		{
			printf("+");
		}
		return 0;
	}
	if (length == 2 && breadth == 1)
	{
		printf("+\n");
		printf("+\n");
		return 0;
	}
	for (i=0;i<breadth;i++)
	{
		printf("+");
	}
	printf("\n");
	for (j = 0; j < length-2; j++)
	{
		printf("+");
		for (i = 0; i < breadth - 2; i++)
		{
			printf(" ");
		}
		printf("+\n");
	}
	for (i = 0; i < breadth; i++)
	{
		printf("+");
	}
	return 0;
}