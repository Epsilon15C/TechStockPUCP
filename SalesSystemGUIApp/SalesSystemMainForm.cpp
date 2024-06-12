#include "SalesSystemMainForm.h"
#include "LoginForm.h"

using namespace System;

using namespace SalesSystemGUIApp;


[STAThreadAttribute] //atributo de manejo de hilos
int Main(array<String^>^ args) {

	SalesSystemMainForm ^mainForm= gcnew SalesSystemMainForm();
	Application::Run(mainForm);
	return 0;


}

