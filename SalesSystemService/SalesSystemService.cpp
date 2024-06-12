#include "pch.h"

#include "SalesSystemService.h"
using namespace SalesSystemPersistance;

int SalesSystemService::Service::AddCustomer(Customer^ customer)
{
	Persistance::AddCustomer(customer);
    return customer->Id;

}

int SalesSystemService::Service::UpdateCustomer(Customer^ customer)
{

	return Persistance::UpdateCustomer(customer);
}

int SalesSystemService::Service::DeleteCustomer(int customerId)
{
	
	return Persistance::DeleteCustomer(customerId);
}

List<Customer^>^ SalesSystemService::Service::QueryAllCustomers()
{
	return Persistance::QueryAllCustomers();
	
}

Customer^ SalesSystemService::Service::QueryCustomerById(int customerId)
{

	return Persistance::QueryCustomerById(customerId);
	
}

SalesSystemModel::Customer^ SalesSystemService::Service::ValidateCustomer(String^ username, String^ password)
{
	SalesSystemModel::Customer^ result = nullptr;
	List<SalesSystemModel::Customer^>^ customersList = QueryAllCustomers();
	for (int i = 0; i < customersList->Count; i++) {
		SalesSystemModel::Customer^ customer = customersList[i];
		if (customer->Username->Equals(username) && customer->Password->Equals(password))
			result = customer;
	}
	return result;
}




// PROVIDER CRUD
int SalesSystemService::Service::AddProvider(Provider^ provider)
{
	Persistance::AddProvider(provider);
    return provider->Id;
}

int SalesSystemService::Service::UpdateProvider(Provider^ provider)
{
	return Persistance::UpdateProvider(provider);
}

int SalesSystemService::Service::DeleteProvider(int providerId)
{
	return Persistance::DeleteProvider(providerId);

}

List<Provider^>^ SalesSystemService::Service::QueryAllProviders()
{
	return Persistance::QueryAllProviders();
}

Provider^ SalesSystemService::Service::QueryProviderById(int providerId)
{
	return Persistance::QueryProviderById(providerId);
}


// PRODUCT CRUD

List<Product^>^ SalesSystemService::Service::QueryAllProducts()
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí

	return Persistance::QueryAllProducts();

}

// RESISTOR CRUD



int SalesSystemService::Service::AddResistor(Resistor^ resistor)
{
	Persistance::AddResistor(resistor);
	return resistor->Id;
}

int SalesSystemService::Service::UpdateResistor(Resistor^ resistor)
{
	return Persistance::UpdateResistor(resistor);
}

int SalesSystemService::Service::DeleteResistor(int resistorId)
{
	return Persistance::DeleteResistor(resistorId);
}

List<Resistor^>^ SalesSystemService::Service::QueryAllResistors()
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
	return Persistance::QueryAllResistors();
}

Resistor^ SalesSystemService::Service::QueryResistorById(int resistorId)
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucción "return" aquí
	return Persistance::QueryResistorById(resistorId);
}

// CAPACITOR CRUD

int SalesSystemService::Service::AddCapacitor(Capacitor^ capacitor)
{
	Persistance::AddCapacitor(capacitor);
	return capacitor->Id;
}

int SalesSystemService::Service::UpdateCapacitor(Capacitor^ capacitor)
{
	return Persistance::UpdateCapacitor(capacitor);
}

int SalesSystemService::Service::DeleteCapacitor(int capacitorId)
{
	return Persistance::DeleteCapacitor(capacitorId);
}

List<Capacitor^>^ SalesSystemService::Service::QueryAllCapacitors()
{
	return Persistance::QueryAllCapacitors();
}

Capacitor^ SalesSystemService::Service::QueryCapacitorById(int capacitorId)
{
	return Persistance::QueryCapacitorById(capacitorId);
}

// INDUCTOR CRUD

int SalesSystemService::Service::AddInductor(Inductor^ inductor)
{
	Persistance::AddInductor(inductor);
	return inductor->Id;
}

int SalesSystemService::Service::UpdateInductor(Inductor^ inductor)
{
	return Persistance::UpdateInductor(inductor);
}

int SalesSystemService::Service::DeleteInductor(int inductorId)
{
	return Persistance::DeleteInductor(inductorId);
}

