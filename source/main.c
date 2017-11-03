#include<stdio.h>
#include<stdlib.h>

int r;
int counter1 = 0;
int counter2 = 0;
unsigned int n=1;
unsigned long long int fibonacci(unsigned int n);
unsigned long long int n1 = 0;
unsigned long long int n2 = 1;
unsigned long long int n3;

int main(void)
{
	printf("(a)\n");
	printf("Input the range:");
	scanf_s("%d", &r);

	if (r >94)
	{
		printf("Overflow\n\n");
	}
	else
	{
	for (n = 1; n <= r; n++)
	{
		printf("%25llu", fibonacci(n));
		counter1++;

		if (counter1 % 5 == 0)
		{
			printf("\n");
		}
		if (counter1 == r)
		{
			printf("\n");
		}
	}
}
	
	
	printf("=================================================================================================================================================\n");
	printf("=================================================================================================================================================\n");

	n1 = 0;
	n2 = 1;
	n3 = 0;
	printf("(b)\n");
	for (n = 1; n<= -1; n++)
	{
		printf("%25llu", fibonacci(n));
		counter2++;

		if (counter2 % 5 == 0&& n2>n1)
		{
			printf("\n");
		}

		if (n1 > n2)
		{
			printf("  !!!!!Overflow!!!!!\n");
			break;
		}
	}
	printf("\nThe max fibonacci number is the %dth number,which is %llu.\n",counter2,n1);

	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
		if (n == 1)
		{
			return 0;
		}
		else if (n == 2)
		{
			return 1;
		}
		else
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
			return n3;
		}
}

