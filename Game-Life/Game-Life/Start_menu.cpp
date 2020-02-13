#include "Start_menu.h"
#include "Blocks.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GameLife::Start_menu form;
	Application::Run(%form);
}