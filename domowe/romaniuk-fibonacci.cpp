#include <iostream>
#include <cmath>
#include <iomanip>

double fibonacci(int n)
{
    int first = 0, second = 1, next = 0;
	for (int i = 0; i < n; i++)
    { 
        if ( i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;   
        }
        std::cout << next << std:: endl;
    }
}

int main()
{
	double n;	
	std::cout << "podaj n: ";
	std::cin  >> n;
	std::cout << std::endl;
	
	fibonacci(n);

	return 0;
}
