#include "..\matrix\Matrix.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	size_t length;
	size_t high;
	std::cout << "Введите колличество строк:" << std::endl;
	std::cin >> length;
	std::cout << "Введите колличество столбцов:" << std::endl;
	std::cin >> high;

	matrix matrix(length, high);
	matrix.create_matrix();
	std::cout << matrix.print_matrix() << "\t";
}
