#pragma once

#include"Product.h"


class Agricultural :public Product
{

private:

	string _nameOfProduct;
	int _numOfprodocut; //1.Vegetable 2.fruit
	int _SeveralSeasonRipening; 
	int _numOfsuppliers;

	
public:
	/*
	int get_numOfprodouct(){ return this->get_numOfprodouct; }

	void set_numOfprocout(int num){ this->get_numOfprodouct = num; }

	int get_SeveralSeasonRipening(){ return this->_SeveralSeasonRipening; }
	void set_SeveralSeasonRipening(int ripening){ this->_SeveralSeasonRipening = ripening; }

	int get_numOfsuppliers(){ return this->_numOfprodocut; }
	void set_numOfsuppliers(int supply){ this->get_numOfsuppliers = supply; }
	*/

	 string get_NameOfProduct()const { return this->_nameOfProduct; }

	virtual void PrintInfo() const;
	virtual int calcualate(int factor) const;

	void CheakRipeing();

	Agricultural();
	~Agricultural();
};

