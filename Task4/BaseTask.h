#pragma once
#include "../matrix/Matrix.h"

struct BaseTask
{
public:
	virtual ~BaseTask() = 0 {};
	virtual Matrix Task1() = 0;
	virtual Matrix Task2() = 0;
};