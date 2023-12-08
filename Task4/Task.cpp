#include "Task.h"

Task::Task(Matrix matrix)
	:matrix(matrix)
{
}

Matrix Task::Task1()
{
	Matrix result{ this->matrix };
	for (size_t i = 0; i < result.rows_counts(); ++i)
	{
		int max = result.get_max_abs_row_element(i);
		for (size_t j = 0; j < result.cols_counts(); ++j)
		{
			if (std::fabs(result[i][j]) == max)
			{
				result[i][j] = -result[i][j];
			}
		}
	}
	return result;
}

Matrix Task::Task2()
{
	Matrix result;
	for (size_t i = 0; i < this->matrix.rows_counts(); ++i) 
	{
		result.add_row(this->matrix[i]);
		if (i % 2 != 0) 
		{
			result.add_row(this->matrix[0]);
		}
	}
	return result;
}