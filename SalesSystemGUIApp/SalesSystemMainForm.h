#pragma once
#include "clientesForm.h"
#include "proveedoresForm.h"
#include "productosForm.h"
#include "LoginForm.h"
#include "GeneratOrderForm.h"
#include "CreateAccountForm.h"
#include "preguntasfrecuentes.h"
#include "ReporteVentasForm.h"
#include "ProductosVendidosForm.h"
#include "ProductPickUpForm.h"


namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SalesSystemMainForm
	/// </summary>
	


	public ref class SalesSystemMainForm : public System::Windows::Forms::Form
	{
	public:
		 int iDUsuarioActual;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gráficoDeProductosVendidosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ recojoDelProductoToolStripMenuItem;
	public:
		static Customer^ Customer;
		SalesSystemMainForm(void)
		{
			InitializeComponent();
			this->IsMdiContainer = true;

			// Aquí establecemos las propiedades para quitar los botones
			this->ControlBox = false;
			this->MinimizeBox = false;
			this->MaximizeBox = false;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;

			// Establecemos el color de fondo a negro
			this->BackColor = System::Drawing::Color::Black;

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesSystemMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proveedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transaccionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ preguntasFrecuentesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generrOrdenToolStripMenuItem;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesSystemMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proveedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generrOrdenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recojoDelProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gráficoDeProductosVendidosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preguntasFrecuentesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->transaccionesToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1371, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->productosToolStripMenuItem,
					this->proveedoresToolStripMenuItem, this->clientesToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::productosToolStripMenuItem_Click);
			// 
			// proveedoresToolStripMenuItem
			// 
			this->proveedoresToolStripMenuItem->Name = L"proveedoresToolStripMenuItem";
			this->proveedoresToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->proveedoresToolStripMenuItem->Text = L"Proveedores";
			this->proveedoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::proveedoresToolStripMenuItem_Click);
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::clientesToolStripMenuItem_Click);
			// 
			// transaccionesToolStripMenuItem
			// 
			this->transaccionesToolStripMenuItem->Checked = true;
			this->transaccionesToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->transaccionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->generrOrdenToolStripMenuItem,
					this->recojoDelProductoToolStripMenuItem
			});
			this->transaccionesToolStripMenuItem->Name = L"transaccionesToolStripMenuItem";
			this->transaccionesToolStripMenuItem->Size = System::Drawing::Size(114, 24);
			this->transaccionesToolStripMenuItem->Text = L"Transacciones";
			// 
			// generrOrdenToolStripMenuItem
			// 
			this->generrOrdenToolStripMenuItem->Name = L"generrOrdenToolStripMenuItem";
			this->generrOrdenToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->generrOrdenToolStripMenuItem->Text = L"Generar orden";
			this->generrOrdenToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::generrOrdenToolStripMenuItem_Click);
			// 
			// recojoDelProductoToolStripMenuItem
			// 
			this->recojoDelProductoToolStripMenuItem->Name = L"recojoDelProductoToolStripMenuItem";
			this->recojoDelProductoToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->recojoDelProductoToolStripMenuItem->Text = L"Recojo del producto";
			this->recojoDelProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::recojoDelProductoToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reporteDeVentasToolStripMenuItem,
					this->gráficoDeProductosVendidosToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// reporteDeVentasToolStripMenuItem
			// 
			this->reporteDeVentasToolStripMenuItem->Name = L"reporteDeVentasToolStripMenuItem";
			this->reporteDeVentasToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->reporteDeVentasToolStripMenuItem->Text = L"Reporte de ventas";
			this->reporteDeVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::reporteDeVentasToolStripMenuItem_Click);
			// 
			// gráficoDeProductosVendidosToolStripMenuItem
			// 
			this->gráficoDeProductosVendidosToolStripMenuItem->Name = L"gráficoDeProductosVendidosToolStripMenuItem";
			this->gráficoDeProductosVendidosToolStripMenuItem->Size = System::Drawing::Size(301, 26);
			this->gráficoDeProductosVendidosToolStripMenuItem->Text = L"Reporte de productos vendidos";
			this->gráficoDeProductosVendidosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::gráficoDeProductosVendidosToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->preguntasFrecuentesToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// preguntasFrecuentesToolStripMenuItem
			// 
			this->preguntasFrecuentesToolStripMenuItem->Name = L"preguntasFrecuentesToolStripMenuItem";
			this->preguntasFrecuentesToolStripMenuItem->Size = System::Drawing::Size(231, 26);
			this->preguntasFrecuentesToolStripMenuItem->Text = L"Preguntas Frecuentes";
			this->preguntasFrecuentesToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::preguntasFrecuentesToolStripMenuItem_Click);
			// 
			// SalesSystemMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1371, 750);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SalesSystemMainForm";
			this->Text = L"TechStockPUCP";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &SalesSystemMainForm::SalesSystemMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void SalesSystemMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm(this);
		loginForm->ShowDialog();
	}
		   public:
			   void EnableCustomerOptions() {
				   mantenimientoToolStripMenuItem->Visible = false;
				   productosToolStripMenuItem->Visible = true;
				   clientesToolStripMenuItem->Visible = true;
				   reporteToolStripMenuItem->Visible = false;
				   proveedoresToolStripMenuItem->Visible = true;

			   }
			   void EnableAdminOptions() {
				   mantenimientoToolStripMenuItem->Visible = true;
				   productosToolStripMenuItem->Visible = true;
				   clientesToolStripMenuItem->Visible = true;
				   reporteToolStripMenuItem->Visible = true;
				   proveedoresToolStripMenuItem->Visible = true;
			   }
			   void EnableOperatorOptions() {
				   mantenimientoToolStripMenuItem->Visible = true;
				   productosToolStripMenuItem->Visible = true;
				   clientesToolStripMenuItem->Visible = false;
				   reporteToolStripMenuItem->Visible = true;
				   proveedoresToolStripMenuItem->Visible = true;
			   }

			  
