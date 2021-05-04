#include <iostream>
#include <cmath>
#include <iomanip>


int main()
{
	int count = 0;
    double sum = 0;
    double max = 0;
	for (double number; std::cin >> number; ++count)
    {
        sum += number;
        if (number > max)
        {
            max = number;
        }
    }
	std::cout << "srednia arytmetyczna wynosi: " << sum/ count << std::endl;
    std::cout << "najwieksza z liczb wynosi: " << max << std::endl;
	return 0;
}
