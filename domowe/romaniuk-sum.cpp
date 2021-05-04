#include <iostream>
#include <cmath>
#include <iomanip>

double sum(int n)
{
    double sum = 0;
	for (int k = 1; k <= n; k++)
    {
        sum += std::pow(-1, k+1) / (2 * k - 1);
    }
    return 4 * sum;
}

int main()
{
	double n;	
	std::cout << "podaj n: ";
	std::cin  >> n;
	std::cout << std::endl;
	
	double suma = sum(n);
    std::cout << suma << std::endl;

	return 0;
}
