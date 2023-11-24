#include "matrix.h"

Matrix::Matrix(size_t numrows, size_t numcols, Generator* generator)
	: rows(numrows), cols(numcols), matrix(numrows, Row(cols)), generator(generator)
{
	if (generator == nullptr)
	{
		throw std::out_of_range("Error!");
	}
	else
	{
		for (size_t i = 0; i < matrix.size(); i++)
		{
			for (size_t j = 0; j < matrix[i].row.size(); i++)
			{
				matrix[i][j];
			}
		}
	}
}


void Matrix::printmatrix()
{
	for (size_t i = 0; i < matrix.size(); i++)
	{
		for (size_t j = 0; j < matrix[i].row.size(); i++)
		{
			std::cout << matrix[i][j] << std::endl;
		}
	}
}

Row& Matrix::operator[](size_t index)
{
	return matrix[index];
}