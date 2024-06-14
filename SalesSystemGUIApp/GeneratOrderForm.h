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

			// Deshabilitar el botón btnGenerate al inicio
			btnGenerate->Enabled = false;
			txtRUCOrder->ReadOnly = true;

			// Suscribir el evento CellValueChanged del DataGridView
			dgvOrder->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GeneratOrderForm::dgvOrder_CellValueChanged);

			// Llamar a la función para establecer las celdas del DataGridView como ReadOnly
			SetDataGridViewReadOnly(dgvOrder);
			
			// Inicializar la conexión a la base de datos
			conn = GetConnection();

			// Inicializar el formulario y otros componentes necesarios
			InitializeOrderForm();

		}


	private:
		double totalPrice; // Declaración de la variable totalPrice como miembro privado
		SqlConnection^ conn;

	private:
		// Método para obtener la conexión a la base de datos
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
				conn->Open(); // Abrir la conexión a la base de datos
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error al conectar a la base de datos: " + ex->Message);
			}

			return conn;
		}
	

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantityOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotalPriceOrder;
	private: System::Windows::Forms::CheckBox^ checkBox;

	private: System::Windows::Forms::TextBox^ txtRUCOrder;

	

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GeneratOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::TextBox^ txtIdOrder;
	protected:
	private: System::Windows::Forms::Label^ lblIdRes;
	public: System::Windows::Forms::TextBox^ txtClientOrder;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dgvOrder;





	private: System::Windows::Forms::Button^ btnAddOrder;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtTotal;

	private: System::Windows::Forms::Button^ btnGenerateOrder;
	private: System::Windows::Forms::Button^ btnGenerate;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtIdOrder = (gcnew System::Windows::Forms::TextBox());
			this->lblIdRes = (gcnew System::Windows::Forms::Label());
			this->txtClientOrder = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvOrder = (gcnew System::Windows::Forms::DataGridView());
			this->IdOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantityOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotalPriceOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddOrder = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerateOrder = (gcnew System::Windows::Forms::Button());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtRUCOrder = (gcnew System::Windows::Forms::TextBox());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->BeginInit();
			this->SuspendLayout();
			// 
			// txtIdOrder
			// 
			this->txtIdOrder->Location = System::Drawing::Point(115, 32);
			this->txtIdOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtIdOrder->Name = L"txtIdOrder";
			this->txtIdOrder->Size = System::Drawing::Size(167, 20);
			this->txtIdOrder->TabIndex = 7;
			// 
			// lblIdRes
			// 
			this->lblIdRes->AutoSize = true;
			this->lblIdRes->ForeColor = System::Drawing::Color::White;
			this->lblIdRes->Location = System::Drawing::Point(45, 35);
			this->lblIdRes->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblIdRes->Name = L"lblIdRes";
			this->lblIdRes->Size = System::Drawing::Size(19, 13);
			this->lblIdRes->TabIndex = 6;
			this->lblIdRes->Text = L"Id:";
			// 
			// txtClientOrder
			// 
			this->txtClientOrder->Location = System::Drawing::Point(115, 67);
			this->txtClientOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtClientOrder->Name = L"txtClientOrder";
			this->txtClientOrder->ReadOnly = true;
			this->txtClientOrder->Size = System::Drawing::Size(167, 20);
			this->txtClientOrder->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(45, 70);
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
			this->dgvOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->IdOrder, this->NameOrder,
					this->DescriptionOrder, this->PriceOrder, this->QuantityOrder, this->SubTotalPriceOrder
			});
			this->dgvOrder->Location = System::Drawing::Point(11, 148);
			this->dgvOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvOrder->Name = L"dgvOrder";
			this->dgvOrder->RowHeadersVisible = false;
			this->dgvOrder->RowHeadersWidth = 51;
			this->dgvOrder->RowTemplate->Height = 24;
			this->dgvOrder->Size = System::Drawing::Size(494, 89);
			this->dgvOrder->TabIndex = 22;
			// 
			// IdOrder
			// 
			this->IdOrder->HeaderText = L"Id";
			this->IdOrder->MinimumWidth = 6;
			this->IdOrder->Name = L"IdOrder";
			this->IdOrder->Width = 125;
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
			this->DescriptionOrder->HeaderText = L"Descripción";
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
			// btnAddOrder
			// 
			this->btnAddOrder->BackColor = System::Drawing::Color::LawnGreen;
			this->btnAddOrder->FlatAppearance->BorderSize = 0;
			this->btnAddOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddOrder->Location = System::Drawing::Point(320, 79);
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
			this->btnGenerateOrder->BackColor = System::Drawing::Color::LawnGreen;
			this->btnGenerateOrder->FlatAppearance->BorderSize = 0;
			this->btnGenerateOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
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
			this->btnGenerate->BackColor = System::Drawing::Color::LawnGreen;
			this->btnGenerate->FlatAppearance->BorderSize = 0;
			this->btnGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerate->Location = System::Drawing::Point(165, 260);
			this->btnGenerate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(134, 25);
			this->btnGenerate->TabIndex = 27;
			this->btnGenerate->Text = L"Generar Comprobante";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &GeneratOrderForm::btnGenerate_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(45, 107);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Desea añadir RUC\?";
			// 
			// txtRUCOrder
			// 
			this->txtRUCOrder->Location = System::Drawing::Point(199, 104);
			this->txtRUCOrder->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtRUCOrder->Name = L"txtRUCOrder";
			this->txtRUCOrder->Size = System::Drawing::Size(83, 20);
			this->txtRUCOrder->TabIndex = 29;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(165, 107);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(15, 14);
			this->checkBox->TabIndex = 30;
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &GeneratOrderForm::checkBox_CheckedChanged);
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
			this->Controls->Add(this->txtIdOrder);
			this->Controls->Add(this->lblIdRes);
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
		// Agrega el producto seleccionado a la tabla dgvOrder
		dgvOrder->Rows->Add(gcnew array<String^> {
			selectedProduct->Id.ToString(),
				selectedProduct->Name,
				selectedProduct->Description,
				selectedProduct->Price.ToString(),
				"1", // Cantidad inicial
				(selectedProduct->Price * 1).ToString() // Subtotal inicial (precio por cantidad inicial)
		});

		// Actualiza el total
		UpdateTotal();
	}

	
	
		   private: void UpdateTotal()
		   {
			   double total = 0.0;

			   // Recorre todas las filas de la tabla
			   for each (DataGridViewRow ^ row in dgvOrder->Rows)
			   {
				   // Obtén el valor de la columna "SubTotal" de cada fila y suma al total
				   double subtotal = Convert::ToDouble(row->Cells["SubTotalPriceOrder"]->Value);
				   total += subtotal;
			   }

			   // Muestra el total en el txtTotal
			   txtTotal->Text = total.ToString();
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
					  // Verifica si la celda modificada es la de cantidad y si el valor es válido
					  if (e->ColumnIndex == dgvOrder->Columns["QuantityOrder"]->Index && e->RowIndex >= 0) {
						  DataGridViewRow^ row = dgvOrder->Rows[e->RowIndex];
						  int quantity;
						  if (Int32::TryParse(row->Cells["QuantityOrder"]->Value->ToString(), quantity)) {
							  double price = Convert::ToDouble(row->Cells["PriceOrder"]->Value);
							  double subtotal = quantity * price;
							  row->Cells["SubTotalPriceOrder"]->Value = subtotal.ToString();

							  // Actualiza el total
							  UpdateTotal();
						  }
					  }
				  }

	
