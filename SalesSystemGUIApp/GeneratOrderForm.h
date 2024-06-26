#pragma once

#include "ProductSearchForms.h"
#include "PurchaseForm.h"

#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sql.h> // Incluir para trabajar con SQL Server

// iTextSharp imports
using namespace iTextSharp::text;
using namespace iTextSharp::text::pdf;
using namespace System::Data::SqlClient; // Para trabajar con SQL Server

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Resumen de GeneratOrderForm
	/// </summary>
	
	public ref class GeneratOrderForm : public System::Windows::Forms::Form
	{
	public:
		GeneratOrderForm(void)
		{
			InitializeComponent();

			// Deshabilitar el bot�n btnGenerate al inicio
			btnGenerate->Enabled = false;
			txtRUCOrder->ReadOnly = true;
		
			// Suscribir el evento CellValueChanged del DataGridView
			dgvOrder->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GeneratOrderForm::dgvOrder_CellValueChanged);

			// Llamar a la funci�n para establecer las celdas del DataGridView como ReadOnly
			SetDataGridViewReadOnly(dgvOrder);



		}


	private:
		double totalPrice; // Declaraci�n de la variable totalPrice como miembro privado
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ItemOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantityOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotalPriceOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductIDOrder;


























		   SqlConnection^ conn;

	private:
		// M�todo para obtener la conexi�n a la base de datos
		SqlConnection^ GetConnection()
		{
			SqlConnection^ conn = gcnew SqlConnection();
			String^ password = "admin2024";
			conn->ConnectionString = "Server=projectlpoo.cdtwcrsmv6iq.us-east-1.rds.amazonaws.com;"
				"Database=ProjectLPOO;"
				"User ID=projectLPOO;"
				"Password=" + password + ";";

			try
			{
				conn->Open(); // Abrir la conexi�n a la base de datos
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error al conectar a la base de datos: " + ex->Message);
			}

			return conn;
		}
	

	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::CheckBox^ checkBox;

	private: System::Windows::Forms::TextBox^ txtRUCOrder;

	

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~GeneratOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}





	protected:

	public: System::Windows::Forms::TextBox^ txtClientOrder;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvOrder;





	private: System::Windows::Forms::Button^ btnAddOrder;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Button^ btnGenerateOrder;
	public: System::Windows::Forms::Button^ btnGenerate;



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GeneratOrderForm::typeid));
			this->txtClientOrder = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvOrder = (gcnew System::Windows::Forms::DataGridView());
			this->btnAddOrder = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerateOrder = (gcnew System::Windows::Forms::Button());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtRUCOrder = (gcnew System::Windows::Forms::TextBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->ItemOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantityOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotalPriceOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductIDOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->BeginInit();
			this->SuspendLayout();
			// 
			// txtClientOrder
			// 
			this->txtClientOrder->Location = System::Drawing::Point(97, 37);
			this->txtClientOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtClientOrder->Name = L"txtClientOrder";
			this->txtClientOrder->ReadOnly = true;
			this->txtClientOrder->Size = System::Drawing::Size(179, 20);
			this->txtClientOrder->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(34, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Cliente:";
			// 
			// dgvOrder
			// 
			this->dgvOrder->AllowUserToAddRows = false;
			this->dgvOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ItemOrder, this->NameOrder,
					this->DescriptionOrder, this->PriceOrder, this->QuantityOrder, this->SubTotalPriceOrder, this->ProductIDOrder
			});
			this->dgvOrder->Location = System::Drawing::Point(11, 133);
			this->dgvOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvOrder->Name = L"dgvOrder";
			this->dgvOrder->RowHeadersVisible = false;
			this->dgvOrder->RowHeadersWidth = 51;
			this->dgvOrder->RowTemplate->Height = 24;
			this->dgvOrder->Size = System::Drawing::Size(494, 104);
			this->dgvOrder->TabIndex = 22;
			// 
			// btnAddOrder
			// 
			this->btnAddOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddOrder->FlatAppearance->BorderSize = 0;
			this->btnAddOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddOrder->Location = System::Drawing::Point(320, 60);
			this->btnAddOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAddOrder->Name = L"btnAddOrder";
			this->btnAddOrder->Size = System::Drawing::Size(167, 31);
			this->btnAddOrder->TabIndex = 23;
			this->btnAddOrder->Text = L"Agregar producto";
			this->btnAddOrder->UseVisualStyleBackColor = false;
			this->btnAddOrder->Click += gcnew System::EventHandler(this, &GeneratOrderForm::btnAddOrder_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(336, 270);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Total(S/.):";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(411, 263);
			this->txtTotal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(76, 20);
			this->txtTotal->TabIndex = 24;
			// 
			// btnGenerateOrder
			// 
			this->btnGenerateOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnGenerateOrder->FlatAppearance->BorderSize = 0;
			this->btnGenerateOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerateOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerateOrder->Location = System::Drawing::Point(11, 260);
			this->btnGenerateOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGenerateOrder->Name = L"btnGenerateOrder";
			this->btnGenerateOrder->Size = System::Drawing::Size(130, 25);
			this->btnGenerateOrder->TabIndex = 26;
			this->btnGenerateOrder->Text = L"Realizar compra";
			this->btnGenerateOrder->UseVisualStyleBackColor = false;
			this->btnGenerateOrder->Click += gcnew System::EventHandler(this, &GeneratOrderForm::btnGenerateOrder_Click);
			// 
			// btnGenerate
			// 
			this->btnGenerate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnGenerate->FlatAppearance->BorderSize = 0;
			this->btnGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerate->Location = System::Drawing::Point(165, 260);
			this->btnGenerate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(146, 25);
			this->btnGenerate->TabIndex = 27;
			this->btnGenerate->Text = L"Generar Comprobante";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &GeneratOrderForm::btnGenerate_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(34, 88);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Desea a�adir RUC\?";
			// 
			// txtRUCOrder
			// 
			this->txtRUCOrder->Location = System::Drawing::Point(187, 85);
			this->txtRUCOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtRUCOrder->Name = L"txtRUCOrder";
			this->txtRUCOrder->Size = System::Drawing::Size(89, 20);
			this->txtRUCOrder->TabIndex = 29;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(153, 88);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(15, 14);
			this->checkBox->TabIndex = 30;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &GeneratOrderForm::checkBox_CheckedChanged);
			// 
			// ItemOrder
			// 
			this->ItemOrder->HeaderText = L"Item";
			this->ItemOrder->MinimumWidth = 6;
			this->ItemOrder->Name = L"ItemOrder";
			this->ItemOrder->Width = 125;
			// 
			// NameOrder
			// 
			this->NameOrder->HeaderText = L"Nombre";
			this->NameOrder->MinimumWidth = 6;
			this->NameOrder->Name = L"NameOrder";
			this->NameOrder->Width = 125;
			// 
			// DescriptionOrder
			// 
			this->DescriptionOrder->HeaderText = L"Descripci�n";
			this->DescriptionOrder->MinimumWidth = 6;
			this->DescriptionOrder->Name = L"DescriptionOrder";
			this->DescriptionOrder->Width = 175;
			// 
			// PriceOrder
			// 
			this->PriceOrder->HeaderText = L"Precio";
			this->PriceOrder->MinimumWidth = 6;
			this->PriceOrder->Name = L"PriceOrder";
			this->PriceOrder->Width = 125;
			// 
			// QuantityOrder
			// 
			this->QuantityOrder->HeaderText = L"Cantidad";
			this->QuantityOrder->MinimumWidth = 6;
			this->QuantityOrder->Name = L"QuantityOrder";
			this->QuantityOrder->Width = 125;
			// 
			// SubTotalPriceOrder
			// 
			this->SubTotalPriceOrder->HeaderText = L"SubTotal";
			this->SubTotalPriceOrder->MinimumWidth = 6;
			this->SubTotalPriceOrder->Name = L"SubTotalPriceOrder";
			this->SubTotalPriceOrder->Width = 125;
			// 
			// ProductIDOrder
			// 
			this->ProductIDOrder->HeaderText = L"ID";
			this->ProductIDOrder->Name = L"ProductIDOrder";
			this->ProductIDOrder->Visible = false;
			// 
			// GeneratOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(526, 304);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->txtRUCOrder);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnGenerate);
			this->Controls->Add(this->btnGenerateOrder);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->btnAddOrder);
			this->Controls->Add(this->dgvOrder);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtClientOrder);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"GeneratOrderForm";
			this->Text = L"Generar Orden";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductSearchForms^ productSearchForm = gcnew ProductSearchForms();
		productSearchForm->ProductSelected += gcnew ProductSelectedEventHandler(this, &GeneratOrderForm::OnProductSelected);
		productSearchForm->ShowDialog();

	}

	private: void OnProductSelected(Product^ selectedProduct)
	{

		int nextItemNumber = dgvOrder->Rows->Count + 1; // Calcula el n�mero del pr�ximo item

		// Agrega el producto seleccionado a la tabla dgvOrder
		dgvOrder->Rows->Add(gcnew array<String^> {
				nextItemNumber.ToString(), // ItemOrder
				
				selectedProduct->Name,
				selectedProduct->Description,
				selectedProduct->Price.ToString(),
				"1", // Cantidad inicial
				(selectedProduct->Price * 1).ToString(), // Subtotal inicial (precio por cantidad inicial)
				selectedProduct->Id.ToString()
					
		});

		// Actualiza el total
		UpdateTotal();
	}

	
	
		   private: void UpdateTotal()
		   {
			   totalPrice = 0.0;
			   for each (DataGridViewRow ^ row in dgvOrder->Rows) {
				   if (row->Cells[QuantityOrder->Index]->Value != nullptr && row->Cells[PriceOrder->Index]->Value != nullptr) {
					   int quantity = Convert::ToInt32(row->Cells[QuantityOrder->Index]->Value);
					   double price = Convert::ToDouble(row->Cells[PriceOrder->Index]->Value);
					   double subTotal = quantity * price;
					   row->Cells[SubTotalPriceOrder->Index]->Value = subTotal;
					   totalPrice += subTotal;
				   }
			   }
			   txtTotal->Text = totalPrice.ToString("F2");
		   }


				  void SetDataGridViewReadOnly(DataGridView^ dataGridView) {
					  // Itera sobre todas las columnas excepto "QuantityOrder"
					  for each (DataGridViewColumn ^ column in dataGridView->Columns) {
						  if (column->Name != "QuantityOrder") {
							  // Establece la propiedad ReadOnly de las celdas de esta columna como true
							  column->ReadOnly = true;
						  }
					  }
				  }

				  System::Void GeneratOrderForm::dgvOrder_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
					  // Verificar si se cambi� la celda de cantidad
					  if (e->ColumnIndex == QuantityOrder->Index && e->RowIndex >= 0) {
						  // Recalcular el total cuando cambia la cantidad
						  UpdateTotal();
					  }
				  }

	
