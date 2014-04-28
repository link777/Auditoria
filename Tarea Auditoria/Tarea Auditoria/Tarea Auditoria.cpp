// Tarea Auditoria.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include "Main.h"

using namespace TareaAuditoria;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Habilitar los efectos visuales de Windows XP antes de crear ningún control
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Crear la ventana principal y ejecutarla
	Application::Run(gcnew Main());
	return 0;
}
