#pragma once
#include "Fruit.h" ////We define the bottom of the tree so that everything will be set
#include "Vegetable.h"
#include "Cheese.h"
#include "OtheMilkProduct.h"
#include "MilkDrink.h"
#include "Yogurt.h"
#include "Case.h"

class SuperMarket
{

private:
	Product ** _arr;
	int _size;
	string _NameOfSuperMarket;
	


public:


	int get_SIZE()const{ return this->_size; } // return the size of the  ARR
	string getNameOfSuperMarket() const { return this->_NameOfSuperMarket; } 
	void setNameOfSuperMarket(string name){ this->_NameOfSuperMarket = name; }
	
	int  CheakSerialExist(Product **tempARRA)const; // this function Cheak if the serial number of the product is vaild

	void AddNewProduct();
	void PrintSuperMarket() const;
	void menu();
	void CalculateCost() const;
	SuperMarket();
	~SuperMarket();
};

