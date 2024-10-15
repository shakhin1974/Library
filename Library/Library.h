#pragma once
#include <string>
using namespace std;
float Sum(float a, float b) 
{
	return a + b;
}
int length(int a)
{
	int count = 0;
	while (a != 0)
	{
		a /= 10;
		count++;
	}
	return count;
}
 
