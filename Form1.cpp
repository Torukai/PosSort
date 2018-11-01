#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Sort::SortForm form;

	Application::Run(%form);
}