#include "Cheese.h"


Cheese::Cheese()
{
	cout << "(Cheese) Enter Number of Several additions to cheese" << endl;
	cin >> this->_Severaladditionscheese;

	cout << "(Cheese) Cheese Constructed" << endl;


}



int Cheese::calcualate(int factor) const{

	float total;

	total = (Milk::calcualate(factor) + this->_Severaladditionscheese);

	cout << "The Price tag of the (Cheese)" << this->getNameOfProduct() << " is " << total << "$"<< endl;
	return 0;
}


void Cheese::PrintInfo() const {

	Milk::PrintInfo(); //first we print the basic info about the Milk Product
	cout << "(Cheese)  Number of Several additions to cheese " << this->_Severaladditionscheese << endl;


}

Cheese::~Cheese()
{

	cout << "(Cheese) Cheese destroyed" << endl;

}
