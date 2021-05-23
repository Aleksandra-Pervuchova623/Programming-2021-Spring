#pragma once
#include <iostream>;
#include "Source.cpp"
using namespace std;

namespace reversePolishNotation {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(178, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ќбратна€ польска€ нотаци€";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(292, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(292, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 285);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(287, 22);
			this->textBox3->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(467, 101);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"run";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(138, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 363);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		char temp[80];

		String^ inExp = textBox1->Text;   //inExp - строка введенных пользователем символов
		//label2->Text = inExp;
		for (int i = 0; i < sizeof(temp); i++) {
			temp[i] = inExp[i];		//temp - массив введенных пользователем символов
		}
		char outstring[80] = "dthhht";
		struct stackChar* opers = NULL;
		revPolNot(temp, outstring, opers);

		String^ outExp;
		for (int i = 0; i < sizeof(outstring); i++) {
			outExp += outstring[i];		
		}
		label2->Text = outExp;

		string r(outstring);
		System::String^ str = gcnew System::String(r.c_str());
		label2->Text = str;

	}
};
}
