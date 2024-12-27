#pragma once

namespace Sihtor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for startUi
	/// </summary>
	public ref class startUi : public System::Windows::Forms::Form
	{
	public:
		startUi(void)
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
		~startUi()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ToolStripMenuItem^ jebiSeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ jebiSeUDvojeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sMuskimToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sZenskimToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mozeCakIUTrojeToolStripMenuItem;










	protected:


	protected:

	protected:






	protected:



	protected:
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->jebiSeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jebiSeUDvojeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sMuskimToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sZenskimToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mozeCakIUTrojeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dvaMuskaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dveZenskeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SuspendLayout();
			// 
			// jebiSeToolStripMenuItem
			// 
			this->jebiSeToolStripMenuItem->Name = L"jebiSeToolStripMenuItem";
			this->jebiSeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->jebiSeToolStripMenuItem->Text = L"jebi se";
			// 
			// jebiSeUDvojeToolStripMenuItem
			// 
			this->jebiSeUDvojeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sMuskimToolStripMenuItem,
					this->sZenskimToolStripMenuItem
			});
			this->jebiSeUDvojeToolStripMenuItem->Name = L"jebiSeUDvojeToolStripMenuItem";
			this->jebiSeUDvojeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->jebiSeUDvojeToolStripMenuItem->Text = L"jebi se u dvoje";
			// 
			// sMuskimToolStripMenuItem
			// 
			this->sMuskimToolStripMenuItem->Name = L"sMuskimToolStripMenuItem";
			this->sMuskimToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->sMuskimToolStripMenuItem->Text = L"s muskim";
			// 
			// sZenskimToolStripMenuItem
			// 
			this->sZenskimToolStripMenuItem->Name = L"sZenskimToolStripMenuItem";
			this->sZenskimToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->sZenskimToolStripMenuItem->Text = L"s zenskim";
			// 
			// mozeCakIUTrojeToolStripMenuItem
			// 
			this->mozeCakIUTrojeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dvaMuskaToolStripMenuItem,
					this->dveZenskeToolStripMenuItem
			});
			this->mozeCakIUTrojeToolStripMenuItem->Name = L"mozeCakIUTrojeToolStripMenuItem";
			this->mozeCakIUTrojeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mozeCakIUTrojeToolStripMenuItem->Text = L"moze cak i u troje";
			// 
			// dvaMuskaToolStripMenuItem
			// 
			this->dvaMuskaToolStripMenuItem->Name = L"dvaMuskaToolStripMenuItem";
			this->dvaMuskaToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->dvaMuskaToolStripMenuItem->Text = L"dva muska";
			// 
			// dveZenskeToolStripMenuItem
			// 
			this->dveZenskeToolStripMenuItem->Name = L"dveZenskeToolStripMenuItem";
			this->dveZenskeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->dveZenskeToolStripMenuItem->Text = L"dve zenske";
			// 
			// startUi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(603, 366);
			this->Name = L"startUi";
			this->Text = L"startUi";
			this->ResumeLayout(false);

		}
#pragma endregion



};
}
