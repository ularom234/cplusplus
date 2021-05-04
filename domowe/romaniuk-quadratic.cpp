#include <iostream>
#include <cmath>
#include <iomanip>

void quadratic(double a, double b, double c, double &x1, double &x2)
{
	double wyroznik = std::pow(b, 2) - 4 * a * c;
	std::cout << " wyróznik: " << wyroznik << std::endl;
	double sq = std::sqrt(wyroznik);
	if (wyroznik > 0)
	{
		x1 = ((-b) - sq) / (2.0 * a);
		x2 = ((-b) + sq) / (2.0 * a);
		std::cout << "x1: " << x1 << " x2: " << x2 << std::endl;
	}
	else if (wyroznik == 0)
	{
		x1 = (-b) / (2.0 * a);
		std::cout <<"x1: " << x1 << std::endl;
	}	

	else
	{
		std::cout << "brak rozwiazan rownania" << std::endl;
	}
}



int main()
{
	double x1, x2, a, b, c;	
	std::cout << "podaj a, b, c po enterze: ";
	std::cin  >> a;
	std::cin  >> b;
	std::cin  >> c;	
	std::cout << std::endl;
	
	quadratic(a, b, c, x1, x2);

	return 0;
}
