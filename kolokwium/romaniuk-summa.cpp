#include <iostream>
#include <cmath>
#include <iomanip>

double summa(int n)
{
	if (n < 3) return 0;

	double sum = 0;
	for (int i = 3; i <= n; i++)
    {
        sum += 1.0/ ((i-1) * i);
    }
    return sum;
}

int main()
{
	double n;	
	std::cout << "podaj n: ";
	std::cin  >> n;
	std::cout << std::endl;
	
	double suma = summa(n);
    std::cout << "S(n): " << suma << std::endl;

	return 0;
}
