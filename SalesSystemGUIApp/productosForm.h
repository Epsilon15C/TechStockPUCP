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

	public ref class productosForm : public System::Windows::Forms::Form
	{

	private:
		List<DataGridView^>^ dataGridViewList;

	public:
		productosForm(void)
		{
			InitializeComponent();
			// Establecer el campo de solo lectura
			txtIdResistor->ReadOnly = true;
			txtDescriptionResistor->ReadOnly = true;
			dgvResistor->ReadOnly = true;
			txtIdResistor->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdBreadboard->ReadOnly = true;
			txtDescriptionBreadboard->ReadOnly = true;
			dgvBreadboard->ReadOnly = true;
			txtIdBreadboard->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdJumperWire->ReadOnly = true;
			txtDescriptionJumperWire->ReadOnly = true;
			dgvJumper->ReadOnly = true;
			txtIdJumperWire->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdSwitch->ReadOnly = true;
			txtDescriptionSwitch->ReadOnly = true;
			dgvSwitch->ReadOnly = true;
			txtIdSwitch->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdDiode->ReadOnly = true;
			txtDescriptionDiode->ReadOnly = true;
			dgvDiode->ReadOnly = true;
			txtIdDiode->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdCapacitor->ReadOnly = true;
			txtDescriptionCapacitor->ReadOnly = true;
			dgvCapacitor->ReadOnly = true;
			txtIdCapacitor->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdInductor->ReadOnly = true;
			txtDescriptionInductor->ReadOnly = true;
			dgvInductor->ReadOnly = true;
			txtIdInductor->Text = ""; // Inicializar con texto vacío

			// Establecer el campo de solo lectura
			txtIdVoltageSource->ReadOnly = true;
			txtDescriptionVoltageSource->ReadOnly = true;
			dgvVoltageSource->ReadOnly = true;
			txtIdVoltageSource->Text = ""; // Inicializar con texto vacío


			dataGridViewList = gcnew List<DataGridView^>();
			// Agrega todos tus DataGridViews a la lista
			dataGridViewList->Add(dgvResistor);
			dataGridViewList->Add(dgvBreadboard);
			dataGridViewList->Add(dgvJumper);
			dataGridViewList->Add(dgvSwitch);
			dataGridViewList->Add(dgvDiode);
			dataGridViewList->Add(dgvCapacitor);
			dataGridViewList->Add(dgvInductor);
			dataGridViewList->Add(dgvVoltageSource);

		}

	protected:
		~productosForm()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPageVoltageSource;
	private: System::Windows::Forms::PictureBox^ pictureBoxVoltageSource;
	private: System::Windows::Forms::Button^ btnCleanAllVoltageSource;
	private: System::Windows::Forms::DataGridView^ dgvVoltageSource;







	private: System::Windows::Forms::TextBox^ txtDescriptionVoltageSource;
	private: System::Windows::Forms::TextBox^ txtVoltageVoltageSource;
	private: System::Windows::Forms::TextBox^ txtPriceVoltageSource;
	private: System::Windows::Forms::TextBox^ txtPowerVoltageSource;
	private: System::Windows::Forms::TextBox^ txtTypeVoltageSource;
	private: System::Windows::Forms::TextBox^ txtNameVoltageSource;
	private: System::Windows::Forms::TextBox^ txtIdVoltageSource;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Button^ btnDeleteVoltageSource;
	private: System::Windows::Forms::Button^ btnUpdateVoltageSource;
	private: System::Windows::Forms::Button^ btnAddVoltageSource;
	private: System::Windows::Forms::TabPage^ tabPageInductor;
	private: System::Windows::Forms::PictureBox^ pictureBoxInductor;
	private: System::Windows::Forms::Button^ btnCleanAllInductor;
	private: System::Windows::Forms::DataGridView^ dgvInductor;







	private: System::Windows::Forms::TextBox^ txtDescriptionInductor;
	private: System::Windows::Forms::TextBox^ txtToleranceInductor;
	private: System::Windows::Forms::TextBox^ txtPriceInductor;
	private: System::Windows::Forms::TextBox^ txtInductanceInductor;
	private: System::Windows::Forms::TextBox^ txtTypeInductor;
	private: System::Windows::Forms::TextBox^ txtNameInductor;
	private: System::Windows::Forms::TextBox^ txtIdInductor;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Button^ btnDeleteInductor;
	private: System::Windows::Forms::Button^ btnUpdateInductor;
	private: System::Windows::Forms::Button^ btnAddInductor;
	private: System::Windows::Forms::TabPage^ tabPageCapacitor;
	private: System::Windows::Forms::PictureBox^ pictureBoxCapacitor;
	private: System::Windows::Forms::Button^ btnCleanAllCapacitor;
	private: System::Windows::Forms::DataGridView^ dgvCapacitor;







	private: System::Windows::Forms::TextBox^ txtDescriptionCapacitor;
	private: System::Windows::Forms::TextBox^ txtToleranceCapacitor;
	private: System::Windows::Forms::TextBox^ txtPriceCapacitor;
	private: System::Windows::Forms::TextBox^ txtCapacitanceCapacitor;
	private: System::Windows::Forms::TextBox^ txtVoltageRatedCapacitor;
	private: System::Windows::Forms::TextBox^ txtNameCapacitor;
	private: System::Windows::Forms::TextBox^ txtIdCapacitor;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Button^ btnDeleteCapacitor;
	private: System::Windows::Forms::Button^ btnUpdateCapacitor;
	private: System::Windows::Forms::Button^ btnAddCapacitor;
	private: System::Windows::Forms::TabPage^ tabPageDiode;
	private: System::Windows::Forms::PictureBox^ pictureBoxDiode;
	private: System::Windows::Forms::DataGridView^ dgvDiode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdDiode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameDiode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceDiode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionDiode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VRMaxDiode;
	private: System::Windows::Forms::TextBox^ txtDescriptionDiode;
	private: System::Windows::Forms::TextBox^ txtPriceDiode;
	private: System::Windows::Forms::TextBox^ txtVRMaxDiode;
	private: System::Windows::Forms::TextBox^ txtNameDiode;
	private: System::Windows::Forms::TextBox^ txtIdDiode;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Button^ btnCleanAllDiode;
	private: System::Windows::Forms::Button^ btnDeleteDiode;
	private: System::Windows::Forms::Button^ btnUpdateDiode;
	private: System::Windows::Forms::Button^ btnAddDiode;
	private: System::Windows::Forms::TabPage^ tabPageSwitch;
	private: System::Windows::Forms::PictureBox^ pictureBoxSwitch;
	private: System::Windows::Forms::DataGridView^ dgvSwitch;





	private: System::Windows::Forms::TextBox^ txtDescriptionSwitch;
	private: System::Windows::Forms::TextBox^ txtPriceSwitch;
	private: System::Windows::Forms::TextBox^ txtTypeSwitch;
	private: System::Windows::Forms::TextBox^ txtNameSwitch;
	private: System::Windows::Forms::TextBox^ txtIdSwitch;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ btnCleanAllSwitch;
	private: System::Windows::Forms::Button^ btnDeleteSwitch;
	private: System::Windows::Forms::Button^ btnUpdateSwitch;
	private: System::Windows::Forms::Button^ btnAddSwitch;
	private: System::Windows::Forms::TabPage^ tabPageJumperWire;
	private: System::Windows::Forms::PictureBox^ pictureBoxJumperWire;
	private: System::Windows::Forms::DataGridView^ dgvJumper;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdJumperWire;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameJumperWire;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceJumperWire;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionJumperWire;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ConectionTypeJumperWire;
	private: System::Windows::Forms::TextBox^ txtDescriptionJumperWire;
	private: System::Windows::Forms::TextBox^ txtPriceJumperWire;
	private: System::Windows::Forms::TextBox^ txtConectionTypeJumperWire;
	private: System::Windows::Forms::TextBox^ txtNameJumperWire;
	private: System::Windows::Forms::TextBox^ txtIdJumperWire;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btnCleanAllJumperWire;
	private: System::Windows::Forms::Button^ btnDeleteJumperWire;
	private: System::Windows::Forms::Button^ btnUpdateJumperWire;
	private: System::Windows::Forms::Button^ btnAddJumperWire;
	private: System::Windows::Forms::TabPage^ tabPageBreadboard;
	private: System::Windows::Forms::PictureBox^ pictureBoxBreadboard;
	private: System::Windows::Forms::DataGridView^ dgvBreadboard;





	private: System::Windows::Forms::TextBox^ txtDescriptionBreadboard;
	private: System::Windows::Forms::TextBox^ txtPriceBreadboard;
	private: System::Windows::Forms::TextBox^ txtTiePointsNumberBreadboard;
	private: System::Windows::Forms::TextBox^ txtNameBreadboard;
	private: System::Windows::Forms::TextBox^ txtIdBreadboard;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCleanAllBreadboard;
	private: System::Windows::Forms::Button^ btnDeleteBreadboard;
	private: System::Windows::Forms::Button^ btnUpdateBreadboard;
	private: System::Windows::Forms::Button^ btnAddBreadboard;
	private: System::Windows::Forms::TabPage^ tabPageResistor;
	private: System::Windows::Forms::PictureBox^ pictureBoxResistor;
	private: System::Windows::Forms::DataGridView^ dgvResistor;







	private: System::Windows::Forms::TextBox^ txtDescriptionResistor;
	private: System::Windows::Forms::TextBox^ txtToleranceResistor;
	private: System::Windows::Forms::TextBox^ txtPriceResistor;
	private: System::Windows::Forms::TextBox^ txtPowerResistor;
	private: System::Windows::Forms::TextBox^ txtResistanceResistor;
	private: System::Windows::Forms::TextBox^ txtNameResistor;

	private: System::Windows::Forms::Label^ lblPower;
	private: System::Windows::Forms::Label^ lblTolerance;
	private: System::Windows::Forms::Label^ lblResistance;
	private: System::Windows::Forms::Label^ lblPrice;
	private: System::Windows::Forms::Label^ lblDescription;
	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::Label^ lblIdRes;
	private: System::Windows::Forms::Button^ btnCleanAllResistor;
	private: System::Windows::Forms::Button^ btnDeleteResistor;
	private: System::Windows::Forms::Button^ btnUpdateResistor;
	private: System::Windows::Forms::Button^ btnAddResistor;
	private: System::Windows::Forms::TabControl^ tabProducts;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ResistanceResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ToleranceResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PowerResistor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdBreadboard;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameBreadboard;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionBreadboard;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceBreadboard;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TiePointsNumberBreadboard;





private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ InductanceIndunctor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ToleranceInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeInductor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ CapacitanceCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ToleranceCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ VoltageRatedCapacitor;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ VoltageVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeVoltageSource;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PowerVoltageSource;
private: System::Windows::Forms::TabPage^ tabPageAll;

private: System::Windows::Forms::Label^ lblSearch;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::DataGridView^ dgvProducts;

private: System::Windows::Forms::TextBox^ txtSearch;



private: System::Windows::Forms::Button^ btnSearch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvName;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvDescription;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvPrice;
private: System::Windows::Forms::MenuStrip^ menuStrip2;
private: System::Windows::Forms::ToolStripMenuItem^ accionesResistenciaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ agregarResistenciaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ modificarResistenciaToolStripMenuItem;



private: System::Windows::Forms::MenuStrip^ menuStrip3;
private: System::Windows::Forms::ToolStripMenuItem^ accionesProtoboardToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoProtoboardToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ modificarProtoboardToolStripMenuItem1;



private: System::Windows::Forms::MenuStrip^ menuStrip4;
private: System::Windows::Forms::ToolStripMenuItem^ accionesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoJumperToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ modificarJumperToolStripMenuItem2;


private: System::Windows::Forms::MenuStrip^ menuStrip5;
private: System::Windows::Forms::MenuStrip^ menuStrip9;
private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoFuenteVoltajeToolStripMenuItem6;
private: System::Windows::Forms::ToolStripMenuItem^ modificarFuenteVoltajeToolStripMenuItem7;


private: System::Windows::Forms::MenuStrip^ menuStrip8;
private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoInductorToolStripMenuItem5;
private: System::Windows::Forms::ToolStripMenuItem^ modificarInductorToolStripMenuItem6;


private: System::Windows::Forms::MenuStrip^ menuStrip7;
private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoCapacitorToolStripMenuItem4;
private: System::Windows::Forms::ToolStripMenuItem^ modificarCapacitorToolStripMenuItem5;


private: System::Windows::Forms::MenuStrip^ menuStrip6;
private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoDiodoToolStripMenuItem3;
private: System::Windows::Forms::ToolStripMenuItem^ modificarDiodoToolStripMenuItem4;


private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ nuevoSwitchToolStripMenuItem2;
private: System::Windows::Forms::ToolStripMenuItem^ modificarSwitchToolStripMenuItem3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IdSwitch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameSwitch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PriceSwitch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ DescriptionSwitch;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeSwitch;
private: System::Windows::Forms::TextBox^ txtIdResistor;
























































































































































































































































































































































































































































































	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageVoltageSource = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxVoltageSource = (gcnew System::Windows::Forms::PictureBox());
			this->btnCleanAllVoltageSource = (gcnew System::Windows::Forms::Button());
			this->dgvVoltageSource = (gcnew System::Windows::Forms::DataGridView());
			this->IdVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VoltageVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PowerVoltageSource = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtVoltageVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtPowerVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtTypeVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtNameVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->txtIdVoltageSource = (gcnew System::Windows::Forms::TextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteVoltageSource = (gcnew System::Windows::Forms::Button());
			this->btnUpdateVoltageSource = (gcnew System::Windows::Forms::Button());
			this->btnAddVoltageSource = (gcnew System::Windows::Forms::Button());
			this->menuStrip9 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoFuenteVoltajeToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarFuenteVoltajeToolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageInductor = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxInductor = (gcnew System::Windows::Forms::PictureBox());
			this->btnCleanAllInductor = (gcnew System::Windows::Forms::Button());
			this->dgvInductor = (gcnew System::Windows::Forms::DataGridView());
			this->IdInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->InductanceIndunctor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ToleranceInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeInductor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtToleranceInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtInductanceInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtTypeInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtNameInductor = (gcnew System::Windows::Forms::TextBox());
			this->txtIdInductor = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteInductor = (gcnew System::Windows::Forms::Button());
			this->btnUpdateInductor = (gcnew System::Windows::Forms::Button());
			this->btnAddInductor = (gcnew System::Windows::Forms::Button());
			this->menuStrip8 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoInductorToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarInductorToolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageCapacitor = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxCapacitor = (gcnew System::Windows::Forms::PictureBox());
			this->btnCleanAllCapacitor = (gcnew System::Windows::Forms::Button());
			this->dgvCapacitor = (gcnew System::Windows::Forms::DataGridView());
			this->IdCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CapacitanceCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ToleranceCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VoltageRatedCapacitor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtToleranceCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtCapacitanceCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtVoltageRatedCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtNameCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->txtIdCapacitor = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteCapacitor = (gcnew System::Windows::Forms::Button());
			this->btnUpdateCapacitor = (gcnew System::Windows::Forms::Button());
			this->btnAddCapacitor = (gcnew System::Windows::Forms::Button());
			this->menuStrip7 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoCapacitorToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarCapacitorToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageDiode = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxDiode = (gcnew System::Windows::Forms::PictureBox());
			this->dgvDiode = (gcnew System::Windows::Forms::DataGridView());
			this->IdDiode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameDiode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceDiode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionDiode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->VRMaxDiode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionDiode = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceDiode = (gcnew System::Windows::Forms::TextBox());
			this->txtVRMaxDiode = (gcnew System::Windows::Forms::TextBox());
			this->txtNameDiode = (gcnew System::Windows::Forms::TextBox());
			this->txtIdDiode = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->btnCleanAllDiode = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDiode = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDiode = (gcnew System::Windows::Forms::Button());
			this->btnAddDiode = (gcnew System::Windows::Forms::Button());
			this->menuStrip6 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoDiodoToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarDiodoToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageSwitch = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxSwitch = (gcnew System::Windows::Forms::PictureBox());
			this->dgvSwitch = (gcnew System::Windows::Forms::DataGridView());
			this->IdSwitch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameSwitch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceSwitch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionSwitch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeSwitch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionSwitch = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceSwitch = (gcnew System::Windows::Forms::TextBox());
			this->txtTypeSwitch = (gcnew System::Windows::Forms::TextBox());
			this->txtNameSwitch = (gcnew System::Windows::Forms::TextBox());
			this->txtIdSwitch = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btnCleanAllSwitch = (gcnew System::Windows::Forms::Button());
			this->btnDeleteSwitch = (gcnew System::Windows::Forms::Button());
			this->btnUpdateSwitch = (gcnew System::Windows::Forms::Button());
			this->btnAddSwitch = (gcnew System::Windows::Forms::Button());
			this->menuStrip5 = (gcnew System::Windows::Forms::MenuStrip());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoSwitchToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarSwitchToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageJumperWire = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxJumperWire = (gcnew System::Windows::Forms::PictureBox());
			this->dgvJumper = (gcnew System::Windows::Forms::DataGridView());
			this->IdJumperWire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameJumperWire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceJumperWire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionJumperWire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ConectionTypeJumperWire = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionJumperWire = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceJumperWire = (gcnew System::Windows::Forms::TextBox());
			this->txtConectionTypeJumperWire = (gcnew System::Windows::Forms::TextBox());
			this->txtNameJumperWire = (gcnew System::Windows::Forms::TextBox());
			this->txtIdJumperWire = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnCleanAllJumperWire = (gcnew System::Windows::Forms::Button());
			this->btnDeleteJumperWire = (gcnew System::Windows::Forms::Button());
			this->btnUpdateJumperWire = (gcnew System::Windows::Forms::Button());
			this->btnAddJumperWire = (gcnew System::Windows::Forms::Button());
			this->menuStrip4 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoJumperToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarJumperToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageBreadboard = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxBreadboard = (gcnew System::Windows::Forms::PictureBox());
			this->dgvBreadboard = (gcnew System::Windows::Forms::DataGridView());
			this->IdBreadboard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameBreadboard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionBreadboard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceBreadboard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TiePointsNumberBreadboard = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionBreadboard = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceBreadboard = (gcnew System::Windows::Forms::TextBox());
			this->txtTiePointsNumberBreadboard = (gcnew System::Windows::Forms::TextBox());
			this->txtNameBreadboard = (gcnew System::Windows::Forms::TextBox());
			this->txtIdBreadboard = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCleanAllBreadboard = (gcnew System::Windows::Forms::Button());
			this->btnDeleteBreadboard = (gcnew System::Windows::Forms::Button());
			this->btnUpdateBreadboard = (gcnew System::Windows::Forms::Button());
			this->btnAddBreadboard = (gcnew System::Windows::Forms::Button());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesProtoboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoProtoboardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarProtoboardToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPageResistor = (gcnew System::Windows::Forms::TabPage());
			this->pictureBoxResistor = (gcnew System::Windows::Forms::PictureBox());
			this->dgvResistor = (gcnew System::Windows::Forms::DataGridView());
			this->IdResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PriceResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DescriptionResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ResistanceResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ToleranceResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PowerResistor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtDescriptionResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtToleranceResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtPriceResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtPowerResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtResistanceResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtNameResistor = (gcnew System::Windows::Forms::TextBox());
			this->txtIdResistor = (gcnew System::Windows::Forms::TextBox());
			this->lblPower = (gcnew System::Windows::Forms::Label());
			this->lblTolerance = (gcnew System::Windows::Forms::Label());
			this->lblResistance = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblIdRes = (gcnew System::Windows::Forms::Label());
			this->btnCleanAllResistor = (gcnew System::Windows::Forms::Button());
			this->btnDeleteResistor = (gcnew System::Windows::Forms::Button());
			this->btnUpdateResistor = (gcnew System::Windows::Forms::Button());
			this->btnAddResistor = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->accionesResistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarResistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarResistenciaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabProducts = (gcnew System::Windows::Forms::TabControl());
			this->tabPageAll = (gcnew System::Windows::Forms::TabPage());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->dgvName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->lblSearch = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->tabPageVoltageSource->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVoltageSource))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVoltageSource))->BeginInit();
			this->menuStrip9->SuspendLayout();
			this->tabPageInductor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInductor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInductor))->BeginInit();
			this->menuStrip8->SuspendLayout();
			this->tabPageCapacitor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCapacitor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCapacitor))->BeginInit();
			this->menuStrip7->SuspendLayout();
			this->tabPageDiode->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDiode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiode))->BeginInit();
			this->menuStrip6->SuspendLayout();
			this->tabPageSwitch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSwitch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSwitch))->BeginInit();
			this->menuStrip5->SuspendLayout();
			this->tabPageJumperWire->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJumperWire))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvJumper))->BeginInit();
			this->menuStrip4->SuspendLayout();
			this->tabPageBreadboard->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBreadboard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBreadboard))->BeginInit();
			this->menuStrip3->SuspendLayout();
			this->tabPageResistor->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxResistor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResistor))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->tabProducts->SuspendLayout();
			this->tabPageAll->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->productosToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(858, 28);
			this->menuStrip1->TabIndex = 21;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->productosToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &productosForm::salirToolStripMenuItem_Click);
			// 
			// tabPageVoltageSource
			// 
			this->tabPageVoltageSource->BackColor = System::Drawing::Color::Black;
			this->tabPageVoltageSource->Controls->Add(this->pictureBoxVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->btnCleanAllVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->dgvVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtDescriptionVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtVoltageVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtPriceVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtPowerVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtTypeVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtNameVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->txtIdVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->label43);
			this->tabPageVoltageSource->Controls->Add(this->label44);
			this->tabPageVoltageSource->Controls->Add(this->label45);
			this->tabPageVoltageSource->Controls->Add(this->label46);
			this->tabPageVoltageSource->Controls->Add(this->label47);
			this->tabPageVoltageSource->Controls->Add(this->label48);
			this->tabPageVoltageSource->Controls->Add(this->label49);
			this->tabPageVoltageSource->Controls->Add(this->btnDeleteVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->btnUpdateVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->btnAddVoltageSource);
			this->tabPageVoltageSource->Controls->Add(this->menuStrip9);
			this->tabPageVoltageSource->Location = System::Drawing::Point(4, 25);
			this->tabPageVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageVoltageSource->Name = L"tabPageVoltageSource";
			this->tabPageVoltageSource->Size = System::Drawing::Size(850, 493);
			this->tabPageVoltageSource->TabIndex = 7;
			this->tabPageVoltageSource->Text = L"Fuente de voltaje";
			// 
			// pictureBoxVoltageSource
			// 
			this->pictureBoxVoltageSource->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxVoltageSource->Location = System::Drawing::Point(649, 39);
			this->pictureBoxVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxVoltageSource->Name = L"pictureBoxVoltageSource";
			this->pictureBoxVoltageSource->Size = System::Drawing::Size(149, 128);
			this->pictureBoxVoltageSource->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxVoltageSource->TabIndex = 52;
			this->pictureBoxVoltageSource->TabStop = false;
			this->pictureBoxVoltageSource->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxVoltageSource_Click);
			// 
			// btnCleanAllVoltageSource
			// 
			this->btnCleanAllVoltageSource->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllVoltageSource->FlatAppearance->BorderSize = 0;
			this->btnCleanAllVoltageSource->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllVoltageSource->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCleanAllVoltageSource->Location = System::Drawing::Point(669, 213);
			this->btnCleanAllVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllVoltageSource->Name = L"btnCleanAllVoltageSource";
			this->btnCleanAllVoltageSource->Size = System::Drawing::Size(129, 35);
			this->btnCleanAllVoltageSource->TabIndex = 50;
			this->btnCleanAllVoltageSource->Text = L"Limpiar todo";
			this->btnCleanAllVoltageSource->UseVisualStyleBackColor = false;
			this->btnCleanAllVoltageSource->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllVoltageSource_Click);
			// 
			// dgvVoltageSource
			// 
			this->dgvVoltageSource->AllowUserToAddRows = false;
			this->dgvVoltageSource->BackgroundColor = System::Drawing::Color::Black;
			this->dgvVoltageSource->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVoltageSource->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IdVoltageSource,
					this->NameVoltageSource, this->PriceVoltageSource, this->DescriptionVoltageSource, this->VoltageVoltageSource, this->TypeVoltageSource,
					this->PowerVoltageSource
			});
			this->dgvVoltageSource->Location = System::Drawing::Point(7, 260);
			this->dgvVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvVoltageSource->Name = L"dgvVoltageSource";
			this->dgvVoltageSource->RowHeadersVisible = false;
			this->dgvVoltageSource->RowHeadersWidth = 51;
			this->dgvVoltageSource->RowTemplate->Height = 24;
			this->dgvVoltageSource->Size = System::Drawing::Size(823, 196);
			this->dgvVoltageSource->TabIndex = 40;
			this->dgvVoltageSource->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvVoltageSource_CellClick);
			// 
			// IdVoltageSource
			// 
			this->IdVoltageSource->HeaderText = L"Id";
			this->IdVoltageSource->MinimumWidth = 6;
			this->IdVoltageSource->Name = L"IdVoltageSource";
			this->IdVoltageSource->Width = 125;
			// 
			// NameVoltageSource
			// 
			this->NameVoltageSource->HeaderText = L"Nombre";
			this->NameVoltageSource->MinimumWidth = 6;
			this->NameVoltageSource->Name = L"NameVoltageSource";
			this->NameVoltageSource->Width = 125;
			// 
			// PriceVoltageSource
			// 
			this->PriceVoltageSource->HeaderText = L"Precio";
			this->PriceVoltageSource->MinimumWidth = 6;
			this->PriceVoltageSource->Name = L"PriceVoltageSource";
			this->PriceVoltageSource->Width = 125;
			// 
			// DescriptionVoltageSource
			// 
			this->DescriptionVoltageSource->HeaderText = L"Descripción";
			this->DescriptionVoltageSource->MinimumWidth = 6;
			this->DescriptionVoltageSource->Name = L"DescriptionVoltageSource";
			this->DescriptionVoltageSource->Width = 125;
			// 
			// VoltageVoltageSource
			// 
			this->VoltageVoltageSource->HeaderText = L"Voltaje";
			this->VoltageVoltageSource->MinimumWidth = 6;
			this->VoltageVoltageSource->Name = L"VoltageVoltageSource";
			this->VoltageVoltageSource->Width = 125;
			// 
			// TypeVoltageSource
			// 
			this->TypeVoltageSource->HeaderText = L"Tipo";
			this->TypeVoltageSource->MinimumWidth = 6;
			this->TypeVoltageSource->Name = L"TypeVoltageSource";
			this->TypeVoltageSource->Width = 125;
			// 
			// PowerVoltageSource
			// 
			this->PowerVoltageSource->HeaderText = L"Potencia";
			this->PowerVoltageSource->MinimumWidth = 6;
			this->PowerVoltageSource->Name = L"PowerVoltageSource";
			this->PowerVoltageSource->Width = 125;
			// 
			// txtDescriptionVoltageSource
			// 
			this->txtDescriptionVoltageSource->Location = System::Drawing::Point(113, 119);
			this->txtDescriptionVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionVoltageSource->Name = L"txtDescriptionVoltageSource";
			this->txtDescriptionVoltageSource->Size = System::Drawing::Size(487, 22);
			this->txtDescriptionVoltageSource->TabIndex = 39;
			// 
			// txtVoltageVoltageSource
			// 
			this->txtVoltageVoltageSource->Location = System::Drawing::Point(460, 161);
			this->txtVoltageVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtVoltageVoltageSource->Name = L"txtVoltageVoltageSource";
			this->txtVoltageVoltageSource->Size = System::Drawing::Size(140, 22);
			this->txtVoltageVoltageSource->TabIndex = 37;
			// 
			// txtPriceVoltageSource
			// 
			this->txtPriceVoltageSource->Location = System::Drawing::Point(480, 32);
			this->txtPriceVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceVoltageSource->Name = L"txtPriceVoltageSource";
			this->txtPriceVoltageSource->Size = System::Drawing::Size(120, 22);
			this->txtPriceVoltageSource->TabIndex = 36;
			// 
			// txtPowerVoltageSource
			// 
			this->txtPowerVoltageSource->Location = System::Drawing::Point(125, 156);
			this->txtPowerVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPowerVoltageSource->Name = L"txtPowerVoltageSource";
			this->txtPowerVoltageSource->Size = System::Drawing::Size(151, 22);
			this->txtPowerVoltageSource->TabIndex = 35;
			// 
			// txtTypeVoltageSource
			// 
			this->txtTypeVoltageSource->Location = System::Drawing::Point(437, 74);
			this->txtTypeVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTypeVoltageSource->Name = L"txtTypeVoltageSource";
			this->txtTypeVoltageSource->Size = System::Drawing::Size(163, 22);
			this->txtTypeVoltageSource->TabIndex = 34;
			// 
			// txtNameVoltageSource
			// 
			this->txtNameVoltageSource->Location = System::Drawing::Point(109, 78);
			this->txtNameVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameVoltageSource->Name = L"txtNameVoltageSource";
			this->txtNameVoltageSource->Size = System::Drawing::Size(167, 22);
			this->txtNameVoltageSource->TabIndex = 33;
			// 
			// txtIdVoltageSource
			// 
			this->txtIdVoltageSource->Location = System::Drawing::Point(109, 39);
			this->txtIdVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdVoltageSource->Name = L"txtIdVoltageSource";
			this->txtIdVoltageSource->Size = System::Drawing::Size(167, 22);
			this->txtIdVoltageSource->TabIndex = 27;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::Color::White;
			this->label43->Location = System::Drawing::Point(20, 161);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(87, 16);
			this->label43->TabIndex = 38;
			this->label43->Text = L"Potencia (W):";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->ForeColor = System::Drawing::Color::White;
			this->label44->Location = System::Drawing::Point(349, 165);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(72, 16);
			this->label44->TabIndex = 32;
			this->label44->Text = L"Voltaje (V):";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::Color::White;
			this->label45->Location = System::Drawing::Point(344, 80);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(38, 16);
			this->label45->TabIndex = 31;
			this->label45->Text = L"Tipo:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->ForeColor = System::Drawing::Color::White;
			this->label46->Location = System::Drawing::Point(345, 37);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(77, 16);
			this->label46->TabIndex = 30;
			this->label46->Text = L"Precio (S/-):";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->ForeColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(17, 124);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(82, 16);
			this->label47->TabIndex = 29;
			this->label47->Text = L"Descripción:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::Color::White;
			this->label48->Location = System::Drawing::Point(19, 81);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(59, 16);
			this->label48->TabIndex = 28;
			this->label48->Text = L"Nombre:";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->ForeColor = System::Drawing::Color::White;
			this->label49->Location = System::Drawing::Point(21, 43);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(21, 16);
			this->label49->TabIndex = 26;
			this->label49->Text = L"Id:";
			// 
			// btnDeleteVoltageSource
			// 
			this->btnDeleteVoltageSource->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteVoltageSource->FlatAppearance->BorderSize = 0;
			this->btnDeleteVoltageSource->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteVoltageSource->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteVoltageSource->Location = System::Drawing::Point(463, 217);
			this->btnDeleteVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteVoltageSource->Name = L"btnDeleteVoltageSource";
			this->btnDeleteVoltageSource->Size = System::Drawing::Size(128, 31);
			this->btnDeleteVoltageSource->TabIndex = 24;
			this->btnDeleteVoltageSource->Text = L"Eliminar";
			this->btnDeleteVoltageSource->UseVisualStyleBackColor = false;
			this->btnDeleteVoltageSource->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteVoltageSource_Click);
			// 
			// btnUpdateVoltageSource
			// 
			this->btnUpdateVoltageSource->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateVoltageSource->FlatAppearance->BorderSize = 0;
			this->btnUpdateVoltageSource->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateVoltageSource->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateVoltageSource->Location = System::Drawing::Point(263, 217);
			this->btnUpdateVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateVoltageSource->Name = L"btnUpdateVoltageSource";
			this->btnUpdateVoltageSource->Size = System::Drawing::Size(128, 31);
			this->btnUpdateVoltageSource->TabIndex = 23;
			this->btnUpdateVoltageSource->Text = L"Modificar";
			this->btnUpdateVoltageSource->UseVisualStyleBackColor = false;
			this->btnUpdateVoltageSource->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateVoltageSource_Click);
			// 
			// btnAddVoltageSource
			// 
			this->btnAddVoltageSource->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddVoltageSource->FlatAppearance->BorderSize = 0;
			this->btnAddVoltageSource->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddVoltageSource->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddVoltageSource->Location = System::Drawing::Point(92, 217);
			this->btnAddVoltageSource->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddVoltageSource->Name = L"btnAddVoltageSource";
			this->btnAddVoltageSource->Size = System::Drawing::Size(131, 31);
			this->btnAddVoltageSource->TabIndex = 22;
			this->btnAddVoltageSource->Text = L"Agregar";
			this->btnAddVoltageSource->UseVisualStyleBackColor = false;
			this->btnAddVoltageSource->Click += gcnew System::EventHandler(this, &productosForm::btnAddVoltageSource_Click);
			// 
			// menuStrip9
			// 
			this->menuStrip9->AllowMerge = false;
			this->menuStrip9->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip9->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem4 });
			this->menuStrip9->Location = System::Drawing::Point(0, 0);
			this->menuStrip9->Name = L"menuStrip9";
			this->menuStrip9->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip9->Size = System::Drawing::Size(850, 28);
			this->menuStrip9->TabIndex = 53;
			this->menuStrip9->Text = L"menuStrip9";
			// 
			// opcionesToolStripMenuItem4
			// 
			this->opcionesToolStripMenuItem4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoFuenteVoltajeToolStripMenuItem6,
					this->modificarFuenteVoltajeToolStripMenuItem7
			});
			this->opcionesToolStripMenuItem4->Name = L"opcionesToolStripMenuItem4";
			this->opcionesToolStripMenuItem4->Size = System::Drawing::Size(85, 24);
			this->opcionesToolStripMenuItem4->Text = L"Opciones";
			// 
			// nuevoFuenteVoltajeToolStripMenuItem6
			// 
			this->nuevoFuenteVoltajeToolStripMenuItem6->Name = L"nuevoFuenteVoltajeToolStripMenuItem6";
			this->nuevoFuenteVoltajeToolStripMenuItem6->Size = System::Drawing::Size(156, 26);
			this->nuevoFuenteVoltajeToolStripMenuItem6->Text = L"Nuevo";
			this->nuevoFuenteVoltajeToolStripMenuItem6->Click += gcnew System::EventHandler(this, &productosForm::nuevoFuenteVoltajeToolStripMenuItem6_Click);
			// 
			// modificarFuenteVoltajeToolStripMenuItem7
			// 
			this->modificarFuenteVoltajeToolStripMenuItem7->Name = L"modificarFuenteVoltajeToolStripMenuItem7";
			this->modificarFuenteVoltajeToolStripMenuItem7->Size = System::Drawing::Size(156, 26);
			this->modificarFuenteVoltajeToolStripMenuItem7->Text = L"Modificar";
			this->modificarFuenteVoltajeToolStripMenuItem7->Click += gcnew System::EventHandler(this, &productosForm::modificarFuenteVoltajeToolStripMenuItem7_Click);
			// 
			// tabPageInductor
			// 
			this->tabPageInductor->BackColor = System::Drawing::Color::Black;
			this->tabPageInductor->Controls->Add(this->pictureBoxInductor);
			this->tabPageInductor->Controls->Add(this->btnCleanAllInductor);
			this->tabPageInductor->Controls->Add(this->dgvInductor);
			this->tabPageInductor->Controls->Add(this->txtDescriptionInductor);
			this->tabPageInductor->Controls->Add(this->txtToleranceInductor);
			this->tabPageInductor->Controls->Add(this->txtPriceInductor);
			this->tabPageInductor->Controls->Add(this->txtInductanceInductor);
			this->tabPageInductor->Controls->Add(this->txtTypeInductor);
			this->tabPageInductor->Controls->Add(this->txtNameInductor);
			this->tabPageInductor->Controls->Add(this->txtIdInductor);
			this->tabPageInductor->Controls->Add(this->label36);
			this->tabPageInductor->Controls->Add(this->label37);
			this->tabPageInductor->Controls->Add(this->label38);
			this->tabPageInductor->Controls->Add(this->label39);
			this->tabPageInductor->Controls->Add(this->label40);
			this->tabPageInductor->Controls->Add(this->label41);
			this->tabPageInductor->Controls->Add(this->label42);
			this->tabPageInductor->Controls->Add(this->btnDeleteInductor);
			this->tabPageInductor->Controls->Add(this->btnUpdateInductor);
			this->tabPageInductor->Controls->Add(this->btnAddInductor);
			this->tabPageInductor->Controls->Add(this->menuStrip8);
			this->tabPageInductor->Location = System::Drawing::Point(4, 25);
			this->tabPageInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageInductor->Name = L"tabPageInductor";
			this->tabPageInductor->Size = System::Drawing::Size(850, 493);
			this->tabPageInductor->TabIndex = 6;
			this->tabPageInductor->Text = L"Inductor";
			// 
			// pictureBoxInductor
			// 
			this->pictureBoxInductor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxInductor->Location = System::Drawing::Point(652, 39);
			this->pictureBoxInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxInductor->Name = L"pictureBoxInductor";
			this->pictureBoxInductor->Size = System::Drawing::Size(149, 128);
			this->pictureBoxInductor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxInductor->TabIndex = 52;
			this->pictureBoxInductor->TabStop = false;
			this->pictureBoxInductor->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxInductor_Click);
			// 
			// btnCleanAllInductor
			// 
			this->btnCleanAllInductor->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllInductor->FlatAppearance->BorderSize = 0;
			this->btnCleanAllInductor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllInductor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllInductor->Location = System::Drawing::Point(672, 213);
			this->btnCleanAllInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllInductor->Name = L"btnCleanAllInductor";
			this->btnCleanAllInductor->Size = System::Drawing::Size(113, 35);
			this->btnCleanAllInductor->TabIndex = 50;
			this->btnCleanAllInductor->Text = L"Limpiar todo";
			this->btnCleanAllInductor->UseVisualStyleBackColor = false;
			this->btnCleanAllInductor->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllInductor_Click);
			// 
			// dgvInductor
			// 
			this->dgvInductor->AllowUserToAddRows = false;
			this->dgvInductor->BackgroundColor = System::Drawing::Color::Black;
			this->dgvInductor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInductor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IdInductor,
					this->NameInductor, this->PriceInductor, this->DescriptionInductor, this->InductanceIndunctor, this->ToleranceInductor, this->TypeInductor
			});
			this->dgvInductor->Location = System::Drawing::Point(7, 260);
			this->dgvInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvInductor->Name = L"dgvInductor";
			this->dgvInductor->RowHeadersVisible = false;
			this->dgvInductor->RowHeadersWidth = 51;
			this->dgvInductor->RowTemplate->Height = 24;
			this->dgvInductor->Size = System::Drawing::Size(823, 196);
			this->dgvInductor->TabIndex = 40;
			this->dgvInductor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvInductor_CellClick);
			// 
			// IdInductor
			// 
			this->IdInductor->HeaderText = L"Id";
			this->IdInductor->MinimumWidth = 6;
			this->IdInductor->Name = L"IdInductor";
			this->IdInductor->Width = 125;
			// 
			// NameInductor
			// 
			this->NameInductor->HeaderText = L"Nombre";
			this->NameInductor->MinimumWidth = 6;
			this->NameInductor->Name = L"NameInductor";
			this->NameInductor->Width = 125;
			// 
			// PriceInductor
			// 
			this->PriceInductor->HeaderText = L"Precio";
			this->PriceInductor->MinimumWidth = 6;
			this->PriceInductor->Name = L"PriceInductor";
			this->PriceInductor->Width = 125;
			// 
			// DescriptionInductor
			// 
			this->DescriptionInductor->HeaderText = L"Descripción";
			this->DescriptionInductor->MinimumWidth = 6;
			this->DescriptionInductor->Name = L"DescriptionInductor";
			this->DescriptionInductor->Width = 125;
			// 
			// InductanceIndunctor
			// 
			this->InductanceIndunctor->HeaderText = L"Inductancia";
			this->InductanceIndunctor->MinimumWidth = 6;
			this->InductanceIndunctor->Name = L"InductanceIndunctor";
			this->InductanceIndunctor->Width = 125;
			// 
			// ToleranceInductor
			// 
			this->ToleranceInductor->HeaderText = L"Tolerancia";
			this->ToleranceInductor->MinimumWidth = 6;
			this->ToleranceInductor->Name = L"ToleranceInductor";
			this->ToleranceInductor->Width = 125;
			// 
			// TypeInductor
			// 
			this->TypeInductor->HeaderText = L"Tipo";
			this->TypeInductor->MinimumWidth = 6;
			this->TypeInductor->Name = L"TypeInductor";
			this->TypeInductor->Width = 125;
			// 
			// txtDescriptionInductor
			// 
			this->txtDescriptionInductor->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionInductor->Name = L"txtDescriptionInductor";
			this->txtDescriptionInductor->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionInductor->TabIndex = 39;
			// 
			// txtToleranceInductor
			// 
			this->txtToleranceInductor->Location = System::Drawing::Point(489, 165);
			this->txtToleranceInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtToleranceInductor->Name = L"txtToleranceInductor";
			this->txtToleranceInductor->Size = System::Drawing::Size(108, 22);
			this->txtToleranceInductor->TabIndex = 37;
			// 
			// txtPriceInductor
			// 
			this->txtPriceInductor->Location = System::Drawing::Point(489, 31);
			this->txtPriceInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceInductor->Name = L"txtPriceInductor";
			this->txtPriceInductor->Size = System::Drawing::Size(111, 22);
			this->txtPriceInductor->TabIndex = 36;
			// 
			// txtInductanceInductor
			// 
			this->txtInductanceInductor->Location = System::Drawing::Point(149, 166);
			this->txtInductanceInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtInductanceInductor->Name = L"txtInductanceInductor";
			this->txtInductanceInductor->Size = System::Drawing::Size(127, 22);
			this->txtInductanceInductor->TabIndex = 35;
			// 
			// txtTypeInductor
			// 
			this->txtTypeInductor->Location = System::Drawing::Point(444, 74);
			this->txtTypeInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTypeInductor->Name = L"txtTypeInductor";
			this->txtTypeInductor->Size = System::Drawing::Size(155, 22);
			this->txtTypeInductor->TabIndex = 34;
			// 
			// txtNameInductor
			// 
			this->txtNameInductor->Location = System::Drawing::Point(109, 78);
			this->txtNameInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameInductor->Name = L"txtNameInductor";
			this->txtNameInductor->Size = System::Drawing::Size(167, 22);
			this->txtNameInductor->TabIndex = 33;
			// 
			// txtIdInductor
			// 
			this->txtIdInductor->Location = System::Drawing::Point(109, 39);
			this->txtIdInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdInductor->Name = L"txtIdInductor";
			this->txtIdInductor->Size = System::Drawing::Size(167, 22);
			this->txtIdInductor->TabIndex = 27;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->ForeColor = System::Drawing::Color::White;
			this->label36->Location = System::Drawing::Point(17, 172);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(110, 16);
			this->label36->TabIndex = 38;
			this->label36->Text = L"Inductancia (mH):";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(348, 170);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(98, 16);
			this->label37->TabIndex = 32;
			this->label37->Text = L"Tolerancia (%):";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::Color::White;
			this->label38->Location = System::Drawing::Point(345, 80);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(38, 16);
			this->label38->TabIndex = 31;
			this->label38->Text = L"Tipo:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::Color::White;
			this->label39->Location = System::Drawing::Point(347, 37);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(77, 16);
			this->label39->TabIndex = 30;
			this->label39->Text = L"Precio (S/-):";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->ForeColor = System::Drawing::Color::White;
			this->label40->Location = System::Drawing::Point(16, 124);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(82, 16);
			this->label40->TabIndex = 29;
			this->label40->Text = L"Descripción:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::Color::White;
			this->label41->Location = System::Drawing::Point(19, 80);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(59, 16);
			this->label41->TabIndex = 28;
			this->label41->Text = L"Nombre:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->ForeColor = System::Drawing::Color::White;
			this->label42->Location = System::Drawing::Point(21, 43);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(21, 16);
			this->label42->TabIndex = 26;
			this->label42->Text = L"Id:";
			// 
			// btnDeleteInductor
			// 
			this->btnDeleteInductor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteInductor->FlatAppearance->BorderSize = 0;
			this->btnDeleteInductor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteInductor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteInductor->Location = System::Drawing::Point(444, 217);
			this->btnDeleteInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteInductor->Name = L"btnDeleteInductor";
			this->btnDeleteInductor->Size = System::Drawing::Size(128, 31);
			this->btnDeleteInductor->TabIndex = 24;
			this->btnDeleteInductor->Text = L"Eliminar";
			this->btnDeleteInductor->UseVisualStyleBackColor = false;
			this->btnDeleteInductor->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteInductor_Click);
			// 
			// btnUpdateInductor
			// 
			this->btnUpdateInductor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateInductor->FlatAppearance->BorderSize = 0;
			this->btnUpdateInductor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateInductor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateInductor->Location = System::Drawing::Point(259, 217);
			this->btnUpdateInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateInductor->Name = L"btnUpdateInductor";
			this->btnUpdateInductor->Size = System::Drawing::Size(128, 31);
			this->btnUpdateInductor->TabIndex = 23;
			this->btnUpdateInductor->Text = L"Modificar";
			this->btnUpdateInductor->UseVisualStyleBackColor = false;
			this->btnUpdateInductor->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateInductor_Click);
			// 
			// btnAddInductor
			// 
			this->btnAddInductor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddInductor->FlatAppearance->BorderSize = 0;
			this->btnAddInductor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddInductor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddInductor->Location = System::Drawing::Point(109, 217);
			this->btnAddInductor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddInductor->Name = L"btnAddInductor";
			this->btnAddInductor->Size = System::Drawing::Size(131, 31);
			this->btnAddInductor->TabIndex = 22;
			this->btnAddInductor->Text = L"Agregar";
			this->btnAddInductor->UseVisualStyleBackColor = false;
			this->btnAddInductor->Click += gcnew System::EventHandler(this, &productosForm::btnAddInductor_Click);
			// 
			// menuStrip8
			// 
			this->menuStrip8->AllowMerge = false;
			this->menuStrip8->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip8->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem3 });
			this->menuStrip8->Location = System::Drawing::Point(0, 0);
			this->menuStrip8->Name = L"menuStrip8";
			this->menuStrip8->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip8->Size = System::Drawing::Size(850, 28);
			this->menuStrip8->TabIndex = 53;
			this->menuStrip8->Text = L"menuStrip8";
			// 
			// opcionesToolStripMenuItem3
			// 
			this->opcionesToolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoInductorToolStripMenuItem5,
					this->modificarInductorToolStripMenuItem6
			});
			this->opcionesToolStripMenuItem3->Name = L"opcionesToolStripMenuItem3";
			this->opcionesToolStripMenuItem3->Size = System::Drawing::Size(85, 24);
			this->opcionesToolStripMenuItem3->Text = L"Opciones";
			// 
			// nuevoInductorToolStripMenuItem5
			// 
			this->nuevoInductorToolStripMenuItem5->Name = L"nuevoInductorToolStripMenuItem5";
			this->nuevoInductorToolStripMenuItem5->Size = System::Drawing::Size(156, 26);
			this->nuevoInductorToolStripMenuItem5->Text = L"Nuevo";
			this->nuevoInductorToolStripMenuItem5->Click += gcnew System::EventHandler(this, &productosForm::nuevoInductorToolStripMenuItem5_Click);
			// 
			// modificarInductorToolStripMenuItem6
			// 
			this->modificarInductorToolStripMenuItem6->Name = L"modificarInductorToolStripMenuItem6";
			this->modificarInductorToolStripMenuItem6->Size = System::Drawing::Size(156, 26);
			this->modificarInductorToolStripMenuItem6->Text = L"Modificar";
			this->modificarInductorToolStripMenuItem6->Click += gcnew System::EventHandler(this, &productosForm::modificarInductorToolStripMenuItem6_Click);
			// 
			// tabPageCapacitor
			// 
			this->tabPageCapacitor->BackColor = System::Drawing::Color::Black;
			this->tabPageCapacitor->Controls->Add(this->pictureBoxCapacitor);
			this->tabPageCapacitor->Controls->Add(this->btnCleanAllCapacitor);
			this->tabPageCapacitor->Controls->Add(this->dgvCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtDescriptionCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtToleranceCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtPriceCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtCapacitanceCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtVoltageRatedCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtNameCapacitor);
			this->tabPageCapacitor->Controls->Add(this->txtIdCapacitor);
			this->tabPageCapacitor->Controls->Add(this->label29);
			this->tabPageCapacitor->Controls->Add(this->label30);
			this->tabPageCapacitor->Controls->Add(this->label31);
			this->tabPageCapacitor->Controls->Add(this->label32);
			this->tabPageCapacitor->Controls->Add(this->label33);
			this->tabPageCapacitor->Controls->Add(this->label34);
			this->tabPageCapacitor->Controls->Add(this->label35);
			this->tabPageCapacitor->Controls->Add(this->btnDeleteCapacitor);
			this->tabPageCapacitor->Controls->Add(this->btnUpdateCapacitor);
			this->tabPageCapacitor->Controls->Add(this->btnAddCapacitor);
			this->tabPageCapacitor->Controls->Add(this->menuStrip7);
			this->tabPageCapacitor->Location = System::Drawing::Point(4, 25);
			this->tabPageCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageCapacitor->Name = L"tabPageCapacitor";
			this->tabPageCapacitor->Size = System::Drawing::Size(850, 493);
			this->tabPageCapacitor->TabIndex = 5;
			this->tabPageCapacitor->Text = L"Capacitor";
			// 
			// pictureBoxCapacitor
			// 
			this->pictureBoxCapacitor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxCapacitor->Location = System::Drawing::Point(656, 37);
			this->pictureBoxCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxCapacitor->Name = L"pictureBoxCapacitor";
			this->pictureBoxCapacitor->Size = System::Drawing::Size(149, 128);
			this->pictureBoxCapacitor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCapacitor->TabIndex = 49;
			this->pictureBoxCapacitor->TabStop = false;
			this->pictureBoxCapacitor->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxCapacitor_Click);
			// 
			// btnCleanAllCapacitor
			// 
			this->btnCleanAllCapacitor->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllCapacitor->FlatAppearance->BorderSize = 0;
			this->btnCleanAllCapacitor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllCapacitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllCapacitor->Location = System::Drawing::Point(665, 214);
			this->btnCleanAllCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllCapacitor->Name = L"btnCleanAllCapacitor";
			this->btnCleanAllCapacitor->Size = System::Drawing::Size(121, 38);
			this->btnCleanAllCapacitor->TabIndex = 47;
			this->btnCleanAllCapacitor->Text = L"Limpiar todo";
			this->btnCleanAllCapacitor->UseVisualStyleBackColor = false;
			this->btnCleanAllCapacitor->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllCapacitor_Click);
			// 
			// dgvCapacitor
			// 
			this->dgvCapacitor->AllowUserToAddRows = false;
			this->dgvCapacitor->BackgroundColor = System::Drawing::Color::Black;
			this->dgvCapacitor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCapacitor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IdCapacitor,
					this->NameCapacitor, this->PriceCapacitor, this->DescriptionCapacitor, this->CapacitanceCapacitor, this->ToleranceCapacitor,
					this->VoltageRatedCapacitor
			});
			this->dgvCapacitor->Location = System::Drawing::Point(3, 268);
			this->dgvCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvCapacitor->Name = L"dgvCapacitor";
			this->dgvCapacitor->RowHeadersVisible = false;
			this->dgvCapacitor->RowHeadersWidth = 51;
			this->dgvCapacitor->RowTemplate->Height = 24;
			this->dgvCapacitor->Size = System::Drawing::Size(823, 188);
			this->dgvCapacitor->TabIndex = 40;
			this->dgvCapacitor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvCapacitor_CellClick);
			// 
			// IdCapacitor
			// 
			this->IdCapacitor->HeaderText = L"Id";
			this->IdCapacitor->MinimumWidth = 6;
			this->IdCapacitor->Name = L"IdCapacitor";
			this->IdCapacitor->Width = 125;
			// 
			// NameCapacitor
			// 
			this->NameCapacitor->HeaderText = L"Nombre";
			this->NameCapacitor->MinimumWidth = 6;
			this->NameCapacitor->Name = L"NameCapacitor";
			this->NameCapacitor->Width = 125;
			// 
			// PriceCapacitor
			// 
			this->PriceCapacitor->HeaderText = L"Precio";
			this->PriceCapacitor->MinimumWidth = 6;
			this->PriceCapacitor->Name = L"PriceCapacitor";
			this->PriceCapacitor->Width = 125;
			// 
			// DescriptionCapacitor
			// 
			this->DescriptionCapacitor->HeaderText = L"Descripción";
			this->DescriptionCapacitor->MinimumWidth = 6;
			this->DescriptionCapacitor->Name = L"DescriptionCapacitor";
			this->DescriptionCapacitor->Width = 125;
			// 
			// CapacitanceCapacitor
			// 
			this->CapacitanceCapacitor->HeaderText = L"Capacitancia";
			this->CapacitanceCapacitor->MinimumWidth = 6;
			this->CapacitanceCapacitor->Name = L"CapacitanceCapacitor";
			this->CapacitanceCapacitor->Width = 125;
			// 
			// ToleranceCapacitor
			// 
			this->ToleranceCapacitor->HeaderText = L"Tolerancia";
			this->ToleranceCapacitor->MinimumWidth = 6;
			this->ToleranceCapacitor->Name = L"ToleranceCapacitor";
			this->ToleranceCapacitor->Width = 125;
			// 
			// VoltageRatedCapacitor
			// 
			this->VoltageRatedCapacitor->HeaderText = L"Voltaje Nominal ";
			this->VoltageRatedCapacitor->MinimumWidth = 6;
			this->VoltageRatedCapacitor->Name = L"VoltageRatedCapacitor";
			this->VoltageRatedCapacitor->Width = 125;
			// 
			// txtDescriptionCapacitor
			// 
			this->txtDescriptionCapacitor->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionCapacitor->Name = L"txtDescriptionCapacitor";
			this->txtDescriptionCapacitor->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionCapacitor->TabIndex = 39;
			this->txtDescriptionCapacitor->TextChanged += gcnew System::EventHandler(this, &productosForm::textBox29_TextChanged);
			// 
			// txtToleranceCapacitor
			// 
			this->txtToleranceCapacitor->Location = System::Drawing::Point(477, 164);
			this->txtToleranceCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtToleranceCapacitor->Name = L"txtToleranceCapacitor";
			this->txtToleranceCapacitor->Size = System::Drawing::Size(120, 22);
			this->txtToleranceCapacitor->TabIndex = 37;
			// 
			// txtPriceCapacitor
			// 
			this->txtPriceCapacitor->Location = System::Drawing::Point(477, 31);
			this->txtPriceCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceCapacitor->Name = L"txtPriceCapacitor";
			this->txtPriceCapacitor->Size = System::Drawing::Size(123, 22);
			this->txtPriceCapacitor->TabIndex = 36;
			this->txtPriceCapacitor->TextChanged += gcnew System::EventHandler(this, &productosForm::txtPrice_TextChanged);
			// 
			// txtCapacitanceCapacitor
			// 
			this->txtCapacitanceCapacitor->Location = System::Drawing::Point(164, 164);
			this->txtCapacitanceCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtCapacitanceCapacitor->Name = L"txtCapacitanceCapacitor";
			this->txtCapacitanceCapacitor->Size = System::Drawing::Size(100, 22);
			this->txtCapacitanceCapacitor->TabIndex = 35;
			// 
			// txtVoltageRatedCapacitor
			// 
			this->txtVoltageRatedCapacitor->Location = System::Drawing::Point(491, 74);
			this->txtVoltageRatedCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtVoltageRatedCapacitor->Name = L"txtVoltageRatedCapacitor";
			this->txtVoltageRatedCapacitor->Size = System::Drawing::Size(108, 22);
			this->txtVoltageRatedCapacitor->TabIndex = 34;
			// 
			// txtNameCapacitor
			// 
			this->txtNameCapacitor->Location = System::Drawing::Point(109, 78);
			this->txtNameCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameCapacitor->Name = L"txtNameCapacitor";
			this->txtNameCapacitor->Size = System::Drawing::Size(155, 22);
			this->txtNameCapacitor->TabIndex = 33;
			// 
			// txtIdCapacitor
			// 
			this->txtIdCapacitor->Location = System::Drawing::Point(109, 39);
			this->txtIdCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdCapacitor->Name = L"txtIdCapacitor";
			this->txtIdCapacitor->Size = System::Drawing::Size(155, 22);
			this->txtIdCapacitor->TabIndex = 27;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::White;
			this->label29->Location = System::Drawing::Point(21, 167);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(118, 16);
			this->label29->TabIndex = 38;
			this->label29->Text = L"Capacitancia (UF):";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::Color::White;
			this->label30->Location = System::Drawing::Point(340, 167);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(98, 16);
			this->label30->TabIndex = 32;
			this->label30->Text = L"Tolerancia (%):";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::Color::White;
			this->label31->Location = System::Drawing::Point(337, 80);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(125, 16);
			this->label31->TabIndex = 31;
			this->label31->Text = L"Voltaje Nominal (V):";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::Color::White;
			this->label32->Location = System::Drawing::Point(339, 37);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(77, 16);
			this->label32->TabIndex = 30;
			this->label32->Text = L"Precio (S/-):";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->ForeColor = System::Drawing::Color::White;
			this->label33->Location = System::Drawing::Point(21, 119);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(82, 16);
			this->label33->TabIndex = 29;
			this->label33->Text = L"Descripción:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::Color::White;
			this->label34->Location = System::Drawing::Point(21, 80);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(59, 16);
			this->label34->TabIndex = 28;
			this->label34->Text = L"Nombre:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(21, 43);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(21, 16);
			this->label35->TabIndex = 26;
			this->label35->Text = L"Id:";
			// 
			// btnDeleteCapacitor
			// 
			this->btnDeleteCapacitor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteCapacitor->FlatAppearance->BorderSize = 0;
			this->btnDeleteCapacitor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteCapacitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteCapacitor->Location = System::Drawing::Point(444, 219);
			this->btnDeleteCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteCapacitor->Name = L"btnDeleteCapacitor";
			this->btnDeleteCapacitor->Size = System::Drawing::Size(128, 31);
			this->btnDeleteCapacitor->TabIndex = 24;
			this->btnDeleteCapacitor->Text = L"Eliminar";
			this->btnDeleteCapacitor->UseVisualStyleBackColor = false;
			this->btnDeleteCapacitor->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteCapacitor_Click);
			// 
			// btnUpdateCapacitor
			// 
			this->btnUpdateCapacitor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateCapacitor->FlatAppearance->BorderSize = 0;
			this->btnUpdateCapacitor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateCapacitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateCapacitor->Location = System::Drawing::Point(259, 219);
			this->btnUpdateCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateCapacitor->Name = L"btnUpdateCapacitor";
			this->btnUpdateCapacitor->Size = System::Drawing::Size(128, 31);
			this->btnUpdateCapacitor->TabIndex = 23;
			this->btnUpdateCapacitor->Text = L"Modificar";
			this->btnUpdateCapacitor->UseVisualStyleBackColor = false;
			this->btnUpdateCapacitor->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateCapacitor_Click);
			// 
			// btnAddCapacitor
			// 
			this->btnAddCapacitor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddCapacitor->FlatAppearance->BorderSize = 0;
			this->btnAddCapacitor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddCapacitor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddCapacitor->Location = System::Drawing::Point(105, 222);
			this->btnAddCapacitor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddCapacitor->Name = L"btnAddCapacitor";
			this->btnAddCapacitor->Size = System::Drawing::Size(131, 31);
			this->btnAddCapacitor->TabIndex = 22;
			this->btnAddCapacitor->Text = L"Agregar";
			this->btnAddCapacitor->UseVisualStyleBackColor = false;
			this->btnAddCapacitor->Click += gcnew System::EventHandler(this, &productosForm::btnAddCapacitor_Click);
			// 
			// menuStrip7
			// 
			this->menuStrip7->AllowMerge = false;
			this->menuStrip7->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip7->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem2 });
			this->menuStrip7->Location = System::Drawing::Point(0, 0);
			this->menuStrip7->Name = L"menuStrip7";
			this->menuStrip7->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip7->Size = System::Drawing::Size(850, 28);
			this->menuStrip7->TabIndex = 50;
			this->menuStrip7->Text = L"menuStrip7";
			// 
			// opcionesToolStripMenuItem2
			// 
			this->opcionesToolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoCapacitorToolStripMenuItem4,
					this->modificarCapacitorToolStripMenuItem5
			});
			this->opcionesToolStripMenuItem2->Name = L"opcionesToolStripMenuItem2";
			this->opcionesToolStripMenuItem2->Size = System::Drawing::Size(85, 24);
			this->opcionesToolStripMenuItem2->Text = L"Opciones";
			// 
			// nuevoCapacitorToolStripMenuItem4
			// 
			this->nuevoCapacitorToolStripMenuItem4->Name = L"nuevoCapacitorToolStripMenuItem4";
			this->nuevoCapacitorToolStripMenuItem4->Size = System::Drawing::Size(156, 26);
			this->nuevoCapacitorToolStripMenuItem4->Text = L"Nuevo";
			this->nuevoCapacitorToolStripMenuItem4->Click += gcnew System::EventHandler(this, &productosForm::nuevoCapacitorToolStripMenuItem4_Click);
			// 
			// modificarCapacitorToolStripMenuItem5
			// 
			this->modificarCapacitorToolStripMenuItem5->Name = L"modificarCapacitorToolStripMenuItem5";
			this->modificarCapacitorToolStripMenuItem5->Size = System::Drawing::Size(156, 26);
			this->modificarCapacitorToolStripMenuItem5->Text = L"Modificar";
			this->modificarCapacitorToolStripMenuItem5->Click += gcnew System::EventHandler(this, &productosForm::modificarCapacitorToolStripMenuItem5_Click);
			// 
			// tabPageDiode
			// 
			this->tabPageDiode->BackColor = System::Drawing::Color::Black;
			this->tabPageDiode->Controls->Add(this->pictureBoxDiode);
			this->tabPageDiode->Controls->Add(this->dgvDiode);
			this->tabPageDiode->Controls->Add(this->txtDescriptionDiode);
			this->tabPageDiode->Controls->Add(this->txtPriceDiode);
			this->tabPageDiode->Controls->Add(this->txtVRMaxDiode);
			this->tabPageDiode->Controls->Add(this->txtNameDiode);
			this->tabPageDiode->Controls->Add(this->txtIdDiode);
			this->tabPageDiode->Controls->Add(this->label24);
			this->tabPageDiode->Controls->Add(this->label25);
			this->tabPageDiode->Controls->Add(this->label26);
			this->tabPageDiode->Controls->Add(this->label27);
			this->tabPageDiode->Controls->Add(this->label28);
			this->tabPageDiode->Controls->Add(this->btnCleanAllDiode);
			this->tabPageDiode->Controls->Add(this->btnDeleteDiode);
			this->tabPageDiode->Controls->Add(this->btnUpdateDiode);
			this->tabPageDiode->Controls->Add(this->btnAddDiode);
			this->tabPageDiode->Controls->Add(this->menuStrip6);
			this->tabPageDiode->Location = System::Drawing::Point(4, 25);
			this->tabPageDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageDiode->Name = L"tabPageDiode";
			this->tabPageDiode->Size = System::Drawing::Size(850, 493);
			this->tabPageDiode->TabIndex = 4;
			this->tabPageDiode->Text = L"Diodo";
			this->tabPageDiode->Click += gcnew System::EventHandler(this, &productosForm::tabPageDiode_Click);
			// 
			// pictureBoxDiode
			// 
			this->pictureBoxDiode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxDiode->Location = System::Drawing::Point(671, 39);
			this->pictureBoxDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxDiode->Name = L"pictureBoxDiode";
			this->pictureBoxDiode->Size = System::Drawing::Size(149, 128);
			this->pictureBoxDiode->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxDiode->TabIndex = 46;
			this->pictureBoxDiode->TabStop = false;
			this->pictureBoxDiode->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxDiode_Click);
			// 
			// dgvDiode
			// 
			this->dgvDiode->AllowUserToAddRows = false;
			this->dgvDiode->BackgroundColor = System::Drawing::Color::Black;
			this->dgvDiode->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDiode->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdDiode, this->NameDiode,
					this->PriceDiode, this->DescriptionDiode, this->VRMaxDiode
			});
			this->dgvDiode->Location = System::Drawing::Point(7, 246);
			this->dgvDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvDiode->Name = L"dgvDiode";
			this->dgvDiode->RowHeadersVisible = false;
			this->dgvDiode->RowHeadersWidth = 51;
			this->dgvDiode->RowTemplate->Height = 24;
			this->dgvDiode->Size = System::Drawing::Size(823, 210);
			this->dgvDiode->TabIndex = 40;
			this->dgvDiode->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvDiode_CellClick);
			// 
			// IdDiode
			// 
			this->IdDiode->HeaderText = L"Id";
			this->IdDiode->MinimumWidth = 6;
			this->IdDiode->Name = L"IdDiode";
			this->IdDiode->Width = 125;
			// 
			// NameDiode
			// 
			this->NameDiode->HeaderText = L"Nombre";
			this->NameDiode->MinimumWidth = 6;
			this->NameDiode->Name = L"NameDiode";
			this->NameDiode->Width = 125;
			// 
			// PriceDiode
			// 
			this->PriceDiode->HeaderText = L"Precio";
			this->PriceDiode->MinimumWidth = 6;
			this->PriceDiode->Name = L"PriceDiode";
			this->PriceDiode->Width = 125;
			// 
			// DescriptionDiode
			// 
			this->DescriptionDiode->HeaderText = L"Descripción";
			this->DescriptionDiode->MinimumWidth = 6;
			this->DescriptionDiode->Name = L"DescriptionDiode";
			this->DescriptionDiode->Width = 125;
			// 
			// VRMaxDiode
			// 
			this->VRMaxDiode->HeaderText = L"Voltaje Maximo en Reversa";
			this->VRMaxDiode->MinimumWidth = 6;
			this->VRMaxDiode->Name = L"VRMaxDiode";
			this->VRMaxDiode->Width = 125;
			// 
			// txtDescriptionDiode
			// 
			this->txtDescriptionDiode->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionDiode->Name = L"txtDescriptionDiode";
			this->txtDescriptionDiode->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionDiode->TabIndex = 39;
			// 
			// txtPriceDiode
			// 
			this->txtPriceDiode->Location = System::Drawing::Point(489, 32);
			this->txtPriceDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceDiode->Name = L"txtPriceDiode";
			this->txtPriceDiode->Size = System::Drawing::Size(111, 22);
			this->txtPriceDiode->TabIndex = 36;
			this->txtPriceDiode->TextChanged += gcnew System::EventHandler(this, &productosForm::textBox24_TextChanged);
			// 
			// txtVRMaxDiode
			// 
			this->txtVRMaxDiode->Location = System::Drawing::Point(549, 76);
			this->txtVRMaxDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtVRMaxDiode->Name = L"txtVRMaxDiode";
			this->txtVRMaxDiode->Size = System::Drawing::Size(49, 22);
			this->txtVRMaxDiode->TabIndex = 34;
			this->txtVRMaxDiode->TextChanged += gcnew System::EventHandler(this, &productosForm::txtVRMax_TextChanged);
			// 
			// txtNameDiode
			// 
			this->txtNameDiode->Location = System::Drawing::Point(109, 78);
			this->txtNameDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameDiode->Name = L"txtNameDiode";
			this->txtNameDiode->Size = System::Drawing::Size(167, 22);
			this->txtNameDiode->TabIndex = 33;
			// 
			// txtIdDiode
			// 
			this->txtIdDiode->Location = System::Drawing::Point(109, 39);
			this->txtIdDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdDiode->Name = L"txtIdDiode";
			this->txtIdDiode->Size = System::Drawing::Size(133, 22);
			this->txtIdDiode->TabIndex = 27;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(337, 80);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(195, 16);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Voltaje Maximo en Reversa (V):";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(337, 37);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(77, 16);
			this->label25->TabIndex = 30;
			this->label25->Text = L"Precio (S/-):";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(21, 119);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(82, 16);
			this->label26->TabIndex = 29;
			this->label26->Text = L"Descripción:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(21, 80);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(59, 16);
			this->label27->TabIndex = 28;
			this->label27->Text = L"Nombre:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(21, 43);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(21, 16);
			this->label28->TabIndex = 26;
			this->label28->Text = L"Id:";
			// 
			// btnCleanAllDiode
			// 
			this->btnCleanAllDiode->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllDiode->FlatAppearance->BorderSize = 0;
			this->btnCleanAllDiode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllDiode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllDiode->Location = System::Drawing::Point(681, 180);
			this->btnCleanAllDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllDiode->Name = L"btnCleanAllDiode";
			this->btnCleanAllDiode->Size = System::Drawing::Size(112, 34);
			this->btnCleanAllDiode->TabIndex = 25;
			this->btnCleanAllDiode->Text = L"Limpiar todo";
			this->btnCleanAllDiode->UseVisualStyleBackColor = false;
			this->btnCleanAllDiode->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllDiode_Click);
			// 
			// btnDeleteDiode
			// 
			this->btnDeleteDiode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteDiode->FlatAppearance->BorderSize = 0;
			this->btnDeleteDiode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteDiode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteDiode->Location = System::Drawing::Point(421, 183);
			this->btnDeleteDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteDiode->Name = L"btnDeleteDiode";
			this->btnDeleteDiode->Size = System::Drawing::Size(128, 31);
			this->btnDeleteDiode->TabIndex = 24;
			this->btnDeleteDiode->Text = L"Eliminar";
			this->btnDeleteDiode->UseVisualStyleBackColor = false;
			this->btnDeleteDiode->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteDiode_Click);
			// 
			// btnUpdateDiode
			// 
			this->btnUpdateDiode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateDiode->FlatAppearance->BorderSize = 0;
			this->btnUpdateDiode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateDiode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateDiode->Location = System::Drawing::Point(263, 183);
			this->btnUpdateDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateDiode->Name = L"btnUpdateDiode";
			this->btnUpdateDiode->Size = System::Drawing::Size(128, 31);
			this->btnUpdateDiode->TabIndex = 23;
			this->btnUpdateDiode->Text = L"Modificar";
			this->btnUpdateDiode->UseVisualStyleBackColor = false;
			this->btnUpdateDiode->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateDiode_Click);
			// 
			// btnAddDiode
			// 
			this->btnAddDiode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddDiode->FlatAppearance->BorderSize = 0;
			this->btnAddDiode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddDiode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddDiode->Location = System::Drawing::Point(109, 183);
			this->btnAddDiode->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddDiode->Name = L"btnAddDiode";
			this->btnAddDiode->Size = System::Drawing::Size(131, 31);
			this->btnAddDiode->TabIndex = 22;
			this->btnAddDiode->Text = L"Agregar";
			this->btnAddDiode->UseVisualStyleBackColor = false;
			this->btnAddDiode->Click += gcnew System::EventHandler(this, &productosForm::btnAddDiode_Click);
			// 
			// menuStrip6
			// 
			this->menuStrip6->AllowMerge = false;
			this->menuStrip6->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip6->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem1 });
			this->menuStrip6->Location = System::Drawing::Point(0, 0);
			this->menuStrip6->Name = L"menuStrip6";
			this->menuStrip6->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip6->Size = System::Drawing::Size(850, 28);
			this->menuStrip6->TabIndex = 47;
			this->menuStrip6->Text = L"menuStrip6";
			// 
			// opcionesToolStripMenuItem1
			// 
			this->opcionesToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoDiodoToolStripMenuItem3,
					this->modificarDiodoToolStripMenuItem4
			});
			this->opcionesToolStripMenuItem1->Name = L"opcionesToolStripMenuItem1";
			this->opcionesToolStripMenuItem1->Size = System::Drawing::Size(85, 24);
			this->opcionesToolStripMenuItem1->Text = L"Opciones";
			// 
			// nuevoDiodoToolStripMenuItem3
			// 
			this->nuevoDiodoToolStripMenuItem3->Name = L"nuevoDiodoToolStripMenuItem3";
			this->nuevoDiodoToolStripMenuItem3->Size = System::Drawing::Size(156, 26);
			this->nuevoDiodoToolStripMenuItem3->Text = L"Nuevo";
			this->nuevoDiodoToolStripMenuItem3->Click += gcnew System::EventHandler(this, &productosForm::nuevoDiodoToolStripMenuItem3_Click);
			// 
			// modificarDiodoToolStripMenuItem4
			// 
			this->modificarDiodoToolStripMenuItem4->Name = L"modificarDiodoToolStripMenuItem4";
			this->modificarDiodoToolStripMenuItem4->Size = System::Drawing::Size(156, 26);
			this->modificarDiodoToolStripMenuItem4->Text = L"Modificar";
			this->modificarDiodoToolStripMenuItem4->Click += gcnew System::EventHandler(this, &productosForm::modificarDiodoToolStripMenuItem4_Click);
			// 
			// tabPageSwitch
			// 
			this->tabPageSwitch->BackColor = System::Drawing::Color::Black;
			this->tabPageSwitch->Controls->Add(this->pictureBoxSwitch);
			this->tabPageSwitch->Controls->Add(this->dgvSwitch);
			this->tabPageSwitch->Controls->Add(this->txtDescriptionSwitch);
			this->tabPageSwitch->Controls->Add(this->txtPriceSwitch);
			this->tabPageSwitch->Controls->Add(this->txtTypeSwitch);
			this->tabPageSwitch->Controls->Add(this->txtNameSwitch);
			this->tabPageSwitch->Controls->Add(this->txtIdSwitch);
			this->tabPageSwitch->Controls->Add(this->label17);
			this->tabPageSwitch->Controls->Add(this->label18);
			this->tabPageSwitch->Controls->Add(this->label19);
			this->tabPageSwitch->Controls->Add(this->label20);
			this->tabPageSwitch->Controls->Add(this->label21);
			this->tabPageSwitch->Controls->Add(this->btnCleanAllSwitch);
			this->tabPageSwitch->Controls->Add(this->btnDeleteSwitch);
			this->tabPageSwitch->Controls->Add(this->btnUpdateSwitch);
			this->tabPageSwitch->Controls->Add(this->btnAddSwitch);
			this->tabPageSwitch->Controls->Add(this->menuStrip5);
			this->tabPageSwitch->Location = System::Drawing::Point(4, 25);
			this->tabPageSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageSwitch->Name = L"tabPageSwitch";
			this->tabPageSwitch->Size = System::Drawing::Size(850, 493);
			this->tabPageSwitch->TabIndex = 3;
			this->tabPageSwitch->Text = L"Switch";
			// 
			// pictureBoxSwitch
			// 
			this->pictureBoxSwitch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxSwitch->Location = System::Drawing::Point(643, 43);
			this->pictureBoxSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxSwitch->Name = L"pictureBoxSwitch";
			this->pictureBoxSwitch->Size = System::Drawing::Size(149, 128);
			this->pictureBoxSwitch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSwitch->TabIndex = 45;
			this->pictureBoxSwitch->TabStop = false;
			this->pictureBoxSwitch->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxSwitch_Click);
			// 
			// dgvSwitch
			// 
			this->dgvSwitch->AllowUserToAddRows = false;
			this->dgvSwitch->BackgroundColor = System::Drawing::Color::Black;
			this->dgvSwitch->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSwitch->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdSwitch, this->NameSwitch,
					this->PriceSwitch, this->DescriptionSwitch, this->TypeSwitch
			});
			this->dgvSwitch->Location = System::Drawing::Point(7, 263);
			this->dgvSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvSwitch->Name = L"dgvSwitch";
			this->dgvSwitch->RowHeadersVisible = false;
			this->dgvSwitch->RowHeadersWidth = 51;
			this->dgvSwitch->RowTemplate->Height = 24;
			this->dgvSwitch->Size = System::Drawing::Size(823, 193);
			this->dgvSwitch->TabIndex = 40;
			this->dgvSwitch->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvSwitch_CellClick);
			// 
			// IdSwitch
			// 
			this->IdSwitch->HeaderText = L"Id";
			this->IdSwitch->MinimumWidth = 6;
			this->IdSwitch->Name = L"IdSwitch";
			this->IdSwitch->Width = 125;
			// 
			// NameSwitch
			// 
			this->NameSwitch->HeaderText = L"Nombre";
			this->NameSwitch->MinimumWidth = 6;
			this->NameSwitch->Name = L"NameSwitch";
			this->NameSwitch->Width = 125;
			// 
			// PriceSwitch
			// 
			this->PriceSwitch->HeaderText = L"Precio";
			this->PriceSwitch->MinimumWidth = 6;
			this->PriceSwitch->Name = L"PriceSwitch";
			this->PriceSwitch->Width = 125;
			// 
			// DescriptionSwitch
			// 
			this->DescriptionSwitch->HeaderText = L"Descripción";
			this->DescriptionSwitch->MinimumWidth = 6;
			this->DescriptionSwitch->Name = L"DescriptionSwitch";
			this->DescriptionSwitch->Width = 125;
			// 
			// TypeSwitch
			// 
			this->TypeSwitch->HeaderText = L"Tipo";
			this->TypeSwitch->MinimumWidth = 6;
			this->TypeSwitch->Name = L"TypeSwitch";
			this->TypeSwitch->Width = 125;
			// 
			// txtDescriptionSwitch
			// 
			this->txtDescriptionSwitch->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionSwitch->Name = L"txtDescriptionSwitch";
			this->txtDescriptionSwitch->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionSwitch->TabIndex = 39;
			// 
			// txtPriceSwitch
			// 
			this->txtPriceSwitch->Location = System::Drawing::Point(479, 34);
			this->txtPriceSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceSwitch->Name = L"txtPriceSwitch";
			this->txtPriceSwitch->Size = System::Drawing::Size(121, 22);
			this->txtPriceSwitch->TabIndex = 36;
			// 
			// txtTypeSwitch
			// 
			this->txtTypeSwitch->Location = System::Drawing::Point(427, 78);
			this->txtTypeSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTypeSwitch->Name = L"txtTypeSwitch";
			this->txtTypeSwitch->Size = System::Drawing::Size(172, 22);
			this->txtTypeSwitch->TabIndex = 34;
			// 
			// txtNameSwitch
			// 
			this->txtNameSwitch->Location = System::Drawing::Point(109, 78);
			this->txtNameSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameSwitch->Name = L"txtNameSwitch";
			this->txtNameSwitch->Size = System::Drawing::Size(167, 22);
			this->txtNameSwitch->TabIndex = 33;
			// 
			// txtIdSwitch
			// 
			this->txtIdSwitch->Location = System::Drawing::Point(109, 39);
			this->txtIdSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdSwitch->Name = L"txtIdSwitch";
			this->txtIdSwitch->Size = System::Drawing::Size(133, 22);
			this->txtIdSwitch->TabIndex = 27;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(337, 80);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 16);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Tipo:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(337, 37);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(77, 16);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Precio (S/-):";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(21, 119);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 16);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Descripción:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(21, 80);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 16);
			this->label20->TabIndex = 28;
			this->label20->Text = L"Nombre:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(21, 43);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(21, 16);
			this->label21->TabIndex = 26;
			this->label21->Text = L"Id:";
			// 
			// btnCleanAllSwitch
			// 
			this->btnCleanAllSwitch->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllSwitch->FlatAppearance->BorderSize = 0;
			this->btnCleanAllSwitch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllSwitch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllSwitch->Location = System::Drawing::Point(671, 191);
			this->btnCleanAllSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllSwitch->Name = L"btnCleanAllSwitch";
			this->btnCleanAllSwitch->Size = System::Drawing::Size(135, 38);
			this->btnCleanAllSwitch->TabIndex = 25;
			this->btnCleanAllSwitch->Text = L"Limpiar todo";
			this->btnCleanAllSwitch->UseVisualStyleBackColor = false;
			this->btnCleanAllSwitch->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllSwitch_Click);
			// 
			// btnDeleteSwitch
			// 
			this->btnDeleteSwitch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteSwitch->FlatAppearance->BorderSize = 0;
			this->btnDeleteSwitch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteSwitch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteSwitch->Location = System::Drawing::Point(427, 191);
			this->btnDeleteSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteSwitch->Name = L"btnDeleteSwitch";
			this->btnDeleteSwitch->Size = System::Drawing::Size(128, 31);
			this->btnDeleteSwitch->TabIndex = 24;
			this->btnDeleteSwitch->Text = L"Eliminar";
			this->btnDeleteSwitch->UseVisualStyleBackColor = false;
			this->btnDeleteSwitch->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteSwitch_Click);
			// 
			// btnUpdateSwitch
			// 
			this->btnUpdateSwitch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateSwitch->FlatAppearance->BorderSize = 0;
			this->btnUpdateSwitch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateSwitch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateSwitch->Location = System::Drawing::Point(263, 191);
			this->btnUpdateSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateSwitch->Name = L"btnUpdateSwitch";
			this->btnUpdateSwitch->Size = System::Drawing::Size(128, 31);
			this->btnUpdateSwitch->TabIndex = 23;
			this->btnUpdateSwitch->Text = L"Modificar";
			this->btnUpdateSwitch->UseVisualStyleBackColor = false;
			this->btnUpdateSwitch->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateSwitch_Click);
			// 
			// btnAddSwitch
			// 
			this->btnAddSwitch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddSwitch->FlatAppearance->BorderSize = 0;
			this->btnAddSwitch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddSwitch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddSwitch->Location = System::Drawing::Point(109, 191);
			this->btnAddSwitch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddSwitch->Name = L"btnAddSwitch";
			this->btnAddSwitch->Size = System::Drawing::Size(131, 31);
			this->btnAddSwitch->TabIndex = 22;
			this->btnAddSwitch->Text = L"Agregar";
			this->btnAddSwitch->UseVisualStyleBackColor = false;
			this->btnAddSwitch->Click += gcnew System::EventHandler(this, &productosForm::btnAddSwitch_Click);
			// 
			// menuStrip5
			// 
			this->menuStrip5->AllowMerge = false;
			this->menuStrip5->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip5->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->opcionesToolStripMenuItem });
			this->menuStrip5->Location = System::Drawing::Point(0, 0);
			this->menuStrip5->Name = L"menuStrip5";
			this->menuStrip5->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip5->Size = System::Drawing::Size(850, 28);
			this->menuStrip5->TabIndex = 46;
			this->menuStrip5->Text = L"menuStrip5";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoSwitchToolStripMenuItem2,
					this->modificarSwitchToolStripMenuItem3
			});
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->opcionesToolStripMenuItem->Text = L"Opciones";
			// 
			// nuevoSwitchToolStripMenuItem2
			// 
			this->nuevoSwitchToolStripMenuItem2->Name = L"nuevoSwitchToolStripMenuItem2";
			this->nuevoSwitchToolStripMenuItem2->Size = System::Drawing::Size(156, 26);
			this->nuevoSwitchToolStripMenuItem2->Text = L"Nuevo";
			this->nuevoSwitchToolStripMenuItem2->Click += gcnew System::EventHandler(this, &productosForm::nuevoSwitchToolStripMenuItem2_Click);
			// 
			// modificarSwitchToolStripMenuItem3
			// 
			this->modificarSwitchToolStripMenuItem3->Name = L"modificarSwitchToolStripMenuItem3";
			this->modificarSwitchToolStripMenuItem3->Size = System::Drawing::Size(156, 26);
			this->modificarSwitchToolStripMenuItem3->Text = L"Modificar";
			this->modificarSwitchToolStripMenuItem3->Click += gcnew System::EventHandler(this, &productosForm::modificarSwitchToolStripMenuItem3_Click);
			// 
			// tabPageJumperWire
			// 
			this->tabPageJumperWire->BackColor = System::Drawing::Color::Black;
			this->tabPageJumperWire->Controls->Add(this->pictureBoxJumperWire);
			this->tabPageJumperWire->Controls->Add(this->dgvJumper);
			this->tabPageJumperWire->Controls->Add(this->txtDescriptionJumperWire);
			this->tabPageJumperWire->Controls->Add(this->txtPriceJumperWire);
			this->tabPageJumperWire->Controls->Add(this->txtConectionTypeJumperWire);
			this->tabPageJumperWire->Controls->Add(this->txtNameJumperWire);
			this->tabPageJumperWire->Controls->Add(this->txtIdJumperWire);
			this->tabPageJumperWire->Controls->Add(this->label10);
			this->tabPageJumperWire->Controls->Add(this->label11);
			this->tabPageJumperWire->Controls->Add(this->label12);
			this->tabPageJumperWire->Controls->Add(this->label13);
			this->tabPageJumperWire->Controls->Add(this->label14);
			this->tabPageJumperWire->Controls->Add(this->btnCleanAllJumperWire);
			this->tabPageJumperWire->Controls->Add(this->btnDeleteJumperWire);
			this->tabPageJumperWire->Controls->Add(this->btnUpdateJumperWire);
			this->tabPageJumperWire->Controls->Add(this->btnAddJumperWire);
			this->tabPageJumperWire->Controls->Add(this->menuStrip4);
			this->tabPageJumperWire->Location = System::Drawing::Point(4, 25);
			this->tabPageJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageJumperWire->Name = L"tabPageJumperWire";
			this->tabPageJumperWire->Size = System::Drawing::Size(850, 493);
			this->tabPageJumperWire->TabIndex = 2;
			this->tabPageJumperWire->Text = L"Jumper";
			this->tabPageJumperWire->Click += gcnew System::EventHandler(this, &productosForm::tabPageJumperWire_Click);
			// 
			// pictureBoxJumperWire
			// 
			this->pictureBoxJumperWire->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxJumperWire->Location = System::Drawing::Point(648, 34);
			this->pictureBoxJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxJumperWire->Name = L"pictureBoxJumperWire";
			this->pictureBoxJumperWire->Size = System::Drawing::Size(149, 128);
			this->pictureBoxJumperWire->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxJumperWire->TabIndex = 44;
			this->pictureBoxJumperWire->TabStop = false;
			this->pictureBoxJumperWire->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxJumperWire_Click);
			// 
			// dgvJumper
			// 
			this->dgvJumper->AllowUserToAddRows = false;
			this->dgvJumper->BackgroundColor = System::Drawing::Color::Black;
			this->dgvJumper->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvJumper->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdJumperWire,
					this->NameJumperWire, this->PriceJumperWire, this->DescriptionJumperWire, this->ConectionTypeJumperWire
			});
			this->dgvJumper->Location = System::Drawing::Point(9, 255);
			this->dgvJumper->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvJumper->Name = L"dgvJumper";
			this->dgvJumper->RowHeadersVisible = false;
			this->dgvJumper->RowHeadersWidth = 51;
			this->dgvJumper->RowTemplate->Height = 24;
			this->dgvJumper->Size = System::Drawing::Size(823, 201);
			this->dgvJumper->TabIndex = 40;
			this->dgvJumper->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvJumper_CellClick);
			// 
			// IdJumperWire
			// 
			this->IdJumperWire->HeaderText = L"Id";
			this->IdJumperWire->MinimumWidth = 6;
			this->IdJumperWire->Name = L"IdJumperWire";
			this->IdJumperWire->Width = 125;
			// 
			// NameJumperWire
			// 
			this->NameJumperWire->HeaderText = L"Nombre";
			this->NameJumperWire->MinimumWidth = 6;
			this->NameJumperWire->Name = L"NameJumperWire";
			this->NameJumperWire->Width = 125;
			// 
			// PriceJumperWire
			// 
			this->PriceJumperWire->HeaderText = L"Precio";
			this->PriceJumperWire->MinimumWidth = 6;
			this->PriceJumperWire->Name = L"PriceJumperWire";
			this->PriceJumperWire->Width = 125;
			// 
			// DescriptionJumperWire
			// 
			this->DescriptionJumperWire->HeaderText = L"Descripción";
			this->DescriptionJumperWire->MinimumWidth = 6;
			this->DescriptionJumperWire->Name = L"DescriptionJumperWire";
			this->DescriptionJumperWire->Width = 125;
			// 
			// ConectionTypeJumperWire
			// 
			this->ConectionTypeJumperWire->HeaderText = L"Tipo de conexión";
			this->ConectionTypeJumperWire->MinimumWidth = 6;
			this->ConectionTypeJumperWire->Name = L"ConectionTypeJumperWire";
			this->ConectionTypeJumperWire->Width = 125;
			// 
			// txtDescriptionJumperWire
			// 
			this->txtDescriptionJumperWire->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionJumperWire->Name = L"txtDescriptionJumperWire";
			this->txtDescriptionJumperWire->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionJumperWire->TabIndex = 39;
			// 
			// txtPriceJumperWire
			// 
			this->txtPriceJumperWire->Location = System::Drawing::Point(489, 34);
			this->txtPriceJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceJumperWire->Name = L"txtPriceJumperWire";
			this->txtPriceJumperWire->Size = System::Drawing::Size(111, 22);
			this->txtPriceJumperWire->TabIndex = 36;
			// 
			// txtConectionTypeJumperWire
			// 
			this->txtConectionTypeJumperWire->Location = System::Drawing::Point(491, 78);
			this->txtConectionTypeJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtConectionTypeJumperWire->Name = L"txtConectionTypeJumperWire";
			this->txtConectionTypeJumperWire->Size = System::Drawing::Size(108, 22);
			this->txtConectionTypeJumperWire->TabIndex = 34;
			// 
			// txtNameJumperWire
			// 
			this->txtNameJumperWire->Location = System::Drawing::Point(109, 80);
			this->txtNameJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameJumperWire->Name = L"txtNameJumperWire";
			this->txtNameJumperWire->Size = System::Drawing::Size(167, 22);
			this->txtNameJumperWire->TabIndex = 33;
			this->txtNameJumperWire->TextChanged += gcnew System::EventHandler(this, &productosForm::textBox13_TextChanged);
			// 
			// txtIdJumperWire
			// 
			this->txtIdJumperWire->Location = System::Drawing::Point(109, 39);
			this->txtIdJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdJumperWire->Name = L"txtIdJumperWire";
			this->txtIdJumperWire->Size = System::Drawing::Size(133, 22);
			this->txtIdJumperWire->TabIndex = 27;
			this->txtIdJumperWire->TextChanged += gcnew System::EventHandler(this, &productosForm::txtIdJumperWire_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(337, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(114, 16);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Tipo de conexión:";
			this->label10->Click += gcnew System::EventHandler(this, &productosForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(341, 37);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(77, 16);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Precio (S/-):";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(15, 126);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 16);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Descripción:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(19, 82);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 16);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Nombre:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(21, 43);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 16);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Id:";
			// 
			// btnCleanAllJumperWire
			// 
			this->btnCleanAllJumperWire->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllJumperWire->FlatAppearance->BorderSize = 0;
			this->btnCleanAllJumperWire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllJumperWire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllJumperWire->Location = System::Drawing::Point(667, 183);
			this->btnCleanAllJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllJumperWire->Name = L"btnCleanAllJumperWire";
			this->btnCleanAllJumperWire->Size = System::Drawing::Size(139, 38);
			this->btnCleanAllJumperWire->TabIndex = 25;
			this->btnCleanAllJumperWire->Text = L"Limpiar todo";
			this->btnCleanAllJumperWire->UseVisualStyleBackColor = false;
			this->btnCleanAllJumperWire->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllJumperWire_Click);
			// 
			// btnDeleteJumperWire
			// 
			this->btnDeleteJumperWire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteJumperWire->FlatAppearance->BorderSize = 0;
			this->btnDeleteJumperWire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteJumperWire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteJumperWire->Location = System::Drawing::Point(417, 183);
			this->btnDeleteJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteJumperWire->Name = L"btnDeleteJumperWire";
			this->btnDeleteJumperWire->Size = System::Drawing::Size(128, 31);
			this->btnDeleteJumperWire->TabIndex = 24;
			this->btnDeleteJumperWire->Text = L"Eliminar";
			this->btnDeleteJumperWire->UseVisualStyleBackColor = false;
			this->btnDeleteJumperWire->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteJumperWire_Click);
			// 
			// btnUpdateJumperWire
			// 
			this->btnUpdateJumperWire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateJumperWire->FlatAppearance->BorderSize = 0;
			this->btnUpdateJumperWire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateJumperWire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateJumperWire->Location = System::Drawing::Point(263, 183);
			this->btnUpdateJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateJumperWire->Name = L"btnUpdateJumperWire";
			this->btnUpdateJumperWire->Size = System::Drawing::Size(128, 31);
			this->btnUpdateJumperWire->TabIndex = 23;
			this->btnUpdateJumperWire->Text = L"Modificar";
			this->btnUpdateJumperWire->UseVisualStyleBackColor = false;
			this->btnUpdateJumperWire->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateJumperWire_Click);
			// 
			// btnAddJumperWire
			// 
			this->btnAddJumperWire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddJumperWire->FlatAppearance->BorderSize = 0;
			this->btnAddJumperWire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddJumperWire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddJumperWire->Location = System::Drawing::Point(113, 183);
			this->btnAddJumperWire->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddJumperWire->Name = L"btnAddJumperWire";
			this->btnAddJumperWire->Size = System::Drawing::Size(131, 31);
			this->btnAddJumperWire->TabIndex = 22;
			this->btnAddJumperWire->Text = L"Agregar";
			this->btnAddJumperWire->UseVisualStyleBackColor = false;
			this->btnAddJumperWire->Click += gcnew System::EventHandler(this, &productosForm::button8_Click);
			// 
			// menuStrip4
			// 
			this->menuStrip4->AllowMerge = false;
			this->menuStrip4->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip4->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesToolStripMenuItem });
			this->menuStrip4->Location = System::Drawing::Point(0, 0);
			this->menuStrip4->Name = L"menuStrip4";
			this->menuStrip4->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip4->Size = System::Drawing::Size(850, 28);
			this->menuStrip4->TabIndex = 45;
			this->menuStrip4->Text = L"menuStrip4";
			// 
			// accionesToolStripMenuItem
			// 
			this->accionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoJumperToolStripMenuItem1,
					this->modificarJumperToolStripMenuItem2
			});
			this->accionesToolStripMenuItem->Name = L"accionesToolStripMenuItem";
			this->accionesToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->accionesToolStripMenuItem->Text = L"Opciones";
			// 
			// nuevoJumperToolStripMenuItem1
			// 
			this->nuevoJumperToolStripMenuItem1->Name = L"nuevoJumperToolStripMenuItem1";
			this->nuevoJumperToolStripMenuItem1->Size = System::Drawing::Size(156, 26);
			this->nuevoJumperToolStripMenuItem1->Text = L"Nuevo";
			this->nuevoJumperToolStripMenuItem1->Click += gcnew System::EventHandler(this, &productosForm::nuevoJumperToolStripMenuItem1_Click);
			// 
			// modificarJumperToolStripMenuItem2
			// 
			this->modificarJumperToolStripMenuItem2->Name = L"modificarJumperToolStripMenuItem2";
			this->modificarJumperToolStripMenuItem2->Size = System::Drawing::Size(156, 26);
			this->modificarJumperToolStripMenuItem2->Text = L"Modificar";
			this->modificarJumperToolStripMenuItem2->Click += gcnew System::EventHandler(this, &productosForm::modificarJumperToolStripMenuItem2_Click);
			// 
			// tabPageBreadboard
			// 
			this->tabPageBreadboard->BackColor = System::Drawing::Color::Black;
			this->tabPageBreadboard->Controls->Add(this->pictureBoxBreadboard);
			this->tabPageBreadboard->Controls->Add(this->dgvBreadboard);
			this->tabPageBreadboard->Controls->Add(this->txtDescriptionBreadboard);
			this->tabPageBreadboard->Controls->Add(this->txtPriceBreadboard);
			this->tabPageBreadboard->Controls->Add(this->txtTiePointsNumberBreadboard);
			this->tabPageBreadboard->Controls->Add(this->txtNameBreadboard);
			this->tabPageBreadboard->Controls->Add(this->txtIdBreadboard);
			this->tabPageBreadboard->Controls->Add(this->label3);
			this->tabPageBreadboard->Controls->Add(this->label4);
			this->tabPageBreadboard->Controls->Add(this->label5);
			this->tabPageBreadboard->Controls->Add(this->label6);
			this->tabPageBreadboard->Controls->Add(this->label7);
			this->tabPageBreadboard->Controls->Add(this->btnCleanAllBreadboard);
			this->tabPageBreadboard->Controls->Add(this->btnDeleteBreadboard);
			this->tabPageBreadboard->Controls->Add(this->btnUpdateBreadboard);
			this->tabPageBreadboard->Controls->Add(this->btnAddBreadboard);
			this->tabPageBreadboard->Controls->Add(this->menuStrip3);
			this->tabPageBreadboard->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPageBreadboard->Location = System::Drawing::Point(4, 25);
			this->tabPageBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageBreadboard->Name = L"tabPageBreadboard";
			this->tabPageBreadboard->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageBreadboard->Size = System::Drawing::Size(850, 493);
			this->tabPageBreadboard->TabIndex = 1;
			this->tabPageBreadboard->Text = L"Protoboard";
			// 
			// pictureBoxBreadboard
			// 
			this->pictureBoxBreadboard->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxBreadboard->Location = System::Drawing::Point(687, 37);
			this->pictureBoxBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxBreadboard->Name = L"pictureBoxBreadboard";
			this->pictureBoxBreadboard->Size = System::Drawing::Size(149, 128);
			this->pictureBoxBreadboard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxBreadboard->TabIndex = 41;
			this->pictureBoxBreadboard->TabStop = false;
			this->pictureBoxBreadboard->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxBreadboard_Click);
			// 
			// dgvBreadboard
			// 
			this->dgvBreadboard->AllowUserToAddRows = false;
			this->dgvBreadboard->BackgroundColor = System::Drawing::Color::Black;
			this->dgvBreadboard->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBreadboard->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IdBreadboard,
					this->NameBreadboard, this->DescriptionBreadboard, this->PriceBreadboard, this->TiePointsNumberBreadboard
			});
			this->dgvBreadboard->Location = System::Drawing::Point(3, 249);
			this->dgvBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvBreadboard->Name = L"dgvBreadboard";
			this->dgvBreadboard->RowHeadersVisible = false;
			this->dgvBreadboard->RowHeadersWidth = 51;
			this->dgvBreadboard->RowTemplate->Height = 24;
			this->dgvBreadboard->Size = System::Drawing::Size(823, 188);
			this->dgvBreadboard->TabIndex = 40;
			this->dgvBreadboard->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvBreadboard_CellClick);
			this->dgvBreadboard->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgv_CellContentClick);
			// 
			// IdBreadboard
			// 
			this->IdBreadboard->HeaderText = L"Id";
			this->IdBreadboard->MinimumWidth = 6;
			this->IdBreadboard->Name = L"IdBreadboard";
			this->IdBreadboard->Width = 125;
			// 
			// NameBreadboard
			// 
			this->NameBreadboard->HeaderText = L"Nombre";
			this->NameBreadboard->MinimumWidth = 6;
			this->NameBreadboard->Name = L"NameBreadboard";
			this->NameBreadboard->Width = 125;
			// 
			// DescriptionBreadboard
			// 
			this->DescriptionBreadboard->HeaderText = L"Descripción";
			this->DescriptionBreadboard->MinimumWidth = 6;
			this->DescriptionBreadboard->Name = L"DescriptionBreadboard";
			this->DescriptionBreadboard->Width = 125;
			// 
			// PriceBreadboard
			// 
			this->PriceBreadboard->HeaderText = L"Precio";
			this->PriceBreadboard->MinimumWidth = 6;
			this->PriceBreadboard->Name = L"PriceBreadboard";
			this->PriceBreadboard->Width = 125;
			// 
			// TiePointsNumberBreadboard
			// 
			this->TiePointsNumberBreadboard->HeaderText = L"Puntos de conexión";
			this->TiePointsNumberBreadboard->MinimumWidth = 6;
			this->TiePointsNumberBreadboard->Name = L"TiePointsNumberBreadboard";
			this->TiePointsNumberBreadboard->Width = 125;
			// 
			// txtDescriptionBreadboard
			// 
			this->txtDescriptionBreadboard->Location = System::Drawing::Point(113, 122);
			this->txtDescriptionBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionBreadboard->Name = L"txtDescriptionBreadboard";
			this->txtDescriptionBreadboard->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionBreadboard->TabIndex = 39;
			// 
			// txtPriceBreadboard
			// 
			this->txtPriceBreadboard->Location = System::Drawing::Point(489, 37);
			this->txtPriceBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceBreadboard->Name = L"txtPriceBreadboard";
			this->txtPriceBreadboard->Size = System::Drawing::Size(111, 22);
			this->txtPriceBreadboard->TabIndex = 36;
			// 
			// txtTiePointsNumberBreadboard
			// 
			this->txtTiePointsNumberBreadboard->Location = System::Drawing::Point(491, 78);
			this->txtTiePointsNumberBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtTiePointsNumberBreadboard->Name = L"txtTiePointsNumberBreadboard";
			this->txtTiePointsNumberBreadboard->Size = System::Drawing::Size(108, 22);
			this->txtTiePointsNumberBreadboard->TabIndex = 34;
			// 
			// txtNameBreadboard
			// 
			this->txtNameBreadboard->Location = System::Drawing::Point(109, 78);
			this->txtNameBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameBreadboard->Name = L"txtNameBreadboard";
			this->txtNameBreadboard->Size = System::Drawing::Size(167, 22);
			this->txtNameBreadboard->TabIndex = 33;
			// 
			// txtIdBreadboard
			// 
			this->txtIdBreadboard->Location = System::Drawing::Point(109, 39);
			this->txtIdBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdBreadboard->Name = L"txtIdBreadboard";
			this->txtIdBreadboard->Size = System::Drawing::Size(133, 22);
			this->txtIdBreadboard->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(337, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 16);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Puntos de conexión:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(337, 41);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Precio (S/-):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(17, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 16);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Descripción:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 82);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 16);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Nombre:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(21, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 16);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Id:";
			// 
			// btnCleanAllBreadboard
			// 
			this->btnCleanAllBreadboard->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllBreadboard->FlatAppearance->BorderSize = 0;
			this->btnCleanAllBreadboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllBreadboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllBreadboard->ForeColor = System::Drawing::Color::Black;
			this->btnCleanAllBreadboard->Location = System::Drawing::Point(696, 196);
			this->btnCleanAllBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllBreadboard->Name = L"btnCleanAllBreadboard";
			this->btnCleanAllBreadboard->Size = System::Drawing::Size(140, 31);
			this->btnCleanAllBreadboard->TabIndex = 25;
			this->btnCleanAllBreadboard->Text = L"Limpiar todo";
			this->btnCleanAllBreadboard->UseVisualStyleBackColor = false;
			this->btnCleanAllBreadboard->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllBreadboard_Click);
			// 
			// btnDeleteBreadboard
			// 
			this->btnDeleteBreadboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteBreadboard->FlatAppearance->BorderSize = 0;
			this->btnDeleteBreadboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteBreadboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteBreadboard->ForeColor = System::Drawing::Color::Black;
			this->btnDeleteBreadboard->Location = System::Drawing::Point(432, 196);
			this->btnDeleteBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteBreadboard->Name = L"btnDeleteBreadboard";
			this->btnDeleteBreadboard->Size = System::Drawing::Size(128, 31);
			this->btnDeleteBreadboard->TabIndex = 24;
			this->btnDeleteBreadboard->Text = L"Eliminar";
			this->btnDeleteBreadboard->UseVisualStyleBackColor = false;
			this->btnDeleteBreadboard->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteBreadboard_Click);
			// 
			// btnUpdateBreadboard
			// 
			this->btnUpdateBreadboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateBreadboard->FlatAppearance->BorderSize = 0;
			this->btnUpdateBreadboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateBreadboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateBreadboard->ForeColor = System::Drawing::Color::Black;
			this->btnUpdateBreadboard->Location = System::Drawing::Point(259, 196);
			this->btnUpdateBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateBreadboard->Name = L"btnUpdateBreadboard";
			this->btnUpdateBreadboard->Size = System::Drawing::Size(128, 31);
			this->btnUpdateBreadboard->TabIndex = 23;
			this->btnUpdateBreadboard->Text = L"Modificar";
			this->btnUpdateBreadboard->UseVisualStyleBackColor = false;
			this->btnUpdateBreadboard->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateBreadboard_Click);
			// 
			// btnAddBreadboard
			// 
			this->btnAddBreadboard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddBreadboard->FlatAppearance->BorderSize = 0;
			this->btnAddBreadboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddBreadboard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddBreadboard->ForeColor = System::Drawing::Color::Black;
			this->btnAddBreadboard->Location = System::Drawing::Point(109, 196);
			this->btnAddBreadboard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddBreadboard->Name = L"btnAddBreadboard";
			this->btnAddBreadboard->Size = System::Drawing::Size(131, 31);
			this->btnAddBreadboard->TabIndex = 22;
			this->btnAddBreadboard->Text = L"Agregar";
			this->btnAddBreadboard->UseVisualStyleBackColor = false;
			this->btnAddBreadboard->Click += gcnew System::EventHandler(this, &productosForm::btnAddBreadboard_Click);
			// 
			// menuStrip3
			// 
			this->menuStrip3->AllowMerge = false;
			this->menuStrip3->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesProtoboardToolStripMenuItem });
			this->menuStrip3->Location = System::Drawing::Point(3, 2);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip3->Size = System::Drawing::Size(844, 28);
			this->menuStrip3->TabIndex = 42;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// accionesProtoboardToolStripMenuItem
			// 
			this->accionesProtoboardToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoProtoboardToolStripMenuItem,
					this->modificarProtoboardToolStripMenuItem1
			});
			this->accionesProtoboardToolStripMenuItem->Name = L"accionesProtoboardToolStripMenuItem";
			this->accionesProtoboardToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->accionesProtoboardToolStripMenuItem->Text = L"Opciones";
			// 
			// nuevoProtoboardToolStripMenuItem
			// 
			this->nuevoProtoboardToolStripMenuItem->Name = L"nuevoProtoboardToolStripMenuItem";
			this->nuevoProtoboardToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->nuevoProtoboardToolStripMenuItem->Text = L"Nuevo";
			this->nuevoProtoboardToolStripMenuItem->Click += gcnew System::EventHandler(this, &productosForm::nuevoProtoboardToolStripMenuItem_Click);
			// 
			// modificarProtoboardToolStripMenuItem1
			// 
			this->modificarProtoboardToolStripMenuItem1->Name = L"modificarProtoboardToolStripMenuItem1";
			this->modificarProtoboardToolStripMenuItem1->Size = System::Drawing::Size(156, 26);
			this->modificarProtoboardToolStripMenuItem1->Text = L"Modificar";
			this->modificarProtoboardToolStripMenuItem1->Click += gcnew System::EventHandler(this, &productosForm::modificarProtoboardToolStripMenuItem1_Click);
			// 
			// tabPageResistor
			// 
			this->tabPageResistor->BackColor = System::Drawing::Color::Black;
			this->tabPageResistor->Controls->Add(this->pictureBoxResistor);
			this->tabPageResistor->Controls->Add(this->dgvResistor);
			this->tabPageResistor->Controls->Add(this->txtDescriptionResistor);
			this->tabPageResistor->Controls->Add(this->txtToleranceResistor);
			this->tabPageResistor->Controls->Add(this->txtPriceResistor);
			this->tabPageResistor->Controls->Add(this->txtPowerResistor);
			this->tabPageResistor->Controls->Add(this->txtResistanceResistor);
			this->tabPageResistor->Controls->Add(this->txtNameResistor);
			this->tabPageResistor->Controls->Add(this->txtIdResistor);
			this->tabPageResistor->Controls->Add(this->lblPower);
			this->tabPageResistor->Controls->Add(this->lblTolerance);
			this->tabPageResistor->Controls->Add(this->lblResistance);
			this->tabPageResistor->Controls->Add(this->lblPrice);
			this->tabPageResistor->Controls->Add(this->lblDescription);
			this->tabPageResistor->Controls->Add(this->lblName);
			this->tabPageResistor->Controls->Add(this->lblIdRes);
			this->tabPageResistor->Controls->Add(this->btnCleanAllResistor);
			this->tabPageResistor->Controls->Add(this->btnDeleteResistor);
			this->tabPageResistor->Controls->Add(this->btnUpdateResistor);
			this->tabPageResistor->Controls->Add(this->btnAddResistor);
			this->tabPageResistor->Controls->Add(this->menuStrip2);
			this->tabPageResistor->Location = System::Drawing::Point(4, 25);
			this->tabPageResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageResistor->Name = L"tabPageResistor";
			this->tabPageResistor->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageResistor->Size = System::Drawing::Size(850, 493);
			this->tabPageResistor->TabIndex = 0;
			this->tabPageResistor->Text = L"Resistencia";
			// 
			// pictureBoxResistor
			// 
			this->pictureBoxResistor->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxResistor->Location = System::Drawing::Point(680, 48);
			this->pictureBoxResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBoxResistor->Name = L"pictureBoxResistor";
			this->pictureBoxResistor->Size = System::Drawing::Size(131, 137);
			this->pictureBoxResistor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxResistor->TabIndex = 22;
			this->pictureBoxResistor->TabStop = false;
			this->pictureBoxResistor->Click += gcnew System::EventHandler(this, &productosForm::pictureBoxResistor_Click);
			// 
			// dgvResistor
			// 
			this->dgvResistor->AllowUserToAddRows = false;
			this->dgvResistor->BackgroundColor = System::Drawing::Color::Black;
			this->dgvResistor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvResistor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IdResistor,
					this->NameResistor, this->PriceResistor, this->DescriptionResistor, this->ResistanceResistor, this->ToleranceResistor, this->PowerResistor
			});
			this->dgvResistor->Location = System::Drawing::Point(5, 292);
			this->dgvResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvResistor->Name = L"dgvResistor";
			this->dgvResistor->RowHeadersVisible = false;
			this->dgvResistor->RowHeadersWidth = 51;
			this->dgvResistor->RowTemplate->Height = 24;
			this->dgvResistor->Size = System::Drawing::Size(823, 178);
			this->dgvResistor->TabIndex = 21;
			this->dgvResistor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvResistor_CellClick);
			this->dgvResistor->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &productosForm::dgvResistor_CellContentClick);
			// 
			// IdResistor
			// 
			this->IdResistor->HeaderText = L"Id";
			this->IdResistor->MinimumWidth = 6;
			this->IdResistor->Name = L"IdResistor";
			this->IdResistor->Width = 125;
			// 
			// NameResistor
			// 
			this->NameResistor->HeaderText = L"Nombre";
			this->NameResistor->MinimumWidth = 6;
			this->NameResistor->Name = L"NameResistor";
			this->NameResistor->Width = 125;
			// 
			// PriceResistor
			// 
			this->PriceResistor->HeaderText = L"Precio";
			this->PriceResistor->MinimumWidth = 6;
			this->PriceResistor->Name = L"PriceResistor";
			this->PriceResistor->Width = 125;
			// 
			// DescriptionResistor
			// 
			this->DescriptionResistor->HeaderText = L"Descripción";
			this->DescriptionResistor->MinimumWidth = 6;
			this->DescriptionResistor->Name = L"DescriptionResistor";
			this->DescriptionResistor->Width = 125;
			// 
			// ResistanceResistor
			// 
			this->ResistanceResistor->HeaderText = L"Valor resistencia";
			this->ResistanceResistor->MinimumWidth = 6;
			this->ResistanceResistor->Name = L"ResistanceResistor";
			this->ResistanceResistor->Width = 125;
			// 
			// ToleranceResistor
			// 
			this->ToleranceResistor->HeaderText = L"Tolerancia";
			this->ToleranceResistor->MinimumWidth = 6;
			this->ToleranceResistor->Name = L"ToleranceResistor";
			this->ToleranceResistor->Width = 125;
			// 
			// PowerResistor
			// 
			this->PowerResistor->HeaderText = L"Potencia";
			this->PowerResistor->MinimumWidth = 6;
			this->PowerResistor->Name = L"PowerResistor";
			this->PowerResistor->Width = 125;
			// 
			// txtDescriptionResistor
			// 
			this->txtDescriptionResistor->Location = System::Drawing::Point(107, 130);
			this->txtDescriptionResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtDescriptionResistor->Name = L"txtDescriptionResistor";
			this->txtDescriptionResistor->Size = System::Drawing::Size(485, 22);
			this->txtDescriptionResistor->TabIndex = 20;
			// 
			// txtToleranceResistor
			// 
			this->txtToleranceResistor->Location = System::Drawing::Point(483, 170);
			this->txtToleranceResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtToleranceResistor->Name = L"txtToleranceResistor";
			this->txtToleranceResistor->Size = System::Drawing::Size(108, 22);
			this->txtToleranceResistor->TabIndex = 16;
			// 
			// txtPriceResistor
			// 
			this->txtPriceResistor->Location = System::Drawing::Point(485, 46);
			this->txtPriceResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPriceResistor->Name = L"txtPriceResistor";
			this->txtPriceResistor->Size = System::Drawing::Size(111, 22);
			this->txtPriceResistor->TabIndex = 15;
			// 
			// txtPowerResistor
			// 
			this->txtPowerResistor->Location = System::Drawing::Point(140, 170);
			this->txtPowerResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtPowerResistor->Name = L"txtPowerResistor";
			this->txtPowerResistor->Size = System::Drawing::Size(112, 22);
			this->txtPowerResistor->TabIndex = 14;
			// 
			// txtResistanceResistor
			// 
			this->txtResistanceResistor->Location = System::Drawing::Point(509, 89);
			this->txtResistanceResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtResistanceResistor->Name = L"txtResistanceResistor";
			this->txtResistanceResistor->Size = System::Drawing::Size(85, 22);
			this->txtResistanceResistor->TabIndex = 13;
			// 
			// txtNameResistor
			// 
			this->txtNameResistor->Location = System::Drawing::Point(107, 91);
			this->txtNameResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtNameResistor->Name = L"txtNameResistor";
			this->txtNameResistor->Size = System::Drawing::Size(145, 22);
			this->txtNameResistor->TabIndex = 12;
			// 
			// txtIdResistor
			// 
			this->txtIdResistor->Location = System::Drawing::Point(107, 54);
			this->txtIdResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtIdResistor->Name = L"txtIdResistor";
			this->txtIdResistor->Size = System::Drawing::Size(145, 22);
			this->txtIdResistor->TabIndex = 5;
			// 
			// lblPower
			// 
			this->lblPower->AutoSize = true;
			this->lblPower->ForeColor = System::Drawing::Color::White;
			this->lblPower->Location = System::Drawing::Point(19, 174);
			this->lblPower->Name = L"lblPower";
			this->lblPower->Size = System::Drawing::Size(87, 16);
			this->lblPower->TabIndex = 19;
			this->lblPower->Text = L"Potencia (W):";
			// 
			// lblTolerance
			// 
			this->lblTolerance->AutoSize = true;
			this->lblTolerance->ForeColor = System::Drawing::Color::White;
			this->lblTolerance->Location = System::Drawing::Point(333, 174);
			this->lblTolerance->Name = L"lblTolerance";
			this->lblTolerance->Size = System::Drawing::Size(98, 16);
			this->lblTolerance->TabIndex = 10;
			this->lblTolerance->Text = L"Tolerancia (%):";
			// 
			// lblResistance
			// 
			this->lblResistance->AutoSize = true;
			this->lblResistance->ForeColor = System::Drawing::Color::White;
			this->lblResistance->Location = System::Drawing::Point(331, 94);
			this->lblResistance->Name = L"lblResistance";
			this->lblResistance->Size = System::Drawing::Size(166, 16);
			this->lblResistance->TabIndex = 9;
			this->lblResistance->Text = L"Valor de resistencia (ohm):";
			// 
			// lblPrice
			// 
			this->lblPrice->AutoSize = true;
			this->lblPrice->ForeColor = System::Drawing::Color::White;
			this->lblPrice->Location = System::Drawing::Point(333, 50);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(77, 16);
			this->lblPrice->TabIndex = 8;
			this->lblPrice->Text = L"Precio (S/-):";
			// 
			// lblDescription
			// 
			this->lblDescription->AutoSize = true;
			this->lblDescription->ForeColor = System::Drawing::Color::White;
			this->lblDescription->Location = System::Drawing::Point(19, 133);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(82, 16);
			this->lblDescription->TabIndex = 7;
			this->lblDescription->Text = L"Descripción:";
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->ForeColor = System::Drawing::Color::White;
			this->lblName->Location = System::Drawing::Point(19, 94);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(59, 16);
			this->lblName->TabIndex = 6;
			this->lblName->Text = L"Nombre:";
			// 
			// lblIdRes
			// 
			this->lblIdRes->AutoSize = true;
			this->lblIdRes->ForeColor = System::Drawing::Color::White;
			this->lblIdRes->Location = System::Drawing::Point(19, 57);
			this->lblIdRes->Name = L"lblIdRes";
			this->lblIdRes->Size = System::Drawing::Size(21, 16);
			this->lblIdRes->TabIndex = 4;
			this->lblIdRes->Text = L"Id:";
			// 
			// btnCleanAllResistor
			// 
			this->btnCleanAllResistor->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btnCleanAllResistor->FlatAppearance->BorderSize = 0;
			this->btnCleanAllResistor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCleanAllResistor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCleanAllResistor->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->btnCleanAllResistor->Location = System::Drawing::Point(681, 238);
			this->btnCleanAllResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCleanAllResistor->Name = L"btnCleanAllResistor";
			this->btnCleanAllResistor->Size = System::Drawing::Size(147, 31);
			this->btnCleanAllResistor->TabIndex = 3;
			this->btnCleanAllResistor->Text = L"Limpiar todo";
			this->btnCleanAllResistor->UseVisualStyleBackColor = false;
			this->btnCleanAllResistor->Click += gcnew System::EventHandler(this, &productosForm::btnCleanAllResistor_Click);
			// 
			// btnDeleteResistor
			// 
			this->btnDeleteResistor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnDeleteResistor->FlatAppearance->BorderSize = 0;
			this->btnDeleteResistor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteResistor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteResistor->Location = System::Drawing::Point(427, 238);
			this->btnDeleteResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnDeleteResistor->Name = L"btnDeleteResistor";
			this->btnDeleteResistor->Size = System::Drawing::Size(128, 31);
			this->btnDeleteResistor->TabIndex = 2;
			this->btnDeleteResistor->Text = L"Eliminar";
			this->btnDeleteResistor->UseVisualStyleBackColor = false;
			this->btnDeleteResistor->Click += gcnew System::EventHandler(this, &productosForm::btnDeleteResistor_Click);
			// 
			// btnUpdateResistor
			// 
			this->btnUpdateResistor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(187)), static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnUpdateResistor->FlatAppearance->BorderSize = 0;
			this->btnUpdateResistor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdateResistor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdateResistor->Location = System::Drawing::Point(259, 235);
			this->btnUpdateResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnUpdateResistor->Name = L"btnUpdateResistor";
			this->btnUpdateResistor->Size = System::Drawing::Size(128, 31);
			this->btnUpdateResistor->TabIndex = 1;
			this->btnUpdateResistor->Text = L"Modificar";
			this->btnUpdateResistor->UseVisualStyleBackColor = false;
			this->btnUpdateResistor->Click += gcnew System::EventHandler(this, &productosForm::btnUpdateResistor_Click);
			// 
			// btnAddResistor
			// 
			this->btnAddResistor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->btnAddResistor->FlatAppearance->BorderSize = 0;
			this->btnAddResistor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddResistor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddResistor->Location = System::Drawing::Point(91, 235);
			this->btnAddResistor->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAddResistor->Name = L"btnAddResistor";
			this->btnAddResistor->Size = System::Drawing::Size(131, 31);
			this->btnAddResistor->TabIndex = 0;
			this->btnAddResistor->Text = L"Agregar";
			this->btnAddResistor->UseVisualStyleBackColor = false;
			this->btnAddResistor->Click += gcnew System::EventHandler(this, &productosForm::btnAddResistor_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->AllowMerge = false;
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->accionesResistenciaToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(3, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(844, 28);
			this->menuStrip2->TabIndex = 23;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// accionesResistenciaToolStripMenuItem
			// 
			this->accionesResistenciaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->agregarResistenciaToolStripMenuItem,
					this->modificarResistenciaToolStripMenuItem
			});
			this->accionesResistenciaToolStripMenuItem->Name = L"accionesResistenciaToolStripMenuItem";
			this->accionesResistenciaToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->accionesResistenciaToolStripMenuItem->Text = L"Opciones";
			// 
			// agregarResistenciaToolStripMenuItem
			// 
			this->agregarResistenciaToolStripMenuItem->Name = L"agregarResistenciaToolStripMenuItem";
			this->agregarResistenciaToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->agregarResistenciaToolStripMenuItem->Text = L"Nuevo";
			this->agregarResistenciaToolStripMenuItem->Click += gcnew System::EventHandler(this, &productosForm::agregarResistenciaToolStripMenuItem_Click);
			// 
			// modificarResistenciaToolStripMenuItem
			// 
			this->modificarResistenciaToolStripMenuItem->Name = L"modificarResistenciaToolStripMenuItem";
			this->modificarResistenciaToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->modificarResistenciaToolStripMenuItem->Text = L"Modificar";
			this->modificarResistenciaToolStripMenuItem->Click += gcnew System::EventHandler(this, &productosForm::modificarResistenciaToolStripMenuItem_Click);
			// 
			// tabProducts
			// 
			this->tabProducts->Controls->Add(this->tabPageAll);
			this->tabProducts->Controls->Add(this->tabPageResistor);
			this->tabProducts->Controls->Add(this->tabPageBreadboard);
			this->tabProducts->Controls->Add(this->tabPageJumperWire);
			this->tabProducts->Controls->Add(this->tabPageSwitch);
			this->tabProducts->Controls->Add(this->tabPageDiode);
			this->tabProducts->Controls->Add(this->tabPageCapacitor);
			this->tabProducts->Controls->Add(this->tabPageInductor);
			this->tabProducts->Controls->Add(this->tabPageVoltageSource);
			this->tabProducts->Location = System::Drawing::Point(0, 30);
			this->tabProducts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabProducts->Name = L"tabProducts";
			this->tabProducts->SelectedIndex = 0;
			this->tabProducts->Size = System::Drawing::Size(858, 522);
			this->tabProducts->TabIndex = 22;
			this->tabProducts->SelectedIndexChanged += gcnew System::EventHandler(this, &productosForm::tabProducts_SelectedIndexChanged);
			// 
			// tabPageAll
			// 
			this->tabPageAll->BackColor = System::Drawing::Color::Black;
			this->tabPageAll->Controls->Add(this->btnSearch);
			this->tabPageAll->Controls->Add(this->label1);
			this->tabPageAll->Controls->Add(this->dgvProducts);
			this->tabPageAll->Controls->Add(this->txtSearch);
			this->tabPageAll->Controls->Add(this->lblSearch);
			this->tabPageAll->Location = System::Drawing::Point(4, 25);
			this->tabPageAll->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPageAll->Name = L"tabPageAll";
			this->tabPageAll->Size = System::Drawing::Size(900, 493);
			this->tabPageAll->TabIndex = 8;
			this->tabPageAll->Text = L"Todos";
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::DarkOrchid;
			this->btnSearch->FlatAppearance->BorderSize = 0;
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->ForeColor = System::Drawing::Color::White;
			this->btnSearch->Location = System::Drawing::Point(421, 26);
			this->btnSearch->Margin = System::Windows::Forms::Padding(4);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(100, 28);
			this->btnSearch->TabIndex = 4;
			this->btnSearch->Text = L"BUSCAR";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &productosForm::btnSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(8, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Lista de productos";
			// 
			// dgvProducts
			// 
			this->dgvProducts->AllowUserToDeleteRows = false;
			this->dgvProducts->BackgroundColor = System::Drawing::Color::Black;
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dgvName,
					this->dgvDescription, this->dgvPrice
			});
			this->dgvProducts->Location = System::Drawing::Point(11, 144);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersVisible = false;
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->RowTemplate->Height = 24;
			this->dgvProducts->Size = System::Drawing::Size(704, 142);
			this->dgvProducts->TabIndex = 2;
			// 
			// dgvName
			// 
			this->dgvName->HeaderText = L"Nombre";
			this->dgvName->MinimumWidth = 6;
			this->dgvName->Name = L"dgvName";
			this->dgvName->Width = 125;
			// 
			// dgvDescription
			// 
			this->dgvDescription->HeaderText = L"Descripción";
			this->dgvDescription->MinimumWidth = 6;
			this->dgvDescription->Name = L"dgvDescription";
			this->dgvDescription->Width = 300;
			// 
			// dgvPrice
			// 
			this->dgvPrice->HeaderText = L"Precio";
			this->dgvPrice->MinimumWidth = 6;
			this->dgvPrice->Name = L"dgvPrice";
			this->dgvPrice->Width = 125;
			// 
			// txtSearch
			// 
			this->txtSearch->Location = System::Drawing::Point(83, 26);
			this->txtSearch->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(312, 22);
			this->txtSearch->TabIndex = 1;
			// 
			// lblSearch
			// 
			this->lblSearch->AutoSize = true;
			this->lblSearch->ForeColor = System::Drawing::Color::White;
			this->lblSearch->Location = System::Drawing::Point(25, 30);
			this->lblSearch->Name = L"lblSearch";
			this->lblSearch->Size = System::Drawing::Size(52, 16);
			this->lblSearch->TabIndex = 0;
			this->lblSearch->Text = L"Buscar:";
			// 
			// productosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(858, 549);
			this->Controls->Add(this->tabProducts);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"productosForm";
			this->Text = L"Mantenimiento de productos";
			this->Load += gcnew System::EventHandler(this, &productosForm::tabPageResistor_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPageVoltageSource->ResumeLayout(false);
			this->tabPageVoltageSource->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxVoltageSource))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVoltageSource))->EndInit();
			this->menuStrip9->ResumeLayout(false);
			this->menuStrip9->PerformLayout();
			this->tabPageInductor->ResumeLayout(false);
			this->tabPageInductor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInductor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInductor))->EndInit();
			this->menuStrip8->ResumeLayout(false);
			this->menuStrip8->PerformLayout();
			this->tabPageCapacitor->ResumeLayout(false);
			this->tabPageCapacitor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCapacitor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCapacitor))->EndInit();
			this->menuStrip7->ResumeLayout(false);
			this->menuStrip7->PerformLayout();
			this->tabPageDiode->ResumeLayout(false);
			this->tabPageDiode->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDiode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDiode))->EndInit();
			this->menuStrip6->ResumeLayout(false);
			this->menuStrip6->PerformLayout();
			this->tabPageSwitch->ResumeLayout(false);
			this->tabPageSwitch->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSwitch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSwitch))->EndInit();
			this->menuStrip5->ResumeLayout(false);
			this->menuStrip5->PerformLayout();
			this->tabPageJumperWire->ResumeLayout(false);
			this->tabPageJumperWire->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxJumperWire))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvJumper))->EndInit();
			this->menuStrip4->ResumeLayout(false);
			this->menuStrip4->PerformLayout();
			this->tabPageBreadboard->ResumeLayout(false);
			this->tabPageBreadboard->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBreadboard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBreadboard))->EndInit();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->tabPageResistor->ResumeLayout(false);
			this->tabPageResistor->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxResistor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResistor))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->tabProducts->ResumeLayout(false);
			this->tabPageAll->ResumeLayout(false);
			this->tabPageAll->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

