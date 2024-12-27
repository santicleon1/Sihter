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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ podaciToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ radnikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ titulaImePrezimeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adresaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ organizacijskaJedinicaToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->podaciToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->radnikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->titulaImePrezimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->adresaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->organizacijskaJedinicaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->podaciToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(466, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// podaciToolStripMenuItem
			// 
			this->podaciToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->radnikToolStripMenuItem,
					this->organizacijskaJedinicaToolStripMenuItem
			});
			this->podaciToolStripMenuItem->Name = L"podaciToolStripMenuItem";
			this->podaciToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->podaciToolStripMenuItem->Text = L"Podaci";
			// 
			// radnikToolStripMenuItem
			// 
			this->radnikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->titulaImePrezimeToolStripMenuItem,
					this->adresaToolStripMenuItem
			});
			this->radnikToolStripMenuItem->Name = L"radnikToolStripMenuItem";
			this->radnikToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->radnikToolStripMenuItem->Text = L"Radnik";
			// 
			// titulaImePrezimeToolStripMenuItem
			// 
			this->titulaImePrezimeToolStripMenuItem->Name = L"titulaImePrezimeToolStripMenuItem";
			this->titulaImePrezimeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->titulaImePrezimeToolStripMenuItem->Text = L"Titula, ime, prezime";
			// 
			// adresaToolStripMenuItem
			// 
			this->adresaToolStripMenuItem->Name = L"adresaToolStripMenuItem";
			this->adresaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->adresaToolStripMenuItem->Text = L"Adresa";
			// 
			// organizacijskaJedinicaToolStripMenuItem
			// 
			this->organizacijskaJedinicaToolStripMenuItem->Name = L"organizacijskaJedinicaToolStripMenuItem";
			this->organizacijskaJedinicaToolStripMenuItem->Size = System::Drawing::Size(194, 22);
			this->organizacijskaJedinicaToolStripMenuItem->Text = L"Organizacijska jedinica";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"siječanj", L"veljača", L"ožujak", L"travanj",
					L"svibanj", L"lipanj", L"srpanj", L"kolovoz", L"rujan", L"listopad", L"studeni", L"prosinac"
			});
			this->comboBox1->Location = System::Drawing::Point(15, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mjesec";
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 282);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainForm";
			this->Text = L"Šihter - Početna";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
