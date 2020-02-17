#include <iostream>
#include "FibEven.h"

// FibonacciEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

int main()
{
	FibEven * fibEven = new FibEven();
	int result = fibEven->calculateSum();
	std::cout << result;
	delete(fibEven);
	return 0;
}

int FibEven::calculateSum() 
{
	int n = 1;
	int prev = 0;
	int sum = 0;

	while (n < 4000000) 
	{
		if (n % 2 == 0) 
		{
			sum += n;
		}

		int temp = n;

		n = prev + n;

		prev = temp;
	}

	return sum;
}
