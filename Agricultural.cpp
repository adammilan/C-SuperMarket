#include "Agricultural.h"


Agricultural::Agricultural()
{

	int choice;

	this->_ProdouctType = 1;

	
	cout << "(Agricultural) Enter name of Product : ";
	cin >> this->_nameOfProduct;
	

	CheakRipeing(); //update the Number season of ripens + cheak vaild number (1-4)
;

	cout << "(Agricultural) Enter number of suppliers who grow this product: ";
	cin >> this->_numOfsuppliers;

	cout << "(Agricultural) Agricultural constrcuted" << endl;
	

}


void Agricultural::CheakRipeing(){


	do{
		cout << "(Agricultural) Enter Number of seasons ripens (1-4): ";
		cin >> this->_SeveralSeasonRipening;

		if (this->_SeveralSeasonRipening <= 0 || this->_SeveralSeasonRipening > 4)
			cout << "Wrong Seasons ripens try again you can choose between 1-4" << endl;

	} while ((this->_SeveralSeasonRipening <= 0 || this->_SeveralSeasonRipening > 4));



	
}

void Agricultural::PrintInfo()const{

	Product::PrintInfo(); //this function print the "Product infomartion first"

	cout << "(Agricultural) Name of the product : " << this->_nameOfProduct << endl;
	//cout << "(Agricultural) Num of Product 1.vegtaibles 2.fruit: " << this-> << endl;
	cout << "(Agricultural) Number Several Season Ripening: " << this->_SeveralSeasonRipening << endl;
	cout << "(Agricultural) Number of suppliers : " << this->_numOfsuppliers << endl;

}


int Agricultural::calcualate(int factor) const{ //calcualate the cost of the product

	int sum;
	sum = (  ((this->_numOfsuppliers * 5 ) + (5-this->_SeveralSeasonRipening)) * (Product::calcualate(factor) * 3 ) ) ;

	return sum;

}

Agricultural::~Agricultural()
{
	cout << "(Agricultural) Agricultural destroyed";

}
