#pragma once
#include <iostream>
#include "Source.h"
#include "string.h"
#include <vcclr.h>
using namespace std;

namespace Project2 {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(99, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(42, 89);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(381, 30);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(429, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 40);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Выражение:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(37, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(334, 29);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Обратная польская запись:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(42, 198);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(381, 30);
			this->textBox2->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(37, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(273, 29);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Значение выражения:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(42, 310);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(381, 30);
			this->textBox3->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(99, 374);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(65, 371);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(528, 430);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обратная польская запись";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   bool Protect() {
			   if (textBox1->Text->Length == 0) { return false; }
			   for (int i = 0; i < textBox1->Text->Length; ++i) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9') || (textBox1->Text[i] == '+') || (textBox1->Text[i] == '-') || (textBox1->Text[i] == '*') || (textBox1->Text[i] == '/')) {}
				   else { return false; }
			   }
			   return true;
		   }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char outstring[80];
		int point = 0;
		if (Protect()) {
			struct stackChar* opers = NULL;
			for (int i = 0; i < textBox1->Text->Length; ++i) {
				{
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
			}
			while (opers != NULL)
			{
				outstring[point++] = del(&opers);
			}

			string r(outstring);
			System::String^ str = gcnew System::String(r.c_str());
			label6->Text = str;
		}
	}
};
	}