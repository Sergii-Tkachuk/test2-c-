#include "pch.h"
#include <iostream>

int add(int a, int b)
{
	return a + b;
}

void foo()
{
	std::cout << "hello world";
}

int main()
{
	int a = add(2, 2);
}