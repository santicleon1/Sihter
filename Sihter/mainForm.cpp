#include "mainForm.h"

using namespace Sihtor;

[STAThreadAttribute] // This attribute is required for Windows Forms to work properly
int main(array<System::String^>^ args)
{
    // Enable visual styles for modern UI appearance
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Run your form
    Application::Run(gcnew mainForm());
    return 0;
}
