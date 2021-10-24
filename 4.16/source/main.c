#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k <= j; k++)
		{
			z();
		}
		printf("\n");
	}
	printf("\n");
	for (int j = 10; j > 0; j--)
	{
		for (int k = 0; k < j; k++)
		{
			z();
		}
		printf("\n");
	}
	printf("\n");
	for (int j = 10; j > 0; j--)
	{
		for (int a = 0; a < 10-j; a++)
		{
			x();
		}
		for (int k = 0; k < j; k++)
		{
			z();
		}
		printf("\n");
	}
	printf("\n");
	for (int j = 10; j > 0; j--)
	{
		for (int a = 0; a < j-1; a++)
		{
			x();
		}
		for (int k = 0; k <= 10 - j; k++)
		{
			z();
		}
		printf("\n");
	}
	return 0;
}
int z()
{
	printf("%s", "*");
}
int x()
{
	printf("%s", " ");
}