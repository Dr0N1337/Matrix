#include "matrix.h"

Matrix::Matrix(size_t numrows, size_t numcols, Generator* generator)
	: data({})
{
	for (size_t i = 0; i < numrows; i++)
	{
		std::vector<int> temp;
		for (size_t j = 0; j < numcols; j++)
		{
			temp.push_back(generator->generate());
		}
		this->data.push_back(temp);
	}
}

Matrix::Matrix()
	:data({})
{

}

std::string Matrix::to_string() const noexcept
{
	std::stringstream temp;
	for (size_t i = 0; i < this->rows_counts(); i++)
	{
		for (size_t j = 0; j < this->cols_counts(); j++)
		{
			temp << this->data[i][j] << ' ';
		}
		temp << "\n";
	}
	return temp.str();
}

size_t Matrix::rows_counts() const
{
	return this->data.size();
}

size_t Matrix::cols_counts() const
{
	if (this->data.size() == 0)
	{
		return 0;
	}
	return this->data[0].size();
}

std::ostream& operator<<(std::ostream& os, Matrix& matrix) noexcept
{
	return os << matrix.to_string();
}

std::vector<int>& Matrix::operator[](size_t index)
{
	return data[index];
}

int Matrix::get_max_abs_row_element(size_t index) const
{
	int max = std::numeric_limits<int>::min();
	for (size_t j = 0; j < this->cols_counts(); ++j)
	{
		if (std::fabs(this->data[index][j]) >= max) 
		{
			max = this->data[index][j];
		}
	}
	return max;
}

void Matrix::add_row(std::vector<int> user_data)
{
	this->data.push_back(user_data);
}


