#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<cstdio>
#include "Error.h"


namespace LAB7 {
    ref class MyForm;
}


//class Errors {
//public:
 //   void Message();
//};


class Binary_File {
    std::string name;

public:
    Binary_File();
    Binary_File(std::string str);
    void Fill_File(std::string Content, LAB7::MyForm^ form);
    void NewFile(std::string name_of_read, int multiplyer, LAB7::MyForm^ form, double min, double max);
};



