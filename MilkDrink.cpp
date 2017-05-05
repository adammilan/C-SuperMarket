#include "MilkDrink.h"


MilkDrink::MilkDrink()
{

	cout << "(MilkDrink) Constrcuted" << endl;

}



void MilkDrink:: PrintInfo() const{

	Milk::PrintInfo();
	cout << "(MilkDrink) has been printed" << endl;


}

int MilkDrink::calcualate(int factor) const{

	float total;

	total = ((Milk::calcualate(factor) * 1)); // adding (*1 means the product code (MilkDrink)
	cout << "The price tag of the Product (MilkDrink)" << this->getNameOfProduct() << " is " << total << "$" << endl;
	return 0;

}


MilkDrink::~MilkDrink()
{

	cout <<"(MilkDrink) destroyed" << endl;
}
