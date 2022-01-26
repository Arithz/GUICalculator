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


	protected:
		int arstate;
		double nextnumber;
	private: System::Windows::Forms::Label^ prevlabel;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ dividebutton;
	private: System::Windows::Forms::Button^ multiplybutton;
	private: System::Windows::Forms::Button^ minusbutton;
	private: System::Windows::Forms::Button^ plusbutton;
	private: System::Windows::Forms::Button^ btnerase;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;





	protected:
		double prevnumber;
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
		   int tabstate = 1;
	private: System::Windows::Forms::TextBox^ btbox1;


	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;

		   //variables for part D tbox
		   int dtboxstate = 1;

		//functions to get the input and convert it for PART A
		void setarstate(int ar) { arstate = ar; }
		void setPrevNumber(double prev) { prevnumber = prev; }
		void setNextNumber(double next) { nextnumber = next; }
		void setTabState(int state) { tabstate = state; }
		void setDTboxState(int state) { dtboxstate = state;  }
		double getPrevNumber() { return prevnumber; }
		double getNextNumber() { return nextnumber; }
		int getTabState() { return tabstate; }
		int getDTBoxState() { return dtboxstate; }

		double calcNumber() {
			setNextNumber(Convert::ToDouble(resultbox->Text));
			prevlabel->Text =  "";

			if (arstate == 1) { return prevnumber + nextnumber; }
			if (arstate == 2) { return prevnumber - nextnumber; }
			if (arstate == 3) { return prevnumber * nextnumber; }
			if (arstate == 4) { return prevnumber / nextnumber; }
			
			return 0;
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
	private: System::Windows::Forms::Label^ ResultLabel;


	private: System::Windows::Forms::TextBox^ atbox2;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ atbox1;



	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;



	private: System::Windows::Forms::TextBox^ ctbox1;
	private: System::Windows::Forms::Button^ power5;
	private: System::Windows::Forms::Button^ power3;
	private: System::Windows::Forms::Button^ power2;
private: System::Windows::Forms::Label^ label;

	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::TextBox^ dtbox1;

	private: System::Windows::Forms::TextBox^ dtbox2;
	private: System::Windows::Forms::Label^ dResultLabel;

	private: System::Windows::Forms::Button^ calcarg;
	private: System::Windows::Forms::Button^ calcconj;


	private: System::Windows::Forms::Button^ calcmag;
private: System::Windows::Forms::Button^ graphbutton;
private: System::Windows::Forms::Label^ label6;

private: System::Windows::Forms::TextBox^ resultbox;

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
			this->btnerase = (gcnew System::Windows::Forms::Button());
			this->prevlabel = (gcnew System::Windows::Forms::Label());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->resultbox = (gcnew System::Windows::Forms::TextBox());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->dividebutton = (gcnew System::Windows::Forms::Button());
			this->multiplybutton = (gcnew System::Windows::Forms::Button());
			this->minusbutton = (gcnew System::Windows::Forms::Button());
			this->plusbutton = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btbox1 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->graphbutton = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->power5 = (gcnew System::Windows::Forms::Button());
			this->power3 = (gcnew System::Windows::Forms::Button());
			this->power2 = (gcnew System::Windows::Forms::Button());
			this->label = (gcnew System::Windows::Forms::Label());
			this->ctbox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->calcarg = (gcnew System::Windows::Forms::Button());
			this->calcconj = (gcnew System::Windows::Forms::Button());
			this->calcmag = (gcnew System::Windows::Forms::Button());
			this->dResultLabel = (gcnew System::Windows::Forms::Label());
			this->dtbox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->tabControl1->Location = System::Drawing::Point(-1, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(317, 366);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage1->Controls->Add(this->btnerase);
			this->tabPage1->Controls->Add(this->prevlabel);
			this->tabPage1->Controls->Add(this->btnequal);
			this->tabPage1->Controls->Add(this->btn9);
			this->tabPage1->Controls->Add(this->btn8);
			this->tabPage1->Controls->Add(this->btn7);
			this->tabPage1->Controls->Add(this->btn6);
			this->tabPage1->Controls->Add(this->btn5);
			this->tabPage1->Controls->Add(this->btn4);
			this->tabPage1->Controls->Add(this->btn3);
			this->tabPage1->Controls->Add(this->btn2);
			this->tabPage1->Controls->Add(this->btn1);
			this->tabPage1->Controls->Add(this->resultbox);
			this->tabPage1->Controls->Add(this->btn0);
			this->tabPage1->Controls->Add(this->dividebutton);
			this->tabPage1->Controls->Add(this->multiplybutton);
			this->tabPage1->Controls->Add(this->minusbutton);
			this->tabPage1->Controls->Add(this->plusbutton);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(309, 340);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Part A";
			this->tabPage1->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::setState);
			// 
			// btnerase
			// 
			this->btnerase->BackColor = System::Drawing::Color::LightSteelBlue;
			this->btnerase->FlatAppearance->BorderSize = 0;
			this->btnerase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnerase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnerase->Location = System::Drawing::Point(9, 275);
			this->btnerase->Name = L"btnerase";
			this->btnerase->Size = System::Drawing::Size(72, 56);
			this->btnerase->TabIndex = 25;
			this->btnerase->Text = L"C";
			this->btnerase->UseVisualStyleBackColor = false;
			this->btnerase->Click += gcnew System::EventHandler(this, &CalculatorForm::btnerase_Click);
			// 
			// prevlabel
			// 
			this->prevlabel->AutoSize = true;
			this->prevlabel->Location = System::Drawing::Point(9, 18);
			this->prevlabel->Name = L"prevlabel";
			this->prevlabel->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->prevlabel->Size = System::Drawing::Size(29, 13);
			this->prevlabel->TabIndex = 24;
			this->prevlabel->Text = L"Prev";
			this->prevlabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::Color::Teal;
			this->btnequal->FlatAppearance->BorderSize = 0;
			this->btnequal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->Location = System::Drawing::Point(156, 275);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(72, 56);
			this->btnequal->TabIndex = 23;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &CalculatorForm::Equal_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(156, 101);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(72, 56);
			this->btn9->TabIndex = 22;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(82, 101);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(72, 56);
			this->btn8->TabIndex = 21;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(8, 101);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(72, 56);
			this->btn7->TabIndex = 20;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(156, 159);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(72, 56);
			this->btn6->TabIndex = 19;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(82, 159);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(72, 56);
			this->btn5->TabIndex = 18;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(8, 159);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(72, 56);
			this->btn4->TabIndex = 17;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(156, 217);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(72, 56);
			this->btn3->TabIndex = 16;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(82, 217);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(72, 56);
			this->btn2->TabIndex = 15;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(8, 217);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(72, 56);
			this->btn1->TabIndex = 14;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// resultbox
			// 
			this->resultbox->BackColor = System::Drawing::Color::Silver;
			this->resultbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->resultbox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->resultbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resultbox->Location = System::Drawing::Point(9, 37);
			this->resultbox->Name = L"resultbox";
			this->resultbox->Size = System::Drawing::Size(294, 46);
			this->resultbox->TabIndex = 13;
			this->resultbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(82, 275);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(72, 56);
			this->btn0->TabIndex = 9;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// dividebutton
			// 
			this->dividebutton->BackColor = System::Drawing::Color::SlateGray;
			this->dividebutton->FlatAppearance->BorderSize = 0;
			this->dividebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->dividebutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dividebutton->Location = System::Drawing::Point(230, 275);
			this->dividebutton->Name = L"dividebutton";
			this->dividebutton->Size = System::Drawing::Size(72, 56);
			this->dividebutton->TabIndex = 8;
			this->dividebutton->Text = L"÷";
			this->dividebutton->UseVisualStyleBackColor = false;
			this->dividebutton->Click += gcnew System::EventHandler(this, &CalculatorForm::Arithmetic_Click);
			this->dividebutton->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseEnter);
			this->dividebutton->MouseLeave += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseLeave);
			// 
			// multiplybutton
			// 
			this->multiplybutton->BackColor = System::Drawing::Color::SlateGray;
			this->multiplybutton->FlatAppearance->BorderSize = 0;
			this->multiplybutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->multiplybutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplybutton->Location = System::Drawing::Point(230, 217);
			this->multiplybutton->Name = L"multiplybutton";
			this->multiplybutton->Size = System::Drawing::Size(72, 56);
			this->multiplybutton->TabIndex = 7;
			this->multiplybutton->Text = L"×";
			this->multiplybutton->UseVisualStyleBackColor = false;
			this->multiplybutton->Click += gcnew System::EventHandler(this, &CalculatorForm::Arithmetic_Click);
			this->multiplybutton->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseEnter);
			this->multiplybutton->MouseLeave += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseLeave);
			// 
			// minusbutton
			// 
			this->minusbutton->BackColor = System::Drawing::Color::SlateGray;
			this->minusbutton->FlatAppearance->BorderSize = 0;
			this->minusbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minusbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusbutton->Location = System::Drawing::Point(230, 159);
			this->minusbutton->Name = L"minusbutton";
			this->minusbutton->Size = System::Drawing::Size(72, 56);
			this->minusbutton->TabIndex = 5;
			this->minusbutton->Text = L"-";
			this->minusbutton->UseVisualStyleBackColor = false;
			this->minusbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::Arithmetic_Click);
			this->minusbutton->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseEnter);
			this->minusbutton->MouseLeave += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseLeave);
			// 
			// plusbutton
			// 
			this->plusbutton->BackColor = System::Drawing::Color::SlateGray;
			this->plusbutton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusbutton->FlatAppearance->BorderSize = 0;
			this->plusbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plusbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbutton->Location = System::Drawing::Point(230, 101);
			this->plusbutton->Name = L"plusbutton";
			this->plusbutton->Size = System::Drawing::Size(72, 56);
			this->plusbutton->TabIndex = 4;
			this->plusbutton->Text = L"+";
			this->plusbutton->UseVisualStyleBackColor = false;
			this->plusbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::Arithmetic_Click);
			this->plusbutton->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseEnter);
			this->plusbutton->MouseLeave += gcnew System::EventHandler(this, &CalculatorForm::Effect_MouseLeave);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->btbox1);
			this->tabPage2->Controls->Add(this->button23);
			this->tabPage2->Controls->Add(this->button24);
			this->tabPage2->Controls->Add(this->button25);
			this->tabPage2->Controls->Add(this->button26);
			this->tabPage2->Controls->Add(this->button27);
			this->tabPage2->Controls->Add(this->button28);
			this->tabPage2->Controls->Add(this->button29);
			this->tabPage2->Controls->Add(this->button30);
			this->tabPage2->Controls->Add(this->button31);
			this->tabPage2->Controls->Add(this->button32);
			this->tabPage2->Controls->Add(this->button33);
			this->tabPage2->Controls->Add(this->graphbutton);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(309, 340);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Part B";
			this->tabPage2->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::setState);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Value X in degrees: ";
			// 
			// btbox1
			// 
			this->btbox1->BackColor = System::Drawing::Color::Silver;
			this->btbox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->btbox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->btbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btbox1->Location = System::Drawing::Point(9, 37);
			this->btbox1->Name = L"btbox1";
			this->btbox1->Size = System::Drawing::Size(294, 46);
			this->btbox1->TabIndex = 53;
			this->btbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(8, 275);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(72, 56);
			this->button23->TabIndex = 52;
			this->button23->Text = L"C";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &CalculatorForm::btnerase_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::White;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(156, 101);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(72, 56);
			this->button24->TabIndex = 51;
			this->button24->Text = L"9";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(82, 101);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(72, 56);
			this->button25->TabIndex = 50;
			this->button25->Text = L"8";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(8, 101);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(72, 56);
			this->button26->TabIndex = 49;
			this->button26->Text = L"7";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(156, 159);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(72, 56);
			this->button27->TabIndex = 48;
			this->button27->Text = L"6";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(82, 159);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(72, 56);
			this->button28->TabIndex = 47;
			this->button28->Text = L"5";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(8, 159);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(72, 56);
			this->button29->TabIndex = 46;
			this->button29->Text = L"4";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(156, 217);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(72, 56);
			this->button30->TabIndex = 45;
			this->button30->Text = L"3";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(82, 217);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(72, 56);
			this->button31->TabIndex = 44;
			this->button31->Text = L"2";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(8, 217);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(72, 56);
			this->button32->TabIndex = 43;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(82, 275);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(146, 56);
			this->button33->TabIndex = 42;
			this->button33->Text = L"0";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// graphbutton
			// 
			this->graphbutton->BackColor = System::Drawing::Color::SlateGray;
			this->graphbutton->FlatAppearance->BorderSize = 0;
			this->graphbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->graphbutton->Location = System::Drawing::Point(230, 101);
			this->graphbutton->Name = L"graphbutton";
			this->graphbutton->Size = System::Drawing::Size(72, 233);
			this->graphbutton->TabIndex = 0;
			this->graphbutton->Text = L"Tabulate Data";
			this->graphbutton->UseVisualStyleBackColor = false;
			this->graphbutton->Click += gcnew System::EventHandler(this, &CalculatorForm::graphbutton_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->button10);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->power5);
			this->tabPage3->Controls->Add(this->power3);
			this->tabPage3->Controls->Add(this->power2);
			this->tabPage3->Controls->Add(this->label);
			this->tabPage3->Controls->Add(this->ctbox1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(309, 340);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Part C";
			this->tabPage3->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::setState);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(8, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 56);
			this->button1->TabIndex = 41;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalculatorForm::btnerase_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(156, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 56);
			this->button3->TabIndex = 39;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(82, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 56);
			this->button4->TabIndex = 38;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(8, 101);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 56);
			this->button5->TabIndex = 37;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(156, 159);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 56);
			this->button6->TabIndex = 36;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(82, 159);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 56);
			this->button7->TabIndex = 35;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(8, 159);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 56);
			this->button8->TabIndex = 34;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(156, 217);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 56);
			this->button9->TabIndex = 33;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(82, 217);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(72, 56);
			this->button10->TabIndex = 32;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(8, 217);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 56);
			this->button11->TabIndex = 31;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(82, 275);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(146, 56);
			this->button12->TabIndex = 30;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// power5
			// 
			this->power5->BackColor = System::Drawing::Color::SlateGray;
			this->power5->FlatAppearance->BorderSize = 0;
			this->power5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->power5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power5->Location = System::Drawing::Point(230, 217);
			this->power5->Name = L"power5";
			this->power5->Size = System::Drawing::Size(72, 114);
			this->power5->TabIndex = 11;
			this->power5->Text = L"a ^ 5";
			this->power5->UseVisualStyleBackColor = false;
			this->power5->Click += gcnew System::EventHandler(this, &CalculatorForm::power5_Click);
			// 
			// power3
			// 
			this->power3->BackColor = System::Drawing::Color::SlateGray;
			this->power3->FlatAppearance->BorderSize = 0;
			this->power3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->power3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power3->Location = System::Drawing::Point(230, 159);
			this->power3->Name = L"power3";
			this->power3->Size = System::Drawing::Size(72, 56);
			this->power3->TabIndex = 10;
			this->power3->Text = L"a ^ 3";
			this->power3->UseVisualStyleBackColor = false;
			this->power3->Click += gcnew System::EventHandler(this, &CalculatorForm::power3_Click);
			// 
			// power2
			// 
			this->power2->BackColor = System::Drawing::Color::SlateGray;
			this->power2->FlatAppearance->BorderSize = 0;
			this->power2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->power2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->power2->Location = System::Drawing::Point(230, 101);
			this->power2->Name = L"power2";
			this->power2->Size = System::Drawing::Size(72, 56);
			this->power2->TabIndex = 9;
			this->power2->Text = L"a ^ 2";
			this->power2->UseVisualStyleBackColor = false;
			this->power2->Click += gcnew System::EventHandler(this, &CalculatorForm::power2_Click);
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(9, 21);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(40, 13);
			this->label->TabIndex = 8;
			this->label->Text = L"Result:";
			// 
			// ctbox1
			// 
			this->ctbox1->BackColor = System::Drawing::Color::Silver;
			this->ctbox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ctbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctbox1->Location = System::Drawing::Point(8, 37);
			this->ctbox1->Name = L"ctbox1";
			this->ctbox1->Size = System::Drawing::Size(294, 46);
			this->ctbox1->TabIndex = 4;
			this->ctbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->button2);
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->button15);
			this->tabPage4->Controls->Add(this->button16);
			this->tabPage4->Controls->Add(this->button17);
			this->tabPage4->Controls->Add(this->button18);
			this->tabPage4->Controls->Add(this->button19);
			this->tabPage4->Controls->Add(this->button20);
			this->tabPage4->Controls->Add(this->button21);
			this->tabPage4->Controls->Add(this->button22);
			this->tabPage4->Controls->Add(this->calcarg);
			this->tabPage4->Controls->Add(this->calcconj);
			this->tabPage4->Controls->Add(this->calcmag);
			this->tabPage4->Controls->Add(this->dResultLabel);
			this->tabPage4->Controls->Add(this->dtbox2);
			this->tabPage4->Controls->Add(this->dtbox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(309, 340);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Part D";
			this->tabPage4->Click += gcnew System::EventHandler(this, &CalculatorForm::setState);
			this->tabPage4->MouseEnter += gcnew System::EventHandler(this, &CalculatorForm::setState);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Location = System::Drawing::Point(11, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 13);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Imaginary Part";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(11, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Real Part";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(8, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 56);
			this->button2->TabIndex = 52;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalculatorForm::btnerase_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(156, 101);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(72, 56);
			this->button13->TabIndex = 51;
			this->button13->Text = L"9";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::White;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(82, 101);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(72, 56);
			this->button14->TabIndex = 50;
			this->button14->Text = L"8";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::White;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(8, 101);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(72, 56);
			this->button15->TabIndex = 49;
			this->button15->Text = L"7";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(156, 159);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(72, 56);
			this->button16->TabIndex = 48;
			this->button16->Text = L"6";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(82, 159);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(72, 56);
			this->button17->TabIndex = 47;
			this->button17->Text = L"5";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::White;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(8, 159);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(72, 56);
			this->button18->TabIndex = 46;
			this->button18->Text = L"4";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::White;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(156, 217);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(72, 56);
			this->button19->TabIndex = 45;
			this->button19->Text = L"3";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(82, 217);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(72, 56);
			this->button20->TabIndex = 44;
			this->button20->Text = L"2";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(8, 217);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(72, 56);
			this->button21->TabIndex = 43;
			this->button21->Text = L"1";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(79, 275);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(149, 56);
			this->button22->TabIndex = 42;
			this->button22->Text = L"0";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &CalculatorForm::number_Click);
			// 
			// calcarg
			// 
			this->calcarg->BackColor = System::Drawing::Color::SlateGray;
			this->calcarg->FlatAppearance->BorderSize = 0;
			this->calcarg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calcarg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcarg->Location = System::Drawing::Point(230, 101);
			this->calcarg->Name = L"calcarg";
			this->calcarg->Size = System::Drawing::Size(72, 56);
			this->calcarg->TabIndex = 12;
			this->calcarg->Text = L"Args";
			this->calcarg->UseVisualStyleBackColor = false;
			this->calcarg->Click += gcnew System::EventHandler(this, &CalculatorForm::calcarg_Click);
			// 
			// calcconj
			// 
			this->calcconj->BackColor = System::Drawing::Color::SlateGray;
			this->calcconj->FlatAppearance->BorderSize = 0;
			this->calcconj->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calcconj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcconj->Location = System::Drawing::Point(230, 217);
			this->calcconj->Name = L"calcconj";
			this->calcconj->Size = System::Drawing::Size(72, 114);
			this->calcconj->TabIndex = 11;
			this->calcconj->Text = L"Conj";
			this->calcconj->UseVisualStyleBackColor = false;
			this->calcconj->Click += gcnew System::EventHandler(this, &CalculatorForm::calcconj_Click);
			// 
			// calcmag
			// 
			this->calcmag->BackColor = System::Drawing::Color::SlateGray;
			this->calcmag->FlatAppearance->BorderSize = 0;
			this->calcmag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calcmag->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcmag->Location = System::Drawing::Point(230, 159);
			this->calcmag->Name = L"calcmag";
			this->calcmag->Size = System::Drawing::Size(72, 56);
			this->calcmag->TabIndex = 10;
			this->calcmag->Text = L"Magn";
			this->calcmag->UseVisualStyleBackColor = false;
			this->calcmag->Click += gcnew System::EventHandler(this, &CalculatorForm::calcmag_Click);
			// 
			// dResultLabel
			// 
			this->dResultLabel->AutoSize = true;
			this->dResultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dResultLabel->Location = System::Drawing::Point(11, 77);
			this->dResultLabel->Name = L"dResultLabel";
			this->dResultLabel->Size = System::Drawing::Size(52, 17);
			this->dResultLabel->TabIndex = 9;
			this->dResultLabel->Text = L"Result:";
			// 
			// dtbox2
			// 
			this->dtbox2->BackColor = System::Drawing::Color::Silver;
			this->dtbox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dtbox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtbox2->Location = System::Drawing::Point(6, 46);
			this->dtbox2->Name = L"dtbox2";
			this->dtbox2->Size = System::Drawing::Size(294, 26);
			this->dtbox2->TabIndex = 7;
			this->dtbox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->dtbox2->Click += gcnew System::EventHandler(this, &CalculatorForm::setDTBox2);
			// 
			// dtbox1
			// 
			this->dtbox1->BackColor = System::Drawing::Color::Silver;
			this->dtbox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dtbox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtbox1->Location = System::Drawing::Point(6, 14);
			this->dtbox1->Name = L"dtbox1";
			this->dtbox1->Size = System::Drawing::Size(294, 26);
			this->dtbox1->TabIndex = 5;
			this->dtbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->dtbox1->Click += gcnew System::EventHandler(this, &CalculatorForm::setDTBox1);
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 360);
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
//FUNCTION FOR CHANGE STATE FOR TAB
private: System::Void setState(System::Object^ sender, System::EventArgs^ e) {
	TabPage^ tab = safe_cast<TabPage^>(sender);

	if (tab->Text == "Part A") setTabState(1);
	else if (tab->Text == "Part B") setTabState(2);
	else if (tab->Text == "Part C") setTabState(3);
	else if (tab->Text == "Part D") setTabState(4);
}

