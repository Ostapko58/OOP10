#pragma once
#include<iostream>
#include"Series.h"
#include<cmath>
using namespace std;
class Linear : public Series
{
public:
	Linear(int a1, int d) : Series(a1, d) {}

	int calculateElement(int n) override;
	int sum(int n) override;
};

