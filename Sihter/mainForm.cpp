#include "mainForm.h"
#include "Spire.Xls.o.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include <windows.h>
#include <io.h>
#include <fcntl.h>

using namespace Sihter;
using namespace Spire::Xls;
using namespace System;

void SetUTF8Environment()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
}

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    SetUTF8Environment();

    Application::Run(gcnew mainForm());
    return 0;
}

std::wstring globalWString;

LPCWSTR ConvertString(LPCWSTR_S loreStr,System::String^ input)
{
    if (String::IsNullOrEmpty(input))
        return L"";

    globalWString = loreStr + msclr::interop::marshal_as<std::wstring>(input);

    return globalWString.c_str();
}

void Sihter::mainForm::getUserInput()
{
    progressBar->Value = 0;
    
    // paths
    std::wstring outputFile = L"output/Sihterica.xlsx";
    std::wstring inputFile = L"input/SihtericaIN.xlsx";
    // pathsEnd

    progressBar->Value = 20;

    // workbook def
    intrusive_ptr<Workbook> Sihterica_book = new Workbook();
    Sihterica_book->LoadFromFile(inputFile.c_str());
    intrusive_ptr<Worksheet> Sihterica_sheet = dynamic_pointer_cast<Worksheet>(Sihterica_book->GetWorksheets()->Get(0));
    // workbookEnd

    progressBar->Value = 40;

    // changes to sheet
    Sihterica_sheet->GetRange(L"R1")->SetValue((ConvertString(L"Org. jedinica: ", orgName->Text)));
    Sihterica_sheet->GetRange(L"A3")->SetValue((ConvertString(L"U mjesecu: ", monthSelector->Text)));
    Sihterica_sheet->GetRange(L"D3")->SetValue((ConvertString(L"Godine: ", year->Text)));
    Sihterica_sheet->GetRange(L"M3")->SetValue((ConvertString(L"Radnik/ca: ", radnikName->Text)));

    progressBar->Value = 50;

    int i;
    array<System::Windows::Forms::ComboBox^>^ smjenaBoxes = { smjenaBox1, smjenaBox2, smjenaBox3, smjenaBox4, smjenaBox5, smjenaBox6, smjenaBox7, smjenaBox8, smjenaBox9, smjenaBox10, smjenaBox11, smjenaBox12, smjenaBox13, smjenaBox14, smjenaBox15, smjenaBox16, smjenaBox17, smjenaBox18, smjenaBox19, smjenaBox20, smjenaBox21, smjenaBox22, smjenaBox23, smjenaBox24, smjenaBox25, smjenaBox26, smjenaBox27, smjenaBox28, smjenaBox29, smjenaBox30, smjenaBox31 };

    for (i = 0;i < 31;i++)
    {
        if (smjenaBoxes[i]->Text == L"Prva")
        {
            Sihterica_sheet->GetRange(6, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeStart1->Value));
            Sihterica_sheet->GetRange(7, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeEnd1->Value));
        }

        else if (smjenaBoxes[i]->Text == L"Druga")
        {
            Sihterica_sheet->GetRange(6, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeStart2->Value));
            Sihterica_sheet->GetRange(7, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeEnd2->Value));
        }
        
        else if (smjenaBoxes[i]->Text == L"Treća")
        {
            Sihterica_sheet->GetRange(6, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeStart3->Value));
            Sihterica_sheet->GetRange(7, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeEnd3->Value));
        }
    }

    progressBar->Value = 95;
    // changesEnd

    // save
    Sihterica_book->SaveToFile(outputFile.c_str(), ExcelVersion::Version2016);
    Sihterica_book->Dispose();

    progressBar->Value = 100;

    MessageBox::Show("Šihterica uspiješno kreirana.\nŠihterica je spremljena u ./output/ mapu.", "Šihter - Izrada", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
    // saveEnd
}