#pragma once
#include "Product.h"


class Case :public Product
{

private:
	int _numOfProductCase;
	int _numOfColorCase;
	char **_ArrCase;


public:

	virtual void PrintInfo()const;
	virtual int calcualate(int factor) const;

	

	Case();
	virtual ~Case();
};

