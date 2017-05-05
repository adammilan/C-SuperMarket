#pragma once
#include "Agricultural.h"

class Vegetable : public Agricultural
{

private:

	int _numofVitamins;

	
public:

	virtual void PrintInfo() const;

	virtual int calcualate(int factor) const;

	Vegetable();

	virtual ~Vegetable();
};

