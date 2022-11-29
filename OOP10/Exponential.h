#pragma once
#include"Series.h"
#include<cmath>
class Exponential : public Series
{
public:
	Exponential(int a1, int d) : Series(a1, d) {}
	int calculateElement(int n) override;
	int sum(int n) override;
};

