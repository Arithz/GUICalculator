#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <complex>

namespace GUICalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}

		//functions to get the input and convert it for PART A
		double convertpartA(int arithmetic) {
			String^ number1 = atbox1->Text;
			String^ number2 = atbox2->Text;

			Double number1dbl, number2dbl;
			number1dbl = Convert::ToDouble(number1);
			number2dbl = Convert::ToDouble(number2);
			
			double result;
			if (arithmetic == 1) result = number1dbl + number2dbl;
			else if (arithmetic == 2) result = number1dbl - number2dbl;
			else if (arithmetic == 3) result = number1dbl * number2dbl;
			else if (arithmetic == 4) result = number1dbl / number2dbl;

			return result;
		}


		//functions to get the input and convert it for PART C
		double convertpartC(int power) {

			String^ number1 = ctbox1->Text;

			Double number1dbl;
			number1dbl = Convert::ToDouble(number1);
			
			return pow(number1dbl, power);
		}

		//functions to get the input and convert it for PART D
		double convertpartD(int process) {
			String^ number1 = dtbox1->Text;
			String^ number2 = dtbox2->Text;

			Double number1dbl, number2dbl;
			number1dbl = Convert::ToDouble(number1);
			number2dbl = Convert::ToDouble(number2);

			std::complex<double>complexresult(number1dbl, number2dbl);

			double result;
			if (process == 1) result = arg(complexresult);
			else if (process == 2) result = abs(complexresult);

			return result;
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ minusbutton;
	private: System::Windows::Forms::Button^ plusbutton;
	private: System::Windows::Forms::TextBox^ atbox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ atbox1;

	private: System::Windows::Forms::Button^ dividebutton;
	private: System::Windows::Forms::Button^ multiplybutton;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ ctbox1;
	private: System::Windows::Forms::Button^ power5;
	private: System::Windows::Forms::Button^ power3;
	private: System::Windows::Forms::Button^ power2;
	private: System::Windows::Forms::Label^ cResultLabel;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ dtbox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ dtbox2;
	private: System::Windows::Forms::Label^ dResultLabel;

	private: System::Windows::Forms::Button^ calcarg;
	private: System::Windows::Forms::Button^ calcconj;


	private: System::Windows::Forms::Button^ calcmag;
private: System::Windows::Forms::Button^ graphbutton;
private: System::Windows::Forms::Label^ label6;





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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dividebutton = (gcnew System::Windows::Forms::Button());
			this->multiplybutton = (gcnew System::Windows::Forms::Button());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->minusbutton = (gcnew System::Windows::Forms::Button());
			this->plusbutton = (gcnew System::Windows::Forms::Button());
			this->atbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->atbox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->graphbutton = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->power5 = (gcnew System::Windows::Forms::Button());
			this->power3 = (gcnew System::Windows::Forms::Button());
			this->power2 = (gcnew System::Windows::Forms::Button());
			this->cResultLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ctbox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->calcarg = (gcnew System::Windows::Forms::Button());
			this->calcconj = (gcnew System::Windows::Forms::Button());
			this->calcmag = (gcnew System::Windows::Forms::Button());
			this->dResultLabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtbox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(281, 258);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dividebutton);
			this->tabPage1->Controls->Add(this->multiplybutton);
			this->tabPage1->Controls->Add(this->ResultLabel);
			this->tabPage1->Controls->Add(this->minusbutton);
			this->tabPage1->Controls->Add(this->plusbutton);
			this->tabPage1->Controls->Add(this->atbox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->atbox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(273, 232);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Part A";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dividebutton
			// 
			this->dividebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dividebutton->Location = System::Drawing::Point(147, 182);
			this->dividebutton->Name = L"dividebutton";
			this->dividebutton->Size = System::Drawing::Size(105, 29);
			this->dividebutton->TabIndex = 8;
			this->dividebutton->Text = L"÷";
			this->dividebutton->UseVisualStyleBackColor = true;
			this->dividebutton->Click += gcnew System::EventHandler(this, &CalculatorForm::dividebutton_Click);
			// 
			// multiplybutton
			// 
			this->multiplybutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplybutton->Location = System::Drawing::Point(147, 147);
			this->multiplybutton->Name = L"multiplybutton";
			this->multiplybutton->Size = System::Drawing::Size(105, 29);
			this->multiplybutton->TabIndex = 7;
			this->multiplybutton->Text = L"×";
			this->multiplybutton->UseVisualStyleBackColor = true;
			this->multiplybutton->Click += gcnew System::EventHandler(this, &CalculatorForm::multiplybutton_Click);
			// 
			// ResultLabel
			// 
			this->ResultLabel->AutoSize = true;
			this->ResultLabel->Location = System::Drawing::Point(22, 118);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(40, 13);
			this->ResultLabel->TabIndex = 6;
			this->ResultLabel->Text = L"Result:";
			// 
			// minusbutton
			// 
			this->minusbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusbutton->Location = System::Drawing::Point(22, 182);
			this->minusbutton->Name = L"minusbutton";
			this->minusbutton->Size = System::Drawing::Size(119, 29);
			this->minusbutton->TabIndex = 5;
			this->minusbutton->Text = L"-";
			this->minusbutton->UseVisualStyleBackColor = true;
			this->minusbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::minusbutton_Click);
			// 
			// plusbutton
			// 
			this->plusbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbutton->Location = System::Drawing::Point(22, 147);
			this->plusbutton->Name = L"plusbutton";
			this->plusbutton->Size = System::Drawing::Size(119, 29);
			this->plusbutton->TabIndex = 4;
			this->plusbutton->Text = L"+";
			this->plusbutton->UseVisualStyleBackColor = true;
			this->plusbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::plusbutton_Click);
			// 
			// atbox2
			// 
			this->atbox2->Location = System::Drawing::Point(22, 82);
			this->atbox2->Name = L"atbox2";
			this->atbox2->Size = System::Drawing::Size(230, 20);
			this->atbox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Number 2:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Number 1:";
			// 
			// atbox1
			// 
			this->atbox1->Location = System::Drawing::Point(22, 28);
			this->atbox1->Name = L"atbox1";
			this->atbox1->Size = System::Drawing::Size(230, 20);
			this->atbox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->graphbutton);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(273, 232);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Part B";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(63, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Value X in degrees: 720";
			// 
			// graphbutton
			// 
			this->graphbutton->Location = System::Drawing::Point(43, 64);
			this->graphbutton->Name = L"graphbutton";
			this->graphbutton->Size = System::Drawing::Size(161, 92);
			this->graphbutton->TabIndex = 0;
			this->graphbutton->Text = L"Tabulate Data";
			this->graphbutton->UseVisualStyleBackColor = true;
			this->graphbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::graphbutton_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->power5);
			this->tabPage3->Controls->Add(this->power3);
			this->tabPage3->Controls->Add(this->power2);
			this->tabPage3->Controls->Add(this->cResultLabel);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->ctbox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(273, 232);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Part C";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// power5
			// 
			this->power5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power5->Location = System::Drawing::Point(185, 155);
			this->power5->Name = L"power5";
			this->power5->Size = System::Drawing::Size(67, 41);
			this->power5->TabIndex = 11;
			this->power5->Text = L"a ^ 5";
			this->power5->UseVisualStyleBackColor = true;
			this->power5->Click += gcnew System::EventHandler(this, &CalculatorForm::power5_Click);
			// 
			// power3
			// 
			this->power3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power3->Location = System::Drawing::Point(104, 155);
			this->power3->Name = L"power3";
			this->power3->Size = System::Drawing::Size(67, 41);
			this->power3->TabIndex = 10;
			this->power3->Text = L"a ^ 3";
			this->power3->UseVisualStyleBackColor = true;
			this->power3->Click += gcnew System::EventHandler(this, &CalculatorForm::power3_Click);
			// 
			// power2
			// 
			this->power2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power2->Location = System::Drawing::Point(22, 155);
			this->power2->Name = L"power2";
			this->power2->Size = System::Drawing::Size(67, 41);
			this->power2->TabIndex = 9;
			this->power2->Text = L"a ^ 2";
			this->power2->UseVisualStyleBackColor = true;
			this->power2->Click += gcnew System::EventHandler(this, &CalculatorForm::power2_Click);
			// 
			// cResultLabel
			// 
			this->cResultLabel->AutoSize = true;
			this->cResultLabel->Location = System::Drawing::Point(22, 67);
			this->cResultLabel->Name = L"cResultLabel";
			this->cResultLabel->Size = System::Drawing::Size(40, 13);
			this->cResultLabel->TabIndex = 8;
			this->cResultLabel->Text = L"Result:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Number 1:";
			// 
			// ctbox1
			// 
			this->ctbox1->Location = System::Drawing::Point(22, 28);
			this->ctbox1->Name = L"ctbox1";
			this->ctbox1->Size = System::Drawing::Size(230, 20);
			this->ctbox1->TabIndex = 4;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->calcarg);
			this->tabPage4->Controls->Add(this->calcconj);
			this->tabPage4->Controls->Add(this->calcmag);
			this->tabPage4->Controls->Add(this->dResultLabel);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->dtbox2);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->dtbox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(273, 232);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Part D";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// calcarg
			// 
			this->calcarg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcarg->Location = System::Drawing::Point(22, 135);
			this->calcarg->Name = L"calcarg";
			this->calcarg->Size = System::Drawing::Size(230, 27);
			this->calcarg->TabIndex = 12;
			this->calcarg->Text = L"Calculate Argument";
			this->calcarg->UseVisualStyleBackColor = true;
			this->calcarg->Click += gcnew System::EventHandler(this, &CalculatorForm::calcarg_Click);
			// 
			// calcconj
			// 
			this->calcconj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcconj->Location = System::Drawing::Point(22, 196);
			this->calcconj->Name = L"calcconj";
			this->calcconj->Size = System::Drawing::Size(230, 27);
			this->calcconj->TabIndex = 11;
			this->calcconj->Text = L"Calculate Conjugate";
			this->calcconj->UseVisualStyleBackColor = true;
			this->calcconj->Click += gcnew System::EventHandler(this, &CalculatorForm::calcconj_Click);
			// 
			// calcmag
			// 
			this->calcmag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcmag->Location = System::Drawing::Point(22, 166);
			this->calcmag->Name = L"calcmag";
			this->calcmag->Size = System::Drawing::Size(230, 27);
			this->calcmag->TabIndex = 10;
			this->calcmag->Text = L"Calculate Magnitude";
			this->calcmag->UseVisualStyleBackColor = true;
			this->calcmag->Click += gcnew System::EventHandler(this, &CalculatorForm::calcmag_Click);
			// 
			// dResultLabel
			// 
			this->dResultLabel->AutoSize = true;
			this->dResultLabel->Location = System::Drawing::Point(22, 108);
			this->dResultLabel->Name = L"dResultLabel";
			this->dResultLabel->Size = System::Drawing::Size(40, 13);
			this->dResultLabel->TabIndex = 9;
			this->dResultLabel->Text = L"Result:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 61);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Number 2:";
			// 
			// dtbox2
			// 
			this->dtbox2->Location = System::Drawing::Point(22, 77);
			this->dtbox2->Name = L"dtbox2";
			this->dtbox2->Size = System::Drawing::Size(230, 20);
			this->dtbox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Number 1:";
			// 
			// dtbox1
			// 
			this->dtbox1->Location = System::Drawing::Point(22, 28);
			this->dtbox1->Name = L"dtbox1";
			this->dtbox1->Size = System::Drawing::Size(230, 20);
			this->dtbox1->TabIndex = 5;
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->tabControl1);
			this->Name = L"CalculatorForm";
			this->Text = L"Calculator";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
