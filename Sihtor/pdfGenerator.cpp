#include "mainForm.h"
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::IO;
using namespace iText::Kernel::Pdf;
using namespace iText::Layout;
using namespace iText::Layout::Element;

void GeneratePDF(String^ filename, String^ content)
{
    try
    {
        // Create a PdfWriter to write to the file
        PdfWriter^ writer = gcnew PdfWriter(filename);

        // Create a PdfDocument
        PdfDocument^ pdf = gcnew PdfDocument(writer);

        // Create a Document for layout
        Document^ document = gcnew Document(pdf);

        // Add a paragraph with the provided content
        document->Add(gcnew Paragraph(content));

        // Close the document
        document->Close();

        Console::WriteLine("PDF generated successfully: " + filename);
    }
    catch (Exception^ ex)
    {
        Console::WriteLine("Error generating PDF: " + ex->Message);
    }
}

int main()
{
    // Example usage
    String^ filename = "example.pdf";
    String^ content = "This is a test PDF generated using iText 7 in C++/CLI.";
    GeneratePDF(filename, content);

    return 0;
}
