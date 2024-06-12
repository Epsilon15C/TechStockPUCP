#pragma once

using namespace System;

using namespace SalesSystemModel;
using namespace System::Collections::Generic;

namespace SalesSystemService {
	public ref class Service

	{
	private:
		//lista de clientes y otros 
		static List <Customer^>^ customersDB= gcnew List<Customer^>();
		static List <Provider^>^ providersDB = gcnew List<Provider^>();
		//LISTA DE PRODUCTOS
		static List <Product^>^ productsDB = gcnew List<Product^>();

		//LISTA DE PRODUCTOS ESPECIFICOS
		static List <Resistor^>^ resistorDB = gcnew List<Resistor^>();
		static List <Breadboard^>^ breadboardDB = gcnew List<Breadboard^>();
		static List <JumperWire^>^ jumperWireDB = gcnew List<JumperWire^>();
		static List <Switch^>^ switchDB = gcnew List<Switch^>();
		static List <Diode^>^ diodeDB = gcnew List<Diode^>();
		static List <Capacitor^>^ capacitorDB = gcnew List<Capacitor^>();
		static List <Inductor^>^ inductorDB = gcnew List<Inductor^>();
		static List <VoltageSource^>^ voltageSourceDB = gcnew List<VoltageSource^>();



	public:
		//CRUD ALLPRODUCTS
		static List<Product^>^ QueryAllProducts();

		// CRUD RESISTOR
		static int AddResistor(Resistor^);
		static int UpdateResistor(Resistor^);
		static int DeleteResistor(int resistorId);

		//operaciones de consulta, te devuelven una lista 
		static List<Resistor^>^ QueryAllResistors();
		static Resistor^ QueryResistorById(int resistorId);

		//CRUD BREADBOARD
		static int AddBreadboard(Breadboard^);
		static int UpdateBreadboard(Breadboard^);
		static int DeleteBreadboard(int breadboardId);

		//operaciones de consulta, te devuelven una lista
		static List<Breadboard^>^ QueryAllBreadboards();
		static Breadboard^ QueryBreadboardById(int breadboardId);

		//CRUD JUMPERWIRE
		static int AddJumperWire(JumperWire^);
		static int UpdateJumperWire(JumperWire^);
		static int DeleteJumperWire(int jumperWireId);

		//operaciones de consulta, te devuelven una lista
		static List<JumperWire^>^ QueryAllJumperWires();
		static JumperWire^ QueryJumperWireById(int jumperWireId);

		//CRUD SWITCH
		static int AddSwitch(Switch^);
		static int UpdateSwitch(Switch^);
		static int DeleteSwitch(int switchId);

		//operaciones de consulta, te devuelven una lista
		static List<Switch^>^ QueryAllSwitches();
		static Switch^ QuerySwitchById(int switchId);

		//CRUD DIODE
		static int AddDiode(Diode^);
		static int UpdateDiode(Diode^);
		static int DeleteDiode(int diodeId);

		//operaciones de consulta, te devuelven una lista
		static List<Diode^>^ QueryAllDiodes();
		static Diode^ QueryDiodeById(int diodeId);

		//CRUD CAPACITOR
		static int AddCapacitor(Capacitor^);
		static int UpdateCapacitor(Capacitor^);
		static int DeleteCapacitor(int capacitorId);

		//operaciones de consulta, te devuelven una lista
		static List<Capacitor^>^ QueryAllCapacitors();
		static Capacitor^ QueryCapacitorById(int capacitorId);

		//CRUD INDUCTOR
		static int AddInductor(Inductor^);
		static int UpdateInductor(Inductor^);
		static int DeleteInductor(int inductorId);

		//operaciones de consulta, te devuelven una lista
		static List<Inductor^>^ QueryAllInductors();
		static Inductor^ QueryInductorById(int inductorId);

		//CRUD VOLTAGESOURCE
		static int AddVoltageSource(VoltageSource^);
		static int UpdateVoltageSource(VoltageSource^);
		static int DeleteVoltageSource(int voltageSourceId);

		//operaciones de consulta, te devuelven una lista
		static List<VoltageSource^>^ QueryAllVoltageSources();
		static VoltageSource^ QueryVoltageSourceById(int voltageSourceId);



		//CUSTOMER CRUD
		// TODO: Agregue aquí los métodos de esta clase del mantenimiento CRUD de Customers.
		static int AddCustomer(Customer^);// int porque devuelve el id del cliente generado
		static int UpdateCustomer(Customer^);
		static int DeleteCustomer(int customerId);

		//operaciones de consulta, te devuelven una lista 
		static List<Customer^>^ QueryAllCustomers();
		static Customer^ QueryCustomerById(int customerId);
		static SalesSystemModel::Customer^ ValidateCustomer(String^ username, String^ password);



	   //PROVIDER CRUD

		static int AddProvider(Provider^);
		static int UpdateProvider(Provider^);
		static int DeleteProvider(int providerId);

		//operaciones de consulta, te devuelven una lista
		static List<Provider^>^ QueryAllProviders();
		static Provider^ QueryProviderById(int providerId);






	};
}
