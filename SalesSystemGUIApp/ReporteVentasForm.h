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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
		
// M�todo para generar el reporte de ventas totales por d�a
void ReporteVentasForm::GenerarReportePorDia() {
    // Obtener la fecha seleccionada del DateTimePicker
    DateTime selectedDate = dateTimePickerFecha->Value;
    String^ selectedDateString = selectedDate.ToString("yyyy-MM-dd");

    // Consulta SQL para obtener las ventas totales por d�a
    String^ query = "SELECT so.ORDER_DATE AS Fecha, SUM(s.TOTAL_AMOUNT_WITH_TAX) AS VentasTotales "
                    "FROM SALES_ORDER so "
                    "JOIN SALE s ON so.ID = s.ORDER_ID "
                    "WHERE CONVERT(date, so.ORDER_DATE) = @Fecha "
                    "GROUP BY so.ORDER_DATE";

    // Establecer la conexi�n y ejecutar la consulta
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

// Evento para el bot�n de generar reporte
System::Void ReporteVentasForm::btnGenerarReporte_Click(System::Object^ sender, System::EventArgs^ e) {
    GenerarReportePorDia();
}
		*/



	};
}
