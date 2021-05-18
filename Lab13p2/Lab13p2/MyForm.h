#pragma once
#include <iostream>
#include <fstream>
#include<vector>
#include <string>
struct student {
	std::string surname;
	std::string name;
	std::string patronymic;
	std::string sex;
	int bday;
	int bmonth;
	int byear;
	int srbal;
};
student st[100];
student sr[100];
int sch = 0;
int index = 0;
namespace Lab13p2 {

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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(93, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cтудент";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Имя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 89);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Отчество";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Пол";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Дата рождения";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 167);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(77, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Средний балл";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(18, 197);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Предыдущий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 197);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Следующий";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(110, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Средний балл до:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 86);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 20);
			this->textBox3->TabIndex = 14;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 112);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 20);
			this->textBox4->TabIndex = 15;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(120, 138);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 20);
			this->textBox5->TabIndex = 16;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(120, 164);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 20);
			this->textBox6->TabIndex = 17;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(211, 235);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(46, 20);
			this->textBox7->TabIndex = 18;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(97, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 23);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Применить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(269, 276);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Lab13p2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		int sredniy;
			//Кнопки////
		int signal = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (signal == 0) {
			if (index > 0) {
				button2->Enabled = true;
				index--;
				reload();
			}
			else button1->Enabled = false;
		}
		else if (signal == 1) {
			if (index > 0) {
				button2->Enabled = true;
				index--;
				filterreload();
			}
			else button1->Enabled = false;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (signal == 0) {
			if (index < i - 1) {
				button1->Enabled = true;
				index++;
				reload();
			}
			else button2->Enabled = false;
		}
		else if (signal == 1) {
			if (index < sch-1) {
				button1->Enabled = true;
				index++;
				filterreload();
			}
			else button2->Enabled = false;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = true;
		button3->Enabled = false;
		filter();
	}
		    //Кнопки////
		    ////////////
		    //Текстбоксы
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		int number = 0;
		if (number = 1)	e->Handled = true;
	}
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char number = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
		if (textBox7->Text->Length != 0)button3->Enabled = true;
		else button3->Enabled = false;
	}
		    //Текстбоксы
	int i = 0;
	private: System::Void reload() {
		textBox1->Text = gcnew System::String(st[index].surname.c_str());
		textBox2->Text = gcnew System::String(st[index].name.c_str());
		textBox3->Text = gcnew System::String(st[index].patronymic.c_str());
		textBox4->Text = gcnew System::String(st[index].sex.c_str());
		textBox5->Text = st[index].bday.ToString() + "." + st[index].bmonth.ToString() + "." + st[index].byear.ToString();//дата
		textBox6->Text = st[index].srbal.ToString();
	}
	private: System::Void filterreload() {
		textBox1->Text = gcnew System::String(sr[index].surname.c_str());
		textBox2->Text = gcnew System::String(sr[index].name.c_str());
		textBox3->Text = gcnew System::String(sr[index].patronymic.c_str());
		textBox4->Text = gcnew System::String(sr[index].sex.c_str());
		textBox5->Text = sr[index].bday.ToString() + "." + sr[index].bmonth.ToString() + "." + sr[index].byear.ToString();//дата
		textBox6->Text = sr[index].srbal.ToString();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button3->Enabled = false;
	std::ifstream f;
	f.open("D:\\student.txt");
	while (!f.eof()) {
		f >> st[i].surname;
		f >> st[i].name;
		f >> st[i].patronymic;
		f >> st[i].sex;
		f >> st[i].bday;
		f >> st[i].bmonth;
		f >> st[i].byear;
		f >> st[i].srbal;
		i++;
	}
	reload();
}

private: System::Void filter() {
	sch = 0;
	sredniy = Convert::ToInt16(textBox7->Text);
	for (int i = 0; i < 100; i++) {
		if (st[i].srbal < sredniy&&st[i].srbal>0) {
			sr[sch].surname = st[i].surname;
			sr[sch].name = st[i].name;
			sr[sch].patronymic = st[i].patronymic;
			sr[sch].sex = st[i].sex;
			sr[sch].bday = st[i].bday;
			sr[sch].bmonth = st[i].bmonth;
			sr[sch].byear = st[i].byear;
			sr[sch].srbal = st[i].srbal;
			sch++;
		}
	}
	filterreload();
	index = 0;
	signal = 1;
}
};}
