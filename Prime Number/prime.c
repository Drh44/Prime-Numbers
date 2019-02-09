/* Author: Dylan Hesser
 * This program will display each prime number
 * and is made more efficient due to some changes
 */


#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	// These are the declared variables, bool is to receive the prime numbers
	int p, d;
	bool isPrime;
		
	// This is to get the only even number prime, 2, while skipping the rest
	for (p = 2; p <= 50; p += 2) {
		printf("2 ");
		break;
	}
	// This will check the odd numbers to be prime
	for (p = 3; p <= 50; p += 2)
	{
		isPrime = true;
		
// this next for look will only work if the number is prime.
		for (d = 2; d < p && isPrime; ++d )
			if (p % d == 0)
				isPrime = false;
		if (isPrime != false)
			printf ("%i ", p);

	}

	printf ("\n");

	return 0;
}
