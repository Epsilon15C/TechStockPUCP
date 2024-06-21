#pragma once

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
	/// Resumen de proveedoresForm
	/// </summary>
	public ref class proveedoresForm : public System::Windows::Forms::Form
	{
	public:
		proveedoresForm(void)
		{
			InitializeComponent();
			proveedor = gcnew System::ComponentModel::Container();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~proveedoresForm()
		{
			if (proveedor)
			{
				delete proveedor;
			}
		}
	
	private: System::Windows::Forms::Label^ lblTitle;
	
	public: System::Windows::Forms::Button^ btnAdd;
	public: System::Windows::Forms::Button^ btnUpdate;
	public: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Label^ lblId;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ lblRUC;
	private: System::Windows::Forms::TextBox^ txtRUC;
	private: System::Windows::Forms::Label^ lblAccount;
	private: System::Windows::Forms::TextBox^ txtAccount;
	private: System::Windows::Forms::Label^ lblWebsite;
	private: System::Windows::Forms::TextBox^ txtWebsite;
	private: System::Windows::Forms::Label^ lblPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::DataGridView^ dgvProvider;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProviderId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProviderName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RUC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Account;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Website;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhoneNumber;
	private: System::Windows::Forms::Button^ btnCleanControls;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;



















	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^ proveedor;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvProvider = (gcnew System::Windows::Forms::DataGridView());
			this->ProviderId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProviderName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Account = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Website = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblRUC = (gcnew System::Windows::Forms::Label());
			this->txtRUC = (gcnew System::Windows::Forms::TextBox());
			this->lblAccount = (gcnew System::Windows::Forms::Label());
			this->txtAccount = (gcnew System::Windows::Forms::TextBox());
			this->lblWebsite = (gcnew System::Windows::Forms::Label());
			this->txtWebsite = (gcnew System::Windows::Forms::TextBox());
			this->lblPhoneNumber = (gcnew System::Windows::Forms::Label());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCleanControls = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProvider))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvProvider
			// 
			this->dgvProvider->AllowUserToAddRows = false;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->dgvProvider->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvProvider->BackgroundColor = System::Drawing::SystemColors::ControlDark;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvProvider->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dgvProvider->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProvider->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ProviderId,
					this->ProviderName, this->RUC, this->Account, this->Website, this->PhoneNumber
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvProvider->DefaultCellStyle = dataGridViewCellStyle3;
			this->dgvProvider->Location = System::Drawing::Point(12, 310);
			this->dgvProvider->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvProvider->Name = L"dgvProvider";
			this->dgvProvider->RowHeadersVisible = false;
			this->dgvProvider->RowHeadersWidth = 82;
			this->dgvProvider->RowTemplate->Height = 33;
			this->dgvProvider->Size = System::Drawing::Size(957, 226);
			this->dgvProvider->TabIndex = 12;
			this->dgvProvider->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &proveedoresForm::dgvProvider_CellClick);
			// 
			// ProviderId
			// 
			this->ProviderId->HeaderText = L"Id";
			this->ProviderId->MinimumWidth = 10;
			this->ProviderId->Name = L"ProviderId";
			this->ProviderId->Width = 50;
			// 
			// ProviderName
			// 
			this->ProviderName->HeaderText = L"Nombre";
			this->ProviderName->MinimumWidth = 10;
			this->ProviderName->Name = L"ProviderName";
			this->ProviderName->Width = 125;
			// 
			// RUC
			// 
			this->RUC->HeaderText = L"RUC";
			this->RUC->MinimumWidth = 6;
			this->RUC->Name = L"RUC";
			this->RUC->Width = 125;
			// 
			// Account
			// 
			this->Account->HeaderText = L"Account";
			this->Account->MinimumWidth = 6;
			this->Account->Name = L"Account";
			this->Account->Width = 125;
			// 
			// Website
			// 
			this->Website->HeaderText = L"Website";
			this->Website->MinimumWidth = 6;
			this->Website->Name = L"Website";
			this->Website->Width = 200;
			// 
			// PhoneNumber
			// 
			this->PhoneNumber->HeaderText = L"PhoneNumber";
			this->PhoneNumber->MinimumWidth = 6;
			this->PhoneNumber->Name = L"PhoneNumber";
			this->PhoneNumber->Width = 125;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(13, 266);
			this->lblTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(178, 22);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Lista de proveedores";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblId->ForeColor = System::Drawing::Color::White;
			this->lblId->Location = System::Drawing::Point(47, 37);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(33, 28);
			this->lblId->TabIndex = 13;
			this->lblId->Text = L"Id:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(142, 43);
			this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(105, 22);
			this->txtId->TabIndex = 14;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(142, 85);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(230, 22);
			this->txtName->TabIndex = 5;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(47, 79);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(89, 28);
			this->lblName->TabIndex = 3;
			this->lblName->Text = L"Nombre:";
			// 
			// lblRUC
			// 
			this->lblRUC->AutoSize = true;
			this->lblRUC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRUC->ForeColor = System::Drawing::Color::White;
			this->lblRUC->Location = System::Drawing::Point(47, 125);
			this->lblRUC->Name = L"lblRUC";
			this->lblRUC->Size = System::Drawing::Size(54, 28);
			this->lblRUC->TabIndex = 15;
			this->lblRUC->Text = L"RUC:";
			// 
			// txtRUC
			// 
			this->txtRUC->Location = System::Drawing::Point(142, 132);
			this->txtRUC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtRUC->Name = L"txtRUC";
			this->txtRUC->Size = System::Drawing::Size(230, 22);
			this->txtRUC->TabIndex = 16;
			// 
			// lblAccount
			// 
			this->lblAccount->AutoSize = true;
			this->lblAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAccount->ForeColor = System::Drawing::Color::White;
			this->lblAccount->Location = System::Drawing::Point(514, 43);
			this->lblAccount->Name = L"lblAccount";
			this->lblAccount->Size = System::Drawing::Size(178, 28);
			this->lblAccount->TabIndex = 17;
			this->lblAccount->Text = L"Número de cuenta:";
			// 
			// txtAccount
			// 
			this->txtAccount->Location = System::Drawing::Point(724, 43);
			this->txtAccount->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtAccount->Name = L"txtAccount";
			this->txtAccount->Size = System::Drawing::Size(245, 22);
			this->txtAccount->TabIndex = 18;
			// 
			// lblWebsite
			// 
			this->lblWebsite->AutoSize = true;
			this->lblWebsite->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWebsite->ForeColor = System::Drawing::Color::White;
			this->lblWebsite->Location = System::Drawing::Point(514, 85);
			this->lblWebsite->Name = L"lblWebsite";
			this->lblWebsite->Size = System::Drawing::Size(204, 28);
			this->lblWebsite->TabIndex = 19;
			this->lblWebsite->Text = L"Web / Dirección física:";
			// 
			// txtWebsite
			// 
			this->txtWebsite->Location = System::Drawing::Point(724, 85);
			this->txtWebsite->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtWebsite->Name = L"txtWebsite";
			this->txtWebsite->Size = System::Drawing::Size(245, 22);
			this->txtWebsite->TabIndex = 20;
			// 
			// lblPhoneNumber
			// 
			this->lblPhoneNumber->AutoSize = true;
			this->lblPhoneNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhoneNumber->ForeColor = System::Drawing::Color::White;
			this->lblPhoneNumber->Location = System::Drawing::Point(514, 132);
			this->lblPhoneNumber->Name = L"lblPhoneNumber";
			this->lblPhoneNumber->Size = System::Drawing::Size(177, 28);
			this->lblPhoneNumber->TabIndex = 19;
			this->lblPhoneNumber->Text = L"Número de celular:";
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(724, 132);
			this->txtPhoneNumber->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(158, 22);
			this->txtPhoneNumber->TabIndex = 20;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::Black;
			this->btnAdd->Location = System::Drawing::Point(151, 193);
			this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(154, 49);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &proveedoresForm::btnAdd_Click);
			this->btnAdd->MouseEnter += gcnew System::EventHandler(this, &proveedoresForm::btnAdd_MouseEnter);
			this->btnAdd->MouseLeave += gcnew System::EventHandler(this, &proveedoresForm::btnAdd_MouseLeave);
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::Black;
			this->btnUpdate->Location = System::Drawing::Point(356, 193);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(143, 49);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &proveedoresForm::btnUpdate_Click);
			this->btnUpdate->MouseEnter += gcnew System::EventHandler(this, &proveedoresForm::btnUpdate_MouseEnter);
			this->btnUpdate->MouseLeave += gcnew System::EventHandler(this, &proveedoresForm::btnUpdate_MouseLeave);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::Black;
			this->btnDelete->Location = System::Drawing::Point(542, 193);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(150, 49);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &proveedoresForm::btnDelete_Click);
			this->btnDelete->MouseEnter += gcnew System::EventHandler(this, &proveedoresForm::btnDelete_MouseEnter);
			this->btnDelete->MouseLeave += gcnew System::EventHandler(this, &proveedoresForm::btnDelete_MouseLeave);
			// 
			// btnCleanControls
			// 
			this->btnCleanControls->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanControls->FlatAppearance->BorderSize = 0;
			this->btnCleanControls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanControls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanControls->ForeColor = System::Drawing::Color::Black;
			this->btnCleanControls->Location = System::Drawing::Point(773, 200);
			this->btnCleanControls->Name = L"btnCleanControls";
			this->btnCleanControls->Size = System::Drawing::Size(178, 42);
			this->btnCleanControls->TabIndex = 21;
			this->btnCleanControls->Text = L"Limpiar todo";
			this->btnCleanControls->UseVisualStyleBackColor = false;
			this->btnCleanControls->Click += gcnew System::EventHandler(this, &proveedoresForm::btnCleanControls_Click);
			this->btnCleanControls->MouseEnter += gcnew System::EventHandler(this, &proveedoresForm::btnCleanControls_MouseEnter);
			this->btnCleanControls->MouseLeave += gcnew System::EventHandler(this, &proveedoresForm::btnCleanControls_MouseLeave);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->BackColor = System::Drawing::Color::RoyalBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(983, 33);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->BackColor = System::Drawing::Color::RoyalBlue;
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(86, 29);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->BackColor = System::Drawing::Color::DarkBlue;
			this->nuevoToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(173, 30);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &proveedoresForm::nuevoToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->BackColor = System::Drawing::Color::DarkBlue;
			this->modificarToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(173, 30);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &proveedoresForm::modificarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->BackColor = System::Drawing::Color::DarkBlue;
			this->salirToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(173, 30);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &proveedoresForm::salirToolStripMenuItem_Click);
			// 
			// proveedoresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(983, 547);
			this->Controls->Add(this->btnCleanControls);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtRUC);
			this->Controls->Add(this->lblRUC);
			this->Controls->Add(this->txtAccount);
			this->Controls->Add(this->lblAccount);
			this->Controls->Add(this->txtWebsite);
			this->Controls->Add(this->lblWebsite);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->lblPhoneNumber);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->dgvProvider);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"proveedoresForm";
			this->Text = L"Mantenimiento de proveedores";
			this->Load += gcnew System::EventHandler(this, &proveedoresForm::proveedoresForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProvider))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




		void ShowProviders() {
			List<Provider^>^ providerList = Service::QueryAllProviders();
			if (providerList != nullptr) {
				dgvProvider->Rows->Clear();
				for (int i = 0; i < providerList->Count; i++) {
					dgvProvider->Rows->Add(gcnew array<String^> {"" + providerList[i]->Id, providerList[i]->Name,
						providerList[i]->RUC, providerList[i]->Account, "" + providerList[i]->Website, providerList[i]->PhoneNumber});
				}
			}
		}

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		List<Provider^>^ providerList = Service::QueryAllProviders();

		int SiIdHueco = 0;//Variable para saber si hay un hueco en la lista de clientes(Id)
		int IdHueco = 0;//Variable para saber el hueco en la lista de clientes(Id)
		int j = 0;
		for (int i = 0; i < providerList->Count; i++) {


			if (providerList[i]->Id == (i + 1)) {
				SiIdHueco = 0;
			}
			else {
				if (j == 0) {
					IdHueco = i + 1;
					SiIdHueco = 1;
				}
				j = j + 1;
			}





		}
		int id;


		// Asignacion del valor correspondiente al id
		if (SiIdHueco == 0) {
			id = providerList->Count + 1;
		}
		else {
			id = IdHueco;
		}

		String^ name = txtName->Text;
		String^ RUC = txtRUC->Text;
		String^ website = txtWebsite->Text;
		String^ account = txtAccount->Text;
		String^ phoneNumber = txtPhoneNumber->Text;

		// Crear un objeto de tipo Provider y asignar los valores correspondientes
		Provider^ provider = gcnew Provider();
		provider->Id = id;
		provider->Name = name;
		provider->RUC = RUC;
		provider->Account = account;
		provider->Website = website;
		provider->PhoneNumber = phoneNumber;

		Service::AddProvider(provider);
		ShowProviders();

	}
	private: System::Void dgvProvider_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int providerId = Int32::Parse(dgvProvider->Rows[dgvProvider->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Provider^ provider = Service::QueryProviderById(providerId);
		if (provider != nullptr) {
			txtId->Text = Convert::ToString(provider->Id); // "" + robot->Id;
			txtName->Text = provider->Name;
			txtRUC->Text = provider->RUC;
			txtAccount->Text = provider->Account;
			txtWebsite->Text = provider->Website;
			txtPhoneNumber->Text =provider->PhoneNumber;
		}
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		String^ name = txtName->Text;
		String^ RUC = txtRUC->Text;
		String^ website = txtWebsite->Text;
		String^ account = txtAccount->Text;
		String^ phoneNumber = txtPhoneNumber->Text;

		Provider^ provider = gcnew Provider();
		provider->Id = id;
		provider->Name = name;
		provider->RUC = RUC;
		provider->Account = account;
		provider->Website = website;
		provider->PhoneNumber = phoneNumber;

		Service::UpdateProvider(provider);
		ShowProviders();
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		Service::DeleteProvider(id);
		ShowProviders();
	}


		   void CleanControls() {
			   txtId->Text = "";
			   txtName->Text = "";
			   txtRUC->Text = "";
			   txtAccount->Text = "";
			   txtWebsite->Text = "";
			   txtPhoneNumber->Text = "";

		   }




private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   void ClearControls() {
		   txtId->Text = "";
		   txtName->Text = "";
		   //txtBrand->Text = "";
		   txtAccount->Text = "";
		   txtWebsite->Text = "";
		   txtPhoneNumber->Text = "";
		   txtRUC->Text = "";

	   }


private: System::Void btnCleanControls_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
}




private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
}

private: System::Void modificarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}






private: System::Void btnAdd_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd->BackColor = System::Drawing::Color::GreenYellow;
}
private: System::Void btnAdd_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnAdd->BackColor = System::Drawing::Color::FromKnownColor(System::Drawing::KnownColor::LawnGreen);
}
private: System::Void btnUpdate_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnUpdate->BackColor = System::Drawing::Color::GreenYellow;
}
private: System::Void btnUpdate_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnUpdate->BackColor = System::Drawing::Color::FromKnownColor(System::Drawing::KnownColor::LawnGreen);
}
private: System::Void btnDelete_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnDelete->BackColor = System::Drawing::Color::GreenYellow;
}
private: System::Void btnDelete_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnDelete->BackColor = System::Drawing::Color::FromKnownColor(System::Drawing::KnownColor::LawnGreen);
}
private: System::Void btnCleanControls_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->btnCleanControls->BackColor = System::Drawing::Color::LightCyan;
}
private: System::Void btnCleanControls_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->btnCleanControls->BackColor = System::Drawing::Color::FromKnownColor(System::Drawing::KnownColor::LightSkyBlue);
}

private: System::Void proveedoresForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowProviders();
}

};
}
