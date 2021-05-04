#include <iostream>
#include <cmath>
#include <iomanip>



int main()
{
    int liczbak = 0;
    std::cin >> liczbak;

    if (liczbak == 1) return 1;
    int i = 2;
    while (liczbak != 1)
    {
        while (liczbak%i == 0)
        {
            liczbak = liczbak / i;
            std::cout << i << std::endl;
        }
        i += 1;
    }
        
	return 0;
}