List<Inductor^>^ SalesSystemService::Service::QueryAllInductors()
{
	return Persistance::QueryAllInductors();
}

Inductor^ SalesSystemService::Service::QueryInductorById(int inductorId)
{
	return Persistance::QueryInductorById(inductorId);
}

// BREADBOARD CRUD

int SalesSystemService::Service::AddBreadboard(Breadboard^ breadboard)
{
	Persistance::AddBreadboard(breadboard);
	return breadboard->Id;
}

int SalesSystemService::Service::UpdateBreadboard(Breadboard^ breadboard)
{
	return Persistance::UpdateBreadboard(breadboard);
}

int SalesSystemService::Service::DeleteBreadboard(int breadboardId)
{
	return Persistance::DeleteBreadboard(breadboardId);
}

List<Breadboard^>^ SalesSystemService::Service::QueryAllBreadboards()
{
	return Persistance::QueryAllBreadboards();
}

Breadboard^ SalesSystemService::Service::QueryBreadboardById(int breadboardId)
{
	return Persistance::QueryBreadboardById(breadboardId);
}

//VOLTAGE SOURCE CRUD

int SalesSystemService::Service::AddVoltageSource(VoltageSource^ voltageSource)
{
	Persistance::AddVoltageSource(voltageSource);
	return voltageSource->Id;
}

int SalesSystemService::Service::UpdateVoltageSource(VoltageSource^ voltageSource)
{
	return Persistance::UpdateVoltageSource(voltageSource);
}

int SalesSystemService::Service::DeleteVoltageSource(int voltageSourceId)
{
	return Persistance::DeleteVoltageSource(voltageSourceId);
}

List<VoltageSource^>^ SalesSystemService::Service::QueryAllVoltageSources()
{
	return Persistance::QueryAllVoltageSources();
}

VoltageSource^ SalesSystemService::Service::QueryVoltageSourceById(int voltageSourceId)
{
	return Persistance::QueryVoltageSourceById(voltageSourceId);
}

//DIODE CRUD

int SalesSystemService::Service::AddDiode(Diode^ diode)
{
	Persistance::AddDiode(diode);
	return diode->Id;
}

int SalesSystemService::Service::UpdateDiode(Diode^ diode)
{
	return Persistance::UpdateDiode(diode);
}


int SalesSystemService::Service::DeleteDiode(int diodeId)
{
	return Persistance::DeleteDiode(diodeId);
}

List<Diode^>^ SalesSystemService::Service::QueryAllDiodes()
{
	return Persistance::QueryAllDiodes();
}

Diode^ SalesSystemService::Service::QueryDiodeById(int diodeId)
{
	return Persistance::QueryDiodeById(diodeId);
}

//SWICTH CRUD

int SalesSystemService::Service::AddSwitch(Switch^ sw)
{
	Persistance::AddSwitch(sw);
	return sw->Id;
}

int SalesSystemService::Service::UpdateSwitch(Switch^ sw)
{
	return Persistance::UpdateSwitch(sw);
}

int SalesSystemService::Service::DeleteSwitch(int swId)
{
	return Persistance::DeleteSwitch(swId);
}

List<Switch^>^ SalesSystemService::Service::QueryAllSwitches()
{
	return Persistance::QueryAllSwitches();
}

Switch^ SalesSystemService::Service::QuerySwitchById(int swId)
{
	return Persistance::QuerySwitchById(swId);
}

//JUMPERWIRE CRUD

int SalesSystemService::Service::AddJumperWire(JumperWire^ jumperWire)
{
	Persistance::AddJumperWire(jumperWire);
	return jumperWire->Id;
}

int SalesSystemService::Service::UpdateJumperWire(JumperWire^ jumperWire)
{
	return Persistance::UpdateJumperWire(jumperWire);
}

int SalesSystemService::Service::DeleteJumperWire(int jumperWireId)
{
	return Persistance::DeleteJumperWire(jumperWireId);
}

List<JumperWire^>^ SalesSystemService::Service::QueryAllJumperWires()
{
	return Persistance::QueryAllJumperWires();
}

JumperWire^ SalesSystemService::Service::QueryJumperWireById(int jumperWireId)
{
	return Persistance::QueryJumperWireById(jumperWireId);
}




