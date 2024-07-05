#include "pch.h"

#include "SalesSystemPersistance.h"
using namespace System::IO;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

// Binary file and load

void SalesSystemPersistance::Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

}

Object^ SalesSystemPersistance::Persistance::LoadBinaryFile(String^ fileName)
{
    FileStream^ file;
    Object^ result;
    BinaryFormatter^ formatter;

    try {
        if (File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            result = formatter->Deserialize(file);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

    return result;
}

// Customer
int SalesSystemPersistance::Persistance::AddCustomer(Customer^ customer)
{
    /*customersListDB->Add(customer);
	PersistBinaryFile(BIN_CUSTOMER_FILE_NAME, customersListDB);
    return 1;*/
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO PERSON (ID, USERNAME, PASSWORD, NAME, LASTNAME, DNI, GENERO, BIRTHDATE, PURCHASECOUNT, LOYALTYPOINTS, PHOTO, STATUS) " +
			"VALUES (@ID, @USERNAME, @PASSWORD, @NAME, @LASTNAME, @DNI, @GENERO, @BIRTHDATE, @PURCHASECOUNT, @LOYALTYPOINTS, @PHOTO, @STATUS)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", customer->Id);
		cmd->Parameters->AddWithValue("@USERNAME", customer->Username);
		cmd->Parameters->AddWithValue("@PASSWORD", customer->Password);
		cmd->Parameters->AddWithValue("@NAME", customer->Name);
		cmd->Parameters->AddWithValue("@LASTNAME", customer->LastName);
		cmd->Parameters->AddWithValue("@DNI", customer->DNI);
		cmd->Parameters->AddWithValue("@GENERO", customer->Genero);
		cmd->Parameters->AddWithValue("@BIRTHDATE", customer->BirthDate);
		cmd->Parameters->AddWithValue("@PURCHASECOUNT", customer->PurchaseCount);
		cmd->Parameters->AddWithValue("@LOYALTYPOINTS", customer->LoyaltyPoints);
		cmd->Parameters->AddWithValue("@PHOTO", customer->Photo); // Asumiendo que customer->Photo es un array de bytes
		cmd->Parameters->AddWithValue("@STATUS", customer->Status);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Customer^>^ SalesSystemPersistance::Persistance::QueryAllCustomers()
{
	/* customersListDB = (List<Customer^>^)LoadBinaryFile(BIN_CUSTOMER_FILE_NAME);
    if (customersListDB == nullptr)
        customersListDB = gcnew List<Customer^>();
    return customersListDB;*/

	 customersListDB = gcnew List<Customer^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		//Paso 1: Obtener la conexión a la BD
		SqlConnection^ conn = GetConnection();

		//Paso 2: Preparar la sentencia SQL
		String^ sqlStr = "SELECT * FROM PERSON";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Prepare();

		//Paso 3: Ejecutar la sentencia SQL
		reader = cmd->ExecuteReader();

		//Paso 4: Procesar los resultados
		while (reader->Read()) {
			Customer^ customer = gcnew Customer();
			customer->Id = Convert::ToInt32(reader["ID"]->ToString());
			customer->Username = reader["USERNAME"]->ToString();
			customer->Password = reader["PASSWORD"]->ToString();
			customer->Name = reader["NAME"]->ToString();
			customer->LastName = reader["LASTNAME"]->ToString();
			customer->Status = reader["STATUS"]->ToString();
			customer->DNI = reader["DNI"]->ToString();
			customer->Genero = reader["GENERO"]->ToString();
			customer->BirthDate = reader["BIRTHDATE"]->ToString();
			customer->PurchaseCount = Convert::ToInt32(reader["PURCHASECOUNT"]->ToString());
			customer->LoyaltyPoints = Convert::ToInt32(reader["LOYALTYPOINTS"]->ToString());
			customer->Genero = reader["STATUS"]->ToString();

			// Verificar si la columna PHOTO es DBNull antes de intentar convertirla en un array de bytes
			if (reader["PHOTO"] != DBNull::Value) {
				// Si la columna PHOTO no es DBNull, conviértela en un array de bytes
				customer->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				// Si la columna PHOTO es DBNull, establece el valor de Photo como nullptr o algún valor predeterminado según tu lógica de aplicación
				customer->Photo = nullptr; // O algún otro valor predeterminado
			}

			customersListDB->Add(customer);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		//Paso 5: Importante! Cerrar los objetos de conexión a la BD
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return customersListDB;
}


SqlConnection^ SalesSystemPersistance::Persistance::GetConnection()
{
	SqlConnection^ conn = gcnew SqlConnection();
	String^ password = "admin2024";
	conn->ConnectionString = "Server=projectlpoo.cdtwcrsmv6iq.us-east-1.rds.amazonaws.com;" +
		"Database=ProjectLPOO;" +
		"User ID=projectLPOO;" +
		"Password=" + password + ";";
	conn->Open();
	return conn;
}


int SalesSystemPersistance::Persistance::UpdateCustomer(Customer^ customer)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE PERSON SET USERNAME=@USERNAME, PASSWORD=@PASSWORD, NAME=@NAME, LASTNAME=@LASTNAME, " +
			"DNI=@DNI, GENERO=@GENERO, BIRTHDATE=@BIRTHDATE, PURCHASECOUNT=@PURCHASECOUNT, LOYALTYPOINTS=@LOYALTYPOINTS, " +
			"PHOTO=@PHOTO " +
			"WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", customer->Id);
		cmd->Parameters->AddWithValue("@USERNAME", customer->Username);
		cmd->Parameters->AddWithValue("@PASSWORD", customer->Password);
		cmd->Parameters->AddWithValue("@NAME", customer->Name);
		cmd->Parameters->AddWithValue("@LASTNAME", customer->LastName);
		cmd->Parameters->AddWithValue("@DNI", customer->DNI);
		cmd->Parameters->AddWithValue("@GENERO", customer->Genero);
		cmd->Parameters->AddWithValue("@BIRTHDATE", customer->BirthDate);
		cmd->Parameters->AddWithValue("@PURCHASECOUNT", customer->PurchaseCount);
		cmd->Parameters->AddWithValue("@LOYALTYPOINTS", customer->LoyaltyPoints);
		cmd->Parameters->AddWithValue("@PHOTO", customer->Photo); // Asumiendo que customer->Photo es un array de bytes

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return customer->Id;
}

int SalesSystemPersistance::Persistance::DeleteCustomer(int customerId)
{
    /*for (int i = 0; i < customersListDB->Count; i++) {
        if (customersListDB[i]->Id == customerId) {
            customersListDB->RemoveAt(i);
			PersistBinaryFile(BIN_CUSTOMER_FILE_NAME, customersListDB);
            return customerId;
        }
    }
    return 0;*/
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM PERSON WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", customerId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return customerId;
}

Customer^ SalesSystemPersistance::Persistance::QueryCustomerById(int customerId)
{

	Customer^ customer = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM PERSON WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", customerId);
		reader = cmd->ExecuteReader();

		// Verificar si se encontró un cliente con el ID dado
		if (reader->Read()) {
			customer = gcnew Customer();
			customer->Id = Convert::ToInt32(reader["ID"]->ToString());
			customer->Username = reader["USERNAME"]->ToString();
			customer->Password = reader["PASSWORD"]->ToString();
			customer->Name = reader["NAME"]->ToString();
			customer->LastName = reader["LASTNAME"]->ToString();
			customer->Status = reader["STATUS"]->ToString(); // Asegúrate de que STATUS exista en tu base de datos
			customer->DNI = reader["DNI"]->ToString();
			customer->Genero = reader["GENERO"]->ToString();
			customer->BirthDate = reader["BIRTHDATE"]->ToString();
			customer->PurchaseCount = Convert::ToInt32(reader["PURCHASECOUNT"]->ToString());
			customer->LoyaltyPoints = Convert::ToInt32(reader["LOYALTYPOINTS"]->ToString());

			// Verificar si la columna PHOTO es DBNull antes de intentar convertirla en un array de bytes
			if (reader["PHOTO"] != DBNull::Value) {
				// Si la columna PHOTO no es DBNull, conviértela en un array de bytes
				customer->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				// Si la columna PHOTO es DBNull, establece el valor de Photo como nullptr o algún valor predeterminado según tu lógica de aplicación
				customer->Photo = nullptr; // O algún otro valor predeterminado
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return customer;

}


// Provider


int SalesSystemPersistance::Persistance::AddProvider(Provider^ provider)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO PROVIDER (ID, NAME, RUC, ACCOUNT, WEBSITE, PHONENUMBER) " +
			"VALUES (@ID, @NAME, @RUC, @ACCOUNT, @WEBSITE, @PHONENUMBER)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", provider->Id);
		cmd->Parameters->AddWithValue("@NAME", provider->Name);
		cmd->Parameters->AddWithValue("@RUC", provider->RUC);
		cmd->Parameters->AddWithValue("@ACCOUNT", provider->Account);
		cmd->Parameters->AddWithValue("@WEBSITE", provider->Website);
		cmd->Parameters->AddWithValue("@PHONENUMBER", provider->PhoneNumber);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Provider^>^ SalesSystemPersistance::Persistance::QueryAllProviders()
{
	providerListDB = gcnew List<Provider^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		// Obtener la conexión a la BD
		conn = GetConnection();

		// Preparar la sentencia SQL
		String^ sqlStr = "SELECT * FROM PROVIDER";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Prepare();

		// Ejecutar la sentencia SQL
		reader = cmd->ExecuteReader();

		// Procesar los resultados
		while (reader->Read()) {
			Provider^ provider = gcnew Provider();
			provider->Id = Convert::ToInt32(reader["ID"]->ToString());
			provider->Name = reader["NAME"]->ToString();
			provider->RUC = reader["RUC"]->ToString();
			provider->Account = reader["ACCOUNT"]->ToString();
			provider->Website = reader["WEBSITE"]->ToString();
			provider->PhoneNumber = reader["PHONENUMBER"]->ToString();

			providerListDB->Add(provider);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		// Cerrar los objetos de conexión a la BD
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return providerListDB;

}

int SalesSystemPersistance::Persistance::UpdateProvider(Provider^ provider)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE PROVIDER SET NAME=@NAME, RUC=@RUC, ACCOUNT=@ACCOUNT, WEBSITE=@WEBSITE, PHONENUMBER=@PHONENUMBER " +
			"WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", provider->Id);
		cmd->Parameters->AddWithValue("@NAME", provider->Name);
		cmd->Parameters->AddWithValue("@RUC", provider->RUC);
		cmd->Parameters->AddWithValue("@ACCOUNT", provider->Account);
		cmd->Parameters->AddWithValue("@WEBSITE", provider->Website);
		cmd->Parameters->AddWithValue("@PHONENUMBER", provider->PhoneNumber);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return provider->Id;
}

int SalesSystemPersistance::Persistance::DeleteProvider(int providerId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM PROVIDER WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", providerId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return providerId;
}

Provider^ SalesSystemPersistance::Persistance::QueryProviderById(int providerId)
{
	Provider^ provider = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM PROVIDER WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", providerId);
		reader = cmd->ExecuteReader();

		// Verificar si se encontró un proveedor con el ID dado
		if (reader->Read()) {
			provider = gcnew Provider();
			provider->Id = Convert::ToInt32(reader["ID"]->ToString());
			provider->Name = reader["NAME"]->ToString();
			provider->RUC = reader["RUC"]->ToString();
			provider->Account = reader["ACCOUNT"]->ToString();
			provider->Website = reader["WEBSITE"]->ToString();
			provider->PhoneNumber = reader["PHONENUMBER"]->ToString();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return provider;

}

/////////////////////////////////////////////////////////////////////

//Order	


int SalesSystemPersistance::Persistance::AddOrder(Order^ order)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO SALES_ORDER (ID, ORDER_DATE, TOTAL_AMOUNT,PERSON_ID,STATUS) " +
			"VALUES (@ID, @ORDER_DATE, @TOTAL_AMOUNT,@PERSON_ID, @STATUS)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", order->Id);
		cmd->Parameters->AddWithValue("@ORDER_DATE", order->Date);
		cmd->Parameters->AddWithValue("@TOTAL_AMOUNT", order->TotalAmount);
		cmd->Parameters->AddWithValue("@PERSON_ID", order->PersonId);
		cmd->Parameters->AddWithValue("@STATUS", order->Status);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;

}