private: System::Void btnGenerateOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtén los valores desde los campos correspondientes
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
	



	private: System::Void btnOpenPurchaseForm_Click(System::Object^ sender, System::EventArgs^ e) {
	   
    }

	private: System::Void PurchaseFormClosed(System::Object^ sender, FormClosedEventArgs^ e) {
		// Habilitar el botón btnGenerate cuando PurchaseForm se cierra
		//btnGenerate->Enabled = true;
	}

		   // Variable para almacenar el próximo ID de pedido
		   int nextOrderId;

		   // Método para inicializar el formulario y generar el ID de pedido automáticamente
		   void InitializeOrderForm()
		   {
			   // Aquí puedes realizar inicializaciones adicionales del formulario si es necesario
		
			   this->txtIdOrder->ReadOnly = true; // Asegurarse de que el campo sea solo lectura

			   // Obtener el próximo ID de pedido y mostrarlo en el formulario
			   int nextOrderId = GetNextOrderId();
			   this->txtIdOrder->Text = nextOrderId.ToString();
		   }

		   // Método simulado para obtener el próximo ID de pedido (puede ser una lógica personalizada)
		   int GetNextOrderId()
		   {
			   int nextOrderId = 0;

			   try
			   {
				   // Crear y ejecutar la consulta SQL para obtener el máximo ID de pedido actual
				   String^ query = "SELECT MAX(OrderID) FROM SALES_ORDER";
				   SqlCommand^ cmd = gcnew SqlCommand(query, conn);
				   Object^ result = cmd->ExecuteScalar();

				   // Verificar si se obtuvo un resultado válido
				   if (result != nullptr && result != DBNull::Value)
				   {
					   nextOrderId = Convert::ToInt32(result) + 1; // Incrementar el máximo ID de pedido encontrado
				   }
				   else
				   {
					   nextOrderId = 1; // Si no hay registros, empezar desde 1
				   }
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error al obtener el próximo ID de pedido: " + ex->Message);
			   }

			   return nextOrderId;
		   }


		   // Generacion del PDF para la venta
