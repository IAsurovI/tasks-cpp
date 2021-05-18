#pragma once

namespace Lab14p2 {

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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;



	protected:

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Матрица А:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(295, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Матрица В:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(222, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(189, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"N";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(183, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(230, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"M";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(239, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(76, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"C = A + B";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(161, 239);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Посчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Введите значения:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 18;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(298, 69);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(240, 150);
			this->dataGridView2->TabIndex = 19;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(161, 259);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(240, 150);
			this->dataGridView3->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 412);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Тextbox
	/*An*/private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char number = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
		checkenabled();
	}
	/*Am*/private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char number = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
		checkenabled();
	}
		//Тextbox
		int N, M;
		//Button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0)) {
			button1->Enabled = true;
			N = Convert::ToInt64(textBox1->Text);
			M = Convert::ToInt64(textBox2->Text);
			reload();
		}
	}
		//Button
	/*Рассчёты+вывод*/private: System::Void Calculations() {
		Random^ rand = gcnew Random();
		double** A = new double* [N];
		for (int i = 0; i < N; i++)A[i] = new double[M];
		//mat1
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				A[i][j] = (rand->Next(1.0, 99.0)+ (rand->Next(1.0, 9.0)/10.0));
		double** B = new double* [N];
		for (int i = 0; i < N; i++)B[i] = new double[M];
		//mat2
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				B[i][j] = (rand->Next(1.0, 99.0) + (rand->Next(1.0, 9.0) / 10.0));
		//mat3
		double** C = new double* [N];
		for (int i = 0; i < N; i++)C[i] = new double[M];
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
				C[i][j] = A[i][j] + B[i][j];

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(A[i][j]);
				dataGridView2->Rows[i]->Cells[j]->Value = Convert::ToString(B[i][j]);
				dataGridView3->Rows[i]->Cells[j]->Value = Convert::ToString(C[i][j]);
				for (int r = 0; r < M; r++) {
					dataGridView1->Columns[j]->Width = 30;
					dataGridView2->Columns[j]->Width = 30;
					dataGridView3->Columns[j]->Width = 40;
				}
			}
	}
	/*функция построения таблицы*/private: System::Void reload() {
		dataGridView1->Columns->Clear();
		dataGridView1->ColumnCount = M;
		dataGridView1->Rows->Add(N);
		dataGridView2->Columns->Clear();
		dataGridView2->ColumnCount = M;
		dataGridView2->Rows->Add(N);
		dataGridView3->Columns->Clear();
		dataGridView3->ColumnCount = M;
		dataGridView3->Rows->Add(N);
		for (int i = 0; i < M; i++) {
			dataGridView1->Columns[i]->Name = i.ToString();
			dataGridView2->Columns[i]->Name = i.ToString();
			dataGridView3->Columns[i]->Name = i.ToString();
		}

	/*	for (int j = 0; j < N; j++) {
			dataGridView1->row
		}*/
		Calculations();
	}
private: System::Void checkenabled() {
	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0)) button1->Enabled = true;
	else button1->Enabled = false;

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	checkenabled();
}
};
}
//слож