private: System::Void btnGenerateOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obt�n los valores desde los campos correspondientes
	String^ clientOrder = txtClientOrder->Text;
	String^ RUCOrder = txtRUCOrder->Text;
	double totalPrice = Convert::ToDouble(txtTotal->Text);

	// Crea una instancia de PurchaseForm pasando los valores como argumentos
	PurchaseForm^ purchaseForm = gcnew PurchaseForm(clientOrder, RUCOrder, totalPrice);

	// Suscribirse al evento FormClosed de PurchaseForm
	purchaseForm->FormClosed += gcnew FormClosedEventHandler(this, &GeneratOrderForm::PurchaseFormClosed);

	this->btnGenerate->Enabled = true;

	purchaseForm->ShowDialog();
}


private: int InsertOrderIntoDatabase(String^ clientOrder, String^ RUCOrder, double totalPrice) {
	SqlConnection^ connection = nullptr;
	int orderId = -1;
	int iDUsuarioActual = UserSession::UserId;

	try {
		// Obt�n la conexi�n a la base de datos
		connection = GetConnection();

		// Comienza una transacci�n
		SqlTransaction^ transaction = connection->BeginTransaction();

		try {
			// Obt�n la fecha actual
			String^ currentDate = DateTime::Now.ToString("yyyy-MM-dd");

			// Inserta la orden en la tabla SALES_ORDER
			String^ insertSalesOrderQuery = "INSERT INTO SALES_ORDER (ORDER_DATE, TOTAL_AMOUNT, PERSON_ID, STATUS) VALUES (@OrderDate, @TotalAmount, @PersonID, @Status); SELECT SCOPE_IDENTITY();";
			SqlCommand^ insertSalesOrderCommand = gcnew SqlCommand(insertSalesOrderQuery, connection, transaction);
			insertSalesOrderCommand->Parameters->AddWithValue("@OrderDate", currentDate);
			insertSalesOrderCommand->Parameters->AddWithValue("@TotalAmount", totalPrice);
			insertSalesOrderCommand->Parameters->AddWithValue("@PersonID", iDUsuarioActual);
			insertSalesOrderCommand->Parameters->AddWithValue("@Status", "P"); // Ejemplo de estado, puedes cambiarlo seg�n tus necesidades

			// Obt�n el ID de la orden insertada
			orderId = Convert::ToInt32(insertSalesOrderCommand->ExecuteScalar());

			// Inserta los detalles de la venta en la tabla SALE
			double totalAmountWithoutTax = totalPrice * 0.82; // IGV del 18%
			double totalAmountWithTax = totalPrice;

			String^ insertSaleQuery = "INSERT INTO SALE (RUC, TOTAL_AMOUNT_WITHOUT_TAX, TOTAL_AMOUNT_WITH_TAX, ORDER_ID) VALUES (@RUC, @TotalAmountWithoutTax, @TotalAmountWithTax, @OrderID)";
			SqlCommand^ insertSaleCommand = gcnew SqlCommand(insertSaleQuery, connection, transaction);
			insertSaleCommand->Parameters->AddWithValue("@RUC", RUCOrder);
			insertSaleCommand->Parameters->AddWithValue("@TotalAmountWithoutTax", totalAmountWithoutTax);
			insertSaleCommand->Parameters->AddWithValue("@TotalAmountWithTax", totalAmountWithTax);
			insertSaleCommand->Parameters->AddWithValue("@OrderID", orderId); // Aqu� se usa el orderId obtenido anteriormente

			insertSaleCommand->ExecuteNonQuery();

			// Inserta los productos en la tabla ORDER_PRODUCT
			for each (DataGridViewRow ^ row in dgvOrder->Rows) {
				if (row->Cells["ProductIDOrder"]->Value != nullptr) {
					int productId = Convert::ToInt32(row->Cells["ProductIDOrder"]->Value);
					int quantity = Convert::ToInt32(row->Cells["QuantityOrder"]->Value);
					double subTotal = Convert::ToDouble(row->Cells["SubTotalPriceOrder"]->Value);

					String^ insertOrderProductQuery = "INSERT INTO ORDER_PRODUCT (ORDER_ID, PRODUCT_ID, QUANTITY, SUBTOTAL) VALUES (@OrderID, @ProductID, @Quantity, @Subtotal)";
					SqlCommand^ insertOrderProductCommand = gcnew SqlCommand(insertOrderProductQuery, connection, transaction);
					insertOrderProductCommand->Parameters->AddWithValue("@OrderID", orderId);
					insertOrderProductCommand->Parameters->AddWithValue("@ProductID", productId);
					insertOrderProductCommand->Parameters->AddWithValue("@Quantity", quantity);
					insertOrderProductCommand->Parameters->AddWithValue("@Subtotal", subTotal);

					insertOrderProductCommand->ExecuteNonQuery();
				}
			}


			// Confirma la transacci�n
			transaction->Commit();

	
		}
		catch (Exception^ ex) {
			// En caso de error, revierte la transacci�n
			transaction->Rollback();
			MessageBox::Show("Error al insertar la orden en la base de datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al conectar con la base de datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		if (connection != nullptr && connection->State == ConnectionState::Open) {
			connection->Close();
		}
	}

	return orderId; // Retorna el ID de la orden insertada
}
	



	private: System::Void btnOpenPurchaseForm_Click(System::Object^ sender, System::EventArgs^ e) {
	   
    }

	private: System::Void PurchaseFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		// Habilitar el bot�n btnGenerate cuando PurchaseForm se cierra
		//btnGenerate->Enabled = true;
	}

		 
		


		   // Generacion del PDF para la venta
