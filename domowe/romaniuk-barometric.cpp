#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R = 8.3144598;
	double g = 9.80665;
	double miu = 0.0289644;
	double p0 = 1013.25;

	std::cout << "podaj ciśnienie atmosferyczne [hPa]: ";
	double p;
	std::cin >> p;

	std::cout << "podaj temperature powietrza [K]: ";
	double T;
	std::cin >> T;

	double h = -(R * T) / (g * miu) * std::log(p/p0);

	std::cout << "Wysokosc nad poziomem morza wynosi " << h << " [m]" << std::endl;

	return 0;
}