#pragma endregion

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Esta seguro de que desea salir?", "Confirmar salida", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
	private: System::Void clientesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//Form^ clientesForm = gcnew Form();
		clientesForm^ clienteForm = gcnew clientesForm();
		clienteForm->MdiParent = this;
		clienteForm->Show();
		clienteForm->btnAdd->Enabled = false;
		clienteForm->btnUpdate->Enabled = false;
		clienteForm->btnDelete->Enabled = false;
	}
	   private: System::Void proveedoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		   //Form^ proveedoresForm = gcnew Form();
		   proveedoresForm^ proveedorForm = gcnew proveedoresForm;
		   proveedorForm->MdiParent = this;
		   proveedorForm->Show();

		   proveedorForm->btnAdd->Enabled = false;
		   proveedorForm->btnUpdate->Enabled = false;
		   proveedorForm->btnDelete->Enabled = false;

	   }

			   private: System::Void productosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				   //Form^ proveedoresForm = gcnew Form();
				   productosForm^ productForm = gcnew productosForm;
				   productForm->MdiParent = this;
				   productForm->Show();
			   }
private: System::Void generrOrdenToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GeneratOrderForm^ orderForm = gcnew GeneratOrderForm();
	orderForm->MdiParent = this;
	iDUsuarioActual = UserSession::UserId;
	orderForm->txtClientOrder->Text = Service::QueryCustomerById(iDUsuarioActual)->Name + " "
		+ Service::QueryCustomerById(iDUsuarioActual)->LastName;
	orderForm->Show();
}

private: System::Void preguntasFrecuentesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	preguntasfrecuentes^ Preguntasfrec = gcnew preguntasfrecuentes();
	Preguntasfrec->ShowDialog();

}
private: System::Void reporteDeVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ReporteVentasForm^ reporteVentas = gcnew ReporteVentasForm();
	reporteVentas->Show();
}
private: System::Void gráficoDeProductosVendidosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductosVendidosForm^ productosVendidos = gcnew ProductosVendidosForm();
	productosVendidos->MdiParent = this;
	productosVendidos->Show();

}
private: System::Void recojoDelProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductPickUpForm^ RecojoProducto = gcnew ProductPickUpForm();
	RecojoProducto->Show();
}
};

}

