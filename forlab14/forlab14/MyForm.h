#pragma once

namespace forlab14 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Button^ button2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"m";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(97, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"L";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(31, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(53, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(31, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(31, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 109);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 6;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(262, 109);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(240, 150);
			this->dataGridView4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"B";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(259, 93);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"C";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(136, 265);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(240, 150);
			this->dataGridView5->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 266);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"button1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 468);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/*NOT*/private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
	checkenabled();
}
/*NOT*/private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
	checkenabled();
}
/*YES*/private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	char number = e->KeyChar;
	if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
	checkenabled();
}
/*NOT*/int N, M;
/*YES*/int L;
/*YES*/private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0)&&(textBox3->Text->Length!=0)) {
		button2->Enabled = true;
		N = Convert::ToInt64(textBox1->Text);
		M = Convert::ToInt64(textBox2->Text);
		L = Convert::ToInt64(textBox3->Text);
		reload();
	}
}
/*YES*//*Рассчёты+вывод*/private: System::Void CalculationsMultiply() {
	Random^ rand = gcnew Random();
	double** D = new double* [N];
	for (int i = 0; i < N; i++)
		D[i] = new double[M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			D[i][j] = (rand->Next(1.0, 99.0) + (rand->Next(1.0, 9.0) / 10.0));

	double** E = new double* [M];
	for (int i = 0; i < M; i++)
		E[i] = new double[L];
	for (int i = 0; i < M; i++)
		for (int j = 0; j < L; j++)
			E[i][j] = (rand->Next(1.0, 99.0) + (rand->Next(1.0, 9.0) / 10.0));

	double** F = new double* [N];
	for (int i = 0; i < N; i++)
		F[i] = new double[L];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < L; j++)
		{
			F[i][j] = 0;
			for (int k = 0; k < M; k++)
				F[i][j] += D[i][k] * E[k][j];
		}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(D[i][j]);
			dataGridView4->Rows[i]->Cells[j]->Value = Convert::ToString(E[i][j]);
			dataGridView5->Rows[i]->Cells[j]->Value = Convert::ToString(F[i][j]);
			for (int r = 0; r < M; r++) {
				dataGridView2->Columns[j]->Width = 50;
				dataGridView4->Columns[j]->Width = 50;
				dataGridView5->Columns[j]->Width = 80;
			}
		}
}
/*функция построения таблицы*/private: System::Void reload() {
	dataGridView2->Columns->Clear();
	dataGridView2->ColumnCount = M;
	dataGridView2->Rows->Add(N);
	dataGridView4->Columns->Clear();
	dataGridView4->ColumnCount = M;
	dataGridView4->Rows->Add(N);
	dataGridView5->Columns->Clear();
	dataGridView5->ColumnCount = M;
	dataGridView5->Rows->Add(N);
	for (int i = 0; i < M; i++) {
		dataGridView2->Columns[i]->Name = i.ToString();
		dataGridView4->Columns[i]->Name = i.ToString();
		dataGridView5->Columns[i]->Name = i.ToString();
	}
	CalculationsMultiply();
}
private: System::Void checkenabled() {
	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0)&& (textBox3->Text->Length != 0)) button2->Enabled = true;
	else button2->Enabled = false;

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	checkenabled();
}
};
}
//умн
