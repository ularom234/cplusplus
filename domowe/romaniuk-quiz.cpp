#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
    for (int i = 0; i < 5; i++)
    {
        int a = std::rand()/(RAND_MAX + 1.) * 11;
        int b = std::rand()/(RAND_MAX + 1.) * 11;
        int wyn = 0;
        while (wyn != a * b)
        {
            std::cout << a << " " << b << std::endl;
            std::cin >> wyn;
        }
    }

	return 0;
}
