#pragma once
#include <msclr/marshal_cppstd.h>
#include "BinaryFile.h"

namespace LAB7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		std::string GetText() {
			return msclr::interop::marshal_as<std::string>(TXTNumbers->Text);
		}

		void SetDisplay(int num) {
			Display->Text = System::Convert::ToString(num);
		}

		void SetDisplay(String^ str) {
			Display->Text = str;
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ CloseButton;
	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ WriteIn;
	private: System::Windows::Forms::TextBox^ TXTNumbers;
	public: System::Windows::Forms::Label^ Display;
	public: System::Windows::Forms::Label^ NEwFile;
	public:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ Multiplyer;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::TextBox^ Min_Num;
	public: System::Windows::Forms::TextBox^ Max_Num;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->WriteIn = (gcnew System::Windows::Forms::Button());
			this->TXTNumbers = (gcnew System::Windows::Forms::TextBox());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->NEwFile = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Multiplyer = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Min_Num = (gcnew System::Windows::Forms::TextBox());
			this->Max_Num = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CloseButton
			// 
			this->CloseButton->Location = System::Drawing::Point(583, 1);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(55, 36);
			this->CloseButton->TabIndex = 0;
			this->CloseButton->Text = L"X\r\n";
			this->CloseButton->UseVisualStyleBackColor = true;
			this->CloseButton->Click += gcnew System::EventHandler(this, &MyForm::CloseButton_Click);
			// 
			// WriteIn
			// 
			this->WriteIn->Location = System::Drawing::Point(288, 150);
			this->WriteIn->Name = L"WriteIn";
			this->WriteIn->Size = System::Drawing::Size(111, 35);
			this->WriteIn->TabIndex = 1;
			this->WriteIn->Text = L"Write";
			this->WriteIn->UseVisualStyleBackColor = true;
			this->WriteIn->Click += gcnew System::EventHandler(this, &MyForm::WriteIn_Click_1);
			// 
			// TXTNumbers
			// 
			this->TXTNumbers->Location = System::Drawing::Point(85, 107);
			this->TXTNumbers->Name = L"TXTNumbers";
			this->TXTNumbers->Size = System::Drawing::Size(357, 20);
			this->TXTNumbers->TabIndex = 2;
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Display->Location = System::Drawing::Point(31, 317);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(207, 112);
			this->Display->TabIndex = 3;
			// 
			// NEwFile
			// 
			this->NEwFile->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->NEwFile->Location = System::Drawing::Point(390, 317);
			this->NEwFile->Name = L"NEwFile";
			this->NEwFile->Size = System::Drawing::Size(207, 112);
			this->NEwFile->TabIndex = 4;
			this->NEwFile->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"First File";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(475, 282);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"New File";
			// 
			// Multiplyer
			// 
			this->Multiplyer->Location = System::Drawing::Point(472, 107);
			this->Multiplyer->Name = L"Multiplyer";
			this->Multiplyer->Size = System::Drawing::Size(51, 20);
			this->Multiplyer->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(448, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"*";
			// 
			// Min_Num
			// 
			this->Min_Num->Location = System::Drawing::Point(529, 165);
			this->Min_Num->Name = L"Min_Num";
			this->Min_Num->Size = System::Drawing::Size(100, 20);
			this->Min_Num->TabIndex = 9;
			// 
			// Max_Num
			// 
			this->Max_Num->Location = System::Drawing::Point(529, 207);
			this->Max_Num->Name = L"Max_Num";
			this->Max_Num->Size = System::Drawing::Size(100, 20);
			this->Max_Num->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(475, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Min";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(475, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Max";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(641, 502);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Max_Num);
			this->Controls->Add(this->Min_Num);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Multiplyer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NEwFile);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->TXTNumbers);
			this->Controls->Add(this->WriteIn);
			this->Controls->Add(this->CloseButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void WriteIn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream Filewrire("FIlek.dat");
		Filewrire.close();

	}

	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->Close();
//	}
	private: System::Void WriteIn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		std::string  filePath = "C:\\Users\\Fedir\\Desktop\\Education\\Filek.dat";
		//string filePath
		//std::ofstream fileWriter(msclr::interop::marshal_as<std::string>(filePath));
		Binary_File FirstFile(filePath);

		//String^ Text = TXTNumbers->Text;
		std::string STRText = msclr::interop::marshal_as<std::string>(TXTNumbers->Text);
		FirstFile.Fill_File(STRText, this);

		std::string NEwfilePath = "C:\\Users\\Fedir\\Desktop\\Education\\NewFilek.dat";

		Binary_File NewFile(NEwfilePath);
		int multiplyer = System::Convert::ToInt32(Multiplyer->Text);
		double min = System::Convert::ToDouble(Min_Num->Text);
		double  max = System::Convert::ToDouble(Max_Num->Text);
		NewFile.NewFile(filePath, multiplyer, this, min, max);


	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}




