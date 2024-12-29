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
			this->višeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gitHubToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datotekaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otvoriŠihtericuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->SuspendLayout();
			// 
			// monthSelector
			// 
			this->monthSelector->FormattingEnabled = true;
			this->monthSelector->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"siječanj", L"veljača", L"ožujak", L"travanj",
					L"svibanj", L"lipanj", L"srpanj", L"kolovoz", L"rujan", L"listopad", L"studeni", L"prosinac"
			});
			this->monthSelector->Location = System::Drawing::Point(14, 79);
			this->monthSelector->Name = L"monthSelector";
			this->monthSelector->Size = System::Drawing::Size(69, 21);
			this->monthSelector->TabIndex = 1;
			// 
			// monthLabel
			// 
			this->monthLabel->AutoSize = true;
			this->monthLabel->Location = System::Drawing::Point(11, 63);
			this->monthLabel->Name = L"monthLabel";
			this->monthLabel->Size = System::Drawing::Size(41, 13);
			this->monthLabel->TabIndex = 2;
			this->monthLabel->Text = L"Mjesec";
			// 
			// radnikNameLabel
			// 
			this->radnikNameLabel->AutoSize = true;
			this->radnikNameLabel->Location = System::Drawing::Point(12, 24);
			this->radnikNameLabel->Name = L"radnikNameLabel";
			this->radnikNameLabel->Size = System::Drawing::Size(72, 13);
			this->radnikNameLabel->TabIndex = 3;
			this->radnikNameLabel->Text = L"Naziv radnika";
			// 
			// radnikName
			// 
			this->radnikName->Location = System::Drawing::Point(14, 40);
			this->radnikName->Name = L"radnikName";
			this->radnikName->Size = System::Drawing::Size(212, 20);
			this->radnikName->TabIndex = 4;
			// 
			// orgNameLabel
			// 
			this->orgNameLabel->AutoSize = true;
			this->orgNameLabel->Location = System::Drawing::Point(229, 24);
			this->orgNameLabel->Name = L"orgNameLabel";
			this->orgNameLabel->Size = System::Drawing::Size(115, 13);
			this->orgNameLabel->TabIndex = 5;
			this->orgNameLabel->Text = L"Organizacijska jedinica";
			// 
			// orgName
			// 
			this->orgName->Location = System::Drawing::Point(232, 40);
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
			this->prvaSmjenaGroup->Location = System::Drawing::Point(14, 106);
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
			this->drugaSmjenaGroup->Location = System::Drawing::Point(164, 106);
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
			this->groupBox1->Location = System::Drawing::Point(314, 106);
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
			this->doneButton->Location = System::Drawing::Point(386, 236);
			this->doneButton->Name = L"doneButton";
			this->doneButton->Size = System::Drawing::Size(75, 23);
			this->doneButton->TabIndex = 14;
			this->doneButton->Text = L"Gotovo";
			this->doneButton->UseVisualStyleBackColor = true;
			this->doneButton->Click += gcnew System::EventHandler(this, &mainForm::doneButton_Click);
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->Location = System::Drawing::Point(86, 63);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(41, 13);
			this->yearLabel->TabIndex = 16;
			this->yearLabel->Text = L"Godina";
			// 
			// year
			// 
			this->year->Location = System::Drawing::Point(89, 80);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(69, 20);
			this->year->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 233);
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
			this->menuStrip1->Size = System::Drawing::Size(474, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->otvoriŠihtericuToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->otvoriŠihtericuToolStripMenuItem->Text = L"Otvori šihtericu";
			this->otvoriŠihtericuToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainForm::otvoriŠihtericuToolStripMenuItem_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(474, 274);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->year);
			this->Controls->Add(this->yearLabel);
			this->Controls->Add(this->doneButton);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->drugaSmjenaGroup);
			this->Controls->Add(this->orgName);
			this->Controls->Add(this->orgNameLabel);
			this->Controls->Add(this->radnikName);
			this->Controls->Add(this->radnikNameLabel);
			this->Controls->Add(this->monthLabel);
			this->Controls->Add(this->monthSelector);
			this->Controls->Add(this->prvaSmjenaGroup);
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
