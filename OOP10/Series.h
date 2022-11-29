#pragma once
class Series abstract
{
protected:
	int a1;
	int d;
public:
	Series(int a1, int d);
	void setA1(int a1);
	void setD(int d);
	int getA1();
	int getD();

	virtual int calculateElement(int n) abstract;
	virtual int sum(int n) abstract;
};


