#include "OtheMilkProduct.h"


OtheMilkProduct::OtheMilkProduct()
{

	cout << "(OtheMilkProduct) Enter The number of non-dairy ingredients: ";
	cin >> this->_numOfDairy;

	char buffer[1024];

	Arr = new char*[this->_numOfDairy];

	for (int i = 0; i < this->_numOfDairy; i++){
		
		flushall();

		cout << "Enter the " << i + 1 << " name non Diary ingredient's ";
		gets(buffer);
		Arr[i] = strdup(buffer);
	
	}
	
	cout << "(OtheMilkProduct): OtheMilkProuduct Constrcuted" << endl;
	cout << "\n";


}


 void OtheMilkProduct:: PrintInfo() const{

	 Milk::PrintInfo(); // First we print the basic info's about the milk product
	 cout << "(OtheMilkProduct): The Number of non Diary ingredient's is:  " << "" << this->_numOfDairy << endl;

	 for (int i = 0; i < this->_numOfDairy; i++){
		 cout << "(OtheMilkProduct): name of the " << i + 1 << " Diary ingredient's is " << this->Arr[i] << endl;


	 }

}

 int OtheMilkProduct::calcualate(int factor)const{

	 float total;

	 total = (Milk::calcualate(factor) * 4) + (this->_numOfDairy * 5); //*4 means the product code (OtheMilkProduct) 
	cout << "The price tag of the Product (OtheMilkProduct)" << this->getNameOfProduct() << " is " << total << "$" << endl;

	return 0;
 }

OtheMilkProduct::~OtheMilkProduct()
{

	cout << "(OtheMilkProduct): OtheMilkProuduct destroyed" << endl;

}
