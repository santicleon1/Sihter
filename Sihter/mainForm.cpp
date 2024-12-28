#include "mainForm.h"
#include "Spire.Xls.o.h"

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

void Sihter::mainForm::getUserInput()
{
    std::wstring outputFile = L"output/Sihterica.xlsx";

    intrusive_ptr<Workbook> Sihterica_book = new Workbook();

    intrusive_ptr<Worksheet> Sihterica_sheet = dynamic_pointer_cast<Worksheet>(Sihterica_book->GetWorksheets()->Get(0));

    Sihterica_sheet->GetRange(1, 1)->SetText(L"Banane su zakon");

    Sihterica_book->SaveToFile(outputFile.c_str(), ExcelVersion::Version2016);
    Sihterica_book->Dispose();

    MessageBox::Show("Šihterica uspiješno napravljena.", "Šihter - Izrada", MessageBoxButtons::OK);
}
