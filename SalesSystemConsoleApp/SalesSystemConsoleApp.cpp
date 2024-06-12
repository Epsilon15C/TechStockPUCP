#include "pch.h"

using namespace System;
using namespace SalesSystemModel;
using namespace SalesSystemService;
using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    Customer^objCustomer = gcnew Customer();

    objCustomer->Id = 1;
    objCustomer->Username = "Epsilon";
    objCustomer->Password = "1";
    objCustomer->Name = "Juan ";
    objCustomer->LastName = "Parias";
    objCustomer->DNI = "12345678";
    objCustomer-> Genero= "M";
    objCustomer->PurchaseCount = 56;
    objCustomer->LoyaltyPoints= 34;
    objCustomer->BirthDate = "1996-01-01";

  Service::AddCustomer(objCustomer);
  List<SalesSystemModel::Customer^>^ res = Service::QueryAllCustomers();

  Customer^ customer = Service::QueryCustomerById(1);
  if (customer != nullptr) {
      Console::WriteLine(customer->Id + " - " + customer->Name + " - " + customer->BirthDate);
  }
  else {
	  Console::WriteLine("Customer not found");

  }
    return 0;
}
