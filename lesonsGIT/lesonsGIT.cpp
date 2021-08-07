#include "pch.h"
#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
    std::cout << "Hello World!\n"; 
	int a;
	a = add(2, 2);
	std::cout << a;
}