// FUNCTIONALITIES FOR PART A


//function for plus button 
private: System::Void plusbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1, number2;
	if (double::TryParse(atbox1->Text, number1) && double::TryParse(atbox2->Text, number2))
	{
		Double ResultDbl = convertpartA(1);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		ResultLabel->Text = "Result: " + "Please give a valid value";
	}
}


//function for minus button 
private: System::Void minusbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1, number2;
	if (double::TryParse(atbox1->Text, number1) && double::TryParse(atbox2->Text, number2))
	{
		Double ResultDbl = convertpartA(2);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		ResultLabel->Text = "Result: " + "Please give a valid value";
	}
}


//function for multiply button 
private: System::Void multiplybutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1, number2;
	if (double::TryParse(atbox1->Text, number1) && double::TryParse(atbox2->Text, number2))
	{
		Double ResultDbl = convertpartA(3);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		ResultLabel->Text = "Result: " + "Please give a valid value";
	}
}

//function for divide button 
private: System::Void dividebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1, number2;
	if (double::TryParse(atbox1->Text, number1) && double::TryParse(atbox2->Text, number2))
	{
		Double ResultDbl = convertpartA(4);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		ResultLabel->Text = "Result: " + "Please give a valid value";
	}
}

// FUNCTIONALITIES FOR PART B
private: System::Void graphbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* plotfile = fopen("PlotFile.txt", "w");

	double xRad, y;

	for (double x = -720; x <= 720; x += 0.1)
	{
		xRad = (x / 180) * Math::PI;
		y = Math::Sin(xRad)/xRad;

		fprintf(plotfile, " %f %f\n", x, y);

	}
	fclose(plotfile);

}

// FUNCTIONALITIES FOR PART C
private: System::Void power2_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(2);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		cResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		cResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
private: System::Void power3_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(3);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		cResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		cResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
private: System::Void power5_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(5);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		cResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		cResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
private: System::Void calcarg_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1,number2;
	if (double::TryParse(dtbox1->Text, number1) && double::TryParse(dtbox2->Text, number2))
	{
		Double ResultDbl = convertpartD(1);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		dResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		dResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
private: System::Void calcmag_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1, number2;
	if (double::TryParse(dtbox1->Text, number1) && double::TryParse(dtbox2->Text, number2))
	{
		Double ResultDbl = convertpartD(2);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		dResultLabel->Text = "Result: " + ResultStr;
	}
	else
	{
		dResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
private: System::Void calcconj_Click(System::Object^ sender, System::EventArgs^ e) {
	std::cout << "test conjugate";
}
};
}
