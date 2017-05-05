#include "Product.h"

Product::Product()
{

	this->_ProdouctType = 0;

	//cout << "(Supermarket) Enter the name of supermarket: " << endl;
	//cin >> this->_nameofSuperMarket;

	
	Location(); // this function cheak if the Char and shelf is vaild .

	cout << "(Product) enter the weight of the prodocut: ";
	cin >> this->_weight;


	cout << "(Product) enter the Location of the Product 1. Multiple Exposure"  <<endl;
	cout << "                                            2. hidden" << endl;
	cout << "                                            3. A small exposure: ";
	cin >> this->_AreaStore;

	cout << "(Product) Product constructed" << endl;

}


int Product::calcualate(int factor) const{

	return (factor *_weight * _AreaStore);

}


void Product::Location(){ // Checks whether the data inserted is right



	do{
		cout << "(Product) Enter the tav of the product Between A - Z: ";
		cin >> this->_tav;


		if (((this->_tav < 'A') || (this->_tav  > 'Z')))
			cout << "Wrong TAV try again" << endl;

	} while ((this->_tav < 'A') || (this->_tav  > 'Z'));

	 
	do{ 
		cout << "(Product) Enter Shelf The product (1-5) ";
		cin >> this->_shelf;

		if ((this->_shelf < 1) || (this->_shelf> 5))
			cout << "Wrong Shelf Number try again " << endl;

	} while ((this->_shelf < 1) || (this->_shelf> 5));

	

}



void Product::PrintInfo () const{

	cout << "******************" << endl;
	
	//cout << "(Supermarket) name of the supermarket : " << "SuperShop" << endl; //this->_nameofSuperMarket << endl;
	cout << "******************" << endl;
	cout << "(Product) Serial code : " << this->_serial_id << endl;
	cout << "(Product) Product place IS  : " << this->_tav << " , " << this->_shelf << endl;
	cout << "(Product) Product weight : " << this->_weight << endl;
	cout << "(Product) Product Type(1.Agricultural,2.milk 3.case) : " << this->_ProdouctType << endl;
	cout << "(Product) Product Area : " << this->_AreaStore << endl;
	
	


}

/*
ostream & operator << (ostream &out, const Product p)
{
	out <<p.serial_id<<p.place<<p.weight<<p.CodeProduct<<p.AreaStore<<endl; //mikom in the store

}
*/
Product::~Product()
{
	cout << endl;
	cout << "(Supermarket) Supermarket destroyed";

}
