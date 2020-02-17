// FibonacciEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "FibEven.h"

int main()
{
	FibEven * fibEven = new FibEven();
	int result = fibEven->calculateSum();
	std::cout << result << std::endl;
	delete(fibEven);
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
