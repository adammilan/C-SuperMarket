#include "Yogurt.h"


Yogurt::Yogurt()
{

	cout << "(Yogurt) Yogurt Constructed" << endl;


}


int Yogurt::calcualate(int factor) const{
	
	float total;

	total = (Milk::calcualate(factor) * 2); // adding (*2 means the product code (Yogurt)
		
	cout << "The Price tag of the product (Yogurt): " << this->getNameOfProduct() << " is " << "$" << endl;
	return 0;
}

void Yogurt::PrintInfo() const{

	Milk::PrintInfo();
	cout << "(Yogurt) has been printed" << endl;

}


Yogurt::~Yogurt()
{

	cout << "(Yogurt) Yogurt destroyed" << endl;

}
