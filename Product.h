#pragma once
#include <iostream>
#include <string>
using namespace std;


class Product
{

private:
	int _serial_id;
	
	char _tav; //tav 
	int _shelf; // shelf 
	double _weight; // weight of the prodocut
	
	int _AreaStore; //mikom in the store
	int _nameofSuperMarket;

	

protected:
	int _ProdouctType; //kod mozar (1.Agriculturel , 2. Milk , 3.Case)
	
	
	

public:
	
	Product();
	
	void SetSerial_id(int id){ this->_serial_id = id; }
	int GetSerial_id()const{ return _serial_id; }
	double GetWeight()const{ return _weight; }
	int GetCodeProduct()const{ return _ProdouctType; }
	int GetAreaStore()const{ return _AreaStore; }
	
	virtual int calcualate(int factor) const; //function that calculate the price of prodouct
	


	virtual void PrintInfo() const; //const beacuse we dont change nothing only printinfo 
	
	void Location();

	virtual ~Product();
};

