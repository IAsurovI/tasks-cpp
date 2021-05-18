#pragma once
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
namespace lab16p2 {

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
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ќбер≥ть тип сортуванн€:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 30);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Quicksort";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 53);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Bubble";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(16, 76);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(51, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Insert";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"„ас сортуванн€:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(140, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"„ас сортуванн€:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(140, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"„ас сортуванн€:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(238, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(70, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(238, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(70, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(238, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(70, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"¬каж≥ть розм≥р масиву(не менше 60):";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(238, 108);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(70, 20);
			this->textBox4->TabIndex = 11;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(125, 129);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"¬иконати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 151);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Enabled = false;
	}
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
		char number = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
		if ((textBox4->Text->Length != 0) && (Convert::ToInt16(textBox4->Text) > 60))button1->Enabled = true;
		else button1->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*Quicksort*/if (radioButton1->Checked) {
			clock_t s = clock();
			Random^ rand = gcnew Random();
			int* a;
			int size = Convert::ToInt32(textBox4->Text);
			a = new int[size];
			std::ofstream(f);
			std::ifstream(fn);
			f.open("D:\\lab16p2\\quicksort.txt");
			fn.open("D:\\lab16p2\\original.txt");
			for (int i = 0; i < size; i++) {
				fn >> a[i];
				f << a[i] << " ";
			}
			fn.close();
			quicksort(a, 0, size-1);
			f << std::endl << std::endl;
			for (int i = 0; i < size; i++) {
				f << a[i] << " ";
			}
			f.close();
			delete[] a;
			clock_t e = clock();
			double sec = (double)(e - s) / CLOCKS_PER_SEC;
			textBox1->Text = Convert::ToString(sec) + "s";
		}
		/*Bubble*/if (radioButton2->Checked) {
			clock_t s = clock();
			Random^ rand = gcnew Random();
			int* a;
			int size = Convert::ToInt32(textBox4->Text);
			a = new int[size];
			std::ofstream(f);
			std::ifstream(fn);
			f.open("D:\\lab16p2\\bubble.txt");
			fn.open("D:\\lab16p2\\original.txt");
			for (int i = 0; i < size; i++) {
				fn >> a[i];
				f << a[i] << " ";
			}
			fn.close();

			int t;
			for (int i = 0; i < size - 1; i++) {
				for (int j = 0; j < size - i - 1; j++) {
					if (a[j] > a[j + 1]) {
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
				}
			}

			f << std::endl << std::endl;
			for (int i = 0; i < size; i++) {
				f << a[i] << " ";
			}
			f.close();
			delete[] a;
			clock_t e = clock();
			double sec = (double)(e - s) / CLOCKS_PER_SEC;
			textBox2->Text = Convert::ToString(sec) + "s";
		}
		/*Insert*/if (radioButton3->Checked) {
			clock_t s = clock();
			int size, t, i, j;
			int* a;
			size = Convert::ToInt32(textBox4->Text);
			a = new int[size];
			std::ofstream(f);
			std::ifstream(fn);
			f.open("D:\\lab16p2\\insert.txt");
			fn.open("D:\\lab16p2\\original.txt");
			for (i = 0; i < size; i++)
			{
				fn >> a[i];
				f << a[i] << " ";
			}
			fn.close();
			for (i = 1; i < size; i++)
			{
				t = a[i];
				j = i - 1;
				while (t < a[j] && j >= 0)
				{
					a[j + 1] = a[j];
					--j;
				}
				a[j + 1] = t;
			}
			f << std::endl << std::endl;
			for (int i = 0; i < size; i++) {
				f << a[i] << " ";
			}
			f.close();
			delete[] a;
			clock_t e = clock();
			double sec = (double)(e - s) / CLOCKS_PER_SEC;
			textBox3->Text = Convert::ToString(sec) + "s";
		}
	}
	private: System::Void quicksort(int* a, int f, int size) {
		int i = f, j = size;
		int t;
		int x = a[(f + size) / 2];
		do {
			while (a[i] < x)
				i++;
			while (a[j] > x)
				j--;

			if (i <= j)
			{
				if (i < j)
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
				}
				i++;
				j--;
			}
		} while (i <= j);

		if (i < size) {
			quicksort(a, i, size);
		}
		if (f < j) {
			quicksort(a, f, j);
		}
	}
};
}