// CRUD RESISTOR
	   //Mostrar  lista resistor



	   void ShowResistor() {
		   List<Resistor^>^ resistorList = Service::QueryAllResistors();
		   if (resistorList != nullptr) {
			   dgvResistor->Rows->Clear();
			   for (int i = 0; i < resistorList->Count; i++) {
				   dgvResistor->Rows->Add(gcnew array<String^> {"" + resistorList[i]->Id, resistorList[i]->Name,
					   "" + resistorList[i]->Price, resistorList[i]->Description, "" + resistorList[i]->Resistance, "" + resistorList[i]->Tolerance,
					   "" + resistorList[i]->Power, ""});
			   }
		   }
		   
	   }


	   // Obtener el próximo ID disponible
	   int GetNextProductId() {
		   int maxId = 0;

		   // Recopila todos los IDs existentes de todos los DataGridViews
		   for each (DataGridView ^ dataGridView in dataGridViewList) {
			   for each (DataGridViewRow ^ row in dataGridView->Rows) {
				   if (row->Cells[0]->Value != nullptr) {
					   int currentId = Convert::ToInt32(row->Cells[0]->Value);
					   if (currentId > maxId) {
						   maxId = currentId;
					   }
				   }
			   }
		   }

		   // Verifica si hay un hueco disponible entre IDs
		   for (int id = 1; id <= maxId; id++) {
			   bool exists = false;
			   for each (DataGridView ^ dataGridView in dataGridViewList) {
				   for each (DataGridViewRow ^ row in dataGridView->Rows) {
					   if (row->Cells[0]->Value != nullptr) {
						   int currentId = Convert::ToInt32(row->Cells[0]->Value);
						   if (currentId == id) {
							   exists = true;
							   break;
						   }
					   }
				   }
				   if (exists) {
					   break;
				   }
			   }
			   if (!exists) {
				   return id; // Devuelve el primer hueco disponible
			   }
		   }

		   // Si no hay huecos, devuelve el próximo ID después del máximo actual
		   return maxId + 1;
	   }

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


	   String^ GenerateDescriptionResistor(String^ name, String^ resistance, String^ tolerance, String^ power) {
		   return String::Format("Es una {0} de {1} ohm, {2}W y {3}% de tolerancia.", name, resistance, power, tolerance);
	   }

	   //Boton añadir resistor
	private: System::Void btnAddResistor_Click(System::Object^ sender, System::EventArgs^ e) {


	try {
		int id = GetNextProductId();
		txtIdResistor->Text = id.ToString();

		String^ name = txtNameResistor->Text;
		double price = Convert::ToDouble(txtPriceResistor->Text);
		String^ resistance = txtResistanceResistor->Text;
		String^ tolerance = txtToleranceResistor->Text;
		String^ power = txtPowerResistor->Text;

		// Generar la descripción automáticamente
		String^ description = GenerateDescriptionResistor(name, resistance, tolerance, power);

		// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
		array<Byte>^ photo = nullptr;
		if (pictureBoxResistor->Image != nullptr) {
			photo = ImageToByteArray(pictureBoxResistor->Image);
		}

		// Crear un nuevo objeto Resistor con los datos obtenidos
		Resistor^ resistor = gcnew Resistor(id, name, description, photo, price, 0, resistance, tolerance, power);

		Service::AddResistor(resistor);
		ShowResistor();

		// Limpiar los controles después de añadir el resistor
		CleanControlsResistor();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al añadir el resistor: " + ex->Message);
	}

}
	   //Mostrar en el data grid view la informacion del resistor seleccionado

	private: System::Void dgvResistor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int resistorId = Int32::Parse(dgvResistor->Rows[dgvResistor->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Resistor^ resistor = Service::QueryResistorById(resistorId);
		if (resistor != nullptr) {
			txtIdResistor->Text = Convert::ToString(resistor->Id); // "" + robot->Id;
			txtNameResistor->Text = resistor->Name;
			txtDescriptionResistor->Text = resistor->Description;
			txtPriceResistor->Text = Convert::ToString(resistor->Price);
			txtResistanceResistor->Text = resistor->Resistance;
			txtToleranceResistor->Text = resistor->Tolerance;
			txtPowerResistor->Text = resistor->Power;

			// Mostrar la imagen del resistor en el PictureBox si existe
			if (resistor->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(resistor->Photo);
				pictureBoxResistor->Image = System::Drawing::Image::FromStream(ms);
			}
			else {
				pictureBoxResistor->Image = nullptr;
			}
		}

	}
		   //Boton modificar resistor

	private: System::Void btnUpdateResistor_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int id = Convert::ToInt32(txtIdResistor->Text);
			String^ name = txtNameResistor->Text;
			double price = Convert::ToDouble(txtPriceResistor->Text);
			String^ resistance = txtResistanceResistor->Text;
			String^ tolerance = txtToleranceResistor->Text;
			String^ power = txtPowerResistor->Text;

			// Generar la descripción automáticamente
			String^ description = GenerateDescriptionResistor(name, resistance, tolerance, power);

			// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
			array<Byte>^ photo = nullptr;
			if (pictureBoxResistor->Image != nullptr) {
				photo = ImageToByteArray(pictureBoxResistor->Image);
			}

			// Crear un objeto Resistor con los datos obtenidos
			Resistor^ resistor = gcnew Resistor(id, name, description, photo, price, 0, resistance, tolerance, power);

			Service::UpdateResistor(resistor);
			ShowResistor();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al modificar el resistor: " + ex->Message);
		}
	}
