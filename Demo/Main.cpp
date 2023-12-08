#include "../Generator/Generator.h"
#include "../Generator/IStreamGenerator.h"
#include "../Generator/RandomGenerator.h"


#include "../Task4/Task.h"

int main()
{
	setlocale(LC_ALL, "Russian");
    
	Generator* generator = new RandomGenerator(0, 10);
	Matrix A(4, 3, generator);
	std::cout << A<<std::endl;
	std::cout << "---------------------------------" << std::endl;
	Task task { A };
	std::cout << task.Task1().to_string();
	std::cout << "---------------------------------" << std::endl;
	std::cout << task.Task2().to_string();
	return 0;
}