//FUNCTION FOR CHANGE TBOX IN PART D
private: System::Void setDTBox1(System::Object^ sender, System::EventArgs^ e) {
	setDTboxState(1);
}
private: System::Void setDTBox2(System::Object^ sender, System::EventArgs^ e) {
	setDTboxState(2);
}

//FUCTIONALITIES FOR DESIGN
private: System::Void Effect_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast<Button^>(sender);
	btn->BackColor = System::Drawing::Color::SteelBlue;
}
private: System::Void Effect_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast<Button^>(sender);
	btn->BackColor = System::Drawing::Color::SlateGray;
}

//FUNCTION FOR CALCULATOR NUMBERS
private: System::Void number_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ btn = safe_cast<Button^>(sender);

	//calculator numbers for part a
	if (getTabState() == 1) {
		if (resultbox->Text == "0") {
			resultbox->Text = btn->Text;
		}
		else {
			resultbox->Text = resultbox->Text + btn->Text;
		}
	}
	//calculator numbers for part b
	else if (getTabState() == 2) {
		if (btbox1->Text == "0") {
			btbox1->Text = btn->Text;
		}
		else {
			btbox1->Text = btbox1->Text + btn->Text;
		}
	}
	//calculator numbers for part c
	else if (getTabState() == 3) {
		if (ctbox1->Text == "0") {
			ctbox1->Text = btn->Text;
		}
		else {
			ctbox1->Text = ctbox1->Text + btn->Text;
		}
	}
	//calculator numbers for part d
	else if (getTabState() == 4) {
		if (getDTBoxState() == 1) {
			if (dtbox1->Text == "0") {
				dtbox1->Text = btn->Text;
			}
			else {
				dtbox1->Text = dtbox1->Text + btn->Text;
			}
		}
		else {
			if (dtbox2->Text == "0") {
				dtbox2->Text = btn->Text;
			}
			else {
				dtbox2->Text = dtbox2->Text + btn->Text;
			}
		}

	}
}