//Boton eliminar resistor
private: System::Void btnDeleteResistor_Click(System::Object^ sender, System::EventArgs^ e) {


	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este resistor?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idResistor = Convert::ToInt32(txtIdResistor->Text);
			Service::DeleteResistor(idResistor);

			// Limpiar los controles después de eliminar
			CleanControlsResistor();
			ShowResistor();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al eliminar el resistor: " + ex->Message);
		}
	}
	// Si el usuario selecciona No, no se realiza ninguna acción

}

		   //Limpiar controles resistor
	   void CleanControlsResistor() {
		   txtIdResistor->Text = "";
		   txtNameResistor->Text = "";
		   txtDescriptionResistor->Text = "";
		   txtPriceResistor->Text = "";
		   txtResistanceResistor->Text = "";
		   txtToleranceResistor->Text = "";
		   txtPowerResistor->Text = "";
		   pictureBoxResistor->Image = nullptr;
		   }

 //Boton limpiar controles resistor
private: System::Void btnCleanAllResistor_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsResistor();
}
	   
	   //Mostrar en el data grid view la informacion del resistor seleccionado al iniciar la pestaña
private: System::Void tabPageResistor_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowResistor();
}

	 /////CRUD BREADBOARD/////

	   //Mostrar  lista breadboard
	   void ShowBreadBoard() {
		   List<Breadboard^>^ breadboardList = Service::QueryAllBreadboards();
		   if (breadboardList != nullptr) {
			   dgvBreadboard->Rows->Clear();
			   for (int i = 0; i < breadboardList->Count; i++) {
				   dgvBreadboard->Rows->Add(gcnew array<String^> {"" + breadboardList[i]->Id, breadboardList[i]->Name,
					   "" + breadboardList[i]->Description, "" + breadboardList[i]->Price, "" + breadboardList[i]->TiePointsNumber});
			   }
		   }
	   }


	   String^ GenerateDescriptionBreadboard(String^ name, int TiePointsNumberBreadboard) {
		   return String::Format("Es un {0} de {1} puntos de conexión.", name, TiePointsNumberBreadboard);
	   }



	   //Boton añadir breadboard
	private: System::Void btnAddBreadboard_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = GetNextProductId(); // Obtiene el próximo ID disponible
		txtIdBreadboard->Text = id.ToString(); // Muestra el nuevo ID en el TextBox

		String^ name = txtNameBreadboard->Text;
		double price = Convert::ToDouble(txtPriceBreadboard->Text);
		int tiePointsNumber = Convert::ToInt32(txtTiePointsNumberBreadboard->Text);

		// Generar descripción automáticamente	
		String^ description = GenerateDescriptionBreadboard(name, tiePointsNumber);

		// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
		array<Byte>^ photo = nullptr;
		if (pictureBoxBreadboard->Image != nullptr) {
			photo = ImageToByteArray(pictureBoxBreadboard->Image);
		}

		// Crear un nuevo objeto Breadboard con los datos obtenidos
		Breadboard^ breadboard = gcnew Breadboard(id, name, description, photo, price, 0, tiePointsNumber);

		Service::AddBreadboard(breadboard);
		ShowBreadBoard();
	}

