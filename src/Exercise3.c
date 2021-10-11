/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// void primeFactors(int);
void primeFactors(int n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}

	// n must be odd at this point.  So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		printf("%d ", n);
}
int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	primeFactors(testcase);
	return 0;
}