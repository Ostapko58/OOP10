#include "Series.h"

Series::Series(int a1, int d)
{
	this->a1 = a1;
	this->d = d;
}

void Series::setA1(int a1)
{
	this->a1 = a1;
}

void Series::setD(int d)
{
	this->d = d;
}

int Series::getA1()
{
	return a1;
}

int Series::getD()
{
	return d;
}
