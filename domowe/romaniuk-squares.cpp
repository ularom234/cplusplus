#include <iostream>
#include <cmath>
#include <iomanip>

void squares(int n)
{
	for (int i = 1; i < n; i++)
    {
        int q = i * i;
        if( (q % 2 == 0) || (q % 3 == 0))
        {
            std::cout << q << std:: endl;
        }
    }

}

int main()
{
	double n;	
	std::cout << "podaj n: ";
	std::cin  >> n;
	std::cout << std::endl;
	
	squares(n);

	return 0;
}
