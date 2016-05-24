#pragma once
#include <iostream>
#include <Windows.h>
#include <iostream>
using namespace System;
using namespace std;
#include "TSet.h"
void MarshalString(String ^ s, string& os)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
__int32 Univers;
TSet * A, * B, *Result;
string str="",str2="", Res = "";
//int Dobavka, Yborka;
int proverka=0, proverka2=0;


namespace BitField {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->ForeColor = System::Drawing::Color::Maroon;
			this->textBox1->Location = System::Drawing::Point(251, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::Color::Maroon;
			this->textBox2->Location = System::Drawing::Point(356, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::Color::Maroon;
			this->textBox3->Location = System::Drawing::Point(356, 105);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(206, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Enabled = false;
			this->textBox4->ForeColor = System::Drawing::Color::Maroon;
			this->textBox4->Location = System::Drawing::Point(356, 191);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(206, 20);
			this->textBox4->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Maroon;
			this->button1->Location = System::Drawing::Point(329, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->ForeColor = System::Drawing::Color::Maroon;
			this->button2->Location = System::Drawing::Point(356, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"A+B";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->ForeColor = System::Drawing::Color::Maroon;
			this->button3->Location = System::Drawing::Point(409, 145);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"AB";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Enabled = false;
			this->textBox5->ForeColor = System::Drawing::Color::Maroon;
			this->textBox5->Location = System::Drawing::Point(159, 63);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(110, 20);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Enabled = false;
			this->textBox6->ForeColor = System::Drawing::Color::Maroon;
			this->textBox6->Location = System::Drawing::Point(159, 98);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(110, 20);
			this->textBox6->TabIndex = 10;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Enabled = false;
			this->textBox7->ForeColor = System::Drawing::Color::Maroon;
			this->textBox7->Location = System::Drawing::Point(159, 145);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(110, 20);
			this->textBox7->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->Enabled = false;
			this->textBox8->ForeColor = System::Drawing::Color::Maroon;
			this->textBox8->Location = System::Drawing::Point(159, 191);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(110, 20);
			this->textBox8->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Enabled = false;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->ForeColor = System::Drawing::Color::Maroon;
			this->button4->Location = System::Drawing::Point(462, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 23);
			this->button4->TabIndex = 13;
			this->button4->Text = L"~A";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Enabled = false;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->ForeColor = System::Drawing::Color::Maroon;
			this->button5->Location = System::Drawing::Point(515, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"~B";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Enabled = false;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->ForeColor = System::Drawing::Color::Maroon;
			this->button6->Location = System::Drawing::Point(56, 63);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 15;
			this->button6->Text = L"Add elem A :";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Enabled = false;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->ForeColor = System::Drawing::Color::Maroon;
			this->button7->Location = System::Drawing::Point(56, 98);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Add elem B :";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Enabled = false;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->ForeColor = System::Drawing::Color::Maroon;
			this->button8->Location = System::Drawing::Point(56, 145);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 17;
			this->button8->Text = L"Del elem A : ";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(106, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L"введите размер универса :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(330, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"А :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->ForeColor = System::Drawing::Color::Maroon;
			this->label3->Location = System::Drawing::Point(330, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"В :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label4->ForeColor = System::Drawing::Color::Maroon;
			this->label4->Location = System::Drawing::Point(307, 194);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Result :";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Enabled = false;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->ForeColor = System::Drawing::Color::Maroon;
			this->button9->Location = System::Drawing::Point(56, 188);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 22;
			this->button9->Text = L"Del elem B:";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Enabled = false;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->ForeColor = System::Drawing::Color::Maroon;
			this->button10->Location = System::Drawing::Point(568, 64);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(53, 20);
			this->button10->TabIndex = 23;
			this->button10->Text = L"OK";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Enabled = false;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button11->ForeColor = System::Drawing::Color::Maroon;
			this->button11->Location = System::Drawing::Point(568, 105);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(53, 20);
			this->button11->TabIndex = 24;
			this->button11->Text = L"OK";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Maroon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(649, 258);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Работа с множествами 1.0";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e)
		{
			if ((textBox1->Text) != (Convert::ToString("")))
			{
				Univers = System::Convert::ToInt16(textBox1->Text);
				delete A;
				delete B;
				A = new TSet(System::Convert::ToInt16(textBox1->Text));
				B = new TSet(System::Convert::ToInt16(textBox1->Text));
				textBox2->Text = "";
				textBox3->Text = "";
				textBox4->Text = "";
				textBox5->Enabled = false;
				textBox6->Enabled = false;		textBox7->Enabled = false;		textBox8->Enabled = false;
				button2->Enabled = false;		button3->Enabled = false;		button4->Enabled = false;
				button5->Enabled = false;		button6->Enabled = false;		button7->Enabled = false;
				button8->Enabled = false;		button9->Enabled = false;		button10->Enabled = false;
				button11->Enabled = false;
			}
			if ((textBox1->Text) == (Convert::ToString(0)))
			{
				textBox1->Text = "";	
				textBox2->Enabled = false;		textBox3->Enabled = false;
			}
		}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Univers = Convert::ToUInt32(textBox1->Text);
	if (Univers != 0)
	{
		textBox2->Enabled = true;
		textBox3->Enabled = true;
		button10->Enabled = true;
		button11->Enabled = true;
	}
	
}

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
		 {	
			 MarshalString(System::Convert::ToString(textBox2->Text), str);
			 A->vvod(str);
			 string st = A->vivod();
			 textBox2->Text = gcnew System::String(st.c_str());
			 if (textBox2->Text !="")
			 {
				 button4->Enabled = true;
				 textBox7->Enabled = true;
				 textBox5->Enabled = true;
				 button6->Enabled = true;
				 button8->Enabled = true;
				 proverka2 = 1;
				 textBox2->Enabled = false;
				 
			 }
			 else
			 {
				 proverka2 = 0;
				 textBox2->Text = "";
			 }
			 if ((proverka2 == 1)&&(proverka == 1))
			 {
				 button2->Enabled = true;
				 button3->Enabled = true;
			 }

}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
{
	MarshalString(System::Convert::ToString(textBox3->Text), str2);
	B->vvod(str2);
	string st = B->vivod();
	textBox3->Text = gcnew System::String(st.c_str());
	if ((textBox3->Text) != "")
	{
		textBox6->Enabled = true;
		textBox8->Enabled = true;
		button5->Enabled = true;
		button7->Enabled = true;
		button9->Enabled = true;
		proverka = 1;
		textBox3->Enabled = false;
		
	}
	else
	{
		proverka = 0;
		textBox3->Text = "";
	}
	
	if ((proverka2 == 1) && (proverka == 1))
	{
		button2->Enabled = true;
		button3->Enabled = true;
	}
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	TSet *Result;
	Result = new TSet(Univers);
	*Result = (*A) | (*B);
	Res = "";
	Res = Result->vivod();
	textBox4->Text = gcnew System::String(Res.c_str());
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Result = new TSet(Univers);
		*Result = *A & *B;
		Res = "";
		Res = Result->vivod();
		if(Res!="")
		textBox4->Text = gcnew System::String(Res.c_str());
		else 
			textBox4->Text ="пустое множество";
	}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	Result = new TSet(Univers);
	*Result = ~(*A);
	Res = "";
	Res = Result->vivod();
	textBox4->Text = gcnew System::String(Res.c_str());
}

 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
 {
	 Result = new TSet(Univers);
	 *Result = ~(*B);
	 Res = "";
	 Res = Result->vivod();
	 textBox4->Text = gcnew System::String(Res.c_str());
 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if ((textBox5->Text) != "")
	{
		MarshalString(System::Convert::ToString(textBox5->Text), str);
		A->vvod(str);
		Res = "";
		Res = A->vivod();
		textBox2->Text = gcnew System::String(Res.c_str());
		textBox5->Text="";
		textBox4->Clear();
	}
	else
	{
		textBox5->Text = "";
	}
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if ((textBox6->Text) != "")
	{
		MarshalString(System::Convert::ToString(textBox6->Text), str);
		B->vvod(str);
		Res = "";
		Res = B->vivod();
		textBox3->Text = gcnew System::String(Res.c_str());
		textBox6->Text = "";
		textBox4->Clear();
	}
	else
	{
		textBox5->Text = "";
	}
}
		 
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if ((textBox7->Text) != "")
	{
		MarshalString(System::Convert::ToString(textBox7->Text), str);
		A->vvodY(str);
		Res = "";
		Res = A->vivod();
		textBox2->Text = gcnew System::String(Res.c_str());
		textBox4->Clear();
		if (textBox2->Text == "")
		{
			textBox2->Enabled = true;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			textBox5->Enabled = false;
			textBox7->Enabled = false;
			button6->Enabled = false;
			button8->Enabled = false;
		}

		textBox7->Text = "";
	}

}

private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
{

	if ((textBox8->Text) != "")
	{
		MarshalString(System::Convert::ToString(textBox8->Text), str);
		B->vvodY(str);
		Res = "";
		Res = B->vivod();
		textBox3->Text = gcnew System::String(Res.c_str());
		textBox4->Clear();
		if (textBox3->Text == "")
		{
			textBox3->Enabled = true;
			button2->Enabled = false;
			button3->Enabled = false;
			button5->Enabled = false;
			textBox6->Enabled = false;
			textBox8->Enabled = false;
			button7->Enabled = false;
			button9->Enabled = false;
		}

		textBox8->Text = "";
	}
}

};
}
