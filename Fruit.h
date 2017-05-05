#pragma once
#include "Agricultural.h"

class Fruit : public Agricultural

{
private:

	int _numOfSuger; //needed to change it later for float


public:
	Fruit();

	virtual int calcualate(int factor) const;

	virtual void PrintInfo()const;
	virtual ~Fruit();
};

