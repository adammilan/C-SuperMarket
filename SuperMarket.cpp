#include "SuperMarket.h"


SuperMarket::SuperMarket()
{
	this->_arr = NULL;
	this->_size = 0;
	this->_NameOfSuperMarket = "SuperShop";

}



void SuperMarket::AddNewProduct(){
	int choice, choice1;

	Product **tempARR = new Product*[this->_size + 1]; //we use ARR ezer and then save the other arry to increase, add new object (like malloc)

	for (int i = 0; i < this->_size; i++)
		tempARR[i] = this->_arr[i]; // backup the old arry to the new one

	delete[]this->_arr; //realse the old arry

	cout << "Choose new Product: " << "" << endl;
	cout << "1) Agricultural " << endl;
	cout << "2) Milk" << endl;
	cout << "3) Case" << endl;

	cout << "Your Choice: " << endl;
	cin >> choice;



	switch (choice){
		int x;

	case 1:
		cout << "Choose the agriculture:" << "" << endl;
		cout << "1) Vegtable" << endl;
		cout << "2) Fruit" << endl;
		cout << "Your Choice: ";
		cin >> choice1;

		switch (choice1){
		case 1:

			x = CheakSerialExist(tempARR); //this function cheack the serial id 
			tempARR[this->_size] = new Vegetable;
			tempARR[this->_size]->SetSerial_id(x);
			break;
		case 2:
			x = CheakSerialExist(tempARR);//this function cheack the serial id 
			tempARR[this->_size] = new Fruit;
			tempARR[this->_size]->SetSerial_id(x); //entering the serial

			break;

		default:
			cout << "Try again" << endl;
			break;
		}
		break;


	case 2:

		cout << "Choose the Milk:" << "" << endl;
		cout << "1) Milk Drink" << endl;
		cout << "2) Yogurt" << endl;
		cout << "3) Cheece" << endl;
		cout << "4) Other milk Product" << endl;
		cout << "Your Choice: ";
		cin >> choice1;

		switch (choice1){
		case 1:
			x = CheakSerialExist(tempARR);
			tempARR[this->_size] = new MilkDrink;
			tempARR[this->_size]->SetSerial_id(x);

			break;
		case 2:
			x = CheakSerialExist(tempARR);
			tempARR[this->_size] = new Yogurt;
			tempARR[this->_size]->SetSerial_id(x);

			break;
		case 3:
			x = CheakSerialExist(tempARR);
			tempARR[this->_size] = new Cheese;
			tempARR[this->_size]->SetSerial_id(x);

			break;
		case 4:
			x = CheakSerialExist(tempARR);
			tempARR[this->_size] = new OtheMilkProduct;
			tempARR[this->_size]->SetSerial_id(x);
			break;

		default:
			cout << "Try again" << endl;
			break;
		}
		break;


	case 3:
		x = CheakSerialExist(tempARR);
		tempARR[this->_size] = new Case;
		tempARR[this->_size]->SetSerial_id(x);
		break;

	default:
		cout << "Try again" << endl;
		break;

	}

	this->_size++;
	this->_arr = tempARR;
}


void SuperMarket::PrintSuperMarket() const{

	//cout << "SuperMarket Name : " << "" << this->_NameOfSuperMarket << endl;
	if (this->_size == 0){
		cout << "Empty SuperMarket" << endl;
		cout << endl;
	}
	else
	for (int i = 0; i < this->_size; i++){
		cout << " ***************" << endl;
		this->_arr[i]->PrintInfo(); 
		cout << " ***************" << endl;
	}
}

void SuperMarket::CalculateCost() const{

	int factor;
	int temp = 0;

	if (this->_size == 0)
		cout << "Empty SuperMarket Not Calculate" << endl;

	else

		cout << "Enter the factor of the month" << endl;
	cin >> factor;

	for (int i = 0; i < this->_size; i++)
		this->_arr[i]->calcualate(factor);




	
}


int SuperMarket::CheakSerialExist(Product **tempARRA)const{ //cheak if the serial exist on the arry

	int cheak;

	int i, flag = 0;

	if (this->_size == 0) //first interaction
	{

		cout << "(Product) enter the product code: ";
		cin >> cheak;

		return cheak;
	}

	else

	{
		do{

			flag = 0;
			cout << "(Product) enter the product code: ";
			cin >> cheak;

			for (i = 0; i < this->_size; i++){

				if (cheak == tempARRA[i]->GetSerial_id()){
					cout << "Serial already exist try another one" << endl;
					flag = 1;
				}
			}



		} while (flag == 1);

		return cheak;
	}

}

void SuperMarket::menu() {

	int chocie;
	string temp;

	while (1){

		cout << "MENU" << endl;
		cout << "*********" << endl;
		cout << "1) Print all products" << endl;
		cout << "2) Add new product" << endl;
		cout << "3) Print all Products Price" << endl;
		cout << "4) change the name of the shop/enter a new name" << endl;
		cout << "5) EXIT" << endl;
		cout << "Your Choice: " << endl;
		cin >> chocie;

		switch (chocie)
		{

		case 1:
			this->PrintSuperMarket();
			break;

		case 2:
			this->AddNewProduct();

			break;
		case 3:
			this->CalculateCost();
			break;


		case 4:
			cout << "The SuperMarket Name is: " << this->getNameOfSuperMarket() << endl;
			cout << "Would you like to change it?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << "Your Choice: ";
			cin >> chocie;
			
			switch (chocie){

			case 1:
				cout << "Enter the new name: ";
				cin >> temp;
				this->setNameOfSuperMarket(temp);
				cout << "The New Name has been updated!" << endl;
				break;
			case 2:
				cout << "bye bye " << endl;
				break;
			}
			break;

		case 5:
			cout << "bye bye" << endl;
			break;

		default:
			cout << "try again" << endl;
			break;

		}
	}


}
SuperMarket::~SuperMarket()
{

	if (this->_size == 0) return;
	for (int i = 0; i < this->_size; i++)
		delete this->_arr[i];
	
	delete[]this->_arr;

}
