#include "../Generator/Generator.h"
#include "../Generator/IStreamGenerator.h"
#include "../Generator/RandomGenerator.h"

#include "../matrix/Matrix.h"

int main()
{
	setlocale(LC_ALL, "Russian");
    
	Generator* generator = new RandomGenerator(0, 10);
	Matrix A(2, 2, generator);
	A.printmatrix();
	return 0;
}
