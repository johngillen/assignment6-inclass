#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n)
{
	for (int c = 2; c <= (int)sqrt(n); c++)
	{
		if (n % c == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int i = 0;
	int n = 0;
	while(i < 100)
	{
		n++;
		if (isprime(n))
		{
			printf("%d\n", n);
			i++;
		}
	}
	return 0;
}
