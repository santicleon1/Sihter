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

	private: System::Windows::Forms::Label^ label21;




	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;




	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;




	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;




	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;




	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;




	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;




	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;




	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;




	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;




	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;




	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

































private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::ComboBox^ smjenaBox1;
private: System::Windows::Forms::ComboBox^ smjenaBox2;


private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::ComboBox^ smjenaBox30;
private: System::Windows::Forms::ComboBox^ smjenaBox31;


private: System::Windows::Forms::ComboBox^ smjenaBox29;

private: System::Windows::Forms::ComboBox^ smjenaBox28;

private: System::Windows::Forms::ComboBox^ smjenaBox27;

private: System::Windows::Forms::ComboBox^ smjenaBox26;

private: System::Windows::Forms::ComboBox^ smjenaBox25;

private: System::Windows::Forms::ComboBox^ smjenaBox24;

private: System::Windows::Forms::ComboBox^ smjenaBox23;

private: System::Windows::Forms::ComboBox^ smjenaBox22;

private: System::Windows::Forms::ComboBox^ smjenaBox21;

private: System::Windows::Forms::ComboBox^ smjenaBox20;

private: System::Windows::Forms::ComboBox^ smjenaBox19;

private: System::Windows::Forms::ComboBox^ smjenaBox18;

private: System::Windows::Forms::ComboBox^ smjenaBox17;

private: System::Windows::Forms::ComboBox^ smjenaBox16;

private: System::Windows::Forms::ComboBox^ smjenaBox15;

private: System::Windows::Forms::ComboBox^ smjenaBox14;

private: System::Windows::Forms::ComboBox^ smjenaBox13;

private: System::Windows::Forms::ComboBox^ smjenaBox12;

private: System::Windows::Forms::ComboBox^ smjenaBox11;

private: System::Windows::Forms::ComboBox^ smjenaBox10;

private: System::Windows::Forms::ComboBox^ smjenaBox9;

private: System::Windows::Forms::ComboBox^ smjenaBox8;

private: System::Windows::Forms::ComboBox^ smjenaBox7;

private: System::Windows::Forms::ComboBox^ smjenaBox6;

private: System::Windows::Forms::ComboBox^ smjenaBox5;

private: System::Windows::Forms::ComboBox^ smjenaBox4;

