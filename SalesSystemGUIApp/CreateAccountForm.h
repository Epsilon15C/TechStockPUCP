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
	/// Resumen de CreateAccountForm
	/// </summary>
	public ref class CreateAccountForm : public System::Windows::Forms::Form
	{
	public:
		CreateAccountForm(void)
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
		~CreateAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^ btnRegister;
	protected:

	protected:
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	public:
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtBirthDate;
	private: System::Windows::Forms::TextBox^ txtGender;
	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ lblBirthDate;
	private: System::Windows::Forms::Label^ lblGender;
	private: System::Windows::Forms::Label^ lblLastName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblDNI;
	private: System::Windows::Forms::Label^ lblName;
	public: System::Windows::Forms::Button^ btnUpdatePhoto;
	private:

	private: System::Windows::Forms::TextBox^ txtPassword;
	public:

	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateAccountForm::typeid));
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtBirthDate = (gcnew System::Windows::Forms::TextBox());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblBirthDate = (gcnew System::Windows::Forms::Label());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->lblLastName = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblDNI = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->btnUpdatePhoto = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnRegister->FlatAppearance->BorderSize = 0;
			this->btnRegister->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnRegister->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Black;
			this->btnRegister->Location = System::Drawing::Point(126, 309);
			this->btnRegister->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(216, 43);
			this->btnRegister->TabIndex = 41;
			this->btnRegister->Text = L"Registrarse";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &CreateAccountForm::btnAdd_Click);
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPhoto.Image")));
			this->pbPhoto->Location = System::Drawing::Point(793, 84);
			this->pbPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(207, 186);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 40;
			this->pbPhoto->TabStop = false;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(152, 178);
			this->txtLastName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(173, 22);
			this->txtLastName->TabIndex = 39;
			// 
			// txtBirthDate
			// 
			this->txtBirthDate->Location = System::Drawing::Point(572, 219);
			this->txtBirthDate->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtBirthDate->Name = L"txtBirthDate";
			this->txtBirthDate->Size = System::Drawing::Size(199, 22);
			this->txtBirthDate->TabIndex = 38;
			// 
			// txtGender
			// 
			this->txtGender->Location = System::Drawing::Point(152, 262);
			this->txtGender->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(173, 22);
			this->txtGender->TabIndex = 37;
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(572, 134);
			this->txtUserName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(199, 22);
			this->txtUserName->TabIndex = 36;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(152, 219);
			this->txtDNI->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(173, 22);
			this->txtDNI->TabIndex = 35;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(152, 138);
			this->txtName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(173, 22);
			this->txtName->TabIndex = 34;
			// 
			// lblBirthDate
			// 
			this->lblBirthDate->AutoSize = true;
			this->lblBirthDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBirthDate->ForeColor = System::Drawing::Color::White;
			this->lblBirthDate->Location = System::Drawing::Point(364, 219);
			this->lblBirthDate->Name = L"lblBirthDate";
			this->lblBirthDate->Size = System::Drawing::Size(193, 24);
			this->lblBirthDate->TabIndex = 32;
			this->lblBirthDate->Text = L"Fecha de nacimiento:";
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->ForeColor = System::Drawing::Color::White;
			this->lblGender->Location = System::Drawing::Point(7, 262);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(79, 24);
			this->lblGender->TabIndex = 31;
			this->lblGender->Text = L"Género:";
			// 
			// lblLastName
			// 
			this->lblLastName->AutoSize = true;
			this->lblLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLastName->ForeColor = System::Drawing::Color::White;
			this->lblLastName->Location = System::Drawing::Point(7, 175);
			this->lblLastName->Name = L"lblLastName";
			this->lblLastName->Size = System::Drawing::Size(93, 24);
			this->lblLastName->TabIndex = 30;
			this->lblLastName->Text = L"Apellidos:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(364, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(178, 24);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Nombre de usuario:";
			// 
			// lblDNI
			// 
			this->lblDNI->AutoSize = true;
			this->lblDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDNI->ForeColor = System::Drawing::Color::White;
			this->lblDNI->Location = System::Drawing::Point(12, 216);
			this->lblDNI->Name = L"lblDNI";
			this->lblDNI->Size = System::Drawing::Size(46, 24);
			this->lblDNI->TabIndex = 28;
			this->lblDNI->Text = L"DNI:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(7, 133);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(84, 24);
			this->lblName->TabIndex = 27;
			this->lblName->Text = L"Nombre:";
			// 
			// btnUpdatePhoto
			// 
			this->btnUpdatePhoto->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdatePhoto->FlatAppearance->BorderSize = 0;
			this->btnUpdatePhoto->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnUpdatePhoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdatePhoto->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdatePhoto->ForeColor = System::Drawing::Color::Black;
			this->btnUpdatePhoto->Location = System::Drawing::Point(811, 291);
			this->btnUpdatePhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdatePhoto->Name = L"btnUpdatePhoto";
			this->btnUpdatePhoto->Size = System::Drawing::Size(174, 43);
			this->btnUpdatePhoto->TabIndex = 42;
			this->btnUpdatePhoto->Text = L"Subir foto";
			this->btnUpdatePhoto->UseVisualStyleBackColor = false;
			this->btnUpdatePhoto->Click += gcnew System::EventHandler(this, &CreateAccountForm::btnUpdatePhoto_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(572, 173);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(199, 22);
			this->txtPassword->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(364, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 24);
			this->label1->TabIndex = 43;
			this->label1->Text = L"Contraseña:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(252, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(325, 31);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Bienvenido a TechStockPUCP";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::MidnightBlue;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1014, 31);
			this->menuStrip1->TabIndex = 46;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->opcionesToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(95, 27);
			this->opcionesToolStripMenuItem->Text = L"Opciones";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(126, 28);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CreateAccountForm::salirToolStripMenuItem_Click);
			// 
			// CreateAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1014, 511);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnUpdatePhoto);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->pbPhoto);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtBirthDate);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblBirthDate);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->lblLastName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->lblDNI);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CreateAccountForm";
			this->Text = L"Crear cuenta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
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

		void CleanControls() {

			txtUserName->Text = "";
			txtPassword->Text = "";
			txtName->Text = "";
			txtLastName->Text = "";
			txtDNI->Text = "";
			txtGender->Text = "";
			txtBirthDate->Text = "";
			pbPhoto->Image = nullptr;

		}


	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		List<Customer^>^ customerList = Service::QueryAllCustomers();
		int SiIdHueco = 0;//Variable para saber si hay un hueco en la lista de clientes(Id)
		int IdHueco = 0;//Variable para saber el hueco en la lista de clientes(Id)
		int UserCorrect = 0;
		int j = 0;
		for (int i = 0; i < customerList->Count; i++) {

			if (customerList[i]->Username == txtUserName->Text) {
				MessageBox::Show("El nombre de usuario ya existe, por favor ingrese otro nombre de usuario", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				UserCorrect = 0;
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
		int id=0;
		// Actualizo el valor de UserCorrect
		UserCorrect = 1;

		//Asigno el valor a Id
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
		String^ Status1 = "A";



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

		if (UserCorrect == 1) {

			//messagebox que mencione que se ha registrado correctamente
			MessageBox::Show("Click en ACEPTAR para regresar e iniciar sesión", "Registro exitoso", MessageBoxButtons::OK, MessageBoxIcon::Information);

			//CleanControls();

			Service::AddCustomer(customer);
			this->Close();
		}
		
	}

	private: System::Void btnUpdatePhoto_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbPhoto->ImageLocation = openFileDialog->FileName;
		}
	}
};
}
