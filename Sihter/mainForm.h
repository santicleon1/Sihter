#pragma once

namespace Sihter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ monthSelector;
	protected:

	private: System::Windows::Forms::Label^ monthLabel;

	private: System::Windows::Forms::Label^ radnikNameLabel;

	private: System::Windows::Forms::TextBox^ radnikName;
	private: System::Windows::Forms::Label^ orgNameLabel;

	private: System::Windows::Forms::TextBox^ orgName;



	private: System::Windows::Forms::Label^ workTimeStartLabel1;

	private: System::Windows::Forms::Label^ workTimeEndLabel1;

	private: System::Windows::Forms::GroupBox^ prvaSmjenaGroup;




	private: System::Windows::Forms::Label^ workTimeStartLabel2;

	private: System::Windows::Forms::Label^ workTimeEndLabel2;

	private: System::Windows::Forms::GroupBox^ drugaSmjenaGroup;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ workTimeEndLabel3;
	private: System::Windows::Forms::Label^ workTimeStartLabel3;


	private: System::Windows::Forms::Button^ doneButton;
	private: System::Windows::Forms::NumericUpDown^ workTimeStart1;
	private: System::Windows::Forms::NumericUpDown^ workTimeEnd1;
	private: System::Windows::Forms::NumericUpDown^ workTimeEnd2;


	private: System::Windows::Forms::NumericUpDown^ workTimeStart2;
	private: System::Windows::Forms::NumericUpDown^ workTimeEnd3;


	private: System::Windows::Forms::NumericUpDown^ workTimeStart3;
	private: System::Windows::Forms::Label^ yearLabel;
	private: System::Windows::Forms::TextBox^ year;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ višeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gitHubToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datotekaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ otvoriŠihtericuToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ defaultInfoTab;
	private: System::Windows::Forms::TabPage^ workTimeTab;
	private: System::Windows::Forms::ProgressBar^ progressBar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint1;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint31;

	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint30;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint29;

	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint28;

	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint27;

	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint26;

	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint25;

	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint24;

	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint23;

	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint22;

	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint21;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint20;

	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint19;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint18;

	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint17;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint16;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint15;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint14;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint13;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint12;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint11;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint10;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint9;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint8;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint7;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint6;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint5;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint3;

