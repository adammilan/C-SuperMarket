#pragma once
#include "Product.h"


class Milk : public Product
{

private:
	int _type;
	string _nameOfProduct;
	int _numberOfColoers;
	int _percentagefat;



public:

	virtual void PrintInfo()const;
	virtual int calcualate(int factor) const;


	string getNameOfProduct()const{ return this->_nameOfProduct; } 

	Milk();

	virtual ~Milk();
};

