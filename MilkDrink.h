#pragma once
#include "Milk.h"

class MilkDrink :public Milk
{
	


public:


	 virtual void PrintInfo() const;
	 virtual int calcualate(int factor) const;

	MilkDrink();

	virtual ~MilkDrink();
};

