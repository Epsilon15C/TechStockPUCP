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
	/// Resumen de ReporteVentasForm
	/// </summary>
	public ref class ReporteVentasForm : public System::Windows::Forms::Form
	{
	public:
		ReporteVentasForm(void)
		{
			InitializeComponent();
			//CargarReporteVentas(); // Llamar a método para cargar el reporte de ventas al iniciar el formulario

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReporteVentasForm()
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
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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

		// Método para cargar los datos de ventas al gráfico
		void CargarReporteVentas()
		{
			String^ query = "SELECT ORDER_DATE, SUM(TOTAL_AMOUNT) AS TOTAL_VENTAS "
				"FROM SALES_ORDER "
				"GROUP BY ORDER_DATE";

			SqlCommand^ cmd = gcnew SqlCommand(query, conn);
			SqlDataReader^ reader;

			try {
				conn->Open();
				reader = cmd->ExecuteReader();

				// Limpiar series anteriores del gráfico
				chart1->Series["VENTAS"]->Points->Clear();

				// Agregar los datos al gráfico
				while (reader->Read()) {
					String^ fecha = safe_cast<String^>(reader["ORDER_DATE"]->ToString());
					double totalVentas = Convert::ToDouble(reader["TOTAL_VENTAS"]);
					chart1->Series["VENTAS"]->Points->AddXY(fecha, totalVentas);
				}

				reader->Close();

				// Configurar el título del gráfico
				chart1->Titles->Clear(); // Limpiar títulos anteriores
				chart1->Titles->Add("Reporte de Ventas"); // Título principal del gráfico

				// Configurar nombres de ejes
				chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Fecha";
				chart1->ChartAreas["ChartArea1"]->AxisY->Title = "Monto Vendido (soles)";
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar los datos: " + ex->Message);
			}
			finally {
				if (conn->State == ConnectionState::Open) {
					conn->Close();
				}
			}
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(109, 42);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(519, 306);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(109, 42);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"VENTAS";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(519, 306);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// ReporteVentasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(771, 404);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ReporteVentasForm";
			this->Text = L"ReporteVentasForm";
			this->Load += gcnew System::EventHandler(this, &ReporteVentasForm::ReporteVentasForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void ReporteVentasForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Cargar reporte de ventas al cargar el formulario
		conn = GetConnection();
		CargarReporteVentas();

	}
};
}
