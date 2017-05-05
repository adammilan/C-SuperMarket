#include "Milk.h"


Milk::Milk()
{
	this->_ProdouctType = 2;

	cout << "(Milk) Enter name of the product: " ;
	cin >> this->_nameOfProduct;
	cout << "(Milk) Enter number of colors in the product:  ";
	cin >> this->_numberOfColoers;

	cout << "(Milk) Enter The % of fat in the product: ";
	cin >> this->_percentagefat;

	cout << "(Milk) Milk Constructed" << endl;

}


 void Milk:: PrintInfo()const{

	 Product::PrintInfo(); //first we print the product basic info

	 cout << "(Milk) name of the product: " << this->_nameOfProduct << endl;
	 cout << "(Milk) number of colors in the product: " << this->_numberOfColoers << endl;

	 cout << "(Milk) The % of fat in the product: " << this->_percentagefat << endl;


}


 int Milk::calcualate(int factor) const{

	 return (Product::calcualate(factor) + this->_numberOfColoers + this->_percentagefat);

 }


Milk::~Milk()
{

	cout << "(Milk) Milk destroyed" << endl;


}


