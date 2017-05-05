#include "Case.h"

Case::Case()
{

	this->_ProdouctType = 3;

	char buffer[1024];

	cout << "(Case): Enter Number of Product's in the case: ";
	cin >> this->_numOfProductCase;
	cout << "(Case): Enter number of Product's Color: ";
	cin >> this->_numOfColorCase;

	_ArrCase = new char*[this->_numOfProductCase]; 


	for (int i = 0; i < this->_numOfProductCase; i++){

		flushall();
		cout << "Enter the NAME of the: " << i + 1 << " Product: ";
		gets(buffer);

		_ArrCase[i] = strdup(buffer);
		cout << endl;
	}
	cout << "(Case): Case Constrcuted " << endl;


}

int Case::calcualate(int factor) const{

	float total;

	total = ((Product::calcualate(factor) * 2) * this->_numOfProductCase) + (this->_numOfColorCase / 3);

	cout << "The price tag of the product (Case): " << total << "$" << endl;

	return 0;

}


void Case::PrintInfo() const {

	Product::PrintInfo();

	cout << "(Case) Name of the products inside the package:";
	for (int i = 0; i < this->_numOfProductCase; i++)
		cout << " , " << this->_ArrCase[i];
	cout << endl;

}
	Case::~Case()
	{
		cout << "(Case): Case destroyed: ";

	}
