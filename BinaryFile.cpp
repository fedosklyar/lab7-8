#pragma once
#include "BinaryFile.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


//Такс, може бути конфлікт інклудів



Binary_File::Binary_File() {
    name = "FILE.dat";
    std::ofstream newfile(name, std::ios::binary);
}


Binary_File::Binary_File(std::string str) {
    name = str;
    std::ofstream newfile(name, std::ios::binary);
}


void Binary_File::Fill_File(std::string Content, LAB7::MyForm^ form) {
    int num;
    std::ofstream tempfile("C:\\Users\\Fedir\\Desktop\\Education\\Temp.dat", std::ios::binary);
    tempfile << Content;
    tempfile.close();

    std::ifstream tempfileRead("C:\\Users\\Fedir\\Desktop\\Education\\Temp.dat", std::ios::binary);
    std::ofstream FileWrite(this->name, std::ios::binary);


    //Можливо, робити видалення файлу
    while (!tempfileRead.eof()) {
        tempfileRead >> num;
        form->Display->Text = System::Convert::ToString(num);
        if (tempfileRead.fail()) {
            //std::remove("Temp.dat".c_str());
            System::IO::File::Delete("C:\\Users\\Fedir\\Desktop\\Education\\Temp.dat");
            form->Display->Text = "Error Value";
            break;
        }
        if (num >= 0) {
            form->Display->Text = "Only negative";
            System::IO::File::Delete("C:\\Users\\Fedir\\Desktop\\Education\\Temp.dat");
            break;
        }
        FileWrite << num;
    }

    tempfileRead.close();
    FileWrite.close();

    std::ifstream FileRead(this->name, std::ios::binary);
    std::string Cont;
    std::getline(FileRead, Cont);
    form->Display->Text = msclr::interop::marshal_as<System::String^>(Cont);
    FileRead.close();

}

void Binary_File::NewFile(std::string name_of_read, int multiplyer, LAB7::MyForm^ form, double min, double max) {
    try {
        int num;
        int quan = 0;
        if (min < INT_MIN) throw MyException("The value is less than INT_MIN");


        std::ofstream filewr(this->name, std::ios::binary);
        std::ifstream FIler(name_of_read, std::ios::binary);
        while (!FIler.eof()) {
            FIler >> num;
            if (num > min && num < max) {
                //filewr << num * multiplyer << "  ";
                ++quan;
            }
              if (quan == 0) throw MyException("There is no numbers in this interval");
        }
        FIler.seekg(0);
        while (!FIler.eof()) {
            FIler >> num;
            if (num > min && num < max)
                filewr << num * multiplyer << "  ";
        }
        FIler.close(); filewr.close();

        std::ifstream NewFileRead(this->name, std::ios::binary);
        std::string Content;
        std::getline(NewFileRead, Content);
        form->NEwFile->Text = msclr::interop::marshal_as<System::String^>(Content);


    }
    catch (const MyException& e) {
        System::String^ errorMessage = gcnew System::String(e.what());
        MessageBox::Show(errorMessage, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }

}