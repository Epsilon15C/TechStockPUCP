#pragma once

#include "productosForm.h"


namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;

	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductID;
	private: System::Windows::Forms::Label^ label3;















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductSearchForms::typeid));
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
			this->ProductID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearch))->BeginInit();
			this->SuspendLayout();
			// 
			// txtNameProduct
			// 
			this->txtNameProduct->Location = System::Drawing::Point(129, 90);
			this->txtNameProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameProduct->Name = L"txtNameProduct";
			this->txtNameProduct->Size = System::Drawing::Size(244, 22);
			this->txtNameProduct->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(33, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nombre:";
			// 
			// txtDescriptionProduct
			// 
			this->txtDescriptionProduct->Location = System::Drawing::Point(129, 142);
			this->txtDescriptionProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionProduct->Name = L"txtDescriptionProduct";
			this->txtDescriptionProduct->Size = System::Drawing::Size(244, 22);
			this->txtDescriptionProduct->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Descripción:";
			// 
			// btnSearchProduct
			// 
			this->btnSearchProduct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnSearchProduct->FlatAppearance->BorderSize = 0;
			this->btnSearchProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearchProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearchProduct->Location = System::Drawing::Point(116, 198);
			this->btnSearchProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSearchProduct->Name = L"btnSearchProduct";
			this->btnSearchProduct->Size = System::Drawing::Size(131, 31);
			this->btnSearchProduct->TabIndex = 14;
			this->btnSearchProduct->Text = L"Buscar";
			this->btnSearchProduct->UseVisualStyleBackColor = false;
			this->btnSearchProduct->Click += gcnew System::EventHandler(this, &ProductSearchForms::btnSearchProduct_Click);
			// 
			// btnCancelProduct
			// 
			this->btnCancelProduct->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCancelProduct->FlatAppearance->BorderSize = 0;
			this->btnCancelProduct->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelProduct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelProduct->Location = System::Drawing::Point(336, 198);
			this->btnCancelProduct->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancelProduct->Name = L"btnCancelProduct";
			this->btnCancelProduct->Size = System::Drawing::Size(131, 31);
			this->btnCancelProduct->TabIndex = 15;
			this->btnCancelProduct->Text = L"Cancelar";
			this->btnCancelProduct->UseVisualStyleBackColor = false;
			this->btnCancelProduct->Click += gcnew System::EventHandler(this, &ProductSearchForms::btnCancelProduct_Click);
			// 
			// dgvSearch
			// 
			this->dgvSearch->AllowUserToAddRows = false;
			this->dgvSearch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NameProduct,
					this->DescriptionProduct, this->PriceProduct, this->ProductID
			});
			this->dgvSearch->Location = System::Drawing::Point(27, 249);
			this->dgvSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvSearch->Name = L"dgvSearch";
			this->dgvSearch->RowHeadersVisible = false;
			this->dgvSearch->RowHeadersWidth = 51;
			this->dgvSearch->RowTemplate->Height = 24;
			this->dgvSearch->Size = System::Drawing::Size(595, 176);
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
			// ProductID
			// 
			this->ProductID->HeaderText = L"ID";
			this->ProductID->MinimumWidth = 6;
			this->ProductID->Name = L"ProductID";
			this->ProductID->Visible = false;
			this->ProductID->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(33, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(498, 16);
			this->label3->TabIndex = 23;
			this->label3->Text = L"A continuación puede buscar los productos y agregarlos a la orden dando un click:"
				L"";
			// 
			// ProductSearchForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(634, 449);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvSearch);
			this->Controls->Add(this->btnCancelProduct);
			this->Controls->Add(this->btnSearchProduct);
			this->Controls->Add(this->txtDescriptionProduct);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNameProduct);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ProductSearchForms";
			this->Text = L"Busqueda de productos";
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
						String^ productPriceString = productList[i]->Price.ToString("F2");
						dgvSearch->Rows->Add(gcnew array<String^> {
							productList[i]->Name,
								productList[i]->Description,
								productPriceString,
								productList[i]->Id.ToString() // Agregar el ID del producto
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
	if (e->RowIndex >= 0) {
		DataGridViewRow^ selectedRow = dgvSearch->Rows[e->RowIndex];

		String^ productName = selectedRow->Cells["NameProduct"]->Value->ToString();
		String^ productDescription = selectedRow->Cells["DescriptionProduct"]->Value->ToString();
		String^ productPriceString = selectedRow->Cells["PriceProduct"]->Value->ToString();
		String^ productIdString = selectedRow->Cells["ProductID"]->Value->ToString();

		double productPrice;
		int productId;

		if (Double::TryParse(productPriceString, productPrice) && Int32::TryParse(productIdString, productId)) {
			// Añadir un mensaje de depuración
			Console::WriteLine("Producto seleccionado ID: " + productId);

			// Crear un objeto Product con el ID
			Product^ selectedProduct = gcnew Product(productId, productName, productDescription, gcnew array<Byte>(0), productPrice, 0);

			// Llama al evento ProductSelected
			ProductSelected(selectedProduct);

			this->Close();
		}
		else {
			MessageBox::Show("Error: El formato de los datos del producto no es válido.");
		}
	}
}

};
}