private: System::Windows::Forms::ComboBox^ smjenaBox3;






















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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->smjenaBox30 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox31 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox29 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox28 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox27 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox26 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox25 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox24 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox23 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox22 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox21 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox20 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox19 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox18 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox17 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox16 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->smjenaBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->panel1->SuspendLayout();
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
			this->doneButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->doneButton->Location = System::Drawing::Point(829, 3);
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
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 26);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Potrebno je stisnuti Ctrl+Alt+F9\r\nda bi se automatski sve izračunalo u Excel-u!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->datotekaToolStripMenuItem,
					this->višeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(911, 24);
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
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->defaultInfoTab);
			this->tabControl1->Controls->Add(this->workTimeTab);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(887, 612);
			this->tabControl1->TabIndex = 20;
			// 
			// defaultInfoTab
			// 
			this->defaultInfoTab->BackColor = System::Drawing::SystemColors::Control;
			this->defaultInfoTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->defaultInfoTab->Controls->Add(this->radnikNameLabel);
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
			this->defaultInfoTab->Size = System::Drawing::Size(459, 201);
			this->defaultInfoTab->TabIndex = 0;
			this->defaultInfoTab->Text = L"Osnovni podaci";
			// 
			// workTimeTab
			// 
			this->workTimeTab->AutoScroll = true;
			this->workTimeTab->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->workTimeTab->Controls->Add(this->label3);
			this->workTimeTab->Controls->Add(this->smjenaBox30);
			this->workTimeTab->Controls->Add(this->smjenaBox31);
			this->workTimeTab->Controls->Add(this->smjenaBox29);
			this->workTimeTab->Controls->Add(this->smjenaBox28);
			this->workTimeTab->Controls->Add(this->smjenaBox27);
			this->workTimeTab->Controls->Add(this->smjenaBox26);
			this->workTimeTab->Controls->Add(this->smjenaBox25);
			this->workTimeTab->Controls->Add(this->smjenaBox24);
			this->workTimeTab->Controls->Add(this->smjenaBox23);
			this->workTimeTab->Controls->Add(this->smjenaBox22);
			this->workTimeTab->Controls->Add(this->smjenaBox21);
			this->workTimeTab->Controls->Add(this->smjenaBox20);
			this->workTimeTab->Controls->Add(this->smjenaBox19);
			this->workTimeTab->Controls->Add(this->smjenaBox18);
			this->workTimeTab->Controls->Add(this->smjenaBox17);
			this->workTimeTab->Controls->Add(this->smjenaBox16);
			this->workTimeTab->Controls->Add(this->smjenaBox15);
			this->workTimeTab->Controls->Add(this->smjenaBox14);
			this->workTimeTab->Controls->Add(this->smjenaBox13);
			this->workTimeTab->Controls->Add(this->smjenaBox12);
			this->workTimeTab->Controls->Add(this->smjenaBox11);
			this->workTimeTab->Controls->Add(this->smjenaBox10);
			this->workTimeTab->Controls->Add(this->smjenaBox9);
			this->workTimeTab->Controls->Add(this->smjenaBox8);
			this->workTimeTab->Controls->Add(this->smjenaBox7);
			this->workTimeTab->Controls->Add(this->smjenaBox6);
			this->workTimeTab->Controls->Add(this->smjenaBox5);
			this->workTimeTab->Controls->Add(this->smjenaBox4);
			this->workTimeTab->Controls->Add(this->smjenaBox3);
			this->workTimeTab->Controls->Add(this->smjenaBox2);
			this->workTimeTab->Controls->Add(this->smjenaBox1);
			this->workTimeTab->Controls->Add(this->label21);
			this->workTimeTab->Controls->Add(this->label22);
			this->workTimeTab->Controls->Add(this->label23);
			this->workTimeTab->Controls->Add(this->label24);
			this->workTimeTab->Controls->Add(this->label25);
			this->workTimeTab->Controls->Add(this->label26);
			this->workTimeTab->Controls->Add(this->label27);
			this->workTimeTab->Controls->Add(this->label28);
			this->workTimeTab->Controls->Add(this->label29);
			this->workTimeTab->Controls->Add(this->label30);
			this->workTimeTab->Controls->Add(this->label31);
			this->workTimeTab->Controls->Add(this->label32);
			this->workTimeTab->Controls->Add(this->label33);
			this->workTimeTab->Controls->Add(this->label34);
			this->workTimeTab->Controls->Add(this->label35);
			this->workTimeTab->Controls->Add(this->label12);
			this->workTimeTab->Controls->Add(this->label13);
			this->workTimeTab->Controls->Add(this->label14);
			this->workTimeTab->Controls->Add(this->label15);
			this->workTimeTab->Controls->Add(this->label16);
			this->workTimeTab->Controls->Add(this->label17);
			this->workTimeTab->Controls->Add(this->label18);
			this->workTimeTab->Controls->Add(this->label19);
			this->workTimeTab->Controls->Add(this->label8);
			this->workTimeTab->Controls->Add(this->label9);
			this->workTimeTab->Controls->Add(this->label10);
			this->workTimeTab->Controls->Add(this->label11);
			this->workTimeTab->Controls->Add(this->label6);
			this->workTimeTab->Controls->Add(this->label7);
			this->workTimeTab->Controls->Add(this->label5);
			this->workTimeTab->Controls->Add(this->label4);
			this->workTimeTab->Controls->Add(this->label2);
			this->workTimeTab->Location = System::Drawing::Point(4, 22);
			this->workTimeTab->Name = L"workTimeTab";
			this->workTimeTab->Padding = System::Windows::Forms::Padding(3);
			this->workTimeTab->Size = System::Drawing::Size(879, 586);
			this->workTimeTab->TabIndex = 1;
			this->workTimeTab->Text = L"Vrijeme rada";
			this->workTimeTab->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 95;
			this->label3->Text = L"Smjena";
			// 
			// smjenaBox30
			// 
			this->smjenaBox30->FormattingEnabled = true;
			this->smjenaBox30->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox30->Location = System::Drawing::Point(46, 802);
			this->smjenaBox30->Name = L"smjenaBox30";
			this->smjenaBox30->Size = System::Drawing::Size(51, 21);
			this->smjenaBox30->TabIndex = 94;
			// 
			// smjenaBox31
			// 
			this->smjenaBox31->FormattingEnabled = true;
			this->smjenaBox31->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox31->Location = System::Drawing::Point(46, 829);
			this->smjenaBox31->Name = L"smjenaBox31";
			this->smjenaBox31->Size = System::Drawing::Size(51, 21);
			this->smjenaBox31->TabIndex = 93;
			// 
			// smjenaBox29
			// 
			this->smjenaBox29->FormattingEnabled = true;
			this->smjenaBox29->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox29->Location = System::Drawing::Point(46, 775);
			this->smjenaBox29->Name = L"smjenaBox29";
			this->smjenaBox29->Size = System::Drawing::Size(51, 21);
			this->smjenaBox29->TabIndex = 92;
			// 
			// smjenaBox28
			// 
			this->smjenaBox28->FormattingEnabled = true;
			this->smjenaBox28->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox28->Location = System::Drawing::Point(46, 748);
			this->smjenaBox28->Name = L"smjenaBox28";
			this->smjenaBox28->Size = System::Drawing::Size(51, 21);
			this->smjenaBox28->TabIndex = 91;
			// 
			// smjenaBox27
			// 
			this->smjenaBox27->FormattingEnabled = true;
			this->smjenaBox27->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox27->Location = System::Drawing::Point(46, 721);
			this->smjenaBox27->Name = L"smjenaBox27";
			this->smjenaBox27->Size = System::Drawing::Size(51, 21);
			this->smjenaBox27->TabIndex = 90;
			// 
			// smjenaBox26
			// 
			this->smjenaBox26->FormattingEnabled = true;
			this->smjenaBox26->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox26->Location = System::Drawing::Point(46, 694);
			this->smjenaBox26->Name = L"smjenaBox26";
			this->smjenaBox26->Size = System::Drawing::Size(51, 21);
			this->smjenaBox26->TabIndex = 89;
			// 
			// smjenaBox25
			// 
			this->smjenaBox25->FormattingEnabled = true;
			this->smjenaBox25->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox25->Location = System::Drawing::Point(46, 667);
			this->smjenaBox25->Name = L"smjenaBox25";
			this->smjenaBox25->Size = System::Drawing::Size(51, 21);
			this->smjenaBox25->TabIndex = 88;
			// 
			// smjenaBox24
			// 
			this->smjenaBox24->FormattingEnabled = true;
			this->smjenaBox24->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox24->Location = System::Drawing::Point(46, 640);
			this->smjenaBox24->Name = L"smjenaBox24";
			this->smjenaBox24->Size = System::Drawing::Size(51, 21);
			this->smjenaBox24->TabIndex = 87;
			// 
			// smjenaBox23
			// 
			this->smjenaBox23->FormattingEnabled = true;
			this->smjenaBox23->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox23->Location = System::Drawing::Point(46, 613);
			this->smjenaBox23->Name = L"smjenaBox23";
			this->smjenaBox23->Size = System::Drawing::Size(51, 21);
			this->smjenaBox23->TabIndex = 86;
			// 
			// smjenaBox22
			// 
			this->smjenaBox22->FormattingEnabled = true;
			this->smjenaBox22->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox22->Location = System::Drawing::Point(46, 586);
			this->smjenaBox22->Name = L"smjenaBox22";
			this->smjenaBox22->Size = System::Drawing::Size(51, 21);
			this->smjenaBox22->TabIndex = 85;
			// 
			// smjenaBox21
			// 
			this->smjenaBox21->FormattingEnabled = true;
			this->smjenaBox21->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox21->Location = System::Drawing::Point(46, 559);
			this->smjenaBox21->Name = L"smjenaBox21";
			this->smjenaBox21->Size = System::Drawing::Size(51, 21);
			this->smjenaBox21->TabIndex = 84;
			// 
			// smjenaBox20
			// 
			this->smjenaBox20->FormattingEnabled = true;
			this->smjenaBox20->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox20->Location = System::Drawing::Point(46, 532);
			this->smjenaBox20->Name = L"smjenaBox20";
			this->smjenaBox20->Size = System::Drawing::Size(51, 21);
			this->smjenaBox20->TabIndex = 83;
			// 
			// smjenaBox19
			// 
			this->smjenaBox19->FormattingEnabled = true;
			this->smjenaBox19->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox19->Location = System::Drawing::Point(46, 505);
			this->smjenaBox19->Name = L"smjenaBox19";
			this->smjenaBox19->Size = System::Drawing::Size(51, 21);
			this->smjenaBox19->TabIndex = 82;
			// 
			// smjenaBox18
			// 
			this->smjenaBox18->FormattingEnabled = true;
			this->smjenaBox18->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox18->Location = System::Drawing::Point(46, 478);
			this->smjenaBox18->Name = L"smjenaBox18";
			this->smjenaBox18->Size = System::Drawing::Size(51, 21);
			this->smjenaBox18->TabIndex = 81;
			// 
			// smjenaBox17
			// 
			this->smjenaBox17->FormattingEnabled = true;
			this->smjenaBox17->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox17->Location = System::Drawing::Point(46, 451);
			this->smjenaBox17->Name = L"smjenaBox17";
			this->smjenaBox17->Size = System::Drawing::Size(51, 21);
			this->smjenaBox17->TabIndex = 80;
			// 
			// smjenaBox16
			// 
			this->smjenaBox16->FormattingEnabled = true;
			this->smjenaBox16->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox16->Location = System::Drawing::Point(46, 424);
			this->smjenaBox16->Name = L"smjenaBox16";
			this->smjenaBox16->Size = System::Drawing::Size(51, 21);
			this->smjenaBox16->TabIndex = 79;
			// 
			// smjenaBox15
			// 
			this->smjenaBox15->FormattingEnabled = true;
			this->smjenaBox15->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox15->Location = System::Drawing::Point(46, 397);
			this->smjenaBox15->Name = L"smjenaBox15";
			this->smjenaBox15->Size = System::Drawing::Size(51, 21);
			this->smjenaBox15->TabIndex = 78;
			// 
			// smjenaBox14
			// 
			this->smjenaBox14->FormattingEnabled = true;
			this->smjenaBox14->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox14->Location = System::Drawing::Point(46, 370);
			this->smjenaBox14->Name = L"smjenaBox14";
			this->smjenaBox14->Size = System::Drawing::Size(51, 21);
			this->smjenaBox14->TabIndex = 77;
			// 
			// smjenaBox13
			// 
			this->smjenaBox13->FormattingEnabled = true;
			this->smjenaBox13->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox13->Location = System::Drawing::Point(46, 343);
			this->smjenaBox13->Name = L"smjenaBox13";
			this->smjenaBox13->Size = System::Drawing::Size(51, 21);
			this->smjenaBox13->TabIndex = 76;
			// 
			// smjenaBox12
			// 
			this->smjenaBox12->FormattingEnabled = true;
			this->smjenaBox12->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox12->Location = System::Drawing::Point(46, 316);
			this->smjenaBox12->Name = L"smjenaBox12";
			this->smjenaBox12->Size = System::Drawing::Size(51, 21);
			this->smjenaBox12->TabIndex = 75;
			// 
			// smjenaBox11
			// 
			this->smjenaBox11->FormattingEnabled = true;
			this->smjenaBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox11->Location = System::Drawing::Point(46, 289);
			this->smjenaBox11->Name = L"smjenaBox11";
			this->smjenaBox11->Size = System::Drawing::Size(51, 21);
			this->smjenaBox11->TabIndex = 74;
			// 
			// smjenaBox10
			// 
			this->smjenaBox10->FormattingEnabled = true;
			this->smjenaBox10->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox10->Location = System::Drawing::Point(46, 262);
			this->smjenaBox10->Name = L"smjenaBox10";
			this->smjenaBox10->Size = System::Drawing::Size(51, 21);
			this->smjenaBox10->TabIndex = 73;
			// 
			// smjenaBox9
			// 
			this->smjenaBox9->FormattingEnabled = true;
			this->smjenaBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox9->Location = System::Drawing::Point(46, 235);
			this->smjenaBox9->Name = L"smjenaBox9";
			this->smjenaBox9->Size = System::Drawing::Size(51, 21);
			this->smjenaBox9->TabIndex = 72;
			// 
			// smjenaBox8
			// 
			this->smjenaBox8->FormattingEnabled = true;
			this->smjenaBox8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox8->Location = System::Drawing::Point(46, 208);
			this->smjenaBox8->Name = L"smjenaBox8";
			this->smjenaBox8->Size = System::Drawing::Size(51, 21);
			this->smjenaBox8->TabIndex = 71;
			// 
			// smjenaBox7
			// 
			this->smjenaBox7->FormattingEnabled = true;
			this->smjenaBox7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox7->Location = System::Drawing::Point(46, 181);
			this->smjenaBox7->Name = L"smjenaBox7";
			this->smjenaBox7->Size = System::Drawing::Size(51, 21);
			this->smjenaBox7->TabIndex = 70;
			// 
			// smjenaBox6
			// 
			this->smjenaBox6->FormattingEnabled = true;
			this->smjenaBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox6->Location = System::Drawing::Point(46, 154);
			this->smjenaBox6->Name = L"smjenaBox6";
			this->smjenaBox6->Size = System::Drawing::Size(51, 21);
			this->smjenaBox6->TabIndex = 69;
			// 
			// smjenaBox5
			// 
			this->smjenaBox5->FormattingEnabled = true;
			this->smjenaBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox5->Location = System::Drawing::Point(46, 127);
			this->smjenaBox5->Name = L"smjenaBox5";
			this->smjenaBox5->Size = System::Drawing::Size(51, 21);
			this->smjenaBox5->TabIndex = 68;
			// 
			// smjenaBox4
			// 
			this->smjenaBox4->FormattingEnabled = true;
			this->smjenaBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox4->Location = System::Drawing::Point(46, 100);
			this->smjenaBox4->Name = L"smjenaBox4";
			this->smjenaBox4->Size = System::Drawing::Size(51, 21);
			this->smjenaBox4->TabIndex = 67;
			// 
			// smjenaBox3
			// 
			this->smjenaBox3->FormattingEnabled = true;
			this->smjenaBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox3->Location = System::Drawing::Point(46, 73);
			this->smjenaBox3->Name = L"smjenaBox3";
			this->smjenaBox3->Size = System::Drawing::Size(51, 21);
			this->smjenaBox3->TabIndex = 66;
			// 
			// smjenaBox2
			// 
			this->smjenaBox2->FormattingEnabled = true;
			this->smjenaBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox2->Location = System::Drawing::Point(46, 46);
			this->smjenaBox2->Name = L"smjenaBox2";
			this->smjenaBox2->Size = System::Drawing::Size(51, 21);
			this->smjenaBox2->TabIndex = 65;
			// 
			// smjenaBox1
			// 
			this->smjenaBox1->FormattingEnabled = true;
			this->smjenaBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Prva", L"Druga", L"Treća" });
			this->smjenaBox1->Location = System::Drawing::Point(46, 19);
			this->smjenaBox1->Name = L"smjenaBox1";
			this->smjenaBox1->Size = System::Drawing::Size(51, 21);
			this->smjenaBox1->TabIndex = 64;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(12, 832);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(22, 13);
			this->label21->TabIndex = 63;
			this->label21->Text = L"31.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 805);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(22, 13);
			this->label22->TabIndex = 60;
			this->label22->Text = L"30.";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(12, 778);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(22, 13);
			this->label23->TabIndex = 59;
			this->label23->Text = L"29.";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(12, 751);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(22, 13);
			this->label24->TabIndex = 56;
			this->label24->Text = L"28.";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(12, 724);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(22, 13);
			this->label25->TabIndex = 55;
			this->label25->Text = L"27.";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(12, 697);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(22, 13);
			this->label26->TabIndex = 52;
			this->label26->Text = L"26.";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(12, 670);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(22, 13);
			this->label27->TabIndex = 51;
			this->label27->Text = L"25.";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(12, 643);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(22, 13);
			this->label28->TabIndex = 48;
			this->label28->Text = L"24.";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(12, 616);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(22, 13);
			this->label29->TabIndex = 47;
			this->label29->Text = L"23.";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(12, 589);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 13);
			this->label30->TabIndex = 44;
			this->label30->Text = L"22.";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(12, 562);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(22, 13);
			this->label31->TabIndex = 43;
			this->label31->Text = L"21.";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(12, 535);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 13);
			this->label32->TabIndex = 40;
			this->label32->Text = L"20.";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(12, 508);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(22, 13);
			this->label33->TabIndex = 39;
			this->label33->Text = L"19.";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(12, 481);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(22, 13);
			this->label34->TabIndex = 36;
			this->label34->Text = L"18.";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(12, 454);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(22, 13);
			this->label35->TabIndex = 35;
			this->label35->Text = L"17.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(12, 427);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"16.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 400);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 31;
			this->label13->Text = L"15.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 373);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"14.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 346);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"13.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 319);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 13);
			this->label16->TabIndex = 24;
			this->label16->Text = L"12.";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 292);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(22, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"11.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(12, 265);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"10.";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(18, 238);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(16, 13);
			this->label19->TabIndex = 19;
			this->label19->Text = L"9.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"8.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 184);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"7.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"6.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 130);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"5.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"4.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 76);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"3.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"2.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"1.";
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
			// progressBar
			// 
			this->progressBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar->Location = System::Drawing::Point(228, 3);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(598, 23);
			this->progressBar->TabIndex = 21;
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->doneButton);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->progressBar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 645);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(911, 29);
			this->panel1->TabIndex = 22;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(911, 674);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
