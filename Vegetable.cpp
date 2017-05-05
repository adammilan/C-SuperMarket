#include "Vegetable.h"


Vegetable::Vegetable()
{


	cout << "(Vegtable) Enter number of Vitamins : ";
	cin >> this->_numofVitamins;

	cout << "(Vegtable) Vegtable constrcuted" << endl;

}

int Vegetable::calcualate(int factor) const{

	float total;

	total =  ((this->_numofVitamins *2 ) + (Agricultural::calcualate(factor))) +1; //+1 means vegtable 

	cout << "The Price tag of the product (Vegetable) : " << this->get_NameOfProduct() << " is " << total << "$" << endl;

	return 0;
}


void Vegetable:: PrintInfo() const{

	Agricultural::PrintInfo(); //print first the information about the basic Agricultural and Product
	cout << "(Vegtable) number of vitamins : " << this->_numofVitamins;

}

Vegetable::~Vegetable()
{
	cout << "(Vegtable) Vegtable destroyed";
}
