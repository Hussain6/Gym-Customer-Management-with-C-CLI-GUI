#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<sstream>
using namespace System::Runtime::InteropServices;
using namespace std;
static int z = 0;
public class Customer
{
public:
		string* Customer_Id;
		string* Customer_Name;
		string* Customer_Address;
		string* Customer_PhoneNumber;
		string* Customer_Email;
		string temp;
		stringstream a;
		Customer();
		~Customer();
	void load();
	bool Validity_Customer_ID(string );
};
