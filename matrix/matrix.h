#pragma once
#include "../Generator/Generator.h"

#include <vector>
#include <iostream>
#include <ostream>
#include <sstream>


class Matrix 
{
public:
	Matrix(size_t numrows, size_t numcols, Generator* generator);

	Matrix();

	std::string to_string() const noexcept;

	friend std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept;

	std::vector<int>& operator[](size_t index);

	int get_max_abs_row_element(size_t index) const;

	void add_row(std::vector<int> user_data);

	size_t rows_counts() const;

	size_t cols_counts() const;

private:
	std::vector<std::vector<int>> data;

};

