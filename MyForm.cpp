#include "MyForm.h"
#include"Customer.h"
#include"MyForm5.h"
#include<array>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm5 form;  // instead of RandomNumberGenerator there will be your project name
		Application::Run(% form);
}

