#include <iostream>
#include <cmath>
#include <iomanip>

bool prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0) return 0;
    }
    return 1;
}


int main()
{
    int n;
    std::cin >> n;

    bool a;
    a = prime(n);
    if (a == true)
    {
        std::cout << "podana liczba jest liczba pierwsza" << std::endl;
    }
    else
    {
        std::cout << "podana liczba nie jest liczba pierwsza" << std::endl;
    }
        
	return 0;
}
