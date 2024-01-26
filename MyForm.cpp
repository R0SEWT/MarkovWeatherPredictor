#include "MyForm.h"


using namespace System;
using namespace CadenasdeMarkov;

int main() {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}