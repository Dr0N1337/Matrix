#pragma once
#include "BaseTask.h"
#include "../matrix/Matrix.h"

struct Task : public BaseTask
{
private:
	Matrix matrix;
public:
	Task(Matrix matrix);

	Matrix Task1() override;

	Matrix Task2() override;
};