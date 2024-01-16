#include <stdio.h>

int add(int a, int b)
{
	int result;

	result = (a + b);
	return(result);
}

int sub(int a, int b)
{
	int result;

	result = (a - b);
	return(result);
}

int mul(int a, int b)
{
	int result;

	result = (a * b);
	return(result);
}

int div(int a, int b)
{
	int result;
	if (b != 0)
	{
		result = (a / b);
		return(result);
	}
	return (0);
}

int mod(int a, int b)
{
	if (b != 0) {
		return (a % b);
	}
	return (0);
}


