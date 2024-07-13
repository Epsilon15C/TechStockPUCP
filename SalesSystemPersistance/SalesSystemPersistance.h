#pragma once

using namespace System;
using namespace SalesSystemModel;
using namespace System::Collections::Generic;
using namespace System::Data::SqlClient;

namespace SalesSystemPersistance {
	public ref class Persistance
	{
	private:

		static SqlConnection^ GetConnection();

		//Customer
		static List< Customer^>^ customersListDB = gcnew List< Customer^>();

		//Order 
		static List< Order^>^ orderListDB = gcnew List< Order^>();

		//OrderProduct
		static List< OrderProduct^>^ orderProductListDB = gcnew List< OrderProduct^>();

		//Sale
		static List< Sale^>^ saleListDB = gcnew List< Sale^>();

		//Provider DB
		static List< Provider^>^ providerListDB = gcnew List< Provider^>();

		// Product DB
		static List< Product^>^ productListDB = gcnew List< Product^>();

		//Resistor DB
		static List< Resistor^>^ resistorListDB = gcnew List< Resistor^>();

		//JumperWire DB
		static List< JumperWire^>^ jumperWireListDB = gcnew List< JumperWire^>();

		//Switch DB
		static List< Switch^>^ switchListDB = gcnew List< Switch^>();

		//Diode DB

		static List< Diode^>^ diodeListDB = gcnew List< Diode^>();

		//Capacitor DB

		static List< Capacitor^>^ capacitorListDB = gcnew List< Capacitor^>();

		//Inductor DB

		static List< Inductor^>^ inductorListDB = gcnew List< Inductor^>();

		//VoltageSource DB

		static List< VoltageSource^>^ voltageSourceListDB = gcnew List< VoltageSource^>();

		//BreadBoard DB

		static List< Breadboard^>^ breadboardListDB = gcnew List< Breadboard^>();

		//File Persistance
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadTextFile(String^ fileName);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);


		

	public: 
		//Customer
		static String^ BIN_CUSTOMER_FILE_NAME = "customer.bin";
		static int AddCustomer(Customer^ customer);
		static List<Customer^>^ QueryAllCustomers();
		static int UpdateCustomer(Customer^ customer);
		static int DeleteCustomer(int customerId);
		static Customer^ QueryCustomerById(int customerId);

		//Provider

		static String^ BIN_PROVIDER_FILE_NAME = "provider.bin";
		static int AddProvider(Provider^ provider);
		static List<Provider^>^ QueryAllProviders();
		static int UpdateProvider(Provider^ provider);
		static int DeleteProvider(int providerId);
		static Provider^ QueryProviderById(int providerId);

		//Order
		static int AddOrder(Order^ order);
		static List<Order^>^ QueryAllOrders();
		//static int UpdateOrder(Order^ order);
		static int DeleteOrder(int orderId);
		static Order^ QueryOrderById(int orderId);
		static int UpdateOrderStatus(int orderId, String^ status);

		//OrderProduct
		static int AddOrderProduct(OrderProduct^orderProduct);
		static List<OrderProduct^>^ QueryAllOrderProducts();
		static List<OrderProduct^>^ QueryAllOrderProductsByOrderId(int orderId);
		static OrderProduct^ QueryOrderProductById(int orderId);

		//Sale
		static int AddSale(Sale^ sale);
		static List<Sale^>^ QueryAllSales();
		static Sale^ QuerySaleById(int saleId);


		//PaymentYape
		static PaymentYape^ QueryPaymentYapeContainingNameLastNameandAmount(String^ name, String^ lastName, double amount);


		// Productos
		static List<Product^>^ QueryAllProducts();
		static Product^ QueryProductById(int productId);

		//Resistor

		static String^ BIN_RESISTOR_FILE_NAME = "resistor.bin";
		static int AddResistor(Resistor^ resistor);
		static List<Resistor^>^ QueryAllResistors();
		static int UpdateResistor(Resistor^ resistor);
		static int DeleteResistor(int resistorId);
		static Resistor^ QueryResistorById(int resistorId);

		//JumperWire

		static String^ BIN_JUMPERWIRE_FILE_NAME = "jumperWire.bin";
		static int AddJumperWire(JumperWire^ jumperWire);
		static List<JumperWire^>^ QueryAllJumperWires();
		static int UpdateJumperWire(JumperWire^ jumperWire);
		static int DeleteJumperWire(int jumperWireId);
		static JumperWire^ QueryJumperWireById(int jumperWireId);

		//Switch

		static String^ BIN_SWITCH_FILE_NAME = "switch.bin";
		static int AddSwitch(Switch^ sw);
		static List<Switch^>^ QueryAllSwitches();
		static int UpdateSwitch(Switch^ sw);
		static int DeleteSwitch(int swId);
		static Switch^ QuerySwitchById(int swId);

		//Diode

		static String^ BIN_DIODE_FILE_NAME = "diode.bin";
		static int AddDiode(Diode^ diode);
		static List<Diode^>^ QueryAllDiodes();
		static int UpdateDiode(Diode^ diode);
		static int DeleteDiode(int diodeId);
		static Diode^ QueryDiodeById(int diodeId);

		//Capacitor

		static String^ BIN_CAPACITOR_FILE_NAME = "capacitor.bin";
		static int AddCapacitor(Capacitor^ capacitor);
		static List<Capacitor^>^ QueryAllCapacitors();
		static int UpdateCapacitor(Capacitor^ capacitor);
		static int DeleteCapacitor(int capacitorId);
		static Capacitor^ QueryCapacitorById(int capacitorId);

		//Inductor

		static String^ BIN_INDUCTOR_FILE_NAME = "inductor.bin";
		static int AddInductor(Inductor^ inductor);
		static List<Inductor^>^ QueryAllInductors();
		static int UpdateInductor(Inductor^ inductor);
		static int DeleteInductor(int inductorId);
		static Inductor^ QueryInductorById(int inductorId);

		//VoltageSource

		static String^ BIN_VOLTAGESOURCE_FILE_NAME = "voltageSource.bin";
		static int AddVoltageSource(VoltageSource^ voltageSource);
		static List<VoltageSource^>^ QueryAllVoltageSources();
		static int UpdateVoltageSource(VoltageSource^ voltageSource);
		static int DeleteVoltageSource(int voltageSourceId);
		static VoltageSource^ QueryVoltageSourceById(int voltageSourceId);

		//BreadBoard

		static String^ BIN_BREADBOARD_FILE_NAME = "breadboard.bin";
		static int AddBreadboard(Breadboard^ breadboard);
		static List<Breadboard^>^ QueryAllBreadboards();
		static int UpdateBreadboard(Breadboard^ breadboard);
		static int DeleteBreadboard(int breadboardId);
		static Breadboard^ QueryBreadboardById(int breadboardId);




	};

}
