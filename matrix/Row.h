#pragma once
#include <vector>
#include <iostream>

class Row
{
public:
	Row(size_t cols) :
		row(cols, 0) {};

	int& operator[](size_t index);

	std::vector<int> row;
private:

};