#include "Fruit.h"


Fruit::Fruit()
{
	//Agricultural::Agricultural(); //first we add the basic information for fruit
	cout << "(Fruit) Enter the number of sugars in the fruit : " << endl;
	cin >> this->_numOfSuger;

	cout << "(Fruit) Fruit constracted" << endl;

}


int Fruit::calcualate(int factor) const{

	float total;

	total = ((this->_numOfSuger / 2) + (Agricultural::calcualate(factor))) + 2; //+2 means fruit 

	cout << "The price tag of the product (Fruit): " << this->get_NameOfProduct() << " is " << total << "$" << endl;
	return 0;
}

void Fruit::PrintInfo() const { //not changing the fruit info so using const

	Agricultural::PrintInfo(); //First we print the basic information for the fruit
	cout << "(Fruit) Number of sugars in the fruit : " << this->_numOfSuger << endl;

}

Fruit::~Fruit()
{

	cout << "(Fruit) Fruit destroyed";
}