private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obt�n los valores desde los campos correspondientes
	String^ clientOrder = txtClientOrder->Text;
	String^ RUCOrder = txtRUCOrder->Text;
	double totalPrice = Convert::ToDouble(txtTotal->Text);

	// Inserta la orden en la base de datos y obt�n el orderId
	int orderId = InsertOrderIntoDatabase(clientOrder, RUCOrder, totalPrice);
	if (orderId == -1) {
		MessageBox::Show("Error al insertar la orden en la base de datos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Generar el n�mero de boleta basado en el orderId
	String^ invoiceNumber = String::Format("B001-{0:D3}", orderId); // Generar el n�mero de boleta din�micamente

	// Generar el PDF
	String^ basePdfPath = "..\\Compra"; // Nombre base del archivo PDF sin extensi�n
	String^ pdfPath = String::Format("{0}_{1}.pdf", basePdfPath, orderId);

	// Crear el documento PDF
	Document^ document = gcnew Document();
	try {
		PdfWriter^ writer = PdfWriter::GetInstance(document, gcnew FileStream(pdfPath, FileMode::Create, FileAccess::Write, FileShare::None));
		document->Open();

		// Agregar logo al inicio
		iTextSharp::text::Image^ logo = iTextSharp::text::Image::GetInstance("..\\logo.png");
		logo->ScaleToFit(150, 150);
		logo->SetAbsolutePosition(30, 705); // Posici�n absoluta en la p�gina
		document->Add(logo);

		// Crear un rect�ngulo para el RUC y Boleta de venta Electr�nica
		PdfContentByte^ cb = writer->DirectContent;
		cb->SetLineWidth(1.0); // Ancho de la l�nea del rect�ngulo
		cb->Rectangle(400.0, 690.0, 140.0, 60.0); // (x, y, width, height)
		cb->Stroke();

		// Agregar texto dentro del rect�ngulo
		iTextSharp::text::Font^ rectFont = FontFactory::GetFont(FontFactory::HELVETICA, 10, iTextSharp::text::Font::BOLD);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase(invoiceNumber, rectFont), 405, 700, 0);

		// Texto "RUC" y "Boleta de venta Electr�nica"
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("RUC: 20512050200", rectFont), 405, 730, 0);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("Boleta de venta Electr�nica", rectFont), 405, 715, 0);

		// Texto "TECHSTOCK PUCP S.A.C" en negrita
		iTextSharp::text::Font^ boldFont = FontFactory::GetFont(FontFactory::HELVETICA_BOLD, 8);
		Paragraph^ companyText = gcnew Paragraph("TECHSTOCK PUCP S.A.C", boldFont);
		companyText->Alignment = Element::ALIGN_LEFT;
		companyText->IndentationLeft = 150; // Mover hacia la derecha para alinear con el logo
		document->Add(companyText);

		// Texto "San Miguel" en negrita
		Paragraph^ locationText = gcnew Paragraph("San Miguel", boldFont);
		locationText->Alignment = Element::ALIGN_LEFT;
		locationText->IndentationLeft = 150; // Mover hacia la derecha para alinear con el logo
		document->Add(locationText);

		// Texto "Lima - Lima" en negrita
		Paragraph^ addressText = gcnew Paragraph("Lima - Lima", boldFont);
		addressText->Alignment = Element::ALIGN_LEFT;
		addressText->IndentationLeft = 150; // Mover hacia la derecha para alinear con el logo
		document->Add(addressText);

		// Espacio en blanco
		document->Add(gcnew Paragraph(" ")); // Espacio en blanco

		// Agregar fecha en posici�n espec�fica
		DateTime currentDate = DateTime::Now;
		String^ formattedDate = currentDate.ToString("dd/MM/yyyy");
		iTextSharp::text::Font^ dateFont = FontFactory::GetFont(FontFactory::HELVETICA, 10, iTextSharp::text::Font::BOLD);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("Fecha: " + formattedDate, dateFont), 460, 780, 0);

		// Datos del Cliente
		iTextSharp::text::Font^ sectionFont = FontFactory::GetFont(FontFactory::HELVETICA_BOLD, 14);
		Paragraph^ clientDetails = gcnew Paragraph("Datos del Cliente", sectionFont);
		clientDetails->Alignment = Element::ALIGN_LEFT;
		document->Add(clientDetails);

		iTextSharp::text::Font^ contentFont = FontFactory::GetFont(FontFactory::HELVETICA, 12);
		document->Add(gcnew Paragraph("Cliente: " + clientOrder, contentFont));

		// Verificar si el CheckBox est� marcado
		if (checkBox->Checked) {
			// Si est� marcado, agregar el RUC al PDF
			document->Add(gcnew Paragraph("RUC: " + RUCOrder, contentFont));
		}

		document->Add(gcnew Paragraph(" ")); // Espacio en blanco

		// Detalles de la Compra
		Paragraph^ purchaseDetails = gcnew Paragraph("Detalles de la Compra", sectionFont);
		purchaseDetails->Alignment = Element::ALIGN_LEFT;
		document->Add(purchaseDetails);

		document->Add(gcnew Paragraph(" ")); // A�adir espacio en blanco despu�s de los detalles de la compra

		PdfPTable^ table = gcnew PdfPTable(3); // Crear una tabla con 3 columnas

		// Encabezados de la tabla
		table->AddCell("Descripci�n");
		table->AddCell("Cantidad");
		table->AddCell("Subtotal (S/.)");

		// A�adir filas a la tabla
		for each (DataGridViewRow ^ row in dgvOrder->Rows) {
			if (row->Cells["NameOrder"]->Value != nullptr) {
				table->AddCell(gcnew Phrase(row->Cells["DescriptionOrder"]->Value->ToString(), contentFont));
				table->AddCell(gcnew Phrase(row->Cells["QuantityOrder"]->Value->ToString(), contentFont));
				table->AddCell(gcnew Phrase(row->Cells["SubTotalPriceOrder"]->Value->ToString(), contentFont));
			}
		}

		// Ancho de las columnas
		array<float>^ columnWidths = { 3.0f, 1.0f, 1.0f }; // El ancho de la primera columna (descripci�n) ser� 3 veces el ancho de las otras dos columnas
		table->SetWidths(columnWidths);

		// Establecer el ancho de la tabla
		table->WidthPercentage = 100;

		document->Add(table);

		document->Add(gcnew Paragraph(" ")); // Espacio en blanco

		// Calcular IGV y Base Imponible
		double igv = totalPrice * 0.18;
		double baseImponible = totalPrice - igv;

		// Mostrar Base Imponible
		Paragraph^ baseImponibleParagraph = gcnew Paragraph("Base Imponible: S/. " + baseImponible.ToString("F2"), contentFont);
		baseImponibleParagraph->Alignment = Element::ALIGN_RIGHT;
		document->Add(baseImponibleParagraph);

		// Mostrar IGV (18% del importe total)
		Paragraph^ igvParagraph = gcnew Paragraph("IGV: S/. " + igv.ToString("F2"), contentFont);
		igvParagraph->Alignment = Element::ALIGN_RIGHT;
		document->Add(igvParagraph);

		// Mostrar Importe Total
		Paragraph^ totalPriceText = gcnew Paragraph("Importe Total (S/.): " + totalPrice.ToString("F2"), sectionFont);
		totalPriceText->Alignment = Element::ALIGN_RIGHT;
		document->Add(totalPriceText);

		// Pie de p�gina
		document->Add(gcnew Paragraph(" "));
		Paragraph^ footer = gcnew Paragraph("Gracias por su compra", FontFactory::GetFont(FontFactory::HELVETICA_OBLIQUE, 12));
		footer->Alignment = Element::ALIGN_CENTER;
		document->Add(footer);

		document->Close(); // Cerrar el documento PDF

		MessageBox::Show(String::Format("PDF generado exitosamente: {0}", pdfPath), "�xito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al generar el PDF: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}








private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox->Checked) {
		// Permitir la escritura en txtRUCOrder
		txtRUCOrder->ReadOnly = false;
	}
	else {
		// Limpiar el contenido de txtRUCOrder y deshabilitar la escritura
		txtRUCOrder->Text = "";
		txtRUCOrder->ReadOnly = true;
	}
}

	  
};
}
