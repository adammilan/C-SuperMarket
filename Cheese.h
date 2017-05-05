#pragma once
#include "Milk.h"


class Cheese : public Milk
{


private:

	int _Severaladditionscheese;


public:

	Cheese();

	virtual void PrintInfo() const;
	virtual int calcualate(int factor) const;


	virtual ~Cheese();
};