private: System::Void btnerase_Click(System::Object^ sender, System::EventArgs^ e) {

	if (getTabState() == 1) {
		setarstate(0);
		setPrevNumber(0);
		setNextNumber(0);

		prevlabel->Text = "";
		resultbox->Text = "";
	}
	else if (getTabState() == 2) {
		btbox1->Text = "";
	}
	else if (getTabState() == 3) {
		label->Text = "";
		ctbox1->Text = "";
	}
	else if (getTabState() == 4) {
		dResultLabel->Text = "Result: ";
		dtbox1->Text = "";
		dtbox2->Text = "";
	}

}


// FUNCTIONALITIES FOR PART A
private: System::Void Equal_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ ar = safe_cast<Button^>(sender);

	double numbers;
	if (double::TryParse(resultbox->Text, numbers))
	{
		if (getPrevNumber() != 0) {
			double result = calcNumber();
			resultbox->Text = Convert::ToString(result);
		}
	}
	else
	{
		prevlabel->Text = "Please give a valid value";
	}
}

private: System::Void Arithmetic_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ ar = safe_cast<Button^>(sender);

	int op;
	if (ar->Text == "+") { op = 1; }
	else if (ar->Text == "-") { op = 2; }
	else if (ar->Text == "×") { op = 3; }
	else if (ar->Text == "÷") { op = 4; }

	double number;
	if (double::TryParse(resultbox->Text, number)) {
		setarstate(op);
		setPrevNumber(Convert::ToDouble(resultbox->Text));
		prevlabel->Text = Convert::ToString(getPrevNumber());
		resultbox->Text = "";
	}
	else {
		prevlabel->Text = "Please give a valid value";
	}
}

