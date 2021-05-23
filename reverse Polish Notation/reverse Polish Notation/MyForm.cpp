#include "MyForm.h"
#include "Source.cpp"
#include <cstring>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

   reversePolishNotation::MyForm form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
}
