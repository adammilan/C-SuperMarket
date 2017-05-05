#pragma once
#include "Milk.h"


class Yogurt :public Milk
{



public:


	virtual void PrintInfo() const;

	virtual int calcualate(int factor) const;

	Yogurt();

	virtual ~Yogurt();
};

