#pragma once


#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

// iTextSharp imports
using namespace iTextSharp::text;
using namespace iTextSharp::text::pdf;

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Resumen de PurchaseForm
	/// </summary>
	public ref class PurchaseForm : public System::Windows::Forms::Form
	{
	public:

		

		PurchaseForm(String^ clientOrder, String^ RUCOrder, double totalPrice)
		{
			InitializeComponent();

			// Asigna los valores a los campos de texto correspondientes
			txtClient->Text = clientOrder;
			txtClient->ReadOnly = true;
			txtRUC->Text = RUCOrder;
			txtRUC->ReadOnly = true;
			txtTotalPrice->Text = totalPrice.ToString();
			txtTotalPrice->ReadOnly = true;

		}


		
		// Propiedad para almacenar el valor del RUC
		property String^ RUCValue;

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		
		virtual void OnFormClosed(System::Windows::Forms::FormClosedEventArgs^ e) override
		{
			
		}

		~PurchaseForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::TextBox^ txtClient;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lblIdRes;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtTotalPrice;
	private: System::Windows::Forms::Button^ btnUploadPhoto;
	private: System::Windows::Forms::PictureBox^ pbPhotoUploaded;
	private: System::Windows::Forms::Button^ btnGeneratePDF;



	private: System::Windows::Forms::TextBox^ txtRUC;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBoxYape;
	private: System::Windows::Forms::PictureBox^ pictureBoxPlin;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PurchaseForm::typeid));
			this->txtClient = (gcnew System::Windows::Forms::TextBox());
			this->lblIdRes = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtTotalPrice = (gcnew System::Windows::Forms::TextBox());
			this->btnUploadPhoto = (gcnew System::Windows::Forms::Button());
			this->pbPhotoUploaded = (gcnew System::Windows::Forms::PictureBox());
			this->btnGeneratePDF = (gcnew System::Windows::Forms::Button());
			this->txtRUC = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxYape = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPlin = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotoUploaded))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxYape))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlin))->BeginInit();
			this->SuspendLayout();
			// 
			// txtClient
			// 
			this->txtClient->Location = System::Drawing::Point(153, 37);
			this->txtClient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtClient->Name = L"txtClient";
			this->txtClient->Size = System::Drawing::Size(187, 22);
			this->txtClient->TabIndex = 11;
			// 
			// lblIdRes
			// 
			this->lblIdRes->AutoSize = true;
			this->lblIdRes->ForeColor = System::Drawing::Color::White;
			this->lblIdRes->Location = System::Drawing::Point(44, 41);
			this->lblIdRes->Name = L"lblIdRes";
			this->lblIdRes->Size = System::Drawing::Size(51, 16);
			this->lblIdRes->TabIndex = 10;
			this->lblIdRes->Text = L"Cliente:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(44, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Importe a pagar:";
			// 
			// txtTotalPrice
			// 
			this->txtTotalPrice->Location = System::Drawing::Point(199, 92);
			this->txtTotalPrice->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTotalPrice->Name = L"txtTotalPrice";
			this->txtTotalPrice->Size = System::Drawing::Size(141, 22);
			this->txtTotalPrice->TabIndex = 14;
			// 
			// btnUploadPhoto
			// 
			this->btnUploadPhoto->BackColor = System::Drawing::Color::LawnGreen;
			this->btnUploadPhoto->FlatAppearance->BorderSize = 0;
			this->btnUploadPhoto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUploadPhoto->Location = System::Drawing::Point(539, 249);
			this->btnUploadPhoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUploadPhoto->Name = L"btnUploadPhoto";
			this->btnUploadPhoto->Size = System::Drawing::Size(131, 31);
			this->btnUploadPhoto->TabIndex = 15;
			this->btnUploadPhoto->Text = L"Subir Foto ";
			this->btnUploadPhoto->UseVisualStyleBackColor = false;
			this->btnUploadPhoto->Click += gcnew System::EventHandler(this, &PurchaseForm::btnUploadPhoto_Click);
			// 
			// pbPhotoUploaded
			// 
			this->pbPhotoUploaded->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhotoUploaded->Location = System::Drawing::Point(504, 26);
			this->pbPhotoUploaded->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pbPhotoUploaded->Name = L"pbPhotoUploaded";
			this->pbPhotoUploaded->Size = System::Drawing::Size(183, 179);
			this->pbPhotoUploaded->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhotoUploaded->TabIndex = 17;
			this->pbPhotoUploaded->TabStop = false;
			// 
			// btnGeneratePDF
			// 
			this->btnGeneratePDF->BackColor = System::Drawing::Color::LawnGreen;
			this->btnGeneratePDF->FlatAppearance->BorderSize = 0;
			this->btnGeneratePDF->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGeneratePDF->Location = System::Drawing::Point(520, 314);
			this->btnGeneratePDF->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnGeneratePDF->Name = L"btnGeneratePDF";
			this->btnGeneratePDF->Size = System::Drawing::Size(149, 31);
			this->btnGeneratePDF->TabIndex = 19;
			this->btnGeneratePDF->Text = L"Finalizar Compra";
			this->btnGeneratePDF->UseVisualStyleBackColor = false;
			this->btnGeneratePDF->Click += gcnew System::EventHandler(this, &PurchaseForm::btnGeneratePDF_Click);
			// 
			// txtRUC
			// 
			this->txtRUC->Location = System::Drawing::Point(137, 145);
			this->txtRUC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtRUC->Name = L"txtRUC";
			this->txtRUC->Size = System::Drawing::Size(203, 22);
			this->txtRUC->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(44, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"RUC:";
			// 
			// pictureBoxYape
			// 
			this->pictureBoxYape->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxYape->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxYape.Image")));
			this->pictureBoxYape->Location = System::Drawing::Point(247, 204);
			this->pictureBoxYape->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxYape->Name = L"pictureBoxYape";
			this->pictureBoxYape->Size = System::Drawing::Size(177, 173);
			this->pictureBoxYape->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxYape->TabIndex = 22;
			this->pictureBoxYape->TabStop = false;
			// 
			// pictureBoxPlin
			// 
			this->pictureBoxPlin->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxPlin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPlin.Image")));
			this->pictureBoxPlin->Location = System::Drawing::Point(48, 204);
			this->pictureBoxPlin->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxPlin->Name = L"pictureBoxPlin";
			this->pictureBoxPlin->Size = System::Drawing::Size(177, 173);
			this->pictureBoxPlin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPlin->TabIndex = 23;
			this->pictureBoxPlin->TabStop = false;
			// 
			// PurchaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(759, 404);
			this->Controls->Add(this->pictureBoxPlin);
			this->Controls->Add(this->pictureBoxYape);
			this->Controls->Add(this->txtRUC);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnGeneratePDF);
			this->Controls->Add(this->pbPhotoUploaded);
			this->Controls->Add(this->btnUploadPhoto);
			this->Controls->Add(this->txtTotalPrice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtClient);
			this->Controls->Add(this->lblIdRes);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"PurchaseForm";
			this->Text = L"Compra";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &PurchaseForm::PurchaseForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotoUploaded))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxYape))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnUploadPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pbPhotoUploaded->ImageLocation = openFileDialog->FileName;
	}
}

	private: System::Void btnGeneratePDF_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Se finalizó la compra. Por favor, al cerrar la ventana, presione generar comprobante");
		
		RUCValue = txtRUC->Text;
		Close();
	}

	 private: System::Void PurchaseForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		 
	 }


};

};

