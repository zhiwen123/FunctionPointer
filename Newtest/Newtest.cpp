// FunctionPointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

//the operation function calls a operator declared outside to realize the operation
int operation(int a, int b, int(*oper)(int, int))
{
	return oper(a, b);
}

int main()
{
	int(*p)(int a, int b);
	p = add;
	int c = p(1, 2);
	printf("%d\n", c);

	int sum = operation(1, 2, add);
	int mul = operation(1, 2, multiply);
	printf("sum=%d\n", sum);
	printf("mul=%d\n", mul);
	return 0;
}

