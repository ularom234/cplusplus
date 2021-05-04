#include <iostream>
#include <cmath>
#include <iomanip>

void fraction(double number, double &a, double &b)
{
	a = std::floor(number);
	b = number - a;

}



int main()
{
	double n, a, b;	
	std::cout << "podaj liczbe rzeczywista: ";
	std::cin  >> n;	
	std::cout << std::endl;
	
	fraction(n, a, b);
	
	std::cout << a << " " << b << std::endl;

	return 0;
}
