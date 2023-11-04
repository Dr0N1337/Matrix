#pragma once
#include <vector>
#include <sstream>
#include <iostream>
#include <ostream>
#include <initializer_list>

class Row
{
public:
	std::vector<int> row;

	int& operator[](std::size_t index);
};

int& Row::operator[](size_t index)
{
	return row[index];
}

class Matrix
{
public:
	Matrix(std::initializer_list<int> list, int rows, size_t columns);

	void create_matrix();

	friend std::ostream& operator<< (std::ostream& os, Matrix& matrix);

	std::string print_matrix();


private:
	std::vector<Row> matrix;
};

Matrix::Matrix(std::initializer_list<int> list, int rows, size_t columns)
{
	std::vector<int> list1;
	for (auto& i : list)
	{
		list1.push_back(i);
	}

	for (size_t i = 0; i < rows; i++)
	{
		Row initRow{};
		matrix.push_back(initRow);
		for (size_t j = 0; j < columns; j++)
		{
			matrix[i].row.push_back(list1[columns * i + j]);
		}
	}
}

std::ostream& operator<< (std::ostream& os, Matrix& matrix)
{


}

std::string Matrix::print_matrix()
{
	std::stringstream buffer;
	for (int i = 0; i < ; i++)
	{
		buffer << "\n";
		for (int j = 0; j < ; j++)
		{
			buffer << ;
		}
	}
	return buffer.str();
}