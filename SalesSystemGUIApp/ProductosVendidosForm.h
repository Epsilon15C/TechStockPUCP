#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sql.h> // Incluir para trabajar con SQL Server

using namespace System;

using namespace System::Collections::Generic;

using namespace System::Windows::Forms::DataVisualization::Charting;

using namespace System::Data::SqlClient; // Para trabajar con SQL Server



namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ProductosVendidosForm
	/// </summary>
	public ref class ProductosVendidosForm : public System::Windows::Forms::Form
	{
	public:
		ProductosVendidosForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductosVendidosForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;



	
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

			return conn;
		}
			




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(137, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Productos";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(371, 356);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Productos Más Vendidos";
			this->chart1->Titles->Add(title1);
			// 
			// ProductosVendidosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 395);
			this->Controls->Add(this->chart1);
			this->Name = L"ProductosVendidosForm";
			this->Text = L"ProductosVendidosForm";
			this->Load += gcnew System::EventHandler(this, &ProductosVendidosForm::ProductosVendidosForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void ProductosVendidosForm_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			conn = GetConnection();
			conn->Open();
			String^ query = "SELECT PRODUCT_ID, SUM(QUANTITY) AS SoldCount FROM ORDER_PRODUCT GROUP BY PRODUCT_ID ORDER BY SoldCount DESC";
			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			SqlDataReader^ reader = cmd->ExecuteReader();

			// Crear diccionario para almacenar ProductId y SoldCount
			Dictionary<int, int>^ productSales = gcnew Dictionary<int, int>();

			// Leer los datos y almacenarlos en el diccionario
			int totalSales = 0;
			while (reader->Read()) {
				int productId = reader->GetInt32(0);
				int soldCount = reader->GetInt32(1);
				productSales->Add(productId, soldCount);
				totalSales += soldCount;
			}

			reader->Close();

			// Limpiar datos anteriores
			chart1->Series["Productos"]->Points->Clear();

			// Obtener el nombre del producto y agregarlo al gráfico
			for each (KeyValuePair<int, int> ^ kvp in productSales) {
				String^ productQuery = "SELECT NAME FROM PRODUCT WHERE ID = @ProductID";
				SqlCommand^ productCmd = gcnew SqlCommand(productQuery, conn);
				productCmd->Parameters->AddWithValue("@ProductID", kvp->Key);
				SqlDataReader^ productReader = productCmd->ExecuteReader();
				String^ productName = "";

				if (productReader->Read()) {
					productName = productReader->GetString(0);
				}

				productReader->Close();

				double percentage = (kvp->Value / (double)totalSales) * 100;
				DataPoint^ point = gcnew DataPoint();
				point->SetValueXY(productName, kvp->Value);
				point->LegendText = productName;
				point->Label = String::Format("{0:F2}%", percentage);
				chart1->Series["Productos"]->Points->Add(point);
			}

			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar datos: " + ex->Message);
		}

	}



	};

}