List<Order^>^ SalesSystemPersistance::Persistance::QueryAllOrders()
{

	orderListDB = gcnew List<Order^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SALES_ORDER";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Order^ order = gcnew Order();
			order->Id = Convert::ToInt32(reader["ID"]);
			order->Date = reader["ORDER_DATE"]->ToString();
			order->TotalAmount = Convert::ToDouble(reader["TOTAL_AMOUNT"]);
			order->PersonId = Convert::ToInt32(reader["PERSON_ID"]);
			order->Status = reader["STATUS"]->ToString();

			orderListDB->Add(order);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return orderListDB;
}

int SalesSystemPersistance::Persistance::DeleteOrder(int orderId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM SALES_ORDER WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", orderId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return orderId;
}

Order^ SalesSystemPersistance::Persistance::QueryOrderById(int orderId)
{
	Order^ order = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SALES_ORDER WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", orderId);
		reader = cmd->ExecuteReader();

		// Verificar si se encontró una orden con el ID dado
		if (reader->Read()) {
			order = gcnew Order();
			order->Id = Convert::ToInt32(reader["ID"]->ToString());
			order->Date = reader["ORDER_DATE"]->ToString();
			order->TotalAmount = Convert::ToDouble(reader["TOTAL_AMOUNT"]);
			order->PersonId = Convert::ToInt32(reader["PERSON_ID"]);
			order->Status = reader["STATUS"]->ToString();
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return order;
}

//OrderProduct

int SalesSystemPersistance::Persistance::AddOrderProduct(OrderProduct^ orderProduct)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO ORDER_PRODUCT (ID, ORDER_ID, PRODUCT_ID, QUANTITY, SUBTOTAL) " +
			"VALUES (@ID, @ORDER_ID, @PRODUCT_ID, @QUANTITY, @SUBTOTAL)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", orderProduct->Id);
		cmd->Parameters->AddWithValue("@ORDER_ID", orderProduct->OrderId);
		cmd->Parameters->AddWithValue("@PRODUCT_ID", orderProduct->ProductId);
		cmd->Parameters->AddWithValue("@QUANTITY", orderProduct->Quantity);
		cmd->Parameters->AddWithValue("@SUBTOTAL", orderProduct->SubTotal);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<OrderProduct^>^ SalesSystemPersistance::Persistance::QueryAllOrderProducts()
{
	orderProductListDB = gcnew List<OrderProduct^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM ORDER_PRODUCT";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			OrderProduct^ orderProduct = gcnew OrderProduct();
			orderProduct->Id = Convert::ToInt32(reader["ID"]);
			orderProduct->OrderId = Convert::ToInt32(reader["ORDER_ID"]);
			orderProduct->ProductId = Convert::ToInt32(reader["PRODUCT_ID"]);
			orderProduct->Quantity = Convert::ToInt32(reader["QUANTITY"]);
			orderProduct->SubTotal = Convert::ToDouble(reader["SUBTOTAL"]);

			orderProductListDB->Add(orderProduct);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return orderProductListDB;
}

