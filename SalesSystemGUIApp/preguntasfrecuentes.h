#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de preguntasfrecuentes
	/// </summary>
	public ref class preguntasfrecuentes : public System::Windows::Forms::Form
	{
	public:
		preguntasfrecuentes(void)
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
		~preguntasfrecuentes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnwhats;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(preguntasfrecuentes::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnwhats = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(55, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(377, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¿Cómo realizo una compra\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1037, 53);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(291, 252);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(128, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(774, 56);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Hacer clic en el botón de \"Transacciones\", luego en \"Generar orden\", añadir el pr"
				L"oducto \r\nde su preferencia al carrito y finalmente hacer clic en el botón de \"Re"
				L"alizar compra\".";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(128, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(740, 56);
			this->label3->TabIndex = 4;
			this->label3->Text = L"En nuestra plataforma, actualmente no aceptamos pagos con tarjetas de crédito. \r\n"
				L"Sin embargo, ofrecemos opciones de pago seguras y convenientes a través de Yape."
				L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(55, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(533, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"¿Se puede pagar con tarjeta de crédito\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(128, 379);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(943, 28);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Al estar en la ventana \"Generar orden\", puedes editar la casilla \"Cantidad\" y mod"
				L"ificarla al número deseado.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(55, 319);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(899, 266);
			this->label6->TabIndex = 5;
			this->label6->Text = L"¿Cómo modifico la cantidad de productos que seleccioné por error\?\n\n\n\n\n\n\n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(55, 631);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(623, 38);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Para más consultas, contáctanos al WhatsApp:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(733, 611);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(99, 89);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// btnwhats
			// 
			this->btnwhats->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnwhats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnwhats->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnwhats->Location = System::Drawing::Point(885, 627);
			this->btnwhats->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnwhats->Name = L"btnwhats";
			this->btnwhats->Size = System::Drawing::Size(224, 50);
			this->btnwhats->TabIndex = 9;
			this->btnwhats->Text = L"¡Contáctanos!";
			this->btnwhats->UseVisualStyleBackColor = false;
			this->btnwhats->Click += gcnew System::EventHandler(this, &preguntasfrecuentes::btnwhats_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(55, 447);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(348, 38);
			this->label8->TabIndex = 10;
			this->label8->Text = L"¿Cómo recojo un pedido\?\r\n";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(103, 484);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 28);
			this->label9->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(128, 510);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(988, 84);
			this->label10->TabIndex = 12;
			this->label10->Text = resources->GetString(L"label10.Text");
			// 
			// preguntasfrecuentes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1368, 734);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnwhats);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"preguntasfrecuentes";
			this->Text = L"Preguntas Frecuentes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnwhats_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Diagnostics::Process::Start("https://wa.me/51921265456?text=Buen%20día%20TechStock,%20tengo%20una%20consulta,");
	}
	};
}
