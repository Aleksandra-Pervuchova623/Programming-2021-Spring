#pragma once
#include <iostream>
#include "Source.h"
#include "string.h"
#include <vcclr.h>
#include <sstream>

using namespace std;

namespace Project {

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(43, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выражение:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(175, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(379, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(398, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"____________________";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(585, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(43, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(267, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Обратная польская запись:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(43, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Значение выражения:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(398, 214);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(232, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"____________________";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(702, 420);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обратная польская запись";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool Protect1() {
			   if (textBox1->Text->Length == 0) { return false; }
			   for (int i = 0; i < textBox1->Text->Length; ++i) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == '+') || (textBox1->Text[i] == '-') || (textBox1->Text[i] == '*') || (textBox1->Text[i] == '/') || (textBox1->Text[i] == '(') || (textBox1->Text[i] == ')')) {}
				   else { return false; }
			   }
			   return true;
		   }

		   bool isNumber(char c) {
			   return c >= '0' && c <= '9';
		   }

		   bool isSign(char c) {
			   return c == '-' || c == '+' || c == '*' || c == '/' ;
		   }

		   bool Protect2() {
			   for (int i = 1; i < textBox1->Text->Length; ++i) {
				   if ((isNumber(textBox1->Text[i]) && isNumber(textBox1->Text[i - 1])) || (isSign(textBox1->Text[i]) && isSign(textBox1->Text[i - 1]))) {
					   return false;
				   }
			   }
			   return true;
		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char outstring[80]{ 0 };
		int point = 0;
		char j = ' ';
		if (Protect1()&&Protect2()) {
			struct stackChar* opers = NULL;
			for (int i = 0; i < textBox1->Text->Length; ++i) {
					if (textBox1->Text[i] == ')')
					{
						while (opers->c != '(')
						{
							outstring[point++] = del(&opers);
						}
						del(&opers);
					}
					if (textBox1->Text[i] >= '0' && textBox1->Text[i] <= '9')
					{
						outstring[point++] = textBox1->Text[i];
					}
					if (textBox1->Text[i] == '(')
					{
						opers = push(opers, '(');
					}
					if (textBox1->Text[i] == '+' || textBox1->Text[i] == '-' || textBox1->Text[i] == '*' || textBox1->Text[i] == '/')
					{
						if (opers == NULL)
						{
							opers = push(opers, textBox1->Text[i]);
						}
						else
						{
							if (prior(opers->c) < prior(textBox1->Text[i]))
							{
								opers = push(opers, textBox1->Text[i]);
							}
							else
							{
								while (opers != NULL && prior(opers->c) >= prior(textBox1->Text[i]))
								{
									outstring[point++] = del(&opers);
								}
								opers = push(opers, textBox1->Text[i]);
							}
						}
					}

			}
			while (opers != NULL)
			{
				outstring[point++] = del(&opers);
			}

			string str(outstring);
			System::String^ Sstr = gcnew System::String(str.c_str());
			label2->Text = Sstr;

			struct stackInt* calc = NULL;
			int res = 0;
			int x = 0;
			int y = 0;
			for (int i = 0; i < strlen(outstring); ++i)
			{
				if (isNumber(outstring[i]))
				{
					calc = push(calc, outstring[i] - '0');
				}
				else
				{
					x = del(&calc);
					y = del(&calc);
					switch (outstring[i]) {
					case '+': res = x + y; break;
					case '-':res = y - x; break;
					case '*': res = x * y; break;
					case '/': res = y / x; break;
					}

					calc = push(calc, res);
				}
			}
			res = del(&calc);
			string result;
			stringstream out;
			out << res;
			result = out.str();
			System::String^ Sresult = gcnew System::String(result.c_str());
			label5->Text = Sresult;
		}
		else {
			MessageBox::Show("Недопустимый формат записи, попробуйте заново ввести выражение", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
		 
};
}
