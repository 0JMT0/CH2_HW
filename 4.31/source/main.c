#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	for (int i = 0; i < 5; i++)             
	{                                        
		for (int j = 0; j < 4 - i; j++) 
		{   			
			x(); 	               
		}	  
		for (int j = 0; j < (2 * i + 1); j++)
		{                         
			z();
		}
		printf("\n");
	}

	for (int i = 0; i <4; i++)
	{
		for (int j = 0; j < i + 1; j++)   
		{
			x();
		}
		for (int j = 0; j < 2 * 4 - (1 + 2 * i); j++)
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