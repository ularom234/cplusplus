#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


int main(int argc, char *argv[])
{
	int n = std::stoi(argv[1]);
	std::cout << n << std::endl;
	

	std::srand(time(0));

	std::vector <double> vec(n);
	
	for(int i = 0; i < vec.size(); ++i) vec[i] = 5 + (10-5) * (double)rand() / RAND_MAX;

	for(int i = 0; i < vec.size(); ++i) std::cout << vec[i] << " "; //czy mamy 5 liczb z przedzialu? tak:)
	double sum = 0;
	double wart = 0;
	int max = 0;
	for(int i = 0; i < vec.size(); ++i)
	{
		if (vec[i] > wart)
		{
			wart = vec[i];
			max = i;
		}
		sum += vec[i];
	}
	std::cout << "Suma: " << sum << std::endl;

	double sred = sum/n;
	std::cout << "Średnia: " << sred << std::endl;

	std::cout << "Największa wartość ma indeks " << max << " i wynosi " << wart << std::endl;


	return 0;
}