private: System::Void btnGenerate_Click(System::Object^ sender, System::EventArgs^ e) {
	Document^ document = gcnew Document();
	try {
		String^ pdfPath = "..\\Compra.pdf";
		PdfWriter^ writer = PdfWriter::GetInstance(document, gcnew FileStream(pdfPath, FileMode::Create, FileAccess::Write, FileShare::None));
		document->Open();

		// Agregar logo al inicio
		iTextSharp::text::Image^ logo = iTextSharp::text::Image::GetInstance("..\\logo.png");
		logo->ScaleToFit(150, 150);
		logo->SetAbsolutePosition(30, 705); // Posición absoluta en la página
		document->Add(logo);

		// Crear un rectángulo para el RUC y Boleta de venta Electrónica
		PdfContentByte^ cb = writer->DirectContent;
		cb->SetLineWidth(1.0); // Ancho de la línea del rectángulo
		cb->Rectangle(400.0, 690.0, 140.0, 60.0); // (x, y, width, height)
		cb->Stroke();

		// Agregar texto dentro del rectángulo
		iTextSharp::text::Font^ rectFont = FontFactory::GetFont(FontFactory::HELVETICA, 10, iTextSharp::text::Font::BOLD);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("RUC: 20512050200", rectFont), 405, 730, 0);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("Boleta de venta Electrónica", rectFont), 405, 715, 0);
		ColumnText::ShowTextAligned(cb, Element::ALIGN_LEFT, gcnew Phrase("B001-001", rectFont), 405, 700, 0);


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

		// Agregar fecha en posición específica
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
		document->Add(gcnew Paragraph("Cliente: " + txtClientOrder->Text, contentFont));

		// Verificar si el CheckBox está marcado
		if (checkBox->Checked) {
			// Si está marcado, agregar el RUC al PDF
			document->Add(gcnew Paragraph("RUC: " + txtRUCOrder->Text, contentFont));
		}

		document->Add(gcnew Paragraph(" ")); // Espacio en blanco

		// Detalles de la Compra
		Paragraph^ purchaseDetails = gcnew Paragraph("Detalles de la Compra", sectionFont);
		purchaseDetails->Alignment = Element::ALIGN_LEFT;
		document->Add(purchaseDetails);

		document->Add(gcnew Paragraph(" ")); // Añadir espacio en blanco después de los detalles de la compra

		PdfPTable^ table = gcnew PdfPTable(3); // Crear una tabla con 3 columnas

		// Encabezados de la tabla
		table->AddCell("Descripción");
		table->AddCell("Cantidad");
		table->AddCell("Subtotal (S/.)");

		// Añadir filas a la tabla
		for each (DataGridViewRow ^ row in dgvOrder->Rows) {
			if (row->Cells["NameOrder"]->Value != nullptr) {
				table->AddCell(gcnew Phrase(row->Cells["DescriptionOrder"]->Value->ToString(), contentFont));
				table->AddCell(gcnew Phrase(row->Cells["QuantityOrder"]->Value->ToString(), contentFont));
				table->AddCell(gcnew Phrase(row->Cells["SubTotalPriceOrder"]->Value->ToString(), contentFont));
			}
		}

		// Ancho de las columnas
		array<float>^ columnWidths = { 3.0f, 1.0f, 1.0f }; // El ancho de la primera columna (descripción) será 3 veces el ancho de las otras dos columnas
		table->SetWidths(columnWidths);

		// Establecer el ancho de la tabla
		table->WidthPercentage = 100;

		document->Add(table);

		document->Add(gcnew Paragraph(" ")); // Espacio en blanco

		// Calcular IGV y Base Imponible
		double totalAmount = Convert::ToDouble(txtTotal->Text);
		double igv = totalAmount * 0.18;
		double baseImponible = totalAmount - igv;

		// Mostrar Base Imponible
		Paragraph^ baseImponibleParagraph = gcnew Paragraph("Base Imponible: S/. " + baseImponible.ToString("F2"), contentFont);
		baseImponibleParagraph->Alignment = Element::ALIGN_RIGHT;
		document->Add(baseImponibleParagraph);

		// Mostrar IGV (18% del importe total)
		Paragraph^ igvParagraph = gcnew Paragraph("IGV: S/. " + igv.ToString("F2"), contentFont);
		igvParagraph->Alignment = Element::ALIGN_RIGHT;
		document->Add(igvParagraph);

		// Mostrar Importe Total
		Paragraph^ totalPrice = gcnew Paragraph("Importe Total (S/.): " + totalAmount.ToString("F2"), sectionFont);
		totalPrice->Alignment = Element::ALIGN_RIGHT;
		document->Add(totalPrice);

		// Pie de página
		document->Add(gcnew Paragraph(" "));
		Paragraph^ footer = gcnew Paragraph("Gracias por su compra", FontFactory::GetFont(FontFactory::HELVETICA_OBLIQUE, 12));
		footer->Alignment = Element::ALIGN_CENTER;
		document->Add(footer);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al generar el PDF: " + ex->Message);
	}
	finally {
		if (document->IsOpen()) {
			document->Close();
		}
	}

	MessageBox::Show("PDF generado exitosamente");
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