// FUNCTIONALITIES FOR PART B
private: System::Void graphbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	FILE* plotfile = fopen("PlotFile.txt", "w");

	double xinput;

	if (double::TryParse(btbox1->Text, xinput)) {
		double xRad, y;

		for (double x = -xinput; x <= xinput; x += 0.1)
		{
			xRad = (x / 180) * Math::PI;
			y = Math::Sin(xRad) / xRad;

			fprintf(plotfile, "%f %f\n", x, y);

		}
		fclose(plotfile);
		MessageBox::Show("File Created");
	}
	else {
		MessageBox::Show("Please give a valid value");
	}
}

// FUNCTIONALITIES FOR PART C
private: System::Void power2_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(2);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ctbox1->Text = ResultStr;
	}
	else
	{
		label->Text = "Please give a valid value";
	}
}
private: System::Void power3_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(3);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ctbox1->Text = ResultStr;
	}
	else
	{
		label->Text = "Please give a valid value";
	}
}
private: System::Void power5_Click(System::Object^ sender, System::EventArgs^ e) {
	double number1;
	if (double::TryParse(ctbox1->Text, number1))
	{
		Double ResultDbl = convertpartC(5);

		String^ ResultStr;
		ResultStr = Convert::ToString(ResultDbl);
		ctbox1->Text = ResultStr;
	}
	else
	{
		label ->Text = "Please give a valid value";
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
	double number1, number2;
	if (double::TryParse(dtbox1->Text, number1) && double::TryParse(dtbox2->Text, number2))
	{
		String^ number1 = dtbox1->Text;
		String^ number2 = dtbox2->Text;

		Double number1dbl, number2dbl;
		number1dbl = Convert::ToDouble(number1);
		number2dbl = Convert::ToDouble(number2);

		std::complex<double> complexresult(number1dbl, number2dbl);
		std::complex<double> result = conj(complexresult);

		if (reinterpret_cast<double(&)[2]>(result)[1] > 0) {
			dResultLabel->Text = "Result: " + reinterpret_cast<double(&)[2]>(result)[0] + "+" + reinterpret_cast<double(&)[2]>(result)[1] + "i";
		}
		else {
			dResultLabel->Text = "Result: " + reinterpret_cast<double(&)[2]>(result)[0] + reinterpret_cast<double(&)[2]>(result)[1] + "i";
		}

		if (reinterpret_cast<double(&)[2]>(result)[0] == reinterpret_cast<double(&)[2]>(result)[1]) {
			dResultLabel->Text = "Result: 0";
		}
		else if (reinterpret_cast<double(&)[2]>(result)[0] == 0) {
			dResultLabel->Text = "Result: " + reinterpret_cast<double(&)[2]>(result)[1] + "i";
		}
		else if (reinterpret_cast<double(&)[2]>(result)[1] == 0) {
			dResultLabel->Text = "Result: " + reinterpret_cast<double(&)[2]>(result)[0];
		}
		
	}
	else
	{
		dResultLabel->Text = "Result: " + "Please give a valid value";
	}
}
};
}
