#include <iostream>


int main()
{
	int r;
	std::cout << "podaj rok: ";
	std::cin  >> r;	
	std::cout << std::endl;

	if ((r % 4 == 0 && r % 100 != 0) || r % 400 == 0)
	{
		std::cout << "Rok " << r << " jest przestępny" << std::endl;
	}
	else
	{
		std::cout << "Rok " << r << "  nie jest przestępny" << std::endl;;
	}
	return 0;
}
