#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	������2::MyForm form;
	Application::Run(%form);

}