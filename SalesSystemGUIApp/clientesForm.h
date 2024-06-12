#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesSystemModel;
	using namespace SalesSystemService;
	using namespace System::Collections::Generic;


	/// <summary>
	/// Resumen de clientesForm
	/// </summary>
	public ref class clientesForm : public System::Windows::Forms::Form {
		public:
			clientesForm(void)
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
			~clientesForm()
			{
				if (components)
				{
					delete components;
				}
			}
		private: System::Windows::Forms::Label^ lblId;
		private: System::Windows::Forms::Label^ lblName;
		private: System::Windows::Forms::Label^ lblDNI;


		protected:

		protected:




		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ lblLastName;
		private: System::Windows::Forms::Label^ lblGender;
		private: System::Windows::Forms::Label^ lblBirthDate;
		private: System::Windows::Forms::TextBox^ txtId;
		private: System::Windows::Forms::TextBox^ txtName;
		private: System::Windows::Forms::TextBox^ txtDNI;






		private: System::Windows::Forms::TextBox^ txtUserName;
		private: System::Windows::Forms::TextBox^ txtGender;
		private: System::Windows::Forms::TextBox^ txtBirthDate;



		private: System::Windows::Forms::TextBox^ txtLastName;
		private: System::Windows::Forms::PictureBox^ pbPhoto;


		private: System::Windows::Forms::DataGridView^ dgvClients;












		public: System::Windows::Forms::Button^ btnAdd;
		public: System::Windows::Forms::Button^ btnDelete;


		public: System::Windows::Forms::Button^ btnUpdate;




		private: System::Windows::Forms::MenuStrip^ menuStrip1;
		private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;


		private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
		private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
		private: System::Windows::Forms::Button^ btnCleanControls;
		private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientUserName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientPassword;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientGender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClientBirthDate;














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
				this->lblId = (gcnew System::Windows::Forms::Label());
				this->lblName = (gcnew System::Windows::Forms::Label());
				this->lblDNI = (gcnew System::Windows::Forms::Label());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->lblLastName = (gcnew System::Windows::Forms::Label());
				this->lblGender = (gcnew System::Windows::Forms::Label());
				this->lblBirthDate = (gcnew System::Windows::Forms::Label());
				this->txtId = (gcnew System::Windows::Forms::TextBox());
				this->txtName = (gcnew System::Windows::Forms::TextBox());
				this->txtDNI = (gcnew System::Windows::Forms::TextBox());
				this->txtUserName = (gcnew System::Windows::Forms::TextBox());
				this->txtGender = (gcnew System::Windows::Forms::TextBox());
				this->txtBirthDate = (gcnew System::Windows::Forms::TextBox());
				this->txtLastName = (gcnew System::Windows::Forms::TextBox());
				this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
				this->dgvClients = (gcnew System::Windows::Forms::DataGridView());
				this->ClientId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientUserName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientPassword = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientGender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->ClientBirthDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				this->btnAdd = (gcnew System::Windows::Forms::Button());
				this->btnDelete = (gcnew System::Windows::Forms::Button());
				this->btnUpdate = (gcnew System::Windows::Forms::Button());
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->btnCleanControls = (gcnew System::Windows::Forms::Button());
				this->lblPassword = (gcnew System::Windows::Forms::Label());
				this->txtPassword = (gcnew System::Windows::Forms::TextBox());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->BeginInit();
				this->menuStrip1->SuspendLayout();
				this->SuspendLayout();
				// 
				// lblId
				// 
				this->lblId->AutoSize = true;
				this->lblId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblId->ForeColor = System::Drawing::Color::White;
				this->lblId->Location = System::Drawing::Point(20, 68);
				this->lblId->Name = L"lblId";
				this->lblId->Size = System::Drawing::Size(30, 24);
				this->lblId->TabIndex = 0;
				this->lblId->Text = L"Id:";
				// 
				// lblName
				// 
				this->lblName->AutoSize = true;
				this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblName->ForeColor = System::Drawing::Color::White;
				this->lblName->Location = System::Drawing::Point(20, 107);
				this->lblName->Name = L"lblName";
				this->lblName->Size = System::Drawing::Size(84, 24);
				this->lblName->TabIndex = 1;
				this->lblName->Text = L"Nombre:";
				// 
				// lblDNI
				// 
				this->lblDNI->AutoSize = true;
				this->lblDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblDNI->ForeColor = System::Drawing::Color::White;
				this->lblDNI->Location = System::Drawing::Point(20, 144);
				this->lblDNI->Name = L"lblDNI";
				this->lblDNI->Size = System::Drawing::Size(46, 24);
				this->lblDNI->TabIndex = 2;
				this->lblDNI->Text = L"DNI:";
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->label6->ForeColor = System::Drawing::Color::White;
				this->label6->Location = System::Drawing::Point(377, 68);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(178, 24);
				this->label6->TabIndex = 5;
				this->label6->Text = L"Nombre de usuario:";
				// 
				// lblLastName
				// 
				this->lblLastName->AutoSize = true;
				this->lblLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblLastName->ForeColor = System::Drawing::Color::White;
				this->lblLastName->Location = System::Drawing::Point(377, 150);
				this->lblLastName->Name = L"lblLastName";
				this->lblLastName->Size = System::Drawing::Size(93, 24);
				this->lblLastName->TabIndex = 6;
				this->lblLastName->Text = L"Apellidos:";
				// 
				// lblGender
				// 
				this->lblGender->AutoSize = true;
				this->lblGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblGender->ForeColor = System::Drawing::Color::White;
				this->lblGender->Location = System::Drawing::Point(20, 196);
				this->lblGender->Name = L"lblGender";
				this->lblGender->Size = System::Drawing::Size(79, 24);
				this->lblGender->TabIndex = 7;
				this->lblGender->Text = L"Género:";
				// 
				// lblBirthDate
				// 
				this->lblBirthDate->AutoSize = true;
				this->lblBirthDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblBirthDate->ForeColor = System::Drawing::Color::White;
				this->lblBirthDate->Location = System::Drawing::Point(372, 195);
				this->lblBirthDate->Name = L"lblBirthDate";
				this->lblBirthDate->Size = System::Drawing::Size(193, 24);
				this->lblBirthDate->TabIndex = 8;
				this->lblBirthDate->Text = L"Fecha de nacimiento:";
				// 
				// txtId
				// 
				this->txtId->Location = System::Drawing::Point(165, 69);
				this->txtId->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtId->Name = L"txtId";
				this->txtId->Size = System::Drawing::Size(133, 22);
				this->txtId->TabIndex = 9;
				// 
				// txtName
				// 
				this->txtName->Location = System::Drawing::Point(165, 112);
				this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtName->Name = L"txtName";
				this->txtName->Size = System::Drawing::Size(133, 22);
				this->txtName->TabIndex = 10;
				// 
				// txtDNI
				// 
				this->txtDNI->Location = System::Drawing::Point(165, 153);
				this->txtDNI->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtDNI->Name = L"txtDNI";
				this->txtDNI->Size = System::Drawing::Size(133, 22);
				this->txtDNI->TabIndex = 11;
				// 
				// txtUserName
				// 
				this->txtUserName->Location = System::Drawing::Point(580, 71);
				this->txtUserName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtUserName->Name = L"txtUserName";
				this->txtUserName->Size = System::Drawing::Size(199, 22);
				this->txtUserName->TabIndex = 12;
				// 
				// txtGender
				// 
				this->txtGender->Location = System::Drawing::Point(165, 196);
				this->txtGender->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtGender->Name = L"txtGender";
				this->txtGender->Size = System::Drawing::Size(133, 22);
				this->txtGender->TabIndex = 13;
				// 
				// txtBirthDate
				// 
				this->txtBirthDate->Location = System::Drawing::Point(580, 193);
				this->txtBirthDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtBirthDate->Name = L"txtBirthDate";
				this->txtBirthDate->Size = System::Drawing::Size(199, 22);
				this->txtBirthDate->TabIndex = 14;
				// 
				// txtLastName
				// 
				this->txtLastName->Location = System::Drawing::Point(580, 153);
				this->txtLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtLastName->Name = L"txtLastName";
				this->txtLastName->Size = System::Drawing::Size(199, 22);
				this->txtLastName->TabIndex = 15;
				// 
				// pbPhoto
				// 
				this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->pbPhoto->Location = System::Drawing::Point(800, 62);
				this->pbPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->pbPhoto->Name = L"pbPhoto";
				this->pbPhoto->Size = System::Drawing::Size(183, 143);
				this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pbPhoto->TabIndex = 16;
				this->pbPhoto->TabStop = false;
				this->pbPhoto->Click += gcnew System::EventHandler(this, &clientesForm::pbPhoto_Click);
				// 
				// dgvClients
				// 
				this->dgvClients->AllowUserToAddRows = false;
				this->dgvClients->BackgroundColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->dgvClients->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dgvClients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
					this->ClientId,
						this->ClientUserName, this->ClientPassword, this->ClientName, this->ClientLastName, this->ClientDNI, this->ClientGender, this->ClientBirthDate
				});
				this->dgvClients->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(198)), static_cast<System::Int32>(static_cast<System::Byte>(191)),
					static_cast<System::Int32>(static_cast<System::Byte>(181)));
				this->dgvClients->Location = System::Drawing::Point(23, 313);
				this->dgvClients->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->dgvClients->Name = L"dgvClients";
				this->dgvClients->RowHeadersVisible = false;
				this->dgvClients->RowHeadersWidth = 51;
				this->dgvClients->RowTemplate->Height = 24;
				this->dgvClients->Size = System::Drawing::Size(916, 234);
				this->dgvClients->TabIndex = 18;
				this->dgvClients->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &clientesForm::dgvClients_CellClick_1);
				// 
				// ClientId
				// 
				this->ClientId->HeaderText = L"Id";
				this->ClientId->MinimumWidth = 6;
				this->ClientId->Name = L"ClientId";
				this->ClientId->Width = 125;
				// 
				// ClientUserName
				// 
				this->ClientUserName->HeaderText = L"Nombre de usuario";
				this->ClientUserName->MinimumWidth = 6;
				this->ClientUserName->Name = L"ClientUserName";
				this->ClientUserName->Width = 125;
				// 
				// ClientPassword
				// 
				this->ClientPassword->HeaderText = L"Contraseña";
				this->ClientPassword->MinimumWidth = 6;
				this->ClientPassword->Name = L"ClientPassword";
				this->ClientPassword->Width = 125;
				// 
				// ClientName
				// 
				this->ClientName->HeaderText = L"Nombre";
				this->ClientName->MinimumWidth = 6;
				this->ClientName->Name = L"ClientName";
				this->ClientName->Width = 125;
				// 
				// ClientLastName
				// 
				this->ClientLastName->HeaderText = L"Apellidos";
				this->ClientLastName->MinimumWidth = 6;
				this->ClientLastName->Name = L"ClientLastName";
				this->ClientLastName->Width = 125;
				// 
				// ClientDNI
				// 
				this->ClientDNI->HeaderText = L"DNI";
				this->ClientDNI->MinimumWidth = 6;
				this->ClientDNI->Name = L"ClientDNI";
				this->ClientDNI->Width = 125;
				// 
				// ClientGender
				// 
				this->ClientGender->HeaderText = L"Género";
				this->ClientGender->MinimumWidth = 6;
				this->ClientGender->Name = L"ClientGender";
				this->ClientGender->Width = 125;
				// 
				// ClientBirthDate
				// 
				this->ClientBirthDate->HeaderText = L"Fecha de nacimiento";
				this->ClientBirthDate->MinimumWidth = 6;
				this->ClientBirthDate->Name = L"ClientBirthDate";
				this->ClientBirthDate->Width = 125;
				// 
				// btnAdd
				// 
				this->btnAdd->BackColor = System::Drawing::Color::LawnGreen;
				this->btnAdd->FlatAppearance->BorderSize = 0;
				this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnAdd->ForeColor = System::Drawing::Color::Black;
				this->btnAdd->Location = System::Drawing::Point(49, 254);
				this->btnAdd->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->btnAdd->Name = L"btnAdd";
				this->btnAdd->Size = System::Drawing::Size(216, 43);
				this->btnAdd->TabIndex = 19;
				this->btnAdd->Text = L"Agregar";
				this->btnAdd->UseVisualStyleBackColor = false;
				this->btnAdd->Click += gcnew System::EventHandler(this, &clientesForm::btnAdd_Click);
				// 
				// btnDelete
				// 
				this->btnDelete->BackColor = System::Drawing::Color::LawnGreen;
				this->btnDelete->FlatAppearance->BorderSize = 0;
				this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnDelete->ForeColor = System::Drawing::Color::Black;
				this->btnDelete->Location = System::Drawing::Point(561, 254);
				this->btnDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->btnDelete->Name = L"btnDelete";
				this->btnDelete->Size = System::Drawing::Size(219, 43);
				this->btnDelete->TabIndex = 20;
				this->btnDelete->Text = L"Eliminar";
				this->btnDelete->UseVisualStyleBackColor = false;
				this->btnDelete->Click += gcnew System::EventHandler(this, &clientesForm::btnDelete_Click);
				// 
				// btnUpdate
				// 
				this->btnUpdate->BackColor = System::Drawing::Color::LawnGreen;
				this->btnUpdate->FlatAppearance->BorderSize = 0;
				this->btnUpdate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
				this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnUpdate->ForeColor = System::Drawing::Color::Black;
				this->btnUpdate->Location = System::Drawing::Point(327, 254);
				this->btnUpdate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->btnUpdate->Name = L"btnUpdate";
				this->btnUpdate->Size = System::Drawing::Size(189, 43);
				this->btnUpdate->TabIndex = 22;
				this->btnUpdate->Text = L"Modificar";
				this->btnUpdate->UseVisualStyleBackColor = false;
				this->btnUpdate->Click += gcnew System::EventHandler(this, &clientesForm::btnUpdate_Click);
				// 
				// menuStrip1
				// 
				this->menuStrip1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
				this->menuStrip1->AllowMerge = false;
				this->menuStrip1->BackColor = System::Drawing::Color::RoyalBlue;
				this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
				this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
				this->menuStrip1->Size = System::Drawing::Size(1016, 33);
				this->menuStrip1->TabIndex = 40;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// archivoToolStripMenuItem
				// 
				this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
					this->toolStripMenuItem1,
						this->editarToolStripMenuItem, this->salirToolStripMenuItem
				});
				this->archivoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->archivoToolStripMenuItem->ForeColor = System::Drawing::Color::Black;
				this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
				this->archivoToolStripMenuItem->Size = System::Drawing::Size(86, 29);
				this->archivoToolStripMenuItem->Text = L"Archivo";
				// 
				// toolStripMenuItem1
				// 
				this->toolStripMenuItem1->BackColor = System::Drawing::Color::MidnightBlue;
				this->toolStripMenuItem1->ForeColor = System::Drawing::Color::White;
				this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
				this->toolStripMenuItem1->Size = System::Drawing::Size(173, 30);
				this->toolStripMenuItem1->Text = L"Nuevo";
				this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &clientesForm::toolStripMenuItem1_Click);
				// 
				// editarToolStripMenuItem
				// 
				this->editarToolStripMenuItem->BackColor = System::Drawing::Color::MidnightBlue;
				this->editarToolStripMenuItem->ForeColor = System::Drawing::Color::White;
				this->editarToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::MidnightBlue;
				this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
				this->editarToolStripMenuItem->Size = System::Drawing::Size(173, 30);
				this->editarToolStripMenuItem->Text = L"Modificar";
				this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &clientesForm::editarToolStripMenuItem_Click);
				// 
				// salirToolStripMenuItem
				// 
				this->salirToolStripMenuItem->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
				this->salirToolStripMenuItem->BackColor = System::Drawing::Color::MidnightBlue;
				this->salirToolStripMenuItem->ForeColor = System::Drawing::Color::White;
				this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
				this->salirToolStripMenuItem->Size = System::Drawing::Size(173, 30);
				this->salirToolStripMenuItem->Text = L"Salir";
				this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &clientesForm::salirToolStripMenuItem_Click);
				// 
				// btnCleanControls
				// 
				this->btnCleanControls->BackColor = System::Drawing::Color::LightSkyBlue;
				this->btnCleanControls->FlatAppearance->BorderSize = 0;
				this->btnCleanControls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->btnCleanControls->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
				this->btnCleanControls->Location = System::Drawing::Point(819, 254);
				this->btnCleanControls->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->btnCleanControls->Name = L"btnCleanControls";
				this->btnCleanControls->Size = System::Drawing::Size(165, 43);
				this->btnCleanControls->TabIndex = 25;
				this->btnCleanControls->Text = L"Limpiar todo";
				this->btnCleanControls->UseVisualStyleBackColor = false;
				this->btnCleanControls->Click += gcnew System::EventHandler(this, &clientesForm::btnCleanControls_Click);
				// 
				// lblPassword
				// 
				this->lblPassword->AutoSize = true;
				this->lblPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->lblPassword->ForeColor = System::Drawing::Color::White;
				this->lblPassword->Location = System::Drawing::Point(377, 107);
				this->lblPassword->Name = L"lblPassword";
				this->lblPassword->Size = System::Drawing::Size(116, 24);
				this->lblPassword->TabIndex = 41;
				this->lblPassword->Text = L"Contraseña: ";
				// 
				// txtPassword
				// 
				this->txtPassword->Location = System::Drawing::Point(580, 110);
				this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->txtPassword->Name = L"txtPassword";
				this->txtPassword->Size = System::Drawing::Size(199, 22);
				this->txtPassword->TabIndex = 42;
				// 
				// clientesForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::Color::Black;
				this->ClientSize = System::Drawing::Size(1016, 558);
				this->Controls->Add(this->txtPassword);
				this->Controls->Add(this->lblPassword);
				this->Controls->Add(this->btnCleanControls);
				this->Controls->Add(this->btnUpdate);
				this->Controls->Add(this->btnDelete);
				this->Controls->Add(this->btnAdd);
				this->Controls->Add(this->dgvClients);
				this->Controls->Add(this->pbPhoto);
				this->Controls->Add(this->txtLastName);
				this->Controls->Add(this->txtBirthDate);
				this->Controls->Add(this->txtGender);
				this->Controls->Add(this->txtUserName);
				this->Controls->Add(this->txtDNI);
				this->Controls->Add(this->txtName);
				this->Controls->Add(this->txtId);
				this->Controls->Add(this->lblBirthDate);
				this->Controls->Add(this->lblGender);
				this->Controls->Add(this->lblLastName);
				this->Controls->Add(this->label6);
				this->Controls->Add(this->lblDNI);
				this->Controls->Add(this->lblName);
				this->Controls->Add(this->lblId);
				this->Controls->Add(this->menuStrip1);
				this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				this->MainMenuStrip = this->menuStrip1;
				this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
				this->Name = L"clientesForm";
				this->Text = L"Mantenimiento de Clientes";
				this->TransparencyKey = System::Drawing::Color::Black;
				this->Load += gcnew System::EventHandler(this, &clientesForm::clientesForm_Load);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvClients))->EndInit();
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
		#pragma endregion

				// Definición de la función ImageToByteArray 
				array<System::Byte>^ ImageToByteArray(System::Drawing::Image^ image) {
					System::Drawing::Bitmap^ bmp = gcnew System::Drawing::Bitmap(image);
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
					bmp->Save(ms, System::Drawing::Imaging::ImageFormat::Png);

					array<System::Byte>^ byteArray = ms->ToArray();

					ms->Close();
					delete bmp;

					return byteArray;
				}
			

			private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
				this->Close();

			}

			private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
				CleanControls();
				btnAdd->Enabled = true;
				btnUpdate->Enabled = false;
				btnDelete->Enabled = false;


			}
				   void ShowCustomers() {
					   List<Customer^>^ customerList = Service::QueryAllCustomers();
					   dgvClients->Rows->Clear();
					   for (int i = 0; i < customerList->Count; i++) {
						   dgvClients->Rows->Add(gcnew array<String^> {"" + customerList[i]->Id, customerList[i]->Username,customerList[i]->Password, customerList[i]->Name,
							   customerList[i]->LastName, customerList[i]->DNI, customerList[i]->Genero, customerList[i]->BirthDate});

					   }
				   }

		private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			List<Customer^>^ customerList = Service::QueryAllCustomers();
			int SiIdHueco = 0;//Variable para saber si hay un hueco en la lista de clientes(Id)
			int IdHueco = 0;//Variable para saber el hueco en la lista de clientes(Id)
			int j = 0;
			for (int i = 0; i <customerList->Count; i++) {

				if (customerList[i]->Username == txtUserName->Text) {
					MessageBox::Show("El nombre de usuario ya existe, por favor ingrese otro nombre de usuario", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;

				}
				else {

					if (customerList[i]->Id == (i + 1)) {
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
				
			}
			int id;

			if (SiIdHueco == 0) {
				id = customerList->Count + 1;
			}
			else {
				id = IdHueco;
			}

			String^ userName = txtUserName->Text;
			String^ password = txtPassword->Text;
			String^ name = txtName->Text;
			String^ lastName = txtLastName->Text;
			String^ dni = txtDNI->Text;
			String^ gender = txtGender->Text;
			String^ birthDate = txtBirthDate->Text;
			String^ Status1 = "M";

			

			// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
			array<Byte>^ photo = nullptr;
			if (pbPhoto->Image != nullptr) {
				photo = ImageToByteArray(pbPhoto->Image);
			}


			Customer^ customer = gcnew Customer();

			customer->Id = id;
			customer->Username = userName;
			customer->Password = password;
			customer->Name = name;
			customer->LastName = lastName;
			customer->DNI = dni;
			customer->Genero = gender;
			customer->BirthDate = birthDate;
			customer->Status = Status1;
			customer->Photo = photo;


			Service::AddCustomer(customer);
			ShowCustomers();

		}


		private: System::Void dgvClients_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

			int CustomerId = Int32::Parse(dgvClients->Rows[dgvClients->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
			Customer^ customer= Service::QueryCustomerById(CustomerId);

			if (customer != nullptr) {
				txtId->Text = Convert::ToString(customer->Id);
				txtUserName->Text = customer->Username;
				txtPassword->Text = customer->Password;
				txtName->Text = customer->Name;
				txtLastName->Text = customer->LastName;
				txtDNI->Text = customer->DNI;
				txtGender->Text = customer->Genero;
				txtBirthDate->Text = customer->BirthDate;


				// Mostrar la imagen del cliente en el PictureBox si existe
				if (customer->Photo != nullptr) {
					System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(customer->Photo);
					pbPhoto->Image = System::Drawing::Image::FromStream(ms);
				}
				else {
					pbPhoto->Image = nullptr;
				}

			}

		}
	
		private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

			int id = Convert::ToInt32(txtId->Text);
			String^ userName = txtUserName->Text;
			String^ password = txtPassword->Text;
			String^ name = txtName->Text;
			String^ lastName = txtLastName->Text;
			String^ dni = txtDNI->Text;
			String^ gender = txtGender->Text;
			String^ birthDate = txtBirthDate->Text;

			// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
			array<Byte>^ photo = nullptr;
			if (pbPhoto->Image != nullptr) {
				photo = ImageToByteArray(pbPhoto->Image);
			}

			Customer^ customer = gcnew Customer();

			customer->Id = id;
			customer->Username = userName;
			customer->Password = password;
			customer->Name = name;
			customer->LastName = lastName;
			customer->DNI = dni;
			customer->Genero = gender;
			customer->BirthDate = birthDate;
			customer->Photo = photo;

			Service::UpdateCustomer(customer);
			ShowCustomers();

		}



	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Mostrar un cuadro de diálogo de confirmación
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"¿Estás seguro de que deseas eliminar este cliente?",
			"Confirmación de eliminación",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning);

		// Verificar la respuesta del usuario
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// El usuario confirmó, proceder con la eliminación
			int idCustomer = Convert::ToInt32(txtId->Text);
			Service::DeleteCustomer(idCustomer);

			ShowCustomers();
		}
		// Si el usuario selecciona No, no se realiza ninguna acción

	}

	private: System::Void btnAlterPhoto_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		btnAdd->Enabled= false;
		btnUpdate->Enabled = true;
		btnDelete->Enabled = true;

	}

	private: System::Void clientesForm_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowCustomers();
	}

	

	 void CleanControls() {
		   txtId->Text = "";
		   txtUserName->Text = "";
		   txtPassword->Text = "";
		   txtName->Text = "";
		   txtLastName->Text = "";
		   txtDNI->Text = "";
		   txtGender->Text = "";
		   txtBirthDate->Text = "";
		   pbPhoto->Image = nullptr;

	 }

	private: System::Void btnCleanControls_Click(System::Object^ sender, System::EventArgs^ e) {
		CleanControls();
	}

	private: System::Void pbPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbPhoto->ImageLocation = openFileDialog->FileName;
		}

	}

};
	}
