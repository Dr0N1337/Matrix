#pragma once
#include "Row.h"
#include "../Generator/Generator.h"

#include <vector>
#include <iostream>


class Matrix 
{
public:
	Matrix(size_t numrows, size_t numcols, Generator* generator);

	void printmatrix();

	Row& operator[](size_t index);

private:
	std::vector<Row> matrix;
	size_t rows;
	size_t cols;
	Generator* generator;

};

