#pragma once
#include "Milk.h"


class OtheMilkProduct :public Milk
{

private:

	int _numOfDairy;
	char **Arr; //non Diary ingredient's arr


public:

	OtheMilkProduct();

	virtual void PrintInfo() const;
	virtual int calcualate(int factor) const;

	virtual ~OtheMilkProduct();
};

