#pragma once

#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sql.h> // Incluir para trabajar con SQL Server


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
			//
			//TODO: agregar código de constructor aquí
			//
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
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// ReporteVentasForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 303);
			this->Name = L"ReporteVentasForm";
			this->Text = L"ReporteVentasForm";
			this->ResumeLayout(false);

		}
#pragma endregion

		/*
		
// Método para generar el reporte de ventas totales por día
void ReporteVentasForm::GenerarReportePorDia() {
    // Obtener la fecha seleccionada del DateTimePicker
    DateTime selectedDate = dateTimePickerFecha->Value;
    String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");

    // Consulta SQL para obtener las ventas totales por día
    String^ query = "SELECT so.ORDER_DATE AS Fecha, SUM(s.TOTAL_AMOUNT_WITH_TAX) AS VentasTotales "
                    "FROM SALES_ORDER so "
                    "JOIN SALE s ON so.ID = s.ORDER_ID "
                    "WHERE CONVERT(date, so.ORDER_DATE) = @Fecha "
                    "GROUP BY so.ORDER_DATE";

    // Establecer la conexión y ejecutar la consulta
    SqlConnection^ connection = GetConnection();
    SqlCommand^ command = gcnew SqlCommand(query, connection);
    command->Parameters->AddWithValue("@Fecha", selectedDateString);

    try {
        connection->Open();
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
        DataTable^ dt = gcnew DataTable();
        adapter->Fill(dt);

        // Mostrar los resultados en el DataGridView
        dataGridViewReporte->DataSource = dt;
    }
    catch (Exception^ ex) {
        MessageBox::Show("Error al generar el reporte: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    finally {
        if (connection->State == ConnectionState::Open) {
            connection->Close();
        }
    }
}

// Evento para el botón de generar reporte
System::Void ReporteVentasForm::btnGenerarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
    GenerarReportePorDia();
}
		*/



	};
}
