#include "game.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	formsgame::game form;
	Application::Run(% form);
}