private: System::Windows::Forms::RadioButton^ prvaSmjenaPoint2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::RadioButton^ radioButton16;
private: System::Windows::Forms::RadioButton^ radioButton32;
private: System::Windows::Forms::RadioButton^ radioButton33;
private: System::Windows::Forms::RadioButton^ radioButton34;
private: System::Windows::Forms::RadioButton^ radioButton35;
private: System::Windows::Forms::RadioButton^ radioButton36;
private: System::Windows::Forms::RadioButton^ radioButton37;
private: System::Windows::Forms::RadioButton^ radioButton38;
private: System::Windows::Forms::RadioButton^ radioButton39;
private: System::Windows::Forms::RadioButton^ radioButton40;
private: System::Windows::Forms::RadioButton^ radioButton41;
private: System::Windows::Forms::RadioButton^ radioButton42;
private: System::Windows::Forms::RadioButton^ radioButton43;
private: System::Windows::Forms::RadioButton^ radioButton44;
private: System::Windows::Forms::RadioButton^ radioButton45;
private: System::Windows::Forms::RadioButton^ radioButton46;
private: System::Windows::Forms::RadioButton^ radioButton47;
private: System::Windows::Forms::RadioButton^ radioButton48;
private: System::Windows::Forms::RadioButton^ radioButton49;
private: System::Windows::Forms::RadioButton^ radioButton50;
private: System::Windows::Forms::RadioButton^ radioButton51;
private: System::Windows::Forms::RadioButton^ radioButton52;
private: System::Windows::Forms::RadioButton^ radioButton53;
private: System::Windows::Forms::RadioButton^ radioButton54;
private: System::Windows::Forms::RadioButton^ radioButton55;
private: System::Windows::Forms::RadioButton^ radioButton56;
private: System::Windows::Forms::RadioButton^ radioButton57;
private: System::Windows::Forms::RadioButton^ radioButton58;
private: System::Windows::Forms::RadioButton^ radioButton59;
private: System::Windows::Forms::RadioButton^ radioButton60;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::RadioButton^ radioButton61;




















	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->monthSelector = (gcnew System::Windows::Forms::ComboBox());
			this->monthLabel = (gcnew System::Windows::Forms::Label());
			this->radnikNameLabel = (gcnew System::Windows::Forms::Label());
			this->radnikName = (gcnew System::Windows::Forms::TextBox());
			this->orgNameLabel = (gcnew System::Windows::Forms::Label());
			this->orgName = (gcnew System::Windows::Forms::TextBox());
			this->workTimeStartLabel1 = (gcnew System::Windows::Forms::Label());
			this->workTimeEndLabel1 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaGroup = (gcnew System::Windows::Forms::GroupBox());
			this->workTimeEnd1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->workTimeStart1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->workTimeStartLabel2 = (gcnew System::Windows::Forms::Label());
			this->workTimeEndLabel2 = (gcnew System::Windows::Forms::Label());
			this->drugaSmjenaGroup = (gcnew System::Windows::Forms::GroupBox());
			this->workTimeEnd2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->workTimeStart2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->workTimeEnd3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->workTimeStart3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->workTimeEndLabel3 = (gcnew System::Windows::Forms::Label());
			this->workTimeStartLabel3 = (gcnew System::Windows::Forms::Label());
			this->doneButton = (gcnew System::Windows::Forms::Button());
			this->yearLabel = (gcnew System::Windows::Forms::Label());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->datotekaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otvoriŠihtericuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->višeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitHubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->defaultInfoTab = (gcnew System::Windows::Forms::TabPage());
			this->workTimeTab = (gcnew System::Windows::Forms::TabPage());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton32 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton33 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton34 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton35 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton36 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton37 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton38 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton39 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton40 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton41 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton42 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton43 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton44 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton45 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton46 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton47 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton48 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton49 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton50 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton51 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton52 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton53 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton54 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton55 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton56 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton57 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton58 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton59 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton60 = (gcnew System::Windows::Forms::RadioButton());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->radioButton61 = (gcnew System::Windows::Forms::RadioButton());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint31 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint30 = (gcnew System::Windows::Forms::RadioButton());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint29 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint28 = (gcnew System::Windows::Forms::RadioButton());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint27 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint26 = (gcnew System::Windows::Forms::RadioButton());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint25 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint24 = (gcnew System::Windows::Forms::RadioButton());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint23 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint22 = (gcnew System::Windows::Forms::RadioButton());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint21 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint20 = (gcnew System::Windows::Forms::RadioButton());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint19 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint18 = (gcnew System::Windows::Forms::RadioButton());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint17 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint16 = (gcnew System::Windows::Forms::RadioButton());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint15 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint14 = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint13 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint12 = (gcnew System::Windows::Forms::RadioButton());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint11 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint10 = (gcnew System::Windows::Forms::RadioButton());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint9 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint8 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint7 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint6 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint5 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint4 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint3 = (gcnew System::Windows::Forms::RadioButton());
			this->prvaSmjenaPoint2 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaPoint1 = (gcnew System::Windows::Forms::RadioButton());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->prvaSmjenaGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart1))->BeginInit();
			this->drugaSmjenaGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart3))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->defaultInfoTab->SuspendLayout();
			this->workTimeTab->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthSelector
			// 
			this->monthSelector->FormattingEnabled = true;
			this->monthSelector->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"siječanj", L"veljača", L"ožujak", L"travanj",
					L"svibanj", L"lipanj", L"srpanj", L"kolovoz", L"rujan", L"listopad", L"studeni", L"prosinac"
			});
			this->monthSelector->Location = System::Drawing::Point(8, 58);
			this->monthSelector->Name = L"monthSelector";
			this->monthSelector->Size = System::Drawing::Size(69, 21);
			this->monthSelector->TabIndex = 1;
			// 
			// monthLabel
			// 
			this->monthLabel->AutoSize = true;
			this->monthLabel->Location = System::Drawing::Point(5, 42);
			this->monthLabel->Name = L"monthLabel";
			this->monthLabel->Size = System::Drawing::Size(41, 13);
			this->monthLabel->TabIndex = 2;
			this->monthLabel->Text = L"Mjesec";
			// 
			// radnikNameLabel
			// 
			this->radnikNameLabel->AutoSize = true;
			this->radnikNameLabel->Location = System::Drawing::Point(6, 3);
			this->radnikNameLabel->Name = L"radnikNameLabel";
			this->radnikNameLabel->Size = System::Drawing::Size(72, 13);
			this->radnikNameLabel->TabIndex = 3;
			this->radnikNameLabel->Text = L"Naziv radnika";
			// 
			// radnikName
			// 
			this->radnikName->Location = System::Drawing::Point(8, 19);
			this->radnikName->Name = L"radnikName";
			this->radnikName->Size = System::Drawing::Size(212, 20);
			this->radnikName->TabIndex = 4;
			// 
			// orgNameLabel
			// 
			this->orgNameLabel->AutoSize = true;
			this->orgNameLabel->Location = System::Drawing::Point(223, 3);
			this->orgNameLabel->Name = L"orgNameLabel";
			this->orgNameLabel->Size = System::Drawing::Size(115, 13);
			this->orgNameLabel->TabIndex = 5;
			this->orgNameLabel->Text = L"Organizacijska jedinica";
			// 
			// orgName
			// 
			this->orgName->Location = System::Drawing::Point(226, 19);
			this->orgName->Name = L"orgName";
			this->orgName->Size = System::Drawing::Size(224, 20);
			this->orgName->TabIndex = 6;
			// 
			// workTimeStartLabel1
			// 
			this->workTimeStartLabel1->AutoSize = true;
			this->workTimeStartLabel1->Location = System::Drawing::Point(6, 18);
			this->workTimeStartLabel1->Name = L"workTimeStartLabel1";
			this->workTimeStartLabel1->Size = System::Drawing::Size(127, 13);
			this->workTimeStartLabel1->TabIndex = 9;
			this->workTimeStartLabel1->Text = L"Početak radnog vremena";
			// 
			// workTimeEndLabel1
			// 
			this->workTimeEndLabel1->AutoSize = true;
			this->workTimeEndLabel1->Location = System::Drawing::Point(6, 57);
			this->workTimeEndLabel1->Name = L"workTimeEndLabel1";
			this->workTimeEndLabel1->Size = System::Drawing::Size(135, 13);
			this->workTimeEndLabel1->TabIndex = 10;
			this->workTimeEndLabel1->Text = L"Završetak radnog vremena";
			// 
			// prvaSmjenaGroup
			// 
			this->prvaSmjenaGroup->Controls->Add(this->workTimeEnd1);
			this->prvaSmjenaGroup->Controls->Add(this->workTimeStart1);
			this->prvaSmjenaGroup->Controls->Add(this->workTimeEndLabel1);
			this->prvaSmjenaGroup->Controls->Add(this->workTimeStartLabel1);
			this->prvaSmjenaGroup->Location = System::Drawing::Point(8, 85);
			this->prvaSmjenaGroup->Name = L"prvaSmjenaGroup";
			this->prvaSmjenaGroup->Size = System::Drawing::Size(144, 103);
			this->prvaSmjenaGroup->TabIndex = 11;
			this->prvaSmjenaGroup->TabStop = false;
			this->prvaSmjenaGroup->Text = L"Prva smjena";
			// 
			// workTimeEnd1
			// 
			this->workTimeEnd1->DecimalPlaces = 1;
			this->workTimeEnd1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeEnd1->Location = System::Drawing::Point(9, 73);
			this->workTimeEnd1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeEnd1->Name = L"workTimeEnd1";
			this->workTimeEnd1->Size = System::Drawing::Size(47, 20);
			this->workTimeEnd1->TabIndex = 12;
			// 
			// workTimeStart1
			// 
			this->workTimeStart1->DecimalPlaces = 1;
			this->workTimeStart1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeStart1->Location = System::Drawing::Point(9, 34);
			this->workTimeStart1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeStart1->Name = L"workTimeStart1";
			this->workTimeStart1->Size = System::Drawing::Size(47, 20);
			this->workTimeStart1->TabIndex = 11;
			// 
			// workTimeStartLabel2
			// 
			this->workTimeStartLabel2->AutoSize = true;
			this->workTimeStartLabel2->Location = System::Drawing::Point(6, 18);
			this->workTimeStartLabel2->Name = L"workTimeStartLabel2";
			this->workTimeStartLabel2->Size = System::Drawing::Size(127, 13);
			this->workTimeStartLabel2->TabIndex = 9;
			this->workTimeStartLabel2->Text = L"Početak radnog vremena";
			// 
			// workTimeEndLabel2
			// 
			this->workTimeEndLabel2->AutoSize = true;
			this->workTimeEndLabel2->Location = System::Drawing::Point(6, 57);
			this->workTimeEndLabel2->Name = L"workTimeEndLabel2";
			this->workTimeEndLabel2->Size = System::Drawing::Size(135, 13);
			this->workTimeEndLabel2->TabIndex = 10;
			this->workTimeEndLabel2->Text = L"Završetak radnog vremena";
			// 
			// drugaSmjenaGroup
			// 
			this->drugaSmjenaGroup->Controls->Add(this->workTimeEnd2);
			this->drugaSmjenaGroup->Controls->Add(this->workTimeStart2);
			this->drugaSmjenaGroup->Controls->Add(this->workTimeEndLabel2);
			this->drugaSmjenaGroup->Controls->Add(this->workTimeStartLabel2);
			this->drugaSmjenaGroup->Location = System::Drawing::Point(158, 85);
			this->drugaSmjenaGroup->Name = L"drugaSmjenaGroup";
			this->drugaSmjenaGroup->Size = System::Drawing::Size(144, 103);
			this->drugaSmjenaGroup->TabIndex = 12;
			this->drugaSmjenaGroup->TabStop = false;
			this->drugaSmjenaGroup->Text = L"Druga smjena";
			// 
			// workTimeEnd2
			// 
			this->workTimeEnd2->DecimalPlaces = 1;
			this->workTimeEnd2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeEnd2->Location = System::Drawing::Point(9, 73);
			this->workTimeEnd2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeEnd2->Name = L"workTimeEnd2";
			this->workTimeEnd2->Size = System::Drawing::Size(47, 20);
			this->workTimeEnd2->TabIndex = 14;
			// 
			// workTimeStart2
			// 
			this->workTimeStart2->DecimalPlaces = 1;
			this->workTimeStart2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeStart2->Location = System::Drawing::Point(9, 34);
			this->workTimeStart2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeStart2->Name = L"workTimeStart2";
			this->workTimeStart2->Size = System::Drawing::Size(47, 20);
			this->workTimeStart2->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->workTimeEnd3);
			this->groupBox1->Controls->Add(this->workTimeStart3);
			this->groupBox1->Controls->Add(this->workTimeEndLabel3);
			this->groupBox1->Controls->Add(this->workTimeStartLabel3);
			this->groupBox1->Location = System::Drawing::Point(308, 85);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 103);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Treća smjena";
			// 
			// workTimeEnd3
			// 
			this->workTimeEnd3->DecimalPlaces = 1;
			this->workTimeEnd3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeEnd3->Location = System::Drawing::Point(9, 73);
			this->workTimeEnd3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeEnd3->Name = L"workTimeEnd3";
			this->workTimeEnd3->Size = System::Drawing::Size(47, 20);
			this->workTimeEnd3->TabIndex = 16;
			// 
			// workTimeStart3
			// 
			this->workTimeStart3->DecimalPlaces = 1;
			this->workTimeStart3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->workTimeStart3->Location = System::Drawing::Point(9, 34);
			this->workTimeStart3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 235, 0, 0, 65536 });
			this->workTimeStart3->Name = L"workTimeStart3";
			this->workTimeStart3->Size = System::Drawing::Size(47, 20);
			this->workTimeStart3->TabIndex = 15;
			// 
			// workTimeEndLabel3
			// 
			this->workTimeEndLabel3->AutoSize = true;
			this->workTimeEndLabel3->Location = System::Drawing::Point(6, 57);
			this->workTimeEndLabel3->Name = L"workTimeEndLabel3";
			this->workTimeEndLabel3->Size = System::Drawing::Size(135, 13);
			this->workTimeEndLabel3->TabIndex = 10;
			this->workTimeEndLabel3->Text = L"Završetak radnog vremena";
			// 
			// workTimeStartLabel3
			// 
			this->workTimeStartLabel3->AutoSize = true;
			this->workTimeStartLabel3->Location = System::Drawing::Point(6, 18);
			this->workTimeStartLabel3->Name = L"workTimeStartLabel3";
			this->workTimeStartLabel3->Size = System::Drawing::Size(127, 13);
			this->workTimeStartLabel3->TabIndex = 9;
			this->workTimeStartLabel3->Text = L"Početak radnog vremena";
			// 
			// doneButton
			// 
			this->doneButton->Location = System::Drawing::Point(410, 670);
			this->doneButton->Name = L"doneButton";
			this->doneButton->Size = System::Drawing::Size(75, 23);
			this->doneButton->TabIndex = 14;
			this->doneButton->Text = L"Unesi";
			this->doneButton->UseVisualStyleBackColor = true;
			this->doneButton->Click += gcnew System::EventHandler(this, &mainForm::doneButton_Click);
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->Location = System::Drawing::Point(80, 42);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(41, 13);
			this->yearLabel->TabIndex = 16;
			this->yearLabel->Text = L"Godina";
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(83, 59);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(69, 20);
			this->year->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(6, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 26);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Potrebno je stisnuti Ctrl+Alt+F9\r\nda bi se automatski sve izračunalo u Excel-u!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->datotekaToolStripMenuItem,
					this->višeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(495, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// datotekaToolStripMenuItem
			// 
			this->datotekaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->otvoriŠihtericuToolStripMenuItem });
			this->datotekaToolStripMenuItem->Name = L"datotekaToolStripMenuItem";
			this->datotekaToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->datotekaToolStripMenuItem->Text = L"Datoteka";
			// 
			// otvoriŠihtericuToolStripMenuItem
			// 
			this->otvoriŠihtericuToolStripMenuItem->Name = L"otvoriŠihtericuToolStripMenuItem";
			this->otvoriŠihtericuToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->otvoriŠihtericuToolStripMenuItem->Text = L"Otvori šihtericu";
			this->otvoriŠihtericuToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::otvoriŠihtericuToolStripMenuItem_Click);
			// 
			// višeToolStripMenuItem
			// 
			this->višeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->gitHubToolStripMenuItem });
			this->višeToolStripMenuItem->Name = L"višeToolStripMenuItem";
			this->višeToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->višeToolStripMenuItem->Text = L"Više";
			// 
			// gitHubToolStripMenuItem
			// 
			this->gitHubToolStripMenuItem->Name = L"gitHubToolStripMenuItem";
			this->gitHubToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->gitHubToolStripMenuItem->Text = L"GitHub";
			this->gitHubToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::gitHubToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->defaultInfoTab);
			this->tabControl1->Controls->Add(this->workTimeTab);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(473, 637);
			this->tabControl1->TabIndex = 20;
			// 
			// defaultInfoTab
			// 
			this->defaultInfoTab->Controls->Add(this->radnikNameLabel);
			this->defaultInfoTab->Controls->Add(this->label1);
			this->defaultInfoTab->Controls->Add(this->prvaSmjenaGroup);
			this->defaultInfoTab->Controls->Add(this->year);
			this->defaultInfoTab->Controls->Add(this->monthSelector);
			this->defaultInfoTab->Controls->Add(this->yearLabel);
			this->defaultInfoTab->Controls->Add(this->monthLabel);
			this->defaultInfoTab->Controls->Add(this->radnikName);
			this->defaultInfoTab->Controls->Add(this->groupBox1);
			this->defaultInfoTab->Controls->Add(this->orgNameLabel);
			this->defaultInfoTab->Controls->Add(this->drugaSmjenaGroup);
			this->defaultInfoTab->Controls->Add(this->orgName);
			this->defaultInfoTab->Location = System::Drawing::Point(4, 22);
			this->defaultInfoTab->Name = L"defaultInfoTab";
			this->defaultInfoTab->Padding = System::Windows::Forms::Padding(3);
			this->defaultInfoTab->Size = System::Drawing::Size(465, 611);
			this->defaultInfoTab->TabIndex = 0;
			this->defaultInfoTab->Text = L"Osnovni podaci";
			this->defaultInfoTab->UseVisualStyleBackColor = true;
			// 
			// workTimeTab
			// 
			this->workTimeTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->workTimeTab->Controls->Add(this->radioButton61);
			this->workTimeTab->Controls->Add(this->radioButton16);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint1);
			this->workTimeTab->Controls->Add(this->radioButton32);
			this->workTimeTab->Controls->Add(this->radioButton33);
			this->workTimeTab->Controls->Add(this->radioButton34);
			this->workTimeTab->Controls->Add(this->radioButton35);
			this->workTimeTab->Controls->Add(this->radioButton36);
			this->workTimeTab->Controls->Add(this->radioButton37);
			this->workTimeTab->Controls->Add(this->radioButton38);
			this->workTimeTab->Controls->Add(this->radioButton39);
			this->workTimeTab->Controls->Add(this->radioButton40);
			this->workTimeTab->Controls->Add(this->radioButton41);
			this->workTimeTab->Controls->Add(this->radioButton42);
			this->workTimeTab->Controls->Add(this->radioButton43);
			this->workTimeTab->Controls->Add(this->radioButton44);
			this->workTimeTab->Controls->Add(this->radioButton45);
			this->workTimeTab->Controls->Add(this->radioButton46);
			this->workTimeTab->Controls->Add(this->radioButton47);
			this->workTimeTab->Controls->Add(this->radioButton48);
			this->workTimeTab->Controls->Add(this->radioButton49);
			this->workTimeTab->Controls->Add(this->radioButton50);
			this->workTimeTab->Controls->Add(this->radioButton51);
			this->workTimeTab->Controls->Add(this->radioButton52);
			this->workTimeTab->Controls->Add(this->radioButton53);
			this->workTimeTab->Controls->Add(this->radioButton54);
			this->workTimeTab->Controls->Add(this->radioButton55);
			this->workTimeTab->Controls->Add(this->radioButton56);
			this->workTimeTab->Controls->Add(this->radioButton57);
			this->workTimeTab->Controls->Add(this->radioButton58);
			this->workTimeTab->Controls->Add(this->radioButton59);
			this->workTimeTab->Controls->Add(this->radioButton60);
			this->workTimeTab->Controls->Add(this->label20);
			this->workTimeTab->Controls->Add(this->label21);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint31);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint30);
			this->workTimeTab->Controls->Add(this->label22);
			this->workTimeTab->Controls->Add(this->label23);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint29);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint28);
			this->workTimeTab->Controls->Add(this->label24);
			this->workTimeTab->Controls->Add(this->label25);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint27);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint26);
			this->workTimeTab->Controls->Add(this->label26);
			this->workTimeTab->Controls->Add(this->label27);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint25);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint24);
			this->workTimeTab->Controls->Add(this->label28);
			this->workTimeTab->Controls->Add(this->label29);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint23);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint22);
			this->workTimeTab->Controls->Add(this->label30);
			this->workTimeTab->Controls->Add(this->label31);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint21);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint20);
			this->workTimeTab->Controls->Add(this->label32);
			this->workTimeTab->Controls->Add(this->label33);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint19);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint18);
			this->workTimeTab->Controls->Add(this->label34);
			this->workTimeTab->Controls->Add(this->label35);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint17);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint16);
			this->workTimeTab->Controls->Add(this->label12);
			this->workTimeTab->Controls->Add(this->label13);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint15);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint14);
			this->workTimeTab->Controls->Add(this->label14);
			this->workTimeTab->Controls->Add(this->label15);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint13);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint12);
			this->workTimeTab->Controls->Add(this->label16);
			this->workTimeTab->Controls->Add(this->label17);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint11);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint10);
			this->workTimeTab->Controls->Add(this->label18);
			this->workTimeTab->Controls->Add(this->label19);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint9);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint8);
			this->workTimeTab->Controls->Add(this->label8);
			this->workTimeTab->Controls->Add(this->label9);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint7);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint6);
			this->workTimeTab->Controls->Add(this->label10);
			this->workTimeTab->Controls->Add(this->label11);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint5);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint4);
			this->workTimeTab->Controls->Add(this->label6);
			this->workTimeTab->Controls->Add(this->label7);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint3);
			this->workTimeTab->Controls->Add(this->prvaSmjenaPoint2);
			this->workTimeTab->Controls->Add(this->label5);
			this->workTimeTab->Controls->Add(this->label4);
			this->workTimeTab->Controls->Add(this->label3);
			this->workTimeTab->Controls->Add(this->label2);
			this->workTimeTab->Location = System::Drawing::Point(4, 22);
			this->workTimeTab->Name = L"workTimeTab";
			this->workTimeTab->Padding = System::Windows::Forms::Padding(3);
			this->workTimeTab->Size = System::Drawing::Size(465, 611);
			this->workTimeTab->TabIndex = 1;
			this->workTimeTab->Text = L"Vrijeme rada";
			this->workTimeTab->UseVisualStyleBackColor = true;
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(148, 589);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(14, 13);
			this->radioButton16->TabIndex = 95;
			this->radioButton16->TabStop = true;
			this->radioButton16->UseVisualStyleBackColor = true;
			// 
			// radioButton32
			// 
			this->radioButton32->AutoSize = true;
			this->radioButton32->Location = System::Drawing::Point(148, 570);
			this->radioButton32->Name = L"radioButton32";
			this->radioButton32->Size = System::Drawing::Size(14, 13);
			this->radioButton32->TabIndex = 94;
			this->radioButton32->TabStop = true;
			this->radioButton32->UseVisualStyleBackColor = true;
			// 
			// radioButton33
			// 
			this->radioButton33->AutoSize = true;
			this->radioButton33->Location = System::Drawing::Point(148, 551);
			this->radioButton33->Name = L"radioButton33";
			this->radioButton33->Size = System::Drawing::Size(14, 13);
			this->radioButton33->TabIndex = 93;
			this->radioButton33->TabStop = true;
			this->radioButton33->UseVisualStyleBackColor = true;
			// 
			// radioButton34
			// 
			this->radioButton34->AutoSize = true;
			this->radioButton34->Location = System::Drawing::Point(148, 532);
			this->radioButton34->Name = L"radioButton34";
			this->radioButton34->Size = System::Drawing::Size(14, 13);
			this->radioButton34->TabIndex = 92;
			this->radioButton34->TabStop = true;
			this->radioButton34->UseVisualStyleBackColor = true;
			// 
			// radioButton35
			// 
			this->radioButton35->AutoSize = true;
			this->radioButton35->Location = System::Drawing::Point(148, 513);
			this->radioButton35->Name = L"radioButton35";
			this->radioButton35->Size = System::Drawing::Size(14, 13);
			this->radioButton35->TabIndex = 91;
			this->radioButton35->TabStop = true;
			this->radioButton35->UseVisualStyleBackColor = true;
			// 
			// radioButton36
			// 
			this->radioButton36->AutoSize = true;
			this->radioButton36->Location = System::Drawing::Point(148, 494);
			this->radioButton36->Name = L"radioButton36";
			this->radioButton36->Size = System::Drawing::Size(14, 13);
			this->radioButton36->TabIndex = 90;
			this->radioButton36->TabStop = true;
			this->radioButton36->UseVisualStyleBackColor = true;
			// 
			// radioButton37
			// 
			this->radioButton37->AutoSize = true;
			this->radioButton37->Location = System::Drawing::Point(148, 475);
			this->radioButton37->Name = L"radioButton37";
			this->radioButton37->Size = System::Drawing::Size(14, 13);
			this->radioButton37->TabIndex = 89;
			this->radioButton37->TabStop = true;
			this->radioButton37->UseVisualStyleBackColor = true;
			// 
			// radioButton38
			// 
			this->radioButton38->AutoSize = true;
			this->radioButton38->Location = System::Drawing::Point(148, 456);
			this->radioButton38->Name = L"radioButton38";
			this->radioButton38->Size = System::Drawing::Size(14, 13);
			this->radioButton38->TabIndex = 88;
			this->radioButton38->TabStop = true;
			this->radioButton38->UseVisualStyleBackColor = true;
			// 
			// radioButton39
			// 
			this->radioButton39->AutoSize = true;
			this->radioButton39->Location = System::Drawing::Point(148, 437);
			this->radioButton39->Name = L"radioButton39";
			this->radioButton39->Size = System::Drawing::Size(14, 13);
			this->radioButton39->TabIndex = 87;
			this->radioButton39->TabStop = true;
			this->radioButton39->UseVisualStyleBackColor = true;
			// 
			// radioButton40
			// 
			this->radioButton40->AutoSize = true;
			this->radioButton40->Location = System::Drawing::Point(148, 418);
			this->radioButton40->Name = L"radioButton40";
			this->radioButton40->Size = System::Drawing::Size(14, 13);
			this->radioButton40->TabIndex = 86;
			this->radioButton40->TabStop = true;
			this->radioButton40->UseVisualStyleBackColor = true;
			// 
			// radioButton41
			// 
			this->radioButton41->AutoSize = true;
			this->radioButton41->Location = System::Drawing::Point(148, 399);
			this->radioButton41->Name = L"radioButton41";
			this->radioButton41->Size = System::Drawing::Size(14, 13);
			this->radioButton41->TabIndex = 85;
			this->radioButton41->TabStop = true;
			this->radioButton41->UseVisualStyleBackColor = true;
			// 
			// radioButton42
			// 
			this->radioButton42->AutoSize = true;
			this->radioButton42->Location = System::Drawing::Point(148, 380);
			this->radioButton42->Name = L"radioButton42";
			this->radioButton42->Size = System::Drawing::Size(14, 13);
			this->radioButton42->TabIndex = 84;
			this->radioButton42->TabStop = true;
			this->radioButton42->UseVisualStyleBackColor = true;
			// 
			// radioButton43
			// 
			this->radioButton43->AutoSize = true;
			this->radioButton43->Location = System::Drawing::Point(148, 361);
			this->radioButton43->Name = L"radioButton43";
			this->radioButton43->Size = System::Drawing::Size(14, 13);
			this->radioButton43->TabIndex = 83;
			this->radioButton43->TabStop = true;
			this->radioButton43->UseVisualStyleBackColor = true;
			// 
			// radioButton44
			// 
			this->radioButton44->AutoSize = true;
			this->radioButton44->Location = System::Drawing::Point(148, 342);
			this->radioButton44->Name = L"radioButton44";
			this->radioButton44->Size = System::Drawing::Size(14, 13);
			this->radioButton44->TabIndex = 82;
			this->radioButton44->TabStop = true;
			this->radioButton44->UseVisualStyleBackColor = true;
			// 
			// radioButton45
			// 
			this->radioButton45->AutoSize = true;
			this->radioButton45->Location = System::Drawing::Point(148, 323);
			this->radioButton45->Name = L"radioButton45";
			this->radioButton45->Size = System::Drawing::Size(14, 13);
			this->radioButton45->TabIndex = 81;
			this->radioButton45->TabStop = true;
			this->radioButton45->UseVisualStyleBackColor = true;
			// 
			// radioButton46
			// 
			this->radioButton46->AutoSize = true;
			this->radioButton46->Location = System::Drawing::Point(148, 304);
			this->radioButton46->Name = L"radioButton46";
			this->radioButton46->Size = System::Drawing::Size(14, 13);
			this->radioButton46->TabIndex = 80;
			this->radioButton46->TabStop = true;
			this->radioButton46->UseVisualStyleBackColor = true;
			// 
			// radioButton47
			// 
			this->radioButton47->AutoSize = true;
			this->radioButton47->Location = System::Drawing::Point(148, 285);
			this->radioButton47->Name = L"radioButton47";
			this->radioButton47->Size = System::Drawing::Size(14, 13);
			this->radioButton47->TabIndex = 79;
			this->radioButton47->TabStop = true;
			this->radioButton47->UseVisualStyleBackColor = true;
			// 
			// radioButton48
			// 
			this->radioButton48->AutoSize = true;
			this->radioButton48->Location = System::Drawing::Point(148, 266);
			this->radioButton48->Name = L"radioButton48";
			this->radioButton48->Size = System::Drawing::Size(14, 13);
			this->radioButton48->TabIndex = 78;
			this->radioButton48->TabStop = true;
			this->radioButton48->UseVisualStyleBackColor = true;
			// 
			// radioButton49
			// 
			this->radioButton49->AutoSize = true;
			this->radioButton49->Location = System::Drawing::Point(148, 247);
			this->radioButton49->Name = L"radioButton49";
			this->radioButton49->Size = System::Drawing::Size(14, 13);
			this->radioButton49->TabIndex = 77;
			this->radioButton49->TabStop = true;
			this->radioButton49->UseVisualStyleBackColor = true;
			// 
			// radioButton50
			// 
			this->radioButton50->AutoSize = true;
			this->radioButton50->Location = System::Drawing::Point(148, 228);
			this->radioButton50->Name = L"radioButton50";
			this->radioButton50->Size = System::Drawing::Size(14, 13);
			this->radioButton50->TabIndex = 76;
			this->radioButton50->TabStop = true;
			this->radioButton50->UseVisualStyleBackColor = true;
			// 
			// radioButton51
			// 
			this->radioButton51->AutoSize = true;
			this->radioButton51->Location = System::Drawing::Point(148, 209);
			this->radioButton51->Name = L"radioButton51";
			this->radioButton51->Size = System::Drawing::Size(14, 13);
			this->radioButton51->TabIndex = 75;
			this->radioButton51->TabStop = true;
			this->radioButton51->UseVisualStyleBackColor = true;
			// 
			// radioButton52
			// 
			this->radioButton52->AutoSize = true;
			this->radioButton52->Location = System::Drawing::Point(148, 190);
			this->radioButton52->Name = L"radioButton52";
			this->radioButton52->Size = System::Drawing::Size(14, 13);
			this->radioButton52->TabIndex = 74;
			this->radioButton52->TabStop = true;
			this->radioButton52->UseVisualStyleBackColor = true;
			// 
			// radioButton53
			// 
			this->radioButton53->AutoSize = true;
			this->radioButton53->Location = System::Drawing::Point(148, 171);
			this->radioButton53->Name = L"radioButton53";
			this->radioButton53->Size = System::Drawing::Size(14, 13);
			this->radioButton53->TabIndex = 73;
			this->radioButton53->TabStop = true;
			this->radioButton53->UseVisualStyleBackColor = true;
			// 
			// radioButton54
			// 
			this->radioButton54->AutoSize = true;
			this->radioButton54->Location = System::Drawing::Point(148, 152);
			this->radioButton54->Name = L"radioButton54";
			this->radioButton54->Size = System::Drawing::Size(14, 13);
			this->radioButton54->TabIndex = 72;
			this->radioButton54->TabStop = true;
			this->radioButton54->UseVisualStyleBackColor = true;
			// 
			// radioButton55
			// 
			this->radioButton55->AutoSize = true;
			this->radioButton55->Location = System::Drawing::Point(148, 133);
			this->radioButton55->Name = L"radioButton55";
			this->radioButton55->Size = System::Drawing::Size(14, 13);
			this->radioButton55->TabIndex = 71;
			this->radioButton55->TabStop = true;
			this->radioButton55->UseVisualStyleBackColor = true;
			// 
			// radioButton56
			// 
			this->radioButton56->AutoSize = true;
			this->radioButton56->Location = System::Drawing::Point(148, 114);
			this->radioButton56->Name = L"radioButton56";
			this->radioButton56->Size = System::Drawing::Size(14, 13);
			this->radioButton56->TabIndex = 70;
			this->radioButton56->TabStop = true;
			this->radioButton56->UseVisualStyleBackColor = true;
			// 
			// radioButton57
			// 
			this->radioButton57->AutoSize = true;
			this->radioButton57->Location = System::Drawing::Point(148, 95);
			this->radioButton57->Name = L"radioButton57";
			this->radioButton57->Size = System::Drawing::Size(14, 13);
			this->radioButton57->TabIndex = 69;
			this->radioButton57->TabStop = true;
			this->radioButton57->UseVisualStyleBackColor = true;
			// 
			// radioButton58
			// 
			this->radioButton58->AutoSize = true;
			this->radioButton58->Location = System::Drawing::Point(148, 76);
			this->radioButton58->Name = L"radioButton58";
			this->radioButton58->Size = System::Drawing::Size(14, 13);
			this->radioButton58->TabIndex = 68;
			this->radioButton58->TabStop = true;
			this->radioButton58->UseVisualStyleBackColor = true;
			// 
			// radioButton59
			// 
			this->radioButton59->AutoSize = true;
			this->radioButton59->Location = System::Drawing::Point(148, 57);
			this->radioButton59->Name = L"radioButton59";
			this->radioButton59->Size = System::Drawing::Size(14, 13);
			this->radioButton59->TabIndex = 67;
			this->radioButton59->TabStop = true;
			this->radioButton59->UseVisualStyleBackColor = true;
			// 
			// radioButton60
			// 
			this->radioButton60->AutoSize = true;
			this->radioButton60->Location = System::Drawing::Point(148, 38);
			this->radioButton60->Name = L"radioButton60";
			this->radioButton60->Size = System::Drawing::Size(14, 13);
			this->radioButton60->TabIndex = 66;
			this->radioButton60->TabStop = true;
			this->radioButton60->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(121, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(72, 13);
			this->label20->TabIndex = 65;
			this->label20->Text = L"Druga smjena";
			// 
			// radioButton61
			// 
			this->radioButton61->AutoSize = true;
			this->radioButton61->Location = System::Drawing::Point(148, 19);
			this->radioButton61->Name = L"radioButton61";
			this->radioButton61->Size = System::Drawing::Size(14, 13);
			this->radioButton61->TabIndex = 64;
			this->radioButton61->TabStop = true;
			this->radioButton61->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(18, 589);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(22, 13);
			this->label21->TabIndex = 63;
			this->label21->Text = L"31.";
			// 
			// prvaSmjenaPoint31
			// 
			this->prvaSmjenaPoint31->AutoSize = true;
			this->prvaSmjenaPoint31->Location = System::Drawing::Point(75, 589);
			this->prvaSmjenaPoint31->Name = L"prvaSmjenaPoint31";
			this->prvaSmjenaPoint31->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint31->TabIndex = 62;
			this->prvaSmjenaPoint31->TabStop = true;
			this->prvaSmjenaPoint31->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint30
			// 
			this->prvaSmjenaPoint30->AutoSize = true;
			this->prvaSmjenaPoint30->Location = System::Drawing::Point(75, 570);
			this->prvaSmjenaPoint30->Name = L"prvaSmjenaPoint30";
			this->prvaSmjenaPoint30->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint30->TabIndex = 61;
			this->prvaSmjenaPoint30->TabStop = true;
			this->prvaSmjenaPoint30->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(18, 570);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 13);
			this->label22->TabIndex = 60;
			this->label22->Text = L"30.";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(18, 551);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(22, 13);
			this->label23->TabIndex = 59;
			this->label23->Text = L"29.";
			// 
			// prvaSmjenaPoint29
			// 
			this->prvaSmjenaPoint29->AutoSize = true;
			this->prvaSmjenaPoint29->Location = System::Drawing::Point(75, 551);
			this->prvaSmjenaPoint29->Name = L"prvaSmjenaPoint29";
			this->prvaSmjenaPoint29->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint29->TabIndex = 58;
			this->prvaSmjenaPoint29->TabStop = true;
			this->prvaSmjenaPoint29->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint28
			// 
			this->prvaSmjenaPoint28->AutoSize = true;
			this->prvaSmjenaPoint28->Location = System::Drawing::Point(75, 532);
			this->prvaSmjenaPoint28->Name = L"prvaSmjenaPoint28";
			this->prvaSmjenaPoint28->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint28->TabIndex = 57;
			this->prvaSmjenaPoint28->TabStop = true;
			this->prvaSmjenaPoint28->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(18, 532);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(22, 13);
			this->label24->TabIndex = 56;
			this->label24->Text = L"28.";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(18, 513);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 13);
			this->label25->TabIndex = 55;
			this->label25->Text = L"27.";
			// 
			// prvaSmjenaPoint27
			// 
			this->prvaSmjenaPoint27->AutoSize = true;
			this->prvaSmjenaPoint27->Location = System::Drawing::Point(75, 513);
			this->prvaSmjenaPoint27->Name = L"prvaSmjenaPoint27";
			this->prvaSmjenaPoint27->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint27->TabIndex = 54;
			this->prvaSmjenaPoint27->TabStop = true;
			this->prvaSmjenaPoint27->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint26
			// 
			this->prvaSmjenaPoint26->AutoSize = true;
			this->prvaSmjenaPoint26->Location = System::Drawing::Point(75, 494);
			this->prvaSmjenaPoint26->Name = L"prvaSmjenaPoint26";
			this->prvaSmjenaPoint26->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint26->TabIndex = 53;
			this->prvaSmjenaPoint26->TabStop = true;
			this->prvaSmjenaPoint26->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(18, 494);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(22, 13);
			this->label26->TabIndex = 52;
			this->label26->Text = L"26.";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(18, 475);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(22, 13);
			this->label27->TabIndex = 51;
			this->label27->Text = L"25.";
			// 
			// prvaSmjenaPoint25
			// 
			this->prvaSmjenaPoint25->AutoSize = true;
			this->prvaSmjenaPoint25->Location = System::Drawing::Point(75, 475);
			this->prvaSmjenaPoint25->Name = L"prvaSmjenaPoint25";
			this->prvaSmjenaPoint25->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint25->TabIndex = 50;
			this->prvaSmjenaPoint25->TabStop = true;
			this->prvaSmjenaPoint25->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint24
			// 
			this->prvaSmjenaPoint24->AutoSize = true;
			this->prvaSmjenaPoint24->Location = System::Drawing::Point(75, 456);
			this->prvaSmjenaPoint24->Name = L"prvaSmjenaPoint24";
			this->prvaSmjenaPoint24->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint24->TabIndex = 49;
			this->prvaSmjenaPoint24->TabStop = true;
			this->prvaSmjenaPoint24->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(18, 456);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 13);
			this->label28->TabIndex = 48;
			this->label28->Text = L"24.";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(18, 437);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(22, 13);
			this->label29->TabIndex = 47;
			this->label29->Text = L"23.";
			// 
			// prvaSmjenaPoint23
			// 
			this->prvaSmjenaPoint23->AutoSize = true;
			this->prvaSmjenaPoint23->Location = System::Drawing::Point(75, 437);
			this->prvaSmjenaPoint23->Name = L"prvaSmjenaPoint23";
			this->prvaSmjenaPoint23->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint23->TabIndex = 46;
			this->prvaSmjenaPoint23->TabStop = true;
			this->prvaSmjenaPoint23->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint22
			// 
			this->prvaSmjenaPoint22->AutoSize = true;
			this->prvaSmjenaPoint22->Location = System::Drawing::Point(75, 418);
			this->prvaSmjenaPoint22->Name = L"prvaSmjenaPoint22";
			this->prvaSmjenaPoint22->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint22->TabIndex = 45;
			this->prvaSmjenaPoint22->TabStop = true;
			this->prvaSmjenaPoint22->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(18, 418);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 13);
			this->label30->TabIndex = 44;
			this->label30->Text = L"22.";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(18, 399);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(22, 13);
			this->label31->TabIndex = 43;
			this->label31->Text = L"21.";
			// 
			// prvaSmjenaPoint21
			// 
			this->prvaSmjenaPoint21->AutoSize = true;
			this->prvaSmjenaPoint21->Location = System::Drawing::Point(75, 399);
			this->prvaSmjenaPoint21->Name = L"prvaSmjenaPoint21";
			this->prvaSmjenaPoint21->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint21->TabIndex = 42;
			this->prvaSmjenaPoint21->TabStop = true;
			this->prvaSmjenaPoint21->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint20
			// 
			this->prvaSmjenaPoint20->AutoSize = true;
			this->prvaSmjenaPoint20->Location = System::Drawing::Point(75, 380);
			this->prvaSmjenaPoint20->Name = L"prvaSmjenaPoint20";
			this->prvaSmjenaPoint20->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint20->TabIndex = 41;
			this->prvaSmjenaPoint20->TabStop = true;
			this->prvaSmjenaPoint20->UseVisualStyleBackColor = true;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(18, 380);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 13);
			this->label32->TabIndex = 40;
			this->label32->Text = L"20.";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(18, 361);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(22, 13);
			this->label33->TabIndex = 39;
			this->label33->Text = L"19.";
			// 
			// prvaSmjenaPoint19
			// 
			this->prvaSmjenaPoint19->AutoSize = true;
			this->prvaSmjenaPoint19->Location = System::Drawing::Point(75, 361);
			this->prvaSmjenaPoint19->Name = L"prvaSmjenaPoint19";
			this->prvaSmjenaPoint19->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint19->TabIndex = 38;
			this->prvaSmjenaPoint19->TabStop = true;
			this->prvaSmjenaPoint19->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint18
			// 
			this->prvaSmjenaPoint18->AutoSize = true;
			this->prvaSmjenaPoint18->Location = System::Drawing::Point(75, 342);
			this->prvaSmjenaPoint18->Name = L"prvaSmjenaPoint18";
			this->prvaSmjenaPoint18->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint18->TabIndex = 37;
			this->prvaSmjenaPoint18->TabStop = true;
			this->prvaSmjenaPoint18->UseVisualStyleBackColor = true;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(18, 342);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(22, 13);
			this->label34->TabIndex = 36;
			this->label34->Text = L"18.";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(18, 323);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(22, 13);
			this->label35->TabIndex = 35;
			this->label35->Text = L"17.";
			// 
			// prvaSmjenaPoint17
			// 
			this->prvaSmjenaPoint17->AutoSize = true;
			this->prvaSmjenaPoint17->Location = System::Drawing::Point(75, 323);
			this->prvaSmjenaPoint17->Name = L"prvaSmjenaPoint17";
			this->prvaSmjenaPoint17->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint17->TabIndex = 34;
			this->prvaSmjenaPoint17->TabStop = true;
			this->prvaSmjenaPoint17->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint16
			// 
			this->prvaSmjenaPoint16->AutoSize = true;
			this->prvaSmjenaPoint16->Location = System::Drawing::Point(75, 304);
			this->prvaSmjenaPoint16->Name = L"prvaSmjenaPoint16";
			this->prvaSmjenaPoint16->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint16->TabIndex = 33;
			this->prvaSmjenaPoint16->TabStop = true;
			this->prvaSmjenaPoint16->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(18, 304);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"16.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(18, 285);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"15.";
			// 
			// prvaSmjenaPoint15
			// 
			this->prvaSmjenaPoint15->AutoSize = true;
			this->prvaSmjenaPoint15->Location = System::Drawing::Point(75, 285);
			this->prvaSmjenaPoint15->Name = L"prvaSmjenaPoint15";
			this->prvaSmjenaPoint15->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint15->TabIndex = 30;
			this->prvaSmjenaPoint15->TabStop = true;
			this->prvaSmjenaPoint15->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint14
			// 
			this->prvaSmjenaPoint14->AutoSize = true;
			this->prvaSmjenaPoint14->Location = System::Drawing::Point(75, 266);
			this->prvaSmjenaPoint14->Name = L"prvaSmjenaPoint14";
			this->prvaSmjenaPoint14->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint14->TabIndex = 29;
			this->prvaSmjenaPoint14->TabStop = true;
			this->prvaSmjenaPoint14->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 266);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"14.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"13.";
			// 
			// prvaSmjenaPoint13
			// 
			this->prvaSmjenaPoint13->AutoSize = true;
			this->prvaSmjenaPoint13->Location = System::Drawing::Point(75, 247);
			this->prvaSmjenaPoint13->Name = L"prvaSmjenaPoint13";
			this->prvaSmjenaPoint13->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint13->TabIndex = 26;
			this->prvaSmjenaPoint13->TabStop = true;
			this->prvaSmjenaPoint13->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint12
			// 
			this->prvaSmjenaPoint12->AutoSize = true;
			this->prvaSmjenaPoint12->Location = System::Drawing::Point(75, 228);
			this->prvaSmjenaPoint12->Name = L"prvaSmjenaPoint12";
			this->prvaSmjenaPoint12->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint12->TabIndex = 25;
			this->prvaSmjenaPoint12->TabStop = true;
			this->prvaSmjenaPoint12->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 228);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"12.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 209);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(22, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"11.";
			// 
			// prvaSmjenaPoint11
			// 
			this->prvaSmjenaPoint11->AutoSize = true;
			this->prvaSmjenaPoint11->Location = System::Drawing::Point(75, 209);
			this->prvaSmjenaPoint11->Name = L"prvaSmjenaPoint11";
			this->prvaSmjenaPoint11->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint11->TabIndex = 22;
			this->prvaSmjenaPoint11->TabStop = true;
			this->prvaSmjenaPoint11->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint10
			// 
			this->prvaSmjenaPoint10->AutoSize = true;
			this->prvaSmjenaPoint10->Location = System::Drawing::Point(75, 190);
			this->prvaSmjenaPoint10->Name = L"prvaSmjenaPoint10";
			this->prvaSmjenaPoint10->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint10->TabIndex = 21;
			this->prvaSmjenaPoint10->TabStop = true;
			this->prvaSmjenaPoint10->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(18, 190);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"10.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(18, 171);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 13);
			this->label19->TabIndex = 19;
			this->label19->Text = L"9.";
			// 
			// prvaSmjenaPoint9
			// 
			this->prvaSmjenaPoint9->AutoSize = true;
			this->prvaSmjenaPoint9->Location = System::Drawing::Point(75, 171);
			this->prvaSmjenaPoint9->Name = L"prvaSmjenaPoint9";
			this->prvaSmjenaPoint9->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint9->TabIndex = 18;
			this->prvaSmjenaPoint9->TabStop = true;
			this->prvaSmjenaPoint9->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint8
			// 
			this->prvaSmjenaPoint8->AutoSize = true;
			this->prvaSmjenaPoint8->Location = System::Drawing::Point(75, 152);
			this->prvaSmjenaPoint8->Name = L"prvaSmjenaPoint8";
			this->prvaSmjenaPoint8->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint8->TabIndex = 17;
			this->prvaSmjenaPoint8->TabStop = true;
			this->prvaSmjenaPoint8->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"8.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 133);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"7.";
			// 
			// prvaSmjenaPoint7
			// 
			this->prvaSmjenaPoint7->AutoSize = true;
			this->prvaSmjenaPoint7->Location = System::Drawing::Point(75, 133);
			this->prvaSmjenaPoint7->Name = L"prvaSmjenaPoint7";
			this->prvaSmjenaPoint7->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint7->TabIndex = 14;
			this->prvaSmjenaPoint7->TabStop = true;
			this->prvaSmjenaPoint7->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint6
			// 
			this->prvaSmjenaPoint6->AutoSize = true;
			this->prvaSmjenaPoint6->Location = System::Drawing::Point(75, 114);
			this->prvaSmjenaPoint6->Name = L"prvaSmjenaPoint6";
			this->prvaSmjenaPoint6->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint6->TabIndex = 13;
			this->prvaSmjenaPoint6->TabStop = true;
			this->prvaSmjenaPoint6->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"6.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 95);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"5.";
			// 
			// prvaSmjenaPoint5
			// 
			this->prvaSmjenaPoint5->AutoSize = true;
			this->prvaSmjenaPoint5->Location = System::Drawing::Point(75, 95);
			this->prvaSmjenaPoint5->Name = L"prvaSmjenaPoint5";
			this->prvaSmjenaPoint5->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint5->TabIndex = 10;
			this->prvaSmjenaPoint5->TabStop = true;
			this->prvaSmjenaPoint5->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint4
			// 
			this->prvaSmjenaPoint4->AutoSize = true;
			this->prvaSmjenaPoint4->Location = System::Drawing::Point(75, 76);
			this->prvaSmjenaPoint4->Name = L"prvaSmjenaPoint4";
			this->prvaSmjenaPoint4->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint4->TabIndex = 9;
			this->prvaSmjenaPoint4->TabStop = true;
			this->prvaSmjenaPoint4->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"4.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"3.";
			// 
			// prvaSmjenaPoint3
			// 
			this->prvaSmjenaPoint3->AutoSize = true;
			this->prvaSmjenaPoint3->Location = System::Drawing::Point(75, 57);
			this->prvaSmjenaPoint3->Name = L"prvaSmjenaPoint3";
			this->prvaSmjenaPoint3->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint3->TabIndex = 6;
			this->prvaSmjenaPoint3->TabStop = true;
			this->prvaSmjenaPoint3->UseVisualStyleBackColor = true;
			// 
			// prvaSmjenaPoint2
			// 
			this->prvaSmjenaPoint2->AutoSize = true;
			this->prvaSmjenaPoint2->Location = System::Drawing::Point(75, 38);
			this->prvaSmjenaPoint2->Name = L"prvaSmjenaPoint2";
			this->prvaSmjenaPoint2->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint2->TabIndex = 5;
			this->prvaSmjenaPoint2->TabStop = true;
			this->prvaSmjenaPoint2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 38);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"2.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"1.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Prva smjena";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Datum";
			// 
			// prvaSmjenaPoint1
			// 
			this->prvaSmjenaPoint1->AutoSize = true;
			this->prvaSmjenaPoint1->Location = System::Drawing::Point(75, 19);
			this->prvaSmjenaPoint1->Name = L"prvaSmjenaPoint1";
			this->prvaSmjenaPoint1->Size = System::Drawing::Size(14, 13);
			this->prvaSmjenaPoint1->TabIndex = 0;
			this->prvaSmjenaPoint1->TabStop = true;
			this->prvaSmjenaPoint1->UseVisualStyleBackColor = true;
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(12, 670);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(392, 23);
			this->progressBar->TabIndex = 21;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(495, 705);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->doneButton);
			this->Name = L"mainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Šihter - Početna";
			this->prvaSmjenaGroup->ResumeLayout(false);
			this->prvaSmjenaGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart1))->EndInit();
			this->drugaSmjenaGroup->ResumeLayout(false);
			this->drugaSmjenaGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeEnd3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->workTimeStart3))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->defaultInfoTab->ResumeLayout(false);
			this->defaultInfoTab->PerformLayout();
			this->workTimeTab->ResumeLayout(false);
			this->workTimeTab->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

void getUserInput();

private: System::Void doneButton_Click(System::Object^ sender, System::EventArgs^ e) {
	getUserInput();
}
private: System::Void gitHubToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/santicleon1/Sihter");
}
private: System::Void otvoriŠihtericuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start(".\\output\\Sihterica.xlsx");
}
};
}
