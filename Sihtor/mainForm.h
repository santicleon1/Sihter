#pragma once

namespace Sihtor {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ workTimeStart;
	private: System::Windows::Forms::Label^ workTimeEnd;
	private: System::Windows::Forms::GroupBox^ prvaSmjenaGroup;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ drugaSmjenaGroup;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;















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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->workTimeStart = (gcnew System::Windows::Forms::Label());
			this->workTimeEnd = (gcnew System::Windows::Forms::Label());
			this->prvaSmjenaGroup = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->drugaSmjenaGroup = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->prvaSmjenaGroup->SuspendLayout();
			this->drugaSmjenaGroup->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// monthSelector
			// 
			this->monthSelector->FormattingEnabled = true;
			this->monthSelector->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"siječanj", L"veljača", L"ožujak", L"travanj",
					L"svibanj", L"lipanj", L"srpanj", L"kolovoz", L"rujan", L"listopad", L"studeni", L"prosinac"
			});
			this->monthSelector->Location = System::Drawing::Point(15, 64);
			this->monthSelector->Name = L"monthSelector";
			this->monthSelector->Size = System::Drawing::Size(69, 21);
			this->monthSelector->TabIndex = 1;
			// 
			// monthLabel
			// 
			this->monthLabel->AutoSize = true;
			this->monthLabel->Location = System::Drawing::Point(12, 48);
			this->monthLabel->Name = L"monthLabel";
			this->monthLabel->Size = System::Drawing::Size(41, 13);
			this->monthLabel->TabIndex = 2;
			this->monthLabel->Text = L"Mjesec";
			// 
			// radnikNameLabel
			// 
			this->radnikNameLabel->AutoSize = true;
			this->radnikNameLabel->Location = System::Drawing::Point(12, 9);
			this->radnikNameLabel->Name = L"radnikNameLabel";
			this->radnikNameLabel->Size = System::Drawing::Size(72, 13);
			this->radnikNameLabel->TabIndex = 3;
			this->radnikNameLabel->Text = L"Naziv radnika";
			// 
			// radnikName
			// 
			this->radnikName->Location = System::Drawing::Point(15, 25);
			this->radnikName->Name = L"radnikName";
			this->radnikName->Size = System::Drawing::Size(212, 20);
			this->radnikName->TabIndex = 4;
			// 
			// orgNameLabel
			// 
			this->orgNameLabel->AutoSize = true;
			this->orgNameLabel->Location = System::Drawing::Point(230, 9);
			this->orgNameLabel->Name = L"orgNameLabel";
			this->orgNameLabel->Size = System::Drawing::Size(115, 13);
			this->orgNameLabel->TabIndex = 5;
			this->orgNameLabel->Text = L"Organizacijska jedinica";
			// 
			// orgName
			// 
			this->orgName->Location = System::Drawing::Point(233, 25);
			this->orgName->Name = L"orgName";
			this->orgName->Size = System::Drawing::Size(224, 20);
			this->orgName->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(9, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 8;
			// 
			// workTimeStart
			// 
			this->workTimeStart->AutoSize = true;
			this->workTimeStart->Location = System::Drawing::Point(6, 18);
			this->workTimeStart->Name = L"workTimeStart";
			this->workTimeStart->Size = System::Drawing::Size(127, 13);
			this->workTimeStart->TabIndex = 9;
			this->workTimeStart->Text = L"Početak radnog vremena";
			// 
			// workTimeEnd
			// 
			this->workTimeEnd->AutoSize = true;
			this->workTimeEnd->Location = System::Drawing::Point(6, 57);
			this->workTimeEnd->Name = L"workTimeEnd";
			this->workTimeEnd->Size = System::Drawing::Size(135, 13);
			this->workTimeEnd->TabIndex = 10;
			this->workTimeEnd->Text = L"Završetak radnog vremena";
			// 
			// prvaSmjenaGroup
			// 
			this->prvaSmjenaGroup->Controls->Add(this->workTimeEnd);
			this->prvaSmjenaGroup->Controls->Add(this->workTimeStart);
			this->prvaSmjenaGroup->Controls->Add(this->textBox1);
			this->prvaSmjenaGroup->Controls->Add(this->textBox2);
			this->prvaSmjenaGroup->Location = System::Drawing::Point(15, 91);
			this->prvaSmjenaGroup->Name = L"prvaSmjenaGroup";
			this->prvaSmjenaGroup->Size = System::Drawing::Size(144, 103);
			this->prvaSmjenaGroup->TabIndex = 11;
			this->prvaSmjenaGroup->TabStop = false;
			this->prvaSmjenaGroup->Text = L"Prva smjena";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(9, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(38, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 34);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(38, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Početak radnog vremena";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Završetak radnog vremena";
			// 
			// drugaSmjenaGroup
			// 
			this->drugaSmjenaGroup->Controls->Add(this->label1);
			this->drugaSmjenaGroup->Controls->Add(this->label2);
			this->drugaSmjenaGroup->Controls->Add(this->textBox3);
			this->drugaSmjenaGroup->Controls->Add(this->textBox4);
			this->drugaSmjenaGroup->Location = System::Drawing::Point(165, 91);
			this->drugaSmjenaGroup->Name = L"drugaSmjenaGroup";
			this->drugaSmjenaGroup->Size = System::Drawing::Size(144, 103);
			this->drugaSmjenaGroup->TabIndex = 12;
			this->drugaSmjenaGroup->TabStop = false;
			this->drugaSmjenaGroup->Text = L"Druga smjena";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Location = System::Drawing::Point(315, 91);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 103);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Treća smjena";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Završetak radnog vremena";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Početak radnog vremena";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(9, 34);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(9, 73);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(38, 20);
			this->textBox6->TabIndex = 8;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(468, 256);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->drugaSmjenaGroup);
			this->Controls->Add(this->orgName);
			this->Controls->Add(this->orgNameLabel);
			this->Controls->Add(this->radnikName);
			this->Controls->Add(this->radnikNameLabel);
			this->Controls->Add(this->monthLabel);
			this->Controls->Add(this->monthSelector);
			this->Controls->Add(this->prvaSmjenaGroup);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Šihter - Početna";
			this->prvaSmjenaGroup->ResumeLayout(false);
			this->prvaSmjenaGroup->PerformLayout();
			this->drugaSmjenaGroup->ResumeLayout(false);
			this->drugaSmjenaGroup->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