List<OrderProduct^>^ SalesSystemPersistance::Persistance::QueryAllOrderProductsByOrderId(int orderId)
{
	orderProductListDB = gcnew List<OrderProduct^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM ORDER_PRODUCT WHERE ORDER_ID=@ORDER_ID";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ORDER_ID", orderId);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			OrderProduct^ orderProduct = gcnew OrderProduct();
			orderProduct->Id = Convert::ToInt32(reader["ID"]);
			orderProduct->OrderId = Convert::ToInt32(reader["ORDER_ID"]);
			orderProduct->ProductId = Convert::ToInt32(reader["PRODUCT_ID"]);
			orderProduct->Quantity = Convert::ToInt32(reader["QUANTITY"]);
			orderProduct->SubTotal = Convert::ToDouble(reader["SUBTOTAL"]);

			orderProductListDB->Add(orderProduct);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return orderProductListDB;
}

OrderProduct^ SalesSystemPersistance::Persistance::QueryOrderProductById(int orderProductId)
{
	OrderProduct^ orderProduct = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM ORDER_PRODUCT WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", orderProductId);
		reader = cmd->ExecuteReader();

		// Verificar si se encontró un producto de orden con el ID dado
		if (reader->Read()) {
			orderProduct = gcnew OrderProduct();
			orderProduct->Id = Convert::ToInt32(reader["ID"]->ToString());
			orderProduct->OrderId = Convert::ToInt32(reader["ORDER_ID"]);
			orderProduct->ProductId = Convert::ToInt32(reader["PRODUCT_ID"]);
			orderProduct->Quantity = Convert::ToInt32(reader["QUANTITY"]);
			orderProduct->SubTotal = Convert::ToDouble(reader["SUBTOTAL"]);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return orderProduct;
}

//Sale

int SalesSystemPersistance::Persistance::AddSale(Sale^ sale)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO SALE (ID, RUC, TOTAL_AMOUNT_WITHOUT_TAX, TOTAL_AMOUNT_WITH_TAX, ORDER_ID) " +
			"VALUES (@ID, @RUC, @TOTAL_AMOUNT_WITHOUT_TAX, @TOTAL_AMOUNT_WITH_TAX, @ORDER_ID)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", sale->Id);
		cmd->Parameters->AddWithValue("@RUC", sale->RUC);
		cmd->Parameters->AddWithValue("@TOTAL_AMOUNT_WITHOUT_TAX", sale->TotalAmountWithoutTax);
		cmd->Parameters->AddWithValue("@TOTAL_AMOUNT_WITH_TAX", sale->TotalAmountWithTax);
		cmd->Parameters->AddWithValue("@ORDER_ID", sale->OrderId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;

}

List<Sale^>^ SalesSystemPersistance::Persistance::QueryAllSales()
{
	saleListDB = gcnew List<Sale^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SALE";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Sale^ sale = gcnew Sale();
			sale->Id = Convert::ToInt32(reader["ID"]);
			sale->RUC = reader["RUC"]->ToString();
			sale->TotalAmountWithoutTax = Convert::ToDouble(reader["TOTAL_AMOUNT_WITHOUT_TAX"]);
			sale->TotalAmountWithTax = Convert::ToDouble(reader["TOTAL_AMOUNT_WITH_TAX"]);
			sale->OrderId = Convert::ToInt32(reader["ORDER_ID"]);

			saleListDB->Add(sale);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return saleListDB;
}
				