private: System::Void dgvBreadboard_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int breadboardId = Int32::Parse(dgvBreadboard->Rows[dgvBreadboard->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Breadboard^ breadboard = Service::QueryBreadboardById(breadboardId);
	if (breadboard != nullptr) {
		txtIdBreadboard->Text = Convert::ToString(breadboard->Id);
		txtNameBreadboard->Text = breadboard->Name;
		txtDescriptionBreadboard->Text = breadboard->Description;
		txtPriceBreadboard->Text = Convert::ToString(breadboard->Price);
		txtTiePointsNumberBreadboard->Text = Convert::ToString(breadboard->TiePointsNumber);

		// Mostrar la imagen del breadboard en el PictureBox si existe
		if (breadboard->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(breadboard->Photo);
			pictureBoxBreadboard->Image = System::Drawing::Image::FromStream(ms);
		}
		else {
			pictureBoxBreadboard->Image = nullptr;
		}
	}

}
	   //Boton modificar breadboard
private: System::Void btnUpdateBreadboard_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtIdBreadboard->Text);
	String^ name = txtNameBreadboard->Text;
	double price = Convert::ToDouble(txtPriceBreadboard->Text);
	int tiePointsNumber = Convert::ToInt32(txtTiePointsNumberBreadboard->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionBreadboard(name, tiePointsNumber);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxBreadboard->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxBreadboard->Image);
	}

	// Crear un objeto Breadboard con los datos obtenidos
	Breadboard^ breadboard = gcnew Breadboard(id, name, description, photo, price, 0, tiePointsNumber);

	Service::UpdateBreadboard(breadboard);
	ShowBreadBoard();
}
	   //Boton eliminar breadboard
