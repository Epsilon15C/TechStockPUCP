#pragma once

namespace SalesSystemGUIApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
	using namespace SalesSystemModel;
	using namespace SalesSystemPersistance;
	using namespace SalesSystemService;
    using namespace ReadQRLibrary;

    /// <summary>
    /// Resumen de ProductPickUpForm
    /// </summary>
    public ref class ProductPickUpForm : public System::Windows::Forms::Form
    {
    public:
        ProductPickUpForm(void)
        {
            InitializeComponent();
            PopulateCameraList();
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~ProductPickUpForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::ComponentModel::IContainer^ components;
    protected:

    private:
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>


        ComboBox^ comboBoxCameras;
        PictureBox^ pictureBoxPreview;
        TextBox^ textBoxQRCode;
        Button^ buttonStart;
    private: System::Windows::Forms::TextBox^ txtIdClient;
    private: System::Windows::Forms::Label^ lblId;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ txtIdOrder;

    private: System::Windows::Forms::Label^ lblName;
    private: System::Windows::Forms::TextBox^ txtName;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ txtLastName;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::DataGridView^ dgvOrder;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Button^ btnSearchOrder;




    private: System::Windows::Forms::DataGridView^ dgvProducts;





    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Button^ btnUpdateStatusOrder;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvOrderId;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvOrderDate;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvOrderTotalAmount;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvOrderStatus;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvProductsId;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvProductsName;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvProductsDescription;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvProductsQuantity;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvProductsSubTotal;








           //QRCodeHelper^ qrHelper;
        System::Windows::Forms::Timer^ timer;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductPickUpForm::typeid));
            this->comboBoxCameras = (gcnew System::Windows::Forms::ComboBox());
            this->pictureBoxPreview = (gcnew System::Windows::Forms::PictureBox());
            this->textBoxQRCode = (gcnew System::Windows::Forms::TextBox());
            this->buttonStart = (gcnew System::Windows::Forms::Button());
            this->timer = (gcnew System::Windows::Forms::Timer(this->components));
            this->txtIdClient = (gcnew System::Windows::Forms::TextBox());
            this->lblId = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txtIdOrder = (gcnew System::Windows::Forms::TextBox());
            this->lblName = (gcnew System::Windows::Forms::Label());
            this->txtName = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->txtLastName = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->dgvOrder = (gcnew System::Windows::Forms::DataGridView());
            this->dgvOrderId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvOrderDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvOrderTotalAmount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvOrderStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->btnSearchOrder = (gcnew System::Windows::Forms::Button());
            this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
            this->dgvProductsId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvProductsName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvProductsDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvProductsQuantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dgvProductsSubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->btnUpdateStatusOrder = (gcnew System::Windows::Forms::Button());
            this->label8 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPreview))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
            this->SuspendLayout();
            // 
            // comboBoxCameras
            // 
            this->comboBoxCameras->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
            this->comboBoxCameras->FormattingEnabled = true;
            this->comboBoxCameras->Location = System::Drawing::Point(571, 41);
            this->comboBoxCameras->Margin = System::Windows::Forms::Padding(4);
            this->comboBoxCameras->Name = L"comboBoxCameras";
            this->comboBoxCameras->Size = System::Drawing::Size(267, 24);
            this->comboBoxCameras->TabIndex = 0;
            // 
            // pictureBoxPreview
            // 
            this->pictureBoxPreview->Location = System::Drawing::Point(571, 79);
            this->pictureBoxPreview->Margin = System::Windows::Forms::Padding(4);
            this->pictureBoxPreview->Name = L"pictureBoxPreview";
            this->pictureBoxPreview->Size = System::Drawing::Size(392, 277);
            this->pictureBoxPreview->TabIndex = 1;
            this->pictureBoxPreview->TabStop = false;
            // 
            // textBoxQRCode
            // 
            this->textBoxQRCode->Location = System::Drawing::Point(571, 403);
            this->textBoxQRCode->Margin = System::Windows::Forms::Padding(4);
            this->textBoxQRCode->Name = L"textBoxQRCode";
            this->textBoxQRCode->ReadOnly = true;
            this->textBoxQRCode->Size = System::Drawing::Size(392, 22);
            this->textBoxQRCode->TabIndex = 2;
            // 
            // buttonStart
            // 
            this->buttonStart->BackColor = System::Drawing::Color::LightSkyBlue;
            this->buttonStart->FlatAppearance->BorderSize = 0;
            this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonStart->ForeColor = System::Drawing::Color::Black;
            this->buttonStart->Location = System::Drawing::Point(863, 38);
            this->buttonStart->Margin = System::Windows::Forms::Padding(4);
            this->buttonStart->Name = L"buttonStart";
            this->buttonStart->Size = System::Drawing::Size(100, 28);
            this->buttonStart->TabIndex = 3;
            this->buttonStart->Text = L"Start";
            this->buttonStart->UseVisualStyleBackColor = false;
            this->buttonStart->Click += gcnew System::EventHandler(this, &ProductPickUpForm::buttonStart_Click);
            // 
            // timer
            // 
            this->timer->Tick += gcnew System::EventHandler(this, &ProductPickUpForm::timer_Tick);
            // 
            // txtIdClient
            // 
            this->txtIdClient->Location = System::Drawing::Point(104, 36);
            this->txtIdClient->Name = L"txtIdClient";
            this->txtIdClient->Size = System::Drawing::Size(126, 22);
            this->txtIdClient->TabIndex = 4;
            // 
            // lblId
            // 
            this->lblId->AutoSize = true;
            this->lblId->ForeColor = System::Drawing::Color::White;
            this->lblId->Location = System::Drawing::Point(20, 39);
            this->lblId->Name = L"lblId";
            this->lblId->Size = System::Drawing::Size(27, 16);
            this->lblId->TabIndex = 5;
            this->lblId->Text = L"Id : ";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->Location = System::Drawing::Point(20, 79);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(73, 16);
            this->label1->TabIndex = 7;
            this->label1->Text = L"Id pedido : ";
            // 
            // txtIdOrder
            // 
            this->txtIdOrder->Location = System::Drawing::Point(104, 76);
            this->txtIdOrder->Name = L"txtIdOrder";
            this->txtIdOrder->Size = System::Drawing::Size(126, 22);
            this->txtIdOrder->TabIndex = 6;
            // 
            // lblName
            // 
            this->lblName->AutoSize = true;
            this->lblName->ForeColor = System::Drawing::Color::White;
            this->lblName->Location = System::Drawing::Point(263, 36);
            this->lblName->Name = L"lblName";
            this->lblName->Size = System::Drawing::Size(59, 16);
            this->lblName->TabIndex = 9;
            this->lblName->Text = L"Nombre:";
            // 
            // txtName
            // 
            this->txtName->Location = System::Drawing::Point(338, 33);
            this->txtName->Name = L"txtName";
            this->txtName->Size = System::Drawing::Size(126, 22);
            this->txtName->TabIndex = 8;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->Location = System::Drawing::Point(263, 79);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(70, 16);
            this->label3->TabIndex = 11;
            this->label3->Text = L"Apellidos :";
            // 
            // txtLastName
            // 
            this->txtLastName->Location = System::Drawing::Point(338, 76);
            this->txtLastName->Name = L"txtLastName";
            this->txtLastName->Size = System::Drawing::Size(126, 22);
            this->txtLastName->TabIndex = 10;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->Location = System::Drawing::Point(12, 9);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(110, 16);
            this->label2->TabIndex = 12;
            this->label2->Text = L"Datos del cliente ";
            // 
            // dgvOrder
            // 
            this->dgvOrder->AllowUserToAddRows = false;
            this->dgvOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvOrder->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->dgvOrderId,
                    this->dgvOrderDate, this->dgvOrderTotalAmount, this->dgvOrderStatus
            });
            this->dgvOrder->Location = System::Drawing::Point(10, 129);
            this->dgvOrder->Name = L"dgvOrder";
            this->dgvOrder->RowHeadersVisible = false;
            this->dgvOrder->RowHeadersWidth = 51;
            this->dgvOrder->RowTemplate->Height = 24;
            this->dgvOrder->Size = System::Drawing::Size(522, 193);
            this->dgvOrder->TabIndex = 13;
            // 
            // dgvOrderId
            // 
            this->dgvOrderId->HeaderText = L"Id";
            this->dgvOrderId->MinimumWidth = 6;
            this->dgvOrderId->Name = L"dgvOrderId";
            this->dgvOrderId->ReadOnly = true;
            this->dgvOrderId->Width = 125;
            // 
            // dgvOrderDate
            // 
            this->dgvOrderDate->HeaderText = L"Fecha";
            this->dgvOrderDate->MinimumWidth = 6;
            this->dgvOrderDate->Name = L"dgvOrderDate";
            this->dgvOrderDate->ReadOnly = true;
            this->dgvOrderDate->Width = 125;
            // 
            // dgvOrderTotalAmount
            // 
            this->dgvOrderTotalAmount->HeaderText = L"Monto total";
            this->dgvOrderTotalAmount->MinimumWidth = 6;
            this->dgvOrderTotalAmount->Name = L"dgvOrderTotalAmount";
            this->dgvOrderTotalAmount->ReadOnly = true;
            this->dgvOrderTotalAmount->Width = 125;
            // 
            // dgvOrderStatus
            // 
            this->dgvOrderStatus->HeaderText = L"Estado";
            this->dgvOrderStatus->MinimumWidth = 6;
            this->dgvOrderStatus->Name = L"dgvOrderStatus";
            this->dgvOrderStatus->ReadOnly = true;
            this->dgvOrderStatus->Width = 125;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->ForeColor = System::Drawing::Color::White;
            this->label4->Location = System::Drawing::Point(568, 7);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(141, 16);
            this->label4->TabIndex = 14;
            this->label4->Text = L"Seleccione la cámara ";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->ForeColor = System::Drawing::Color::White;
            this->label5->Location = System::Drawing::Point(568, 372);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(102, 16);
            this->label5->TabIndex = 15;
            this->label5->Text = L"Lectura del QR :";
            // 
            // btnSearchOrder
            // 
            this->btnSearchOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->btnSearchOrder->FlatAppearance->BorderSize = 0;
            this->btnSearchOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnSearchOrder->ForeColor = System::Drawing::Color::Black;
            this->btnSearchOrder->Location = System::Drawing::Point(571, 439);
            this->btnSearchOrder->Name = L"btnSearchOrder";
            this->btnSearchOrder->Size = System::Drawing::Size(138, 30);
            this->btnSearchOrder->TabIndex = 16;
            this->btnSearchOrder->Text = L"Buscar pedido";
            this->btnSearchOrder->UseVisualStyleBackColor = false;
            this->btnSearchOrder->Click += gcnew System::EventHandler(this, &ProductPickUpForm::btnSearchOrder_Click);
            // 
            // dgvProducts
            // 
            this->dgvProducts->AllowUserToAddRows = false;
            this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->dgvProductsId,
                    this->dgvProductsName, this->dgvProductsDescription, this->dgvProductsQuantity, this->dgvProductsSubTotal
            });
            this->dgvProducts->Location = System::Drawing::Point(10, 372);
            this->dgvProducts->Name = L"dgvProducts";
            this->dgvProducts->RowHeadersVisible = false;
            this->dgvProducts->RowHeadersWidth = 51;
            this->dgvProducts->RowTemplate->Height = 24;
            this->dgvProducts->Size = System::Drawing::Size(522, 269);
            this->dgvProducts->TabIndex = 17;
            // 
            // dgvProductsId
            // 
            this->dgvProductsId->HeaderText = L"Id";
            this->dgvProductsId->MinimumWidth = 6;
            this->dgvProductsId->Name = L"dgvProductsId";
            this->dgvProductsId->ReadOnly = true;
            this->dgvProductsId->Width = 125;
            // 
            // dgvProductsName
            // 
            this->dgvProductsName->HeaderText = L"Nombre";
            this->dgvProductsName->MinimumWidth = 6;
            this->dgvProductsName->Name = L"dgvProductsName";
            this->dgvProductsName->ReadOnly = true;
            this->dgvProductsName->Width = 125;
            // 
            // dgvProductsDescription
            // 
            this->dgvProductsDescription->HeaderText = L"Descripción";
            this->dgvProductsDescription->MinimumWidth = 6;
            this->dgvProductsDescription->Name = L"dgvProductsDescription";
            this->dgvProductsDescription->ReadOnly = true;
            this->dgvProductsDescription->Width = 125;
            // 
            // dgvProductsQuantity
            // 
            this->dgvProductsQuantity->HeaderText = L"Cantidad";
            this->dgvProductsQuantity->MinimumWidth = 6;
            this->dgvProductsQuantity->Name = L"dgvProductsQuantity";
            this->dgvProductsQuantity->ReadOnly = true;
            this->dgvProductsQuantity->Width = 125;
            // 
            // dgvProductsSubTotal
            // 
            this->dgvProductsSubTotal->HeaderText = L"Subtotal";
            this->dgvProductsSubTotal->MinimumWidth = 6;
            this->dgvProductsSubTotal->Name = L"dgvProductsSubTotal";
            this->dgvProductsSubTotal->ReadOnly = true;
            this->dgvProductsSubTotal->Width = 125;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->ForeColor = System::Drawing::Color::White;
            this->label6->Location = System::Drawing::Point(12, 340);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(123, 16);
            this->label6->TabIndex = 18;
            this->label6->Text = L"Lista de productos :";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->ForeColor = System::Drawing::Color::White;
            this->label7->Location = System::Drawing::Point(12, 110);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(120, 16);
            this->label7->TabIndex = 19;
            this->label7->Text = L"Datos de la orden :";
            // 
            // btnUpdateStatusOrder
            // 
            this->btnUpdateStatusOrder->BackColor = System::Drawing::Color::LightSkyBlue;
            this->btnUpdateStatusOrder->FlatAppearance->BorderSize = 0;
            this->btnUpdateStatusOrder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnUpdateStatusOrder->ForeColor = System::Drawing::Color::Black;
            this->btnUpdateStatusOrder->Location = System::Drawing::Point(700, 518);
            this->btnUpdateStatusOrder->Name = L"btnUpdateStatusOrder";
            this->btnUpdateStatusOrder->Size = System::Drawing::Size(138, 30);
            this->btnUpdateStatusOrder->TabIndex = 20;
            this->btnUpdateStatusOrder->Text = L"Actualizar estado";
            this->btnUpdateStatusOrder->UseVisualStyleBackColor = false;
            this->btnUpdateStatusOrder->Click += gcnew System::EventHandler(this, &ProductPickUpForm::btnUpdateStatusOrder_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->ForeColor = System::Drawing::Color::White;
            this->label8->Location = System::Drawing::Point(568, 489);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(187, 16);
            this->label8->TabIndex = 21;
            this->label8->Text = L"Actualizar estado de la orden :";
            // 
            // ProductPickUpForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Black;
            this->ClientSize = System::Drawing::Size(979, 656);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->btnUpdateStatusOrder);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->dgvProducts);
            this->Controls->Add(this->btnSearchOrder);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->dgvOrder);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->txtLastName);
            this->Controls->Add(this->lblName);
            this->Controls->Add(this->txtName);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txtIdOrder);
            this->Controls->Add(this->lblId);
            this->Controls->Add(this->txtIdClient);
            this->Controls->Add(this->buttonStart);
            this->Controls->Add(this->textBoxQRCode);
            this->Controls->Add(this->pictureBoxPreview);
            this->Controls->Add(this->comboBoxCameras);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"ProductPickUpForm";
            this->Text = L"Recojo de productos";
            this->Load += gcnew System::EventHandler(this, &ProductPickUpForm::ProductPickUpForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPreview))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvOrder))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        void PopulateCameraList()
        {
            for (int i = 0; i < 10; i++)
            {
                int isCameraOpen = QRCodeHelper::VideoCaptureFunction(i);
                if (isCameraOpen == 1)
                {
                    this->comboBoxCameras->Items->Add("Camera " + i);
                }
            }

            if (this->comboBoxCameras->Items->Count > 0)
                this->comboBoxCameras->SelectedIndex = 0;
        }

        void buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (this->comboBoxCameras->SelectedIndex >= 0)
            {
                QRCodeHelper::InitializeCamera(this->comboBoxCameras->SelectedIndex);
                this->timer->Start();
            }
        }

        void timer_Tick(System::Object^ sender, System::EventArgs^ e)
        {
            Bitmap^ frame = QRCodeHelper::CaptureFrame();
            if (frame != nullptr)
            {
                this->pictureBoxPreview->Image = frame;
                String^ qrCodeText = QRCodeHelper::ReadQRCode(frame);
                if (!String::IsNullOrEmpty(qrCodeText))
                {
                    this->textBoxQRCode->Text = qrCodeText;
                    //this->timer->Stop();
                }
            }
        }

		void cleanControls()
		{
			txtIdClient->Text = "";
			txtIdOrder->Text = "";
			txtName->Text = "";
			txtLastName->Text = "";
			dgvOrder->Rows->Clear();
			dgvProducts->Rows->Clear();
		}


    private: System::Void btnSearchOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		cleanControls();

		String^ qrCodeText = textBoxQRCode->Text;
		//Crear una funcion que separe la cadena de texto y obtenga el id del cliente, el id del pedido,
        //  el nombre del cliente y el apellido del cliente,los cuales estan separados por un guion

        array<String^>^ data = qrCodeText->Split('-');
		//Quitar los saltos de linea
		if (data->Length ==3)
		{
			Customer^customer = gcnew Customer();
		    customer = Service::QueryCustomerById(Convert::ToInt32(data[0]));
			if ((customer != nullptr)&&(customer->Username->Equals(data[2])))
            { 
                // List<SalesSystemModel::Order^>^ orders = gcnew List<SalesSystemModel::Order^>();
                    txtIdClient->Text = Convert::ToString(customer->Id);
                    txtIdOrder->Text = data[1];
                    txtName->Text = customer->Name;
                    txtLastName->Text = customer->LastName;

			    Order^ order = Persistance::QueryOrderById(Convert::ToInt32(data[1]));
			    if ((order !=nullptr)&&(order->PersonId== customer->Id)) {

					btnUpdateStatusOrder->Enabled = true;
                    dgvOrder->Rows->Clear();
                    dgvOrder->Rows->Add("" + order->Id, order->Date, "" + order->TotalAmount, order->Status);

                    System::Collections::Generic::List<OrderProduct^>^ orderProducts = Persistance::QueryAllOrderProductsByOrderId(order->Id);
                    dgvProducts->Rows->Clear();
                    for (int i = 0; i < orderProducts->Count; i++) {

                        //Product^ product = gcnew Product();
                        //OrderProduct^ orderProduct = gcnew OrderProduct();
                        Product^ product = Persistance::QueryProductById(orderProducts[i]->ProductId);

                        dgvProducts->Rows->Add("" + orderProducts[i]->Id, product->Name, product->Description, "" + orderProducts[i]->Quantity, "" + orderProducts[i]->SubTotal);

                    }


			    } 
                else {
                    MessageBox::Show("El pedido no existe");
                    return;
                }
            


			}
            else {
                MessageBox::Show("El cliente no existe");
                return;
            }

		}
		else
		{
			MessageBox::Show("El código QR no es válido");
		}

    }
private: System::Void btnUpdateStatusOrder_Click(System::Object^ sender, System::EventArgs^ e) {

	//MessageBox para confirmar si se desea cambiar el estado del pedido

	if (MessageBox::Show("¿Desea cambiar el estado del pedido?", "Actualizar estado", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		//Actualizar el estado del pedido
        int actualizado = 0;
		Order^ order = Persistance::QueryOrderById(Convert::ToInt32(txtIdOrder->Text));
        actualizado= Persistance::UpdateOrderStatus(order->Id,"E");
		if (order->Id == actualizado)
		{
			MessageBox::Show("Estado actualizado correctamente");
		}
		else
		{
			MessageBox::Show("Error en la actualización del estado");
		}
	}

}

private: System::Void ProductPickUpForm_Load(System::Object^ sender, System::EventArgs^ e) {
	btnUpdateStatusOrder->Enabled = false;
}
};
}