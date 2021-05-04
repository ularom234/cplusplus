#include <iostream>

void swap(double &a, double &b)
{
	std::swap(a,b);
}



int main()
{
	double a = 2.71828, b = 3.1419;
	swap(a,b);
	std::cout << "a: " << a << " b: " << b << std::endl;

	return 0;
}
