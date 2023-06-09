#pragma once
#include "MyForm.h"
//#include "Error.h"
//#include "BinaryFile.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array <String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LAB7::MyForm form;
	Application::Run(% form);

	//std::string filePath = msclr::interop::marshal_as < std::string>("C:\\Users\\Fedir\\Desktop\\Education\\Filek.dat");
	//Binary_File FirstFile(filePath);

	//FirstFile.Fill_File(form.GetText());

	//std::string NewPath = msclr::interop::marshal_as < std::string>("C:\\Users\\Fedir\\Desktop\\Education\\NewFilek.dat");
	//Binary_File NewFile(NewPath);
	//NewFile.NewFile(filePath, 3);

	



	return 0;
}


