#pragma once

#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sql.h> // Incluir para trabajar con SQL Server

using namespace System;

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
	/// Resumen de ReportClientsSales
	/// </summary>
	public ref class ReportClientsSales : public System::Windows::Forms::Form
	{
	public:
		ReportClientsSales(void)
		{
			InitializeComponent();
			//conn = GetConnection();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ReportClientsSales()
		{
			if (components)
			{
				delete components;
			}

			if (conn != nullptr)
			{
				if (conn->State == ConnectionState::Open)
				{
					conn->Close();
				}
				delete conn;
			}

		}


	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
	System::ComponentModel::Container^ components;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

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

			return conn;
		}

		// M�todo para cargar los datos de ventas por clientes al gr�fico de barras
		void CargarReporteVentasClientes()
		{
			// Nueva consulta para obtener los 3 clientes que m�s han comprado
			String^ query = "SELECT TOP 3 P.USERNAME AS CUSTOMER_NAME, SUM(SO.TOTAL_AMOUNT) AS TOTAL_VENTAS "
				"FROM SALES_ORDER SO "
				"INNER JOIN PERSON P ON SO.PERSON_ID = P.ID "
				"GROUP BY P.USERNAME "
				"ORDER BY TOTAL_VENTAS DESC";

			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			SqlDataReader^ reader;


			try {
				conn->Open();
	
				reader = cmd->ExecuteReader();
		
				// Limpiar series anteriores del gr�fico
				chart1->Series->Clear();

				// Crear una serie para los datos
				Series^ series = gcnew Series("Ventas");
				series->ChartType = SeriesChartType::Column;
				chart1->Series->Add(series);

				int rowCount = 0; // Contador de filas

				// Agregar los datos al gr�fico de barras
				while (reader->Read()) {
					String^ cliente = safe_cast<String^>(reader["CUSTOMER_NAME"]->ToString());
					double totalVentas = Convert::ToDouble(reader["TOTAL_VENTAS"]);

					series->Points->AddXY(cliente, totalVentas);
					rowCount++; // Incrementar el contador de filas
				}

				reader->Close();

				// Configurar el t�tulo del gr�fico
				chart1->Titles->Clear(); // Limpiar t�tulos anteriores
				Title^ titulo = gcnew Title("Reporte de Ventas por Clientes (TOP 3)");
				titulo->ForeColor = System::Drawing::Color::White; // Ajuste de color para verificar visibilidad
				titulo->Font = gcnew System::Drawing::Font("Arial", 12);
				chart1->Titles->Add(titulo);

				// Configurar nombres de ejes
				chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Clientes";
				chart1->ChartAreas["ChartArea1"]->AxisY->Title = "Monto Vendido (soles)";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar los datos: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				if (conn->State == ConnectionState::Open) {
					conn->Close();
				}
			}

		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReportClientsSales::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Black;
			chartArea1->AxisX->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisX->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea1->AxisX->TitleForeColor = System::Drawing::Color::White;
			chartArea1->AxisY->LabelStyle->ForeColor = System::Drawing::Color::White;
			chartArea1->AxisY->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->MajorGrid->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->MajorTickMark->LineColor = System::Drawing::Color::White;
			chartArea1->AxisY->TitleForeColor = System::Drawing::Color::White;
			chartArea1->BackColor = System::Drawing::Color::Black;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackColor = System::Drawing::Color::Black;
			legend1->ForeColor = System::Drawing::Color::White;
			legend1->Name = L"Legend1";
			legend1->TitleBackColor = System::Drawing::Color::Black;
			legend1->TitleForeColor = System::Drawing::Color::White;
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(96, 37);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(620, 399);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// ReportClientsSales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(799, 458);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ReportClientsSales";
			this->Text = L"Reporte de clientes";
			this->Load += gcnew System::EventHandler(this, &ReportClientsSales::ReportClientsSales_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void ReportClientsSales_Load(System::Object^ sender, System::EventArgs^ e) {
		// Cargar reporte de ventas al cargar el formulario
		conn = GetConnection();
		CargarReporteVentasClientes();

	}
};
}