private: System::Void btnDeleteBreadboard_Click(System::Object^ sender, System::EventArgs^ e) {

	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este protoboard?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idBreadboard;
			if (Int32::TryParse(txtIdBreadboard->Text, idBreadboard)) {
				Service::DeleteBreadboard(idBreadboard);
				ShowBreadBoard();
			}
			else {
				// El texto en txtIdBreadboard no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del protoboard no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el protoboard: " + ex->Message);
		}
	}

}
	   //Limpiar controles breadboard

	   void CleanControlsBreadboard() {
		   txtIdBreadboard->Text = "";
		   txtNameBreadboard->Text = "";
		   txtDescriptionBreadboard->Text = "";
		   txtPriceBreadboard->Text = "";
		   txtTiePointsNumberBreadboard->Text = "";
		   pictureBoxBreadboard->Image = nullptr;
	   }
private: System::Void btnCleanAllBreadboard_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsBreadboard();
}

	   //Mostrar en el data grid view la informacion del resistor seleccionado al iniciar la pestaña
private: System::Void tabPageBreadboard_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowBreadBoard();
}

	   /////CRUD JUMPER WIRE/////

	   //Mostrar  lista jumper wire
	   void ShowJumperWire() {
		   List<JumperWire^>^ jumperWireList = Service::QueryAllJumperWires();
		   if (jumperWireList != nullptr) {
			   dgvJumper->Rows->Clear();
			   for (int i = 0; i < jumperWireList->Count; i++) {
				   dgvJumper->Rows->Add(gcnew array<String^> {"" + jumperWireList[i]->Id, jumperWireList[i]->Name,
					   "" + jumperWireList[i]->Price, jumperWireList[i]->Description, "" + jumperWireList[i]->ConectionType});
			   }
		   }
	   }

	   String^ GenerateDescriptionJumperWire(String^ name, String^ conectionType) {
		   return String::Format("Es un {0} de tipo de conexión {1}.", name, conectionType);
	   }



	   //Boton añadir jumper wire

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = GetNextProductId();
		txtIdJumperWire->Text = id.ToString();

		String^ name = txtNameJumperWire->Text;
		double price = Convert::ToDouble(txtPriceJumperWire->Text);
		String^ conectionType = txtConectionTypeJumperWire->Text;

		// Generar descripción automáticamente
		String^ description = GenerateDescriptionJumperWire(name, conectionType);

		// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
		array<Byte>^ photo = nullptr;
		if (pictureBoxJumperWire->Image != nullptr) {
			photo = ImageToByteArray(pictureBoxJumperWire->Image);
		}

		// Crear un nuevo objeto JumperWire con los datos obtenidos
		JumperWire^ jumperWire = gcnew JumperWire(id, name, description, photo, price, 0, conectionType);

		Service::AddJumperWire(jumperWire);
		ShowJumperWire();
	}

