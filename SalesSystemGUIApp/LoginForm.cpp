#include "LoginForm.h"
#include "SalesSystemMainForm.h"

System::Void SalesSystemGUIApp::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;

	Customer^ objCustomer = Service::ValidateCustomer(username, password);
	

	if (objCustomer != nullptr) {
		SalesSystemMainForm::Customer = objCustomer;
		MessageBox::Show("Bienvenido " + objCustomer->Name + " " + objCustomer->LastName);
		if (objCustomer->GetType() == Customer::typeid) {
			if (objCustomer->Username->Equals("ADMIN") && objCustomer->Password->Equals("1212")) {

				((SalesSystemMainForm^)refSalesSystemMainForm)->EnableAdminOptions();
			}
			else {
				if (objCustomer->Username->Equals("OPERADOR") && objCustomer->Password->Equals("1213")) {

					((SalesSystemMainForm^)refSalesSystemMainForm)->EnableOperatorOptions();
				}
				else {
					((SalesSystemMainForm^)refSalesSystemMainForm)->EnableCustomerOptions();
				}
			}
		}
		//Guardamos el id del usuario actual
		UserSession::UserId = objCustomer->Id;
		this->Close();
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
}

System::Void SalesSystemGUIApp::LoginForm::LoginForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	if (SalesSystemMainForm::Customer == nullptr)
		Application::Exit();

}