Sale^ SalesSystemPersistance::Persistance::QuerySaleById(int saleId)
{
	Sale^ sale = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SALE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", saleId);
		reader = cmd->ExecuteReader();

		// Verificar si se encontró una venta con el ID dado
		if (reader->Read()) {
			sale = gcnew Sale();
			sale->Id = Convert::ToInt32(reader["ID"]->ToString());
			sale->RUC = reader["RUC"]->ToString();
			sale->TotalAmountWithoutTax = Convert::ToDouble(reader["TOTAL_AMOUNT_WITHOUT_TAX"]);
			sale->TotalAmountWithTax = Convert::ToDouble(reader["TOTAL_AMOUNT_WITH_TAX"]);
			sale->OrderId = Convert::ToInt32(reader["ORDER_ID"]);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return sale;
}








/// ////////////////////////////////////////////////////////////////////////

/*List<Product^>^ ConvertToProductList(List<Resistor^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Resistor ^ item in derivedList) {
		productList->Add(item);
	}

	return productList;
}

List<Product^>^ ConvertToProductList(List<Capacitor^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Capacitor ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}

List<Product^>^ ConvertToProductList(List<Inductor^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Inductor ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}

List<Product^>^ ConvertToProductList(List<JumperWire^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (JumperWire ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}

List<Product^>^ ConvertToProductList(List<Breadboard^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Breadboard ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}


List<Product^>^ ConvertToProductList(List<Switch^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Switch ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}

List<Product^>^ ConvertToProductList(List<Diode^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (Diode ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}

List<Product^>^ ConvertToProductList(List<VoltageSource^>^ derivedList) {
	List<Product^>^ productList = gcnew List<Product^>();
	for each (VoltageSource ^ item in derivedList) {
		productList->Add(item);
	}
	return productList;
}




// concatenacion

List<Product^>^ ConcatenateProductLists(... array<List<Product^>^>^ lists) {
	List<Product^>^ concatenatedList = gcnew List<Product^>();
	for each (List<Product^> ^ list in lists) {
		concatenatedList->AddRange(list);
	}
	return concatenatedList;
}*/

List<Product^>^ SalesSystemPersistance::Persistance::QueryAllProducts() {
	// Obtener los productos de cada tabla individual
	List<Resistor^>^ resistors = QueryAllResistors();
	List<Breadboard^>^ breadboards = QueryAllBreadboards();
	List<JumperWire^>^ jumperWires = QueryAllJumperWires();
	List<Switch^>^ switches = QueryAllSwitches();
	List<Diode^>^ diodes = QueryAllDiodes();
	List<Capacitor^>^ capacitors = QueryAllCapacitors();
	List<Inductor^>^ inductors = QueryAllInductors();
	List<VoltageSource^>^ voltageSources = QueryAllVoltageSources();

	// Crear una lista para contener todos los productos
	List<Product^>^ allProducts = gcnew List<Product^>();

	// Convertir resistores a productos y agregarlos a la lista
	for each (Resistor ^ resistor in resistors)
	{
		Product^ product = gcnew Product(resistor->Id, resistor->Name, resistor->Description, resistor->Photo, resistor->Price, resistor->Stock);
		allProducts->Add(product);
	}

	// Convertir breadboards a productos y agregarlos a la lista
	for each (Breadboard ^ breadboard in breadboards)
	{
		Product^ product = gcnew Product(breadboard->Id, breadboard->Name, breadboard->Description, breadboard->Photo, breadboard->Price, breadboard->Stock);
		allProducts->Add(product);
	}

	// Convertir jumper wires a productos y agregarlos a la lista
	for each (JumperWire ^ jumperWire in jumperWires)
	{
		Product^ product = gcnew Product(jumperWire->Id, jumperWire->Name, jumperWire->Description, jumperWire->Photo, jumperWire->Price, jumperWire->Stock);
		allProducts->Add(product);
	}

	// Convertir switches a productos y agregarlos a la lista
	for each (Switch ^ sw in switches)
	{
		Product^ product = gcnew Product(sw->Id, sw->Name, sw->Description, sw->Photo, sw->Price, sw->Stock);
		allProducts->Add(product);
	}

	// Convertir diodos a productos y agregarlos a la lista
	for each (Diode ^ diode in diodes)
	{
		Product^ product = gcnew Product(diode->Id, diode->Name, diode->Description, diode->Photo, diode->Price, diode->Stock);
		allProducts->Add(product);
	}

	// Convertir capacitores a productos y agregarlos a la lista
	for each (Capacitor ^ capacitor in capacitors)
	{
		Product^ product = gcnew Product(capacitor->Id, capacitor->Name, capacitor->Description, capacitor->Photo, capacitor->Price, capacitor->Stock);
		allProducts->Add(product);
	}

	// Convertir inductores a productos y agregarlos a la lista
	for each (Inductor ^ inductor in inductors)
	{
		Product^ product = gcnew Product(inductor->Id, inductor->Name, inductor->Description, inductor->Photo, inductor->Price, inductor->Stock);
		allProducts->Add(product);
	}

	// Convertir fuentes de voltaje a productos y agregarlos a la lista
	for each (VoltageSource ^ voltageSource in voltageSources)
	{
		Product^ product = gcnew Product(voltageSource->Id, voltageSource->Name, voltageSource->Description, voltageSource->Photo, voltageSource->Price, voltageSource->Stock);
		allProducts->Add(product);
	}

	// Conectar a la base de datos SQL y insertar productos
	SqlConnection^ conn = nullptr;
	SqlCommand^ cmd = nullptr;

	try {
		conn = GetConnection();
		
		// Insertar cada producto en la tabla PRODUCT
		for each (Product ^ product in allProducts) {
			String^ insertQuery = "INSERT INTO PRODUCT (ID, NAME, DESCRIPTION, PHOTO, PRICE, STOCK) " +
				"VALUES (@ID, @NAME, @DESCRIPTION, @PHOTO, @PRICE, @STOCK)";

			cmd = gcnew SqlCommand(insertQuery, conn);
			cmd->Parameters->AddWithValue("@ID", product->Id);
			cmd->Parameters->AddWithValue("@NAME", product->Name);
			cmd->Parameters->AddWithValue("@DESCRIPTION", product->Description);
			cmd->Parameters->AddWithValue("@PHOTO", product->Photo);
			cmd->Parameters->AddWithValue("@PRICE", product->Price);
			cmd->Parameters->AddWithValue("@STOCK", product->Stock);

			cmd->ExecuteNonQuery();
		}


	}
	catch (Exception^ ex) {
		// Manejar la excepción
		Console::WriteLine("Error: " + ex->Message);
	}
	finally {
		
		if (cmd != nullptr) delete cmd;
		if (conn != nullptr) conn->Close();
	}

	return allProducts;
}

///////////////////////////////////////////////////////////////////////////////

//Resistor

int SalesSystemPersistance::Persistance::AddResistor(Resistor^ resistor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO RESISTOR (ID, NAME, DESCRIPTION, PRICE, STOCK, RESISTANCE, TOLERANCE, POWER_, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @RESISTANCE, @TOLERANCE, @POWER_, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", resistor->Id);
		cmd->Parameters->AddWithValue("@NAME", resistor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", resistor->Description);
		cmd->Parameters->AddWithValue("@PRICE", resistor->Price);
		cmd->Parameters->AddWithValue("@STOCK", resistor->Stock);
		cmd->Parameters->AddWithValue("@RESISTANCE", resistor->Resistance);
		cmd->Parameters->AddWithValue("@TOLERANCE", resistor->Tolerance);
		cmd->Parameters->AddWithValue("@POWER_", resistor->Power);
		cmd->Parameters->AddWithValue("@PHOTO", resistor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Resistor^>^ SalesSystemPersistance::Persistance::QueryAllResistors()
{
	resistorListDB = gcnew List<Resistor^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM RESISTOR";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Resistor^ resistor = gcnew Resistor();
			resistor->Id = Convert::ToInt32(reader["ID"]);
			resistor->Name = reader["NAME"]->ToString();
			resistor->Description = reader["DESCRIPTION"]->ToString();
			resistor->Price = Convert::ToDouble(reader["PRICE"]);
			resistor->Stock = Convert::ToInt32(reader["STOCK"]);
			resistor->Resistance = reader["RESISTANCE"]->ToString();
			resistor->Tolerance = reader["TOLERANCE"]->ToString();
			resistor->Power = reader["POWER_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				resistor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				resistor->Photo = nullptr;
			}

			resistorListDB->Add(resistor);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return resistorListDB;
}

int SalesSystemPersistance::Persistance::UpdateResistor(Resistor^ resistor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE RESISTOR SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, " +
			"RESISTANCE=@RESISTANCE, TOLERANCE=@TOLERANCE, POWER_=@POWER_, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", resistor->Id);
		cmd->Parameters->AddWithValue("@NAME", resistor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", resistor->Description);
		cmd->Parameters->AddWithValue("@PRICE", resistor->Price);
		cmd->Parameters->AddWithValue("@STOCK", resistor->Stock);
		cmd->Parameters->AddWithValue("@RESISTANCE", resistor->Resistance);
		cmd->Parameters->AddWithValue("@TOLERANCE", resistor->Tolerance);
		cmd->Parameters->AddWithValue("@POWER_", resistor->Power);
		cmd->Parameters->AddWithValue("@PHOTO", resistor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return resistor->Id;
}

int SalesSystemPersistance::Persistance::DeleteResistor(int resistorId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM RESISTOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", resistorId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return resistorId;
}

Resistor^ SalesSystemPersistance::Persistance::QueryResistorById(int resistorId)
{
	Resistor^ resistor = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM RESISTOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", resistorId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			resistor = gcnew Resistor();
			resistor->Id = Convert::ToInt32(reader["ID"]);
			resistor->Name = reader["NAME"]->ToString();
			resistor->Description = reader["DESCRIPTION"]->ToString();
			resistor->Price = Convert::ToDouble(reader["PRICE"]);
			resistor->Stock = Convert::ToInt32(reader["STOCK"]);
			resistor->Resistance = reader["RESISTANCE"]->ToString();
			resistor->Tolerance = reader["TOLERANCE"]->ToString();
			resistor->Power = reader["POWER_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				resistor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				resistor->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return resistor;
}

//Capacitor

int SalesSystemPersistance::Persistance::AddCapacitor(Capacitor^ capacitor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO CAPACITOR (ID, NAME, DESCRIPTION, PRICE, STOCK, CAPACITANCE, TOLERANCE, VOLTAGERATED, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @CAPACITANCE, @TOLERANCE, @VOLTAGERATED, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", capacitor->Id);
		cmd->Parameters->AddWithValue("@NAME", capacitor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", capacitor->Description);
		cmd->Parameters->AddWithValue("@PRICE", capacitor->Price);
		cmd->Parameters->AddWithValue("@STOCK", capacitor->Stock);
		cmd->Parameters->AddWithValue("@CAPACITANCE", capacitor->Capacitance);
		cmd->Parameters->AddWithValue("@TOLERANCE", capacitor->Tolerance);
		cmd->Parameters->AddWithValue("@VOLTAGERATED", capacitor->VoltageRated);
		cmd->Parameters->AddWithValue("@PHOTO", capacitor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Capacitor^>^ SalesSystemPersistance::Persistance::QueryAllCapacitors()
{
	List<Capacitor^>^ capacitorListDB = gcnew List<Capacitor^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM CAPACITOR";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Capacitor^ capacitor = gcnew Capacitor();
			capacitor->Id = Convert::ToInt32(reader["ID"]);
			capacitor->Name = reader["NAME"]->ToString();
			capacitor->Description = reader["DESCRIPTION"]->ToString();
			capacitor->Price = Convert::ToDouble(reader["PRICE"]);
			capacitor->Stock = Convert::ToInt32(reader["STOCK"]);
			capacitor->Capacitance = reader["CAPACITANCE"]->ToString();
			capacitor->Tolerance = reader["TOLERANCE"]->ToString();
			capacitor->VoltageRated = Convert::ToDouble(reader["VOLTAGERATED"]);

			if (reader["PHOTO"] != DBNull::Value) {
				capacitor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				capacitor->Photo = nullptr;
			}

			capacitorListDB->Add(capacitor);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return capacitorListDB;
}

int SalesSystemPersistance::Persistance::UpdateCapacitor(Capacitor^ capacitor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE CAPACITOR SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, " +
			"CAPACITANCE=@CAPACITANCE, TOLERANCE=@TOLERANCE, VOLTAGERATED=@VOLTAGERATED, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", capacitor->Id);
		cmd->Parameters->AddWithValue("@NAME", capacitor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", capacitor->Description);
		cmd->Parameters->AddWithValue("@PRICE", capacitor->Price);
		cmd->Parameters->AddWithValue("@STOCK", capacitor->Stock);
		cmd->Parameters->AddWithValue("@CAPACITANCE", capacitor->Capacitance);
		cmd->Parameters->AddWithValue("@TOLERANCE", capacitor->Tolerance);
		cmd->Parameters->AddWithValue("@VOLTAGERATED", capacitor->VoltageRated);
		cmd->Parameters->AddWithValue("@PHOTO", capacitor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return capacitor->Id;
}

int SalesSystemPersistance::Persistance::DeleteCapacitor(int capacitorId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM CAPACITOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", capacitorId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return capacitorId;
}

Capacitor^ SalesSystemPersistance::Persistance::QueryCapacitorById(int capacitorId)
{
	Capacitor^ capacitor = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM CAPACITOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", capacitorId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			capacitor = gcnew Capacitor();
			capacitor->Id = Convert::ToInt32(reader["ID"]);
			capacitor->Name = reader["NAME"]->ToString();
			capacitor->Description = reader["DESCRIPTION"]->ToString();
			capacitor->Price = Convert::ToDouble(reader["PRICE"]);
			capacitor->Stock = Convert::ToInt32(reader["STOCK"]);
			capacitor->Capacitance = reader["CAPACITANCE"]->ToString();
			capacitor->Tolerance = reader["TOLERANCE"]->ToString();
			capacitor->VoltageRated = Convert::ToDouble(reader["VOLTAGERATED"]);

			if (reader["PHOTO"] != DBNull::Value) {
				capacitor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				capacitor->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return capacitor;
}

//Inductor

int SalesSystemPersistance::Persistance::AddInductor(Inductor^ inductor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO INDUCTOR (ID, NAME, DESCRIPTION, PRICE, STOCK, INDUCTANCE, TOLERANCE, TYPE_, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @INDUCTANCE, @TOLERANCE, @TYPE_, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", inductor->Id);
		cmd->Parameters->AddWithValue("@NAME", inductor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", inductor->Description);
		cmd->Parameters->AddWithValue("@PRICE", inductor->Price);
		cmd->Parameters->AddWithValue("@STOCK", inductor->Stock);
		cmd->Parameters->AddWithValue("@INDUCTANCE", inductor->Inductance);
		cmd->Parameters->AddWithValue("@TOLERANCE", inductor->Tolerance);
		cmd->Parameters->AddWithValue("@TYPE_", inductor->Type);
		cmd->Parameters->AddWithValue("@PHOTO", inductor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Inductor^>^ SalesSystemPersistance::Persistance::QueryAllInductors()
{
	List<Inductor^>^ inductorListDB = gcnew List<Inductor^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM INDUCTOR";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Inductor^ inductor = gcnew Inductor();
			inductor->Id = Convert::ToInt32(reader["ID"]);
			inductor->Name = reader["NAME"]->ToString();
			inductor->Description = reader["DESCRIPTION"]->ToString();
			inductor->Price = Convert::ToDouble(reader["PRICE"]);
			inductor->Stock = Convert::ToInt32(reader["STOCK"]);
			inductor->Inductance = reader["INDUCTANCE"]->ToString();
			inductor->Tolerance = reader["TOLERANCE"]->ToString();
			inductor->Type = reader["TYPE_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				inductor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				inductor->Photo = nullptr;
			}

			inductorListDB->Add(inductor);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return inductorListDB;
}

int SalesSystemPersistance::Persistance::UpdateInductor(Inductor^ inductor)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE INDUCTOR SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, " +
			"INDUCTANCE=@INDUCTANCE, TOLERANCE=@TOLERANCE, TYPE_=@TYPE_, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", inductor->Id);
		cmd->Parameters->AddWithValue("@NAME", inductor->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", inductor->Description);
		cmd->Parameters->AddWithValue("@PRICE", inductor->Price);
		cmd->Parameters->AddWithValue("@STOCK", inductor->Stock);
		cmd->Parameters->AddWithValue("@INDUCTANCE", inductor->Inductance);
		cmd->Parameters->AddWithValue("@TOLERANCE", inductor->Tolerance);
		cmd->Parameters->AddWithValue("@TYPE_", inductor->Type);
		cmd->Parameters->AddWithValue("@PHOTO", inductor->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;

}

int SalesSystemPersistance::Persistance::DeleteInductor(int inductorId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM INDUCTOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", inductorId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return inductorId;
}

Inductor^ SalesSystemPersistance::Persistance::QueryInductorById(int inductorId)
{
	Inductor^ inductor = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM INDUCTOR WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", inductorId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			inductor = gcnew Inductor();
			inductor->Id = Convert::ToInt32(reader["ID"]);
			inductor->Name = reader["NAME"]->ToString();
			inductor->Description = reader["DESCRIPTION"]->ToString();
			inductor->Price = Convert::ToDouble(reader["PRICE"]);
			inductor->Stock = Convert::ToInt32(reader["STOCK"]);
			inductor->Inductance = reader["INDUCTANCE"]->ToString();
			inductor->Tolerance = reader["TOLERANCE"]->ToString();
			inductor->Type = reader["TYPE_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				inductor->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				inductor->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return inductor;
}

// JumperWire

int SalesSystemPersistance::Persistance::AddJumperWire(JumperWire^ jumperWire)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO JUMPERWIRE (ID, NAME, DESCRIPTION, PRICE, STOCK, CONECTIONTYPE, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @CONECTIONTYPE, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", jumperWire->Id);
		cmd->Parameters->AddWithValue("@NAME", jumperWire->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", jumperWire->Description);
		cmd->Parameters->AddWithValue("@PRICE", jumperWire->Price);
		cmd->Parameters->AddWithValue("@STOCK", jumperWire->Stock);
		cmd->Parameters->AddWithValue("@CONECTIONTYPE", jumperWire->ConectionType);
		cmd->Parameters->AddWithValue("@PHOTO", jumperWire->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<JumperWire^>^ SalesSystemPersistance::Persistance::QueryAllJumperWires()
{
	List<JumperWire^>^ jumperWireListDB = gcnew List<JumperWire^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM JUMPERWIRE";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			JumperWire^ jumperWire = gcnew JumperWire();
			jumperWire->Id = Convert::ToInt32(reader["ID"]);
			jumperWire->Name = reader["NAME"]->ToString();
			jumperWire->Description = reader["DESCRIPTION"]->ToString();
			jumperWire->Price = Convert::ToDouble(reader["PRICE"]);
			jumperWire->Stock = Convert::ToInt32(reader["STOCK"]);
			jumperWire->ConectionType = reader["CONECTIONTYPE"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				jumperWire->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				jumperWire->Photo = nullptr;
			}

			jumperWireListDB->Add(jumperWire);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return jumperWireListDB;
}

int SalesSystemPersistance::Persistance::UpdateJumperWire(JumperWire^ jumperWire)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE JUMPERWIRE SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, " +
			"CONECTIONTYPE=@CONECTIONTYPE, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", jumperWire->Id);
		cmd->Parameters->AddWithValue("@NAME", jumperWire->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", jumperWire->Description);
		cmd->Parameters->AddWithValue("@PRICE", jumperWire->Price);
		cmd->Parameters->AddWithValue("@STOCK", jumperWire->Stock);
		cmd->Parameters->AddWithValue("@CONECTIONTYPE", jumperWire->ConectionType);
		cmd->Parameters->AddWithValue("@PHOTO", jumperWire->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return jumperWire->Id;
}

int SalesSystemPersistance::Persistance::DeleteJumperWire(int jumperWireId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM JUMPERWIRE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", jumperWireId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return jumperWireId;
}

JumperWire^ SalesSystemPersistance::Persistance::QueryJumperWireById(int jumperWireId)
{
	JumperWire^ jumperWire = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM JUMPERWIRE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", jumperWireId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			jumperWire = gcnew JumperWire();
			jumperWire->Id = Convert::ToInt32(reader["ID"]);
			jumperWire->Name = reader["NAME"]->ToString();
			jumperWire->Description = reader["DESCRIPTION"]->ToString();
			jumperWire->Price = Convert::ToDouble(reader["PRICE"]);
			jumperWire->Stock = Convert::ToInt32(reader["STOCK"]);
			jumperWire->ConectionType = reader["CONECTIONTYPE"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				jumperWire->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				jumperWire->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return jumperWire;
}

// Switch

int SalesSystemPersistance::Persistance::AddSwitch(Switch^ sw)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO SWITCH (ID, NAME, DESCRIPTION, PRICE, STOCK, TYPE_, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @TYPE_, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", sw->Id);
		cmd->Parameters->AddWithValue("@NAME", sw->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", sw->Description);
		cmd->Parameters->AddWithValue("@PRICE", sw->Price);
		cmd->Parameters->AddWithValue("@STOCK", sw->Stock);
		cmd->Parameters->AddWithValue("@TYPE_", sw->Type);
		cmd->Parameters->AddWithValue("@PHOTO", sw->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Switch^>^ SalesSystemPersistance::Persistance::QueryAllSwitches()
{
	List<Switch^>^ switchListDB = gcnew List<Switch^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SWITCH";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Switch^ sw = gcnew Switch();
			sw->Id = Convert::ToInt32(reader["ID"]);
			sw->Name = reader["NAME"]->ToString();
			sw->Description = reader["DESCRIPTION"]->ToString();
			sw->Price = Convert::ToDouble(reader["PRICE"]);
			sw->Stock = Convert::ToInt32(reader["STOCK"]);
			sw->Type = reader["TYPE_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				sw->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				sw->Photo = nullptr;
			}

			switchListDB->Add(sw);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return switchListDB;
}

int SalesSystemPersistance::Persistance::UpdateSwitch(Switch^ sw)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE SWITCH SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, TYPE_=@TYPE_, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", sw->Id);
		cmd->Parameters->AddWithValue("@NAME", sw->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", sw->Description);
		cmd->Parameters->AddWithValue("@PRICE", sw->Price);
		cmd->Parameters->AddWithValue("@STOCK", sw->Stock);
		cmd->Parameters->AddWithValue("@TYPE_", sw->Type);
		cmd->Parameters->AddWithValue("@PHOTO", sw->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return sw->Id;
}

int SalesSystemPersistance::Persistance::DeleteSwitch(int swId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM SWITCH WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", swId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return swId;
}

Switch^ SalesSystemPersistance::Persistance::QuerySwitchById(int swId)
{
	Switch^ sw = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM SWITCH WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", swId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			sw = gcnew Switch();
			sw->Id = Convert::ToInt32(reader["ID"]);
			sw->Name = reader["NAME"]->ToString();
			sw->Description = reader["DESCRIPTION"]->ToString();
			sw->Price = Convert::ToDouble(reader["PRICE"]);
			sw->Stock = Convert::ToInt32(reader["STOCK"]);
			sw->Type = reader["TYPE_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				sw->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				sw->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return sw;
}

//Diode

int SalesSystemPersistance::Persistance::AddDiode(Diode^ diode)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO DIODE (ID, NAME, DESCRIPTION, PRICE, STOCK, VRMAX, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @VRMAX, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", diode->Id);
		cmd->Parameters->AddWithValue("@NAME", diode->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", diode->Description);
		cmd->Parameters->AddWithValue("@PRICE", diode->Price);
		cmd->Parameters->AddWithValue("@STOCK", diode->Stock);
		cmd->Parameters->AddWithValue("@VRMAX", diode->VRMax);
		cmd->Parameters->AddWithValue("@PHOTO", diode->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Diode^>^ SalesSystemPersistance::Persistance::QueryAllDiodes()
{
	List<Diode^>^ diodeListDB = gcnew List<Diode^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM DIODE";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Diode^ diode = gcnew Diode();
			diode->Id = Convert::ToInt32(reader["ID"]);
			diode->Name = reader["NAME"]->ToString();
			diode->Description = reader["DESCRIPTION"]->ToString();
			diode->Price = Convert::ToDouble(reader["PRICE"]);
			diode->Stock = Convert::ToInt32(reader["STOCK"]);
			diode->VRMax = Convert::ToDouble(reader["VRMAX"]);

			if (reader["PHOTO"] != DBNull::Value) {
				diode->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				diode->Photo = nullptr;
			}

			diodeListDB->Add(diode);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return diodeListDB;
}

int SalesSystemPersistance::Persistance::UpdateDiode(Diode^ diode)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE DIODE SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, STOCK=@STOCK, VRMAX=@VRMAX, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", diode->Id);
		cmd->Parameters->AddWithValue("@NAME", diode->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", diode->Description);
		cmd->Parameters->AddWithValue("@PRICE", diode->Price);
		cmd->Parameters->AddWithValue("@STOCK", diode->Stock);
		cmd->Parameters->AddWithValue("@VRMAX", diode->VRMax);
		cmd->Parameters->AddWithValue("@PHOTO", diode->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return diode->Id;
}

int SalesSystemPersistance::Persistance::DeleteDiode(int diodeId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM DIODE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", diodeId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}

	return diodeId;
}

Diode^ SalesSystemPersistance::Persistance::QueryDiodeById(int diodeId)
{
	Diode^ diode = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM DIODE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", diodeId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			diode = gcnew Diode();
			diode->Id = Convert::ToInt32(reader["ID"]);
			diode->Name = reader["NAME"]->ToString();
			diode->Description = reader["DESCRIPTION"]->ToString();
			diode->Price = Convert::ToDouble(reader["PRICE"]);
			diode->Stock = Convert::ToInt32(reader["STOCK"]);
			diode->VRMax = Convert::ToDouble(reader["VRMAX"]);

			if (reader["PHOTO"] != DBNull::Value) {
				diode->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				diode->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return diode;
}

//VoltageSource

int SalesSystemPersistance::Persistance::AddVoltageSource(VoltageSource^ voltageSource)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO VOLTAGESOURCE (ID, NAME, DESCRIPTION, PRICE, STOCK, TYPE_, VOLTAGE, POWER_, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @TYPE_, @VOLTAGE, @POWER_, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", voltageSource->Id);
		cmd->Parameters->AddWithValue("@NAME", voltageSource->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", voltageSource->Description);
		cmd->Parameters->AddWithValue("@PRICE", voltageSource->Price);
		cmd->Parameters->AddWithValue("@STOCK", voltageSource->Stock);
		cmd->Parameters->AddWithValue("@TYPE_", voltageSource->Type);
		cmd->Parameters->AddWithValue("@VOLTAGE", voltageSource->Voltage);
		cmd->Parameters->AddWithValue("@POWER_", voltageSource->Power);
		cmd->Parameters->AddWithValue("@PHOTO", voltageSource->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<VoltageSource^>^ SalesSystemPersistance::Persistance::QueryAllVoltageSources()
{
	List<VoltageSource^>^ voltageSources = gcnew List<VoltageSource^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM VOLTAGESOURCE";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Prepare();

		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			VoltageSource^ voltageSource = gcnew VoltageSource();
			voltageSource->Id = Convert::ToInt32(reader["ID"]);
			voltageSource->Name = reader["NAME"]->ToString();
			voltageSource->Description = reader["DESCRIPTION"]->ToString();
			voltageSource->Price = Convert::ToDouble(reader["PRICE"]);
			voltageSource->Stock = Convert::ToInt32(reader["STOCK"]);
			voltageSource->Type = reader["TYPE_"]->ToString();
			voltageSource->Voltage = Convert::ToDouble(reader["VOLTAGE"]);
			voltageSource->Power = reader["POWER_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				voltageSource->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				voltageSource->Photo = nullptr;
			}

			voltageSources->Add(voltageSource);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return voltageSources;
}

int SalesSystemPersistance::Persistance::UpdateVoltageSource(VoltageSource^ voltageSource)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE VOLTAGESOURCE SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, " +
			"STOCK=@STOCK, TYPE_=@TYPE_, VOLTAGE=@VOLTAGE, POWER_=@POWER_, PHOTO=@PHOTO WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", voltageSource->Id);
		cmd->Parameters->AddWithValue("@NAME", voltageSource->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", voltageSource->Description);
		cmd->Parameters->AddWithValue("@PRICE", voltageSource->Price);
		cmd->Parameters->AddWithValue("@STOCK", voltageSource->Stock);
		cmd->Parameters->AddWithValue("@TYPE_", voltageSource->Type);
		cmd->Parameters->AddWithValue("@VOLTAGE", voltageSource->Voltage);
		cmd->Parameters->AddWithValue("@POWER_", voltageSource->Power);
		cmd->Parameters->AddWithValue("@PHOTO", voltageSource->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return voltageSource->Id;
}

int SalesSystemPersistance::Persistance::DeleteVoltageSource(int voltageSourceId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM VOLTAGESOURCE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", voltageSourceId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return voltageSourceId;
}

VoltageSource^ SalesSystemPersistance::Persistance::QueryVoltageSourceById(int voltageSourceId)
{
	VoltageSource^ voltageSource = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM VOLTAGESOURCE WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", voltageSourceId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			voltageSource = gcnew VoltageSource();
			voltageSource->Id = Convert::ToInt32(reader["ID"]);
			voltageSource->Name = reader["NAME"]->ToString();
			voltageSource->Description = reader["DESCRIPTION"]->ToString();
			voltageSource->Price = Convert::ToDouble(reader["PRICE"]);
			voltageSource->Stock = Convert::ToInt32(reader["STOCK"]);
			voltageSource->Type = reader["TYPE_"]->ToString();
			voltageSource->Voltage = Convert::ToDouble(reader["VOLTAGE"]);
			voltageSource->Power = reader["POWER_"]->ToString();

			if (reader["PHOTO"] != DBNull::Value) {
				voltageSource->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				voltageSource->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return voltageSource;
}


//Breadboard

int SalesSystemPersistance::Persistance::AddBreadboard(Breadboard^ breadboard)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "INSERT INTO BREADBOARD (ID, NAME, DESCRIPTION, PRICE, STOCK, TIEPOINTSNUMBER, PHOTO) " +
			"VALUES (@ID, @NAME, @DESCRIPTION, @PRICE, @STOCK, @TIEPOINTSNUMBER, @PHOTO)";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", breadboard->Id);
		cmd->Parameters->AddWithValue("@NAME", breadboard->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", breadboard->Description);
		cmd->Parameters->AddWithValue("@PRICE", breadboard->Price);
		cmd->Parameters->AddWithValue("@STOCK", breadboard->Stock);
		cmd->Parameters->AddWithValue("@TIEPOINTSNUMBER", breadboard->TiePointsNumber);
		cmd->Parameters->AddWithValue("@PHOTO", breadboard->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return 1;
}

List<Breadboard^>^ SalesSystemPersistance::Persistance::QueryAllBreadboards()
{
	List<Breadboard^>^ breadboardListDB = gcnew List<Breadboard^>();
	SqlConnection^ conn;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();

		String^ sqlStr = "SELECT * FROM BREADBOARD";
		SqlCommand^ cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Prepare();

		reader = cmd->ExecuteReader();

		while (reader->Read()) {
			Breadboard^ breadboard = gcnew Breadboard();
			breadboard->Id = Convert::ToInt32(reader["ID"]->ToString());
			breadboard->Name = reader["NAME"]->ToString();
			breadboard->Description = reader["DESCRIPTION"]->ToString();
			breadboard->Price = Convert::ToDouble(reader["PRICE"]->ToString());
			breadboard->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
			breadboard->TiePointsNumber = Convert::ToInt32(reader["TIEPOINTSNUMBER"]->ToString());

			if (reader["PHOTO"] != DBNull::Value) {
				breadboard->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				breadboard->Photo = nullptr;
			}

			breadboardListDB->Add(breadboard);
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}
	return breadboardListDB;
}

int SalesSystemPersistance::Persistance::UpdateBreadboard(Breadboard^ breadboard)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "UPDATE BREADBOARD SET NAME=@NAME, DESCRIPTION=@DESCRIPTION, PRICE=@PRICE, " +
			"STOCK=@STOCK, TIEPOINTSNUMBER=@TIEPOINTSNUMBER, PHOTO=@PHOTO " +
			"WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", breadboard->Id);
		cmd->Parameters->AddWithValue("@NAME", breadboard->Name);
		cmd->Parameters->AddWithValue("@DESCRIPTION", breadboard->Description);
		cmd->Parameters->AddWithValue("@PRICE", breadboard->Price);
		cmd->Parameters->AddWithValue("@STOCK", breadboard->Stock);
		cmd->Parameters->AddWithValue("@TIEPOINTSNUMBER", breadboard->TiePointsNumber);
		cmd->Parameters->AddWithValue("@PHOTO", breadboard->Photo);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return breadboard->Id;
}

int SalesSystemPersistance::Persistance::DeleteBreadboard(int breadboardId)
{
	SqlConnection^ conn;
	SqlCommand^ cmd;

	try {
		conn = GetConnection();
		String^ sqlStr = "DELETE FROM BREADBOARD WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", breadboardId);

		cmd->ExecuteNonQuery();
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (conn != nullptr) conn->Close();
	}
	return breadboardId;
}

Breadboard^ SalesSystemPersistance::Persistance::QueryBreadboardById(int breadboardId)
{
	Breadboard^ breadboard = nullptr;
	SqlConnection^ conn;
	SqlCommand^ cmd;
	SqlDataReader^ reader;

	try {
		conn = GetConnection();
		String^ sqlStr = "SELECT * FROM BREADBOARD WHERE ID=@ID";

		cmd = gcnew SqlCommand(sqlStr, conn);
		cmd->Parameters->AddWithValue("@ID", breadboardId);
		reader = cmd->ExecuteReader();

		if (reader->Read()) {
			breadboard = gcnew Breadboard();
			breadboard->Id = Convert::ToInt32(reader["ID"]->ToString());
			breadboard->Name = reader["NAME"]->ToString();
			breadboard->Description = reader["DESCRIPTION"]->ToString();
			breadboard->Price = Convert::ToDouble(reader["PRICE"]->ToString());
			breadboard->Stock = Convert::ToInt32(reader["STOCK"]->ToString());
			breadboard->TiePointsNumber = Convert::ToInt32(reader["TIEPOINTSNUMBER"]->ToString());

			if (reader["PHOTO"] != DBNull::Value) {
				breadboard->Photo = safe_cast<array<unsigned char>^>(reader["PHOTO"]);
			}
			else {
				breadboard->Photo = nullptr;
			}
		}
	}
	catch (Exception^ ex) {
		throw ex;
	}
	finally {
		if (reader != nullptr) reader->Close();
		if (conn != nullptr) conn->Close();
	}

	return breadboard;
}

