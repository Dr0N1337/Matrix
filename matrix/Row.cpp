#include "Row.h"

int& Row::operator[](size_t index)
{
	return row[index];
}