#include "Customer.h"



Customer:: Customer()
{
	//this->Customer_Id = new int[100];
	this->Customer_Name = new string[100];
	this->Customer_Address = new string[100];
	this->Customer_PhoneNumber = new string[100];
	this->Customer_Email = new string[100];
}
Customer::~Customer()
{
	delete[] this->Customer_Id;
	delete[] this->Customer_Name;
	delete[] this->Customer_Address;
	delete[] this->Customer_PhoneNumber;
	delete[] this->Customer_Email;
}
void Customer::load()
{
	z = 0;
	ifstream l;
	l.open("Customer.txt", ios::app);
	{
		while (!l.eof())
		{
			l >> this->Customer_Id[z];
			l >> this->Customer_Name[z];
			getline(l, this->Customer_Address[z], '.');
			l >> this->Customer_PhoneNumber[z];
			l >> this->Customer_Email[z];
		}
		l.close();
	}
}
bool Customer::Validity_Customer_ID(string id)
{
	this->load();
	int i = 0;
	while (i < z)
	{
		if (id == this->Customer_Id[i])
		{
			return 0;
	}
		else
		{
			return 1;
		}

	}
}
int main()
{
	Customer c;
}