private: System::Void dgvJumper_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int jumperWireId = Int32::Parse(dgvJumper->Rows[dgvJumper->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	JumperWire^ jumperWire = Service::QueryJumperWireById(jumperWireId);
	if (jumperWire != nullptr) {
		txtIdJumperWire->Text = Convert::ToString(jumperWire->Id);
		txtNameJumperWire->Text = jumperWire->Name;
		txtDescriptionJumperWire->Text = jumperWire->Description;
		txtPriceJumperWire->Text = Convert::ToString(jumperWire->Price);
		txtConectionTypeJumperWire->Text = jumperWire->ConectionType;

		// Mostrar la imagen del jumper wire en el PictureBox si existe
		if (jumperWire->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(jumperWire->Photo);
			pictureBoxJumperWire->Image = System::Drawing::Image::FromStream(ms);
		}
		else {
			pictureBoxJumperWire->Image = nullptr;
		}
	}
}

	   //Boton modificar jumper wire

private: System::Void btnUpdateJumperWire_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtIdJumperWire->Text);
	String^ name = txtNameJumperWire->Text;
	double price = Convert::ToDouble(txtPriceJumperWire->Text);
	String^ conectionType = txtConectionTypeJumperWire->Text;

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionJumperWire(name, conectionType);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxJumperWire->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxJumperWire->Image);
	}

	// Crear un objeto JumperWire con los datos obtenidos
	JumperWire^ jumperWire = gcnew JumperWire(id, name, description, photo, price, 0, conectionType);

	Service::UpdateJumperWire(jumperWire);
	ShowJumperWire();
}
	//Boton eliminar jumper wire
