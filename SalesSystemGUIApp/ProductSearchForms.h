#pragma once

#include "productosForm.h"


namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesSystemModel;

	using namespace SalesSystemService;
	/// <summary>
	/// Resumen de ProductSearchForms
	/// </summary>
	/// 
	/// 
	
	// Delegado para el evento de selección de producto
	public delegate void ProductSelectedEventHandler(Product^ selectedProduct);

	public ref class ProductSearchForms : public System::Windows::Forms::Form
	{
	public:
		ProductSearchForms(void)
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
		~ProductSearchForms()
		{
			if (components)
			{
				delete components;
			}
		}

	public:
		// Declaración del evento
		event ProductSelectedEventHandler^ ProductSelected;


	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtNameProduct;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtDescriptionProduct;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSearchProduct;
	private: System::Windows::Forms::Button^ btnCancelProduct;




	private: System::Windows::Forms::DataGridView^ dgvSearch;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceProduct;















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
			this->txtNameProduct = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDescriptionProduct = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSearchProduct = (gcnew System::Windows::Forms::Button());
			this->btnCancelProduct = (gcnew System::Windows::Forms::Button());
			this->dgvSearch = (gcnew System::Windows::Forms::DataGridView());
			this->NameProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNameProduct
			// 
			this->txtNameProduct->Location = System::Drawing::Point(97, 35);
			this->txtNameProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNameProduct->Name = L"txtNameProduct";
			this->txtNameProduct->Size = System::Drawing::Size(184, 20);
			this->txtNameProduct->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(25, 38);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre:";
			// 
			// txtDescriptionProduct
			// 
			this->txtDescriptionProduct->Location = System::Drawing::Point(123, 77);
			this->txtDescriptionProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDescriptionProduct->Name = L"txtDescriptionProduct";
			this->txtDescriptionProduct->Size = System::Drawing::Size(158, 20);
			this->txtDescriptionProduct->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(25, 80);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Descripción:";
			// 
			// btnSearchProduct
			// 
			this->btnSearchProduct->BackColor = System::Drawing::Color::LawnGreen;
			this->btnSearchProduct->FlatAppearance->BorderSize = 0;
			this->btnSearchProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchProduct->Location = System::Drawing::Point(86, 128);
			this->btnSearchProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSearchProduct->Name = L"btnSearchProduct";
			this->btnSearchProduct->Size = System::Drawing::Size(98, 25);
			this->btnSearchProduct->TabIndex = 14;
			this->btnSearchProduct->Text = L"Buscar";
			this->btnSearchProduct->UseVisualStyleBackColor = false;
			this->btnSearchProduct->Click += gcnew System::EventHandler(this, &ProductSearchForms::btnSearchProduct_Click);
			// 
			// btnCancelProduct
			// 
			this->btnCancelProduct->BackColor = System::Drawing::Color::LawnGreen;
			this->btnCancelProduct->FlatAppearance->BorderSize = 0;
			this->btnCancelProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelProduct->Location = System::Drawing::Point(213, 128);
			this->btnCancelProduct->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCancelProduct->Name = L"btnCancelProduct";
			this->btnCancelProduct->Size = System::Drawing::Size(98, 25);
			this->btnCancelProduct->TabIndex = 15;
			this->btnCancelProduct->Text = L"Cancelar";
			this->btnCancelProduct->UseVisualStyleBackColor = false;
			this->btnCancelProduct->Click += gcnew System::EventHandler(this, &ProductSearchForms::btnCancelProduct_Click);
			// 
			// dgvSearch
			// 
			this->dgvSearch->AllowUserToAddRows = false;
			this->dgvSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->NameProduct,
					this->DescriptionProduct, this->PriceProduct
			});
			this->dgvSearch->Location = System::Drawing::Point(11, 171);
			this->dgvSearch->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvSearch->Name = L"dgvSearch";
			this->dgvSearch->RowHeadersVisible = false;
			this->dgvSearch->RowHeadersWidth = 51;
			this->dgvSearch->RowTemplate->Height = 24;
			this->dgvSearch->Size = System::Drawing::Size(402, 122);
			this->dgvSearch->TabIndex = 22;
			this->dgvSearch->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForms::dgvSearch_CellClick);
			this->dgvSearch->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForms::dgvSearch_CellContentClick);
			// 
			// NameProduct
			// 
			this->NameProduct->HeaderText = L"Nombre";
			this->NameProduct->MinimumWidth = 6;
			this->NameProduct->Name = L"NameProduct";
			this->NameProduct->Width = 125;
			// 
			// DescriptionProduct
			// 
			this->DescriptionProduct->HeaderText = L"Descripción";
			this->DescriptionProduct->MinimumWidth = 6;
			this->DescriptionProduct->Name = L"DescriptionProduct";
			this->DescriptionProduct->Width = 150;
			// 
			// PriceProduct
			// 
			this->PriceProduct->HeaderText = L"Precio";
			this->PriceProduct->MinimumWidth = 6;
			this->PriceProduct->Name = L"PriceProduct";
			this->PriceProduct->Width = 125;
			// 
			// ProductSearchForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(444, 313);
			this->Controls->Add(this->dgvSearch);
			this->Controls->Add(this->btnCancelProduct);
			this->Controls->Add(this->btnSearchProduct);
			this->Controls->Add(this->txtDescriptionProduct);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNameProduct);
			this->Controls->Add(this->label1);
			this->Name = L"ProductSearchForms";
			this->Text = L"ProductSearchForms";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Método de búsqueda de productos
		List<Product^>^ SearchProducts(String^ nameTerm, String^ descriptionTerm, List<Product^>^ productList) {
			List<Product^>^ result = gcnew List<Product^>();

			for each (Product ^ product in productList) {
				// Verificar si el término de búsqueda coincide con el nombre o descripción del producto
				bool matchesName = !String::IsNullOrEmpty(nameTerm) && product->Name->IndexOf(nameTerm, StringComparison::OrdinalIgnoreCase) >= 0;
				bool matchesDescription = !String::IsNullOrEmpty(descriptionTerm) && product->Description->IndexOf(descriptionTerm, StringComparison::OrdinalIgnoreCase) >= 0;

				if (matchesName || matchesDescription) {
					result->Add(product);
				}
			}

			return result;
		}


		// Método ShowAllProducts que acepta términos de búsqueda para nombre y descripción
		void ShowAllProducts(String^ nameTerm, String^ descriptionTerm) {
			try {
				List<Product^>^ productList = Service::QueryAllProducts();
				if (!String::IsNullOrEmpty(nameTerm) || !String::IsNullOrEmpty(descriptionTerm)) {
					productList = SearchProducts(nameTerm, descriptionTerm, productList);
				}

				if (productList != nullptr) {
					dgvSearch->Rows->Clear();
					for (int i = 0; i < productList->Count; i++) {
						dgvSearch->Rows->Add(gcnew array<String^> {
							productList[i]->Name,
								productList[i]->Description,
								productList[i]->Price.ToString()
						});
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al cargar los productos: " + ex->Message);
			}
		}



	private: System::Void btnSearchProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nameTerm = txtNameProduct->Text;
		String^ descriptionTerm = txtDescriptionProduct->Text;
		ShowAllProducts(nameTerm, descriptionTerm); // Llama a ShowAllProducts con los términos de búsqueda
	}



private: System::Void btnCancelProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();

}


private: System::Void dgvSearch_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}


private: System::Void dgvSearch_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Verificar si se hizo clic en una celda válida
	if (e->RowIndex >= 0) {
		DataGridViewRow^ selectedRow = dgvSearch->Rows[e->RowIndex];

		// Obtener los datos de la fila seleccionada
		String^ productName = selectedRow->Cells["NameProduct"]->Value->ToString();
		String^ productDescription = selectedRow->Cells["DescriptionProduct"]->Value->ToString();
		String^ productPrice = selectedRow->Cells["PriceProduct"]->Value->ToString();

		// Crear un objeto Product
		Product^ selectedProduct = gcnew Product(0, productName, productDescription, gcnew array<Byte>(0), Convert::ToDouble(productPrice), 0);

		// Llama al evento ProductSelected
		ProductSelected(selectedProduct);

		this->Close();
	}
}

};
}
