#include "mainForm.h"
#include "Spire.Xls.o.h"
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace Sihter;
using namespace Spire::Xls;
using namespace System;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

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
    // paths
    std::wstring outputFile = L"output/Sihterica.xlsx";
    std::wstring inputFile = L"input/SihtericaIN.xlsx";
    // pathsEnd

    // workbook def
    intrusive_ptr<Workbook> Sihterica_book = new Workbook();
    Sihterica_book->LoadFromFile(inputFile.c_str());
    intrusive_ptr<Worksheet> Sihterica_sheet = dynamic_pointer_cast<Worksheet>(Sihterica_book->GetWorksheets()->Get(0));
    // workbookEnd

    // changes to sheet
    Sihterica_sheet->GetRange(L"R1")->SetValue((ConvertString(L"Org. jedinica: ", orgName->Text)));
    Sihterica_sheet->GetRange(L"A3")->SetValue((ConvertString(L"U mjesecu: ", monthSelector->Text)));
    Sihterica_sheet->GetRange(L"D3")->SetValue((ConvertString(L"Godine: ", year->Text)));
    Sihterica_sheet->GetRange(L"M3")->SetValue((ConvertString(L"Radnik/ca: ", radnikName->Text)));

    int i;

    for (i = 0;i < 31;i++)
    {
        Sihterica_sheet->GetRange(6, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeStart1->Value));
        Sihterica_sheet->GetRange(7, (i + 5))->SetNumberValue(Convert::ToDouble(workTimeEnd1->Value));
    }
    // changesEnd

    // save
    Sihterica_book->SaveToFile(outputFile.c_str(), ExcelVersion::Version2016);
    Sihterica_book->Dispose();
    MessageBox::Show("Šihterica uspiješno kreirana.", "Šihter - Izrada", MessageBoxButtons::OK);
    // saveEnd
}