// C++2_class1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <memory>
#include <cmath>
#include <algorithm>

#include "C++2_class1.h"

// structs
struct Student 
{
	int age;
	std::string name;
};

// Types
enum Types : uint8_t
{
	One,
	Two,
	Three
};

Types GetType
{
	//?????
};

// Namespace and function
namespace Foo
{
	void bar();
}

// Reference variables
void dereferenceFunc(int * ref) 
{
	int copy = *ref;

	// 
	std::cout << ref << std::endl;
	std::cout << copy << std::endl;
}

// main with arrays, vectors, and calling other functions
int main(int argc, char ** argv)
{
	// array
	int * arry = new int[10];
	
	// calling a function and passing in an integer
	int x = 10;
	dereferenceFunc(&x);
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