private: System::Void btnDeleteJumperWire_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este jumper wire?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idJumperWire;
			if (Int32::TryParse(txtIdJumperWire->Text, idJumperWire)) {
				Service::DeleteJumperWire(idJumperWire);
				ShowJumperWire();
			}
			else {
				// El texto en txtIdJumperWire no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del jumper wire no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el jumper wire: " + ex->Message);
		}
	}
}

//Limpiar controles jumper wire

	void CleanControlsJumperWire() {
		txtIdJumperWire->Text = "";
		txtNameJumperWire->Text = "";
		txtDescriptionJumperWire->Text = "";
		txtPriceJumperWire->Text = "";
		txtConectionTypeJumperWire->Text = "";
		pictureBoxJumperWire->Image = nullptr;
	}

	private: System::Void btnCleanAllJumperWire_Click(System::Object^ sender, System::EventArgs^ e) {
		CleanControlsJumperWire();
	}


// CRUD SWITCH
	   //Mostrar  lista switch
		   void ShowSwitch() {
			   List<Switch^>^ switchList = Service::QueryAllSwitches();
			   if (switchList != nullptr) {
				   dgvSwitch->Rows->Clear();
				   for (int i = 0; i < switchList->Count; i++) {
					   dgvSwitch->Rows->Add(gcnew array<String^> {"" + switchList[i]->Id, switchList[i]->Name,
						   "" + switchList[i]->Price, switchList[i]->Description,switchList[i]->Type});
				   }
			   }
		   }

		   String^ GenerateDescriptionSwitch(String^ name, String^ type) {
			   return String::Format("Es un {0} de tipo {1}.", name, type);
		   }


 //Boton añadir switch
private: System::Void btnAddSwitch_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = GetNextProductId();
	txtIdSwitch->Text = id.ToString();

	String^ name = txtNameSwitch->Text;
	double price = Convert::ToDouble(txtPriceSwitch->Text);
	String^ type = txtTypeSwitch->Text;

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionSwitch(name, type);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxSwitch->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxSwitch->Image);
	}

	// Crear un nuevo objeto Switch con los datos obtenidos
	Switch^ switches = gcnew Switch(id, name, description, photo, price, 0, type);

	Service::AddSwitch(switches);
	ShowSwitch();

}
 //Mostrar en el data grid view la informacion del switch seleccionado

	private: System::Void dgvSwitch_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int switchId = Int32::Parse(dgvSwitch->Rows[dgvSwitch->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Switch^ switches = Service::QuerySwitchById(switchId);
		if (switches != nullptr) {
			txtIdSwitch->Text = Convert::ToString(switches->Id);
			txtNameSwitch->Text = switches->Name;
			txtDescriptionSwitch->Text = switches->Description;
			txtPriceSwitch->Text = Convert::ToString(switches->Price);
			txtTypeSwitch->Text = switches->Type;

			// Mostrar la imagen del switch en el PictureBox si existe
			if (switches->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(switches->Photo);
				pictureBoxSwitch->Image = System::Drawing::Image::FromStream(ms);
			}
			else {
				pictureBoxSwitch->Image = nullptr;
			}
		}

	}
		   //Boton modificar resistor

	private: System::Void btnUpdateSwitch_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtIdSwitch->Text);
		String^ name = txtNameSwitch->Text;
		double price = Convert::ToDouble(txtPriceSwitch->Text);
		String^ type = txtTypeSwitch->Text;

		// Generar descripción automáticamente
		String^ description = GenerateDescriptionSwitch(name, type);

		// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
		array<Byte>^ photo = nullptr;
		if (pictureBoxSwitch->Image != nullptr) {
			photo = ImageToByteArray(pictureBoxSwitch->Image);
		}

		// Crear un objeto Switch con los datos obtenidos
		Switch^ switches = gcnew Switch(id, name, description, photo, price, 0, type);

		Service::UpdateSwitch(switches);
		ShowSwitch();
	}
		   //Boton eliminar Switch
private: System::Void btnDeleteSwitch_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este switch?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idSwitch;
			if (Int32::TryParse(txtIdSwitch->Text, idSwitch)) {
				Service::DeleteSwitch(idSwitch);
				ShowSwitch();
			}
			else {
				// El texto en txtIdSwitch no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del switch no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el switch: " + ex->Message);
		}
	}
}
	   //Limpiar controles Switch
	   void CleanControlsSwitch() {
		   txtIdSwitch->Text = "";
		   txtNameSwitch->Text = "";
		   txtDescriptionSwitch->Text = "";
		   txtPriceSwitch->Text = "";
		   txtTypeSwitch->Text = "";
		   pictureBoxSwitch->Image = nullptr;
		  
	   }

	   //Boton limpiar controles Switch
private: System::Void btnCleanAllSwitch_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsSwitch();
}



// CRUD DIODE
	  //Mostrar  lista diode
	   void ShowDiode() {
		   List<Diode^>^ diodeList = Service::QueryAllDiodes();
		   if (diodeList != nullptr) {
			   dgvDiode->Rows->Clear();
			   for (int i = 0; i < diodeList->Count; i++) {
				   dgvDiode->Rows->Add(gcnew array<String^> {"" + diodeList[i]->Id, diodeList[i]->Name,
					   "" + diodeList[i]->Price, diodeList[i]->Description, "" + diodeList[i]->VRMax});
			   }
		   }
	   }

	   String^ GenerateDescriptionDiode(String^ name, double vrmax) {
		   return String::Format("Es un {0} de {1} V de voltaje máximo en reversa.", name, vrmax);
	   }

	   //Boton añadir diode
private: System::Void btnAddDiode_Click(System::Object^ sender, System::EventArgs^ e) {

	int id = GetNextProductId();
	txtIdDiode->Text = id.ToString();

	String^ name = txtNameDiode->Text;
	double price = Convert::ToDouble(txtPriceDiode->Text);
	double vrmax = Convert::ToDouble(txtVRMaxDiode->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionDiode(name, vrmax);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxDiode->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxDiode->Image);
	}

	// Crear un nuevo objeto Diode con los datos obtenidos
	Diode^ diode = gcnew Diode(id, name, description, photo, price, 0, vrmax);

	Service::AddDiode(diode);
	ShowDiode();

}
	   //Mostrar en el data grid view la informacion del diode seleccionado

	private: System::Void dgvDiode_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int diodeId = Int32::Parse(dgvDiode->Rows[dgvDiode->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
		Diode^ diode = Service::QueryDiodeById(diodeId);
		if (diode != nullptr) {
			txtIdDiode->Text = Convert::ToString(diode->Id);
			txtNameDiode->Text = diode->Name;
			txtDescriptionDiode->Text = diode->Description;
			txtPriceDiode->Text = Convert::ToString(diode->Price);
			txtVRMaxDiode->Text = Convert::ToString(diode->VRMax);

			// Mostrar la imagen del diode en el PictureBox si existe
			if (diode->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(diode->Photo);
				pictureBoxDiode->Image = System::Drawing::Image::FromStream(ms);
			}
			else {
				pictureBoxDiode->Image = nullptr;
			}
		}

	}
		   //Boton modificar Diode

	private: System::Void btnUpdateDiode_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtIdDiode->Text);
		String^ name = txtNameDiode->Text;
		double price = Convert::ToDouble(txtPriceDiode->Text);
		double vrmax = Convert::ToDouble(txtVRMaxDiode->Text);

		// Generar descripción automáticamente
		String^ description = GenerateDescriptionDiode(name, vrmax);

		// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
		array<Byte>^ photo = nullptr;
		if (pictureBoxDiode->Image != nullptr) {
			photo = ImageToByteArray(pictureBoxDiode->Image);
		}

		// Crear un objeto Diode con los datos obtenidos
		Diode^ diode = gcnew Diode(id, name, description, photo, price, 0, vrmax);

		Service::UpdateDiode(diode);
		ShowDiode();
	}
		   //Boton eliminar diode
private: System::Void btnDeleteDiode_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este diodo?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idDiode;
			if (Int32::TryParse(txtIdDiode->Text, idDiode)) {
				Service::DeleteDiode(idDiode);
				ShowDiode();
			}
			else {
				// El texto en txtIdDiode no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del diodo no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el diodo: " + ex->Message);
		}
	}
	// Si el usuario selecciona No, no se realiza ninguna acción

}
	   //Limpiar controles diode
	   void CleanControlsDiode() {
		   txtIdDiode->Text = "";
		   txtNameDiode->Text = "";
		   txtDescriptionDiode->Text = "";
		   txtPriceDiode->Text = "";
		   txtVRMaxDiode->Text = "";
		   pictureBoxDiode->Image = nullptr;
		  
	   }

	   //Boton limpiar controles Diode
private: System::Void btnCleanAllDiode_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsDiode();
}

//CRUD CAPACITOR


	   void ShowCapacitor() {
		   List<Capacitor^>^ capacitorList = Service::QueryAllCapacitors();
		   if (capacitorList != nullptr) {
			   dgvCapacitor->Rows->Clear();
			   for (int i = 0; i < capacitorList->Count; i++) {
				   dgvCapacitor->Rows->Add(gcnew array<String^> {"" + capacitorList[i]->Id, capacitorList[i]->Name,
					   "" + capacitorList[i]->Price, capacitorList[i]->Description, "" + capacitorList[i]->Capacitance, 
					   capacitorList[i]->Tolerance,"" + capacitorList[i]->VoltageRated});
			   }
		   }
	   }

	   String^ GenerateDescriptionCapacitor(String^ name, String^ capacitance, double voltageRated, String^ tolerance) {
		   return String::Format("Es un {0} de {1} uF, {2} V de voltaje nominal y {3}% de tolerancia.", name, capacitance, voltageRated, tolerance);
	   }

