#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

int main(int argc, char *argv[])
{
	double x = std::atof(argv[1]);
	std::cout << std::fixed << std::setprecision(1);
	std::cout << std::setw(9) << x << std::endl;
	std::cout << std::setprecision(2);
	std::cout << std::setw(10) << std::pow(x, 2) << std::endl;
	std::cout << std::setprecision(3);
	std::cout << std::setw(11) << std::pow(x, 3) << std::endl;
	//setw ustawilam na tak duzy ze wzgledu na najwieksza licze mozliwa do wpisania
	return 0;
}
