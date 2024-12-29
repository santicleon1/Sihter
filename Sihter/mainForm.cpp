#include "mainForm.h"
#include "Spire.Xls.o.h"
#include <msclr/marshal_cppstd.h>
#include <string>

using namespace Sihter;
using namespace Spire::Xls;

[STAThread]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Application::Run(gcnew mainForm());
    return 0;
}

LPCWSTR ConvertString(System::String^ String)
{
    std::wstring nativeWString = msclr::interop::marshal_as<std::wstring>(String);

    return nativeWString.c_str();
}

void Sihter::mainForm::getUserInput()
{
    // paths
    std::wstring outputFile = L"output/Sihterica.xlsx";
    std::wstring inputFile = L"input/SihtericaIN.xlsx";
    // pathsEnd

    intrusive_ptr<Workbook> Sihterica_book = new Workbook();
    Sihterica_book->LoadFromFile(inputFile.c_str());

    intrusive_ptr<Worksheet> Sihterica_sheet = dynamic_pointer_cast<Worksheet>(Sihterica_book->GetWorksheets()->Get(0));
    // changes to sheet
    Sihterica_sheet->GetRange(6, 5)->SetNumberValue(System::Convert::ToDouble(workTimeStart1->Value));
    // changesEnd

    Sihterica_book->SaveToFile(outputFile.c_str(), ExcelVersion::Version2016);
    Sihterica_book->Dispose();

    MessageBox::Show("Šihterica uspiješno napravljena.", "Šihter - Izrada", MessageBoxButtons::OK);
}