private: System::Void btnAddCapacitor_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = GetNextProductId();
	txtIdCapacitor->Text = id.ToString();

	String^ name = txtNameCapacitor->Text;
	double price = Convert::ToDouble(txtPriceCapacitor->Text);
	String^ capacitance = txtCapacitanceCapacitor->Text;
	String^ tolerance = txtToleranceCapacitor->Text;
	double voltageRated = Convert::ToDouble(txtVoltageRatedCapacitor->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionCapacitor(name, capacitance, voltageRated, tolerance);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxCapacitor->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxCapacitor->Image);
	}

	// Crear un nuevo objeto Capacitor con los datos obtenidos
	Capacitor^ capacitor = gcnew Capacitor(id, name, description, photo, price, 0, capacitance, tolerance, voltageRated);

	Service::AddCapacitor(capacitor);
	ShowCapacitor();
}

private: System::Void dgvCapacitor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int capacitorId = Int32::Parse(dgvCapacitor->Rows[dgvCapacitor->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Capacitor^ capacitor = Service::QueryCapacitorById(capacitorId);
	if (capacitor != nullptr) {
		txtIdCapacitor->Text = Convert::ToString(capacitor->Id);
		txtNameCapacitor->Text = capacitor->Name;
		txtDescriptionCapacitor->Text = capacitor->Description;
		txtPriceCapacitor->Text = Convert::ToString(capacitor->Price);
		txtCapacitanceCapacitor->Text = capacitor->Capacitance;
		txtToleranceCapacitor->Text = capacitor->Tolerance;
		txtVoltageRatedCapacitor->Text = Convert::ToString(capacitor->VoltageRated);

		// Mostrar la imagen del capacitor en el PictureBox si existe
		if (capacitor->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(capacitor->Photo);
			pictureBoxCapacitor->Image = System::Drawing::Image::FromStream(ms);
		}
		else {
			pictureBoxCapacitor->Image = nullptr;
		}
	}
}
	   //btn modificar capacitor
private: System::Void btnUpdateCapacitor_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtIdCapacitor->Text);
	String^ name = txtNameCapacitor->Text;
	double price = Convert::ToDouble(txtPriceCapacitor->Text);
	String^ capacitance = txtCapacitanceCapacitor->Text;
	String^ tolerance = txtToleranceCapacitor->Text;
	double voltageRated = Convert::ToDouble(txtVoltageRatedCapacitor->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionCapacitor(name, capacitance, voltageRated, tolerance);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxCapacitor->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxCapacitor->Image);
	}

	// Crear un objeto Capacitor con los datos obtenidos
	Capacitor^ capacitor = gcnew Capacitor(id, name, description, photo, price, 0, capacitance, tolerance, voltageRated);

	Service::UpdateCapacitor(capacitor);
	ShowCapacitor();
}
	   //btn eliminar capacitor
private: System::Void btnDeleteCapacitor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este capacitor?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idCapacitor;
			if (Int32::TryParse(txtIdCapacitor->Text, idCapacitor)) {
				Service::DeleteCapacitor(idCapacitor);
				ShowCapacitor();
			}
			else {
				// El texto en txtIdCapacitor no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del capacitor no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el capacitor: " + ex->Message);
		}
	}
	// Si el usuario selecciona No, no se realiza ninguna acción
}

	//Limpiar controles capacitor
	   void CleanControlsCapacitor() {
		txtIdCapacitor->Text = "";
		txtNameCapacitor->Text = "";
		txtDescriptionCapacitor->Text = "";
		txtPriceCapacitor->Text = "";
		txtCapacitanceCapacitor->Text = "";
		txtToleranceCapacitor->Text = "";
		txtVoltageRatedCapacitor->Text = "";
		pictureBoxCapacitor->Image = nullptr;
	}

private: System::Void btnCleanAllCapacitor_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsCapacitor();
}

//Mostrar en el data grid view la informacion del capacitor seleccionado al iniciar la pestaña

//private: System::Void tabPageCapacitor_Load(System::Object^ sender, System::EventArgs^ e) {
	//ShowCapacitor();
//}



//CRUD INDUCTOR

	   void ShowInductor() {
		   List<Inductor^>^ inductorList = Service::QueryAllInductors();
		   if (inductorList != nullptr) {
			   dgvInductor->Rows->Clear();
			   for (int i = 0; i < inductorList->Count; i++) {
				   dgvInductor->Rows->Add(gcnew array<String^> {"" + inductorList[i]->Id, inductorList[i]->Name,
					   "" + inductorList[i]->Price, inductorList[i]->Description, "" + inductorList[i]->Inductance, inductorList[i]->Tolerance,inductorList[i]->Type});
			   }
		   }
	   }

	   String^ GenerateDescriptionInductor(String^ name, String^ type, String^ inductance, String^ tolerance) {
		   return String::Format("Es un {0} de tipo {1} de {2} mH y {3}% de tolerancia.", name, type, inductance, tolerance);
	   }

private: System::Void btnAddInductor_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = GetNextProductId();
	txtIdInductor->Text = id.ToString();

	String^ name = txtNameInductor->Text;
	String^ inductance = txtInductanceInductor->Text;
	String^ tolerance = txtToleranceInductor->Text;
	String^ type = txtTypeInductor->Text;
	double price = Convert::ToDouble(txtPriceInductor->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionInductor(name, type, inductance, tolerance);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxInductor->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxInductor->Image);
	}

	// Crear un nuevo objeto Inductor con los datos obtenidos
	Inductor^ inductor = gcnew Inductor(id, name, description, photo, price, 0, inductance, tolerance, type);

	Service::AddInductor(inductor);
	ShowInductor();
}
private: System::Void dgvInductor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int inductorId = Int32::Parse(dgvInductor->Rows[dgvInductor->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	Inductor^ inductor = Service::QueryInductorById(inductorId);
	if (inductor != nullptr) {
		txtIdInductor->Text = Convert::ToString(inductor->Id);
		txtNameInductor->Text = inductor->Name;
		txtDescriptionInductor->Text = inductor->Description;
		txtPriceInductor->Text = Convert::ToString(inductor->Price);
		txtInductanceInductor->Text = inductor->Inductance;
		txtToleranceInductor->Text = inductor->Tolerance;
		txtTypeInductor->Text = inductor->Type;

		// Mostrar la imagen del inductor en el PictureBox si existe
		if (inductor->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(inductor->Photo);
			pictureBoxInductor->Image = System::Drawing::Image::FromStream(ms);
		}
		else {
			pictureBoxInductor->Image = nullptr;
		}
	}
}

//btn modificar inductor

private: System::Void btnUpdateInductor_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtIdInductor->Text);
	String^ name = txtNameInductor->Text;
	String^ inductance = txtInductanceInductor->Text;
	String^ tolerance = txtToleranceInductor->Text;
	String^ type = txtTypeInductor->Text;
	double price = Convert::ToDouble(txtPriceInductor->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionInductor(name, type, inductance, tolerance);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxInductor->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxInductor->Image);
	}

	// Crear un objeto Inductor con los datos obtenidos
	Inductor^ inductor = gcnew Inductor(id, name, description, photo, price, 0, inductance, tolerance, type);

	Service::UpdateInductor(inductor);
	ShowInductor();
}
	   //btn eliminar inductor

private: System::Void btnDeleteInductor_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este inductor?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idInductor;
			if (Int32::TryParse(txtIdInductor->Text, idInductor)) {
				Service::DeleteInductor(idInductor);
				ShowInductor();
			}
			else {
				// El texto en txtIdInductor no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del inductor no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el inductor: " + ex->Message);
		}
	}
	// Si el usuario selecciona No, no se realiza ninguna acción
}
	   //Limpiar controles inductor
	   void CleanControlsInductor() {
		   txtIdInductor->Text = "";
		   txtNameInductor->Text = "";
		   txtDescriptionInductor->Text = "";
		   txtPriceInductor->Text = "";
		   txtInductanceInductor->Text = "";
		   txtToleranceInductor->Text = "";
		   txtTypeInductor->Text = "";
		   pictureBoxInductor->Image = nullptr;
	   }

private: System::Void btnCleanAllInductor_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsInductor();
}



//CRUD VOLTAGE SOURCE
	   
	   void ShowVoltageSource() {
		   List<VoltageSource^>^ voltageSourceList = Service::QueryAllVoltageSources();
		   if (voltageSourceList != nullptr) {
			   dgvVoltageSource->Rows->Clear();
			   for (int i = 0; i < voltageSourceList->Count; i++) {
				   dgvVoltageSource->Rows->Add(gcnew array<String^> {"" + voltageSourceList[i]->Id, voltageSourceList[i]->Name,
					   "" + voltageSourceList[i]->Price, voltageSourceList[i]->Description, "" + voltageSourceList[i]->Voltage, 
					   voltageSourceList[i]->Type, voltageSourceList[i]->Power});
			   }
		   }
	   }

	   String^ GenerateDescriptionVoltageSource(String^ name, String^ type, double voltage, String^ power) {
		   return String::Format("Es una {0} de tipo {1}, {2}V y {3}W.", name, type, voltage, power);
	   }

private: System::Void btnAddVoltageSource_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = GetNextProductId();
	txtIdVoltageSource->Text = id.ToString();

	String^ name = txtNameVoltageSource->Text;
	double voltage = Convert::ToDouble(txtVoltageVoltageSource->Text);
	String^ type = txtTypeVoltageSource->Text;
	String^ power = txtPowerVoltageSource->Text;
	double price = Convert::ToDouble(txtPriceVoltageSource->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionVoltageSource(name, type, voltage, power);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxVoltageSource->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxVoltageSource->Image);
	}

	// Crear un nuevo objeto VoltageSource con los datos obtenidos
	VoltageSource^ voltageSource = gcnew VoltageSource(id, name, description, photo, price, 0, type, voltage, power);

	Service::AddVoltageSource(voltageSource);
	ShowVoltageSource();
}

private: System::Void dgvVoltageSource_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int voltageSourceId = Int32::Parse(dgvVoltageSource->Rows[dgvVoltageSource->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());
	VoltageSource^ voltageSource = Service::QueryVoltageSourceById(voltageSourceId);
	if (voltageSource != nullptr) {
		txtIdVoltageSource->Text = Convert::ToString(voltageSource->Id);
		txtNameVoltageSource->Text = voltageSource->Name;
		txtDescriptionVoltageSource->Text = voltageSource->Description;
		txtPriceVoltageSource->Text = Convert::ToString(voltageSource->Price);
		txtVoltageVoltageSource->Text = Convert::ToString(voltageSource->Voltage);
		txtTypeVoltageSource->Text = voltageSource->Type;
		txtPowerVoltageSource->Text = voltageSource->Power;

		// Mostrar la imagen de la fuente de voltaje en el PictureBox si existe
		if (voltageSource->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(voltageSource->Photo);
			pictureBoxVoltageSource->Image = System::Drawing::Image::FromStream(ms);
		}
		else {
			pictureBoxVoltageSource->Image = nullptr;
		}
	}
}
	   //btn modificar voltage source
private: System::Void btnUpdateVoltageSource_Click(System::Object^ sender, System::EventArgs^ e) {
	int id = Convert::ToInt32(txtIdVoltageSource->Text);
	String^ name = txtNameVoltageSource->Text;
	double voltage = Convert::ToDouble(txtVoltageVoltageSource->Text);
	String^ type = txtTypeVoltageSource->Text;
	String^ power = txtPowerVoltageSource->Text;
	double price = Convert::ToDouble(txtPriceVoltageSource->Text);

	// Generar descripción automáticamente
	String^ description = GenerateDescriptionVoltageSource(name, type, voltage, power);

	// Convertir la imagen del PictureBox a un array de bytes si hay una imagen cargada
	array<Byte>^ photo = nullptr;
	if (pictureBoxVoltageSource->Image != nullptr) {
		photo = ImageToByteArray(pictureBoxVoltageSource->Image);
	}

	// Crear un objeto VoltageSource con los datos obtenidos
	VoltageSource^ voltageSource = gcnew VoltageSource(id, name, description, photo, price, 0, type, voltage, power);

	Service::UpdateVoltageSource(voltageSource);
	ShowVoltageSource();
}
	   //btn eliminar voltage source
private: System::Void btnDeleteVoltageSource_Click(System::Object^ sender, System::EventArgs^ e) {
	// Mostrar un cuadro de diálogo de confirmación
	System::Windows::Forms::DialogResult result = MessageBox::Show(
		"¿Estás seguro de que deseas eliminar este voltage source?",
		"Confirmación de eliminación",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Warning);

	// Verificar la respuesta del usuario
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// El usuario confirmó, proceder con la eliminación
		try {
			int idVoltageSource;
			if (Int32::TryParse(txtIdVoltageSource->Text, idVoltageSource)) {
				Service::DeleteVoltageSource(idVoltageSource);
				ShowVoltageSource();
			}
			else {
				// El texto en txtIdVoltageSource no es un número válido
				// Maneja este caso según sea necesario
				MessageBox::Show("El ID del voltage source no es válido.");
			}
		}
		catch (Exception^ ex) {
			// Manejar cualquier excepción que ocurra durante la eliminación
			MessageBox::Show("Error al eliminar el voltage source: " + ex->Message);
		}
	}
	// Si el usuario selecciona No, no se realiza ninguna acción
}
	   //Limpiar controles voltage source
	   void CleanControlsVoltageSource() {
		   txtIdVoltageSource->Text = "";
		   txtNameVoltageSource->Text = "";
		   txtDescriptionVoltageSource->Text = "";
		   txtPriceVoltageSource->Text = "";
		   txtVoltageVoltageSource->Text = "";
		   txtTypeVoltageSource->Text = "";
		   txtPowerVoltageSource->Text = "";
		   pictureBoxVoltageSource->Image = nullptr;
	   }
	//btn limpiar controles voltage source
private: System::Void btnCleanAllVoltageSource_Click(System::Object^ sender, System::EventArgs^ e) {
	CleanControlsVoltageSource();
}

///
	//Mostrar en el data grid view la informacion del inductor seleccionado al iniciar la pestaña
private: System::Void tabProducts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	ShowResistor();
	ShowBreadBoard();
	ShowJumperWire();
	ShowSwitch();
	ShowDiode();
	ShowCapacitor();
	ShowInductor();
	ShowVoltageSource();

	btnAddBreadboard->Enabled = false;
	btnUpdateBreadboard->Enabled = false;
	btnDeleteBreadboard->Enabled = false;

	btnAddResistor->Enabled = false;
	btnUpdateResistor->Enabled = false;
	btnDeleteResistor->Enabled = false;

	btnAddJumperWire->Enabled = false;
	btnUpdateJumperWire->Enabled = false;
	btnDeleteJumperWire->Enabled = false;

	btnAddSwitch->Enabled = false;
	btnUpdateSwitch->Enabled = false;
	btnDeleteSwitch->Enabled = false;

	btnAddDiode->Enabled = false;
	btnUpdateDiode->Enabled = false;
	btnDeleteDiode->Enabled = false;

	btnAddCapacitor->Enabled = false;
	btnUpdateCapacitor->Enabled = false;
	btnDeleteCapacitor->Enabled = false;

	btnAddInductor->Enabled = false;
	btnUpdateInductor->Enabled = false;
	btnDeleteInductor->Enabled = false;

	btnAddVoltageSource->Enabled = false;
	btnUpdateVoltageSource->Enabled = false;
	btnDeleteVoltageSource->Enabled = false;


//	ShowAllProducts();
}


private: System::Void dgv_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tabPageJumperWire_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPageDiode_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dgvResistor_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void txtIdJumperWire_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtVRMax_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox24_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void textBox29_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBoxResistor_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxResistor->ImageLocation = openFileDialog->FileName;
	}
}

private: System::Void pictureBoxBreadboard_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxBreadboard->ImageLocation = openFileDialog->FileName;
	}
}
private: System::Void pictureBoxJumperWire_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxJumperWire->ImageLocation = openFileDialog->FileName;
	}
}
private: System::Void pictureBoxSwitch_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxSwitch->ImageLocation = openFileDialog->FileName;
	}
}

private: System::Void pictureBoxDiode_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxDiode->ImageLocation = openFileDialog->FileName;
	}
}
private: System::Void pictureBoxCapacitor_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxCapacitor->ImageLocation = openFileDialog->FileName;
	}
}
private: System::Void pictureBoxInductor_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxInductor->ImageLocation = openFileDialog->FileName;
	}
}
private: System::Void pictureBoxVoltageSource_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Archivos de imagen|*.jpg;*.jpeg;*.png;*.bmp";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBoxVoltageSource->ImageLocation = openFileDialog->FileName;
	}
}


 //MOSTRAR TODOS LOS PRODUCTOS

	   List<Product^>^ SearchProducts(String^ searchTerm, List<Product^>^ productList) {
		   List<Product^>^ result = gcnew List<Product^>();

		   for each (Product ^ product in productList) {
			   // Verificar si el término de búsqueda coincide con el nombre, descripción o precio del producto
			   if (StringContainsIgnoreCase(product->Name, searchTerm) ||
				   StringContainsIgnoreCase(product->Description, searchTerm) ||
				   DoubleToString(product->Price)->Contains(searchTerm)) {
				   result->Add(product);
			   }
		   }

		   return result;
	   }

	   // Función para verificar si una cadena contiene otra cadena (ignorando mayúsculas y minúsculas)
	   bool StringContainsIgnoreCase(String^ original, String^ searchTerm) {
		   return original->IndexOf(searchTerm, StringComparison::OrdinalIgnoreCase) >= 0;
	   }

	   // Función para convertir un double a string y luego verificar si contiene una subcadena
	   String^ DoubleToString(double value) {
		   return Convert::ToString(value);
	   }


	   // Método ShowAllProducts que acepta un término de búsqueda
	   void ShowAllProducts(String^ searchTerm) {
		   List<Product^>^ productList = Service::QueryAllProducts();

		   if (!String::IsNullOrEmpty(searchTerm)) {
			   productList = SearchProducts(searchTerm, productList);
		   }

		   if (productList != nullptr) {
			   dgvProducts->Rows->Clear();
			   for (int i = 0; i < productList->Count; i++) {
				   dgvProducts->Rows->Add(gcnew array<String^> {
					   productList[i]->Name,
					   productList[i]->Description,
					   productList[i]->Price.ToString()
				   });
			   }
		   }
	   }

private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchTerm = txtSearch->Text;
	ShowAllProducts(searchTerm); // Llama a ShowAllProducts con el término de búsqueda
}

	   /////////////////////////////////////////////////////////////////


	   //Habilitacion desabilitacion de botones en cada uno de los productos del tabControl
private: System::Void agregarResistenciaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddResistor->Enabled = true;
	btnUpdateResistor->Enabled = false;
	btnDeleteResistor->Enabled = false;
}

private: System::Void modificarResistenciaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddResistor->Enabled = false;
	btnUpdateResistor->Enabled = true;
	btnDeleteResistor->Enabled = true;
}

private: System::Void nuevoProtoboardToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddBreadboard->Enabled = true;
	btnUpdateBreadboard->Enabled = false;
	btnDeleteBreadboard->Enabled = false;
}
private: System::Void modificarProtoboardToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddBreadboard->Enabled = false;
	btnUpdateBreadboard->Enabled = true;
	btnDeleteBreadboard->Enabled = true;
}

private: System::Void nuevoJumperToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddJumperWire->Enabled = true;
	btnUpdateJumperWire->Enabled = false;
	btnDeleteJumperWire->Enabled = false;
}
private: System::Void modificarJumperToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddJumperWire->Enabled = false;
	btnUpdateJumperWire->Enabled = true;
	btnDeleteJumperWire->Enabled = true;
}
private: System::Void nuevoSwitchToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddSwitch->Enabled = true;
	btnUpdateSwitch->Enabled = false;
	btnDeleteSwitch->Enabled = false;
}
private: System::Void modificarSwitchToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddSwitch->Enabled = false;
	btnUpdateSwitch->Enabled = true;
	btnDeleteSwitch->Enabled = true;
}
private: System::Void nuevoDiodoToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddDiode->Enabled = true;
	btnUpdateDiode->Enabled = false;
	btnDeleteDiode->Enabled = false;
}

private: System::Void modificarDiodoToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddDiode->Enabled = false;
	btnUpdateDiode->Enabled = true;
	btnDeleteDiode->Enabled = true;
}
private: System::Void nuevoCapacitorToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddCapacitor->Enabled = true;
	btnUpdateCapacitor->Enabled = false;
	btnDeleteCapacitor->Enabled = false;
}
private: System::Void modificarCapacitorToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddCapacitor->Enabled = false;
	btnUpdateCapacitor->Enabled = true;
	btnDeleteCapacitor->Enabled = true;
}
private: System::Void nuevoInductorToolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddInductor->Enabled = true;
	btnUpdateInductor->Enabled = false;
	btnDeleteInductor->Enabled = false;
}
private: System::Void modificarInductorToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddInductor->Enabled = false;
	btnUpdateInductor->Enabled = true;
	btnDeleteInductor->Enabled = true;
}
private: System::Void nuevoFuenteVoltajeToolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddVoltageSource->Enabled = true;
	btnUpdateVoltageSource->Enabled = false;
	btnDeleteVoltageSource->Enabled = false;

}
private: System::Void modificarFuenteVoltajeToolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAddVoltageSource->Enabled = false;
	btnUpdateVoltageSource->Enabled = true;
	btnDeleteVoltageSource->Enabled = true;
}

};
}
