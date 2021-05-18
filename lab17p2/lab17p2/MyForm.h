#pragma once
#include <Windows.h>
#include <dos.h>
#include <chrono>
namespace lab17p2 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(422, 399);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(163, 170);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(492, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Строить!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(492, 107);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"H-Fractal";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(492, 130);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(108, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Serpinsky triangle";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(492, 153);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(48, 17);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Levy";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(492, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(264, 485);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(492, 176);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(47, 17);
			this->radioButton4->TabIndex = 7;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Tree";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		const double Pi = 3.14159;
		double n=8.0, m=5.0;
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void H_Fr(float x, float y, int lenght, int n) {
		if (radioButton1->Checked) {
			Graphics^ g = Graphics::FromHwnd(this->Handle);
			if (n > 0) {
				float x1, x2, y1, y2, y3, y4;
				x1 = x - lenght / 2;
				x2 = x + lenght / 2;
				y1 = y - lenght / 2;
				y2 = y + lenght / 2;
				y3 = y1 - lenght / 2;
				y4 = y1 + lenght / 2;
				g->DrawLine(Pens::Red, x1, y3, x1, y4);
				g->DrawLine(Pens::Brown, x1, y1, x2, y1);
				g->DrawLine(Pens::Brown, x2, y3, x2, y4);
				H_Fr(x1, y3 + lenght / 4, lenght / 2, n - 1);
				H_Fr(x2, y3 + lenght / 4, lenght / 2, n - 1);
				H_Fr(x2, y4 + lenght / 4, lenght / 2, n - 1);
				H_Fr(x1, y4 + lenght / 4, lenght / 2, n - 1);
			}
		}
	}
	private: System::Void Serp_Fr(float x1, float y1, float x2, float y2, float x3, float y3, int n) {
		if (radioButton2->Checked) {
			Graphics^ g = Graphics::FromHwnd(this->Handle);
			if (n > 0) {
				float new_x1, new_x2, new_x3, new_y1, new_y2, new_y3;
				new_x1 = (x1 + x2) / 2;
				new_x2 = (x2 + x3) / 2;
				new_x3 = (x1 + x3) / 2;
				new_y1 = (y1 + y2) / 2;
				new_y2 = (y2 + y3) / 2;
				new_y3 = (y1 + y3) / 2;
				g->DrawLine(Pens::Brown, new_x1, new_y1, new_x2, new_y2);
				g->DrawLine(Pens::Brown, new_x3, new_y3, new_x1, new_y1);
				Serp_Fr(x1, y1, new_x1, new_y1, new_x3, new_y3, n - 1);
				Serp_Fr(x2, y2, new_x1, new_y1, new_x2, new_y2, n - 1);
				Serp_Fr(x3, y3, new_x2, new_y2, new_x3, new_y3, n - 1);
			}
		}
	}
	private: System::Void Levy_Fr(float x1, float x2, float y1, float y2, int n){
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		float x3, y3;
		if (n == 0)g->DrawLine(Pens::Black, x1, y1, x2, y2);
		else{
			x3 = (x1 + x2) / 2 + (y2 - y1) / 2;
			y3 = (y1 + y2) / 2 - (x2 - x1) / 2;
			Levy_Fr(x1, x3, y1, y3, n - 1);
			Levy_Fr(x3, x2, y3, y2, n - 1);
		}
	}
	/*private:System::Void Draw(double x, double y, double L, double a) {
		if (L > 4) {
			Rect((int)x, (int)y, (int)L, a);
			Draw(x - L * sin(a), y - L * cos(a), L / sqrt(2), a + Pi / 4);
			Draw(x - L * sin(a) + L / sqrt(2) * cos(a + Pi / 4), y - L * cos(a) - L / sqrt(2) * sin(a + Pi / 4), L / sqrt(2), a - Pi / 4);
		}
	}
	private:System::Void Rect(int x1, int y1, int L, double a1) {
		Graphics^ g = Graphics::FromHwnd(this->Handle);
		int X1 = x1, Y1 = y1;
		g->DrawLine(Pens::Black, X1,Y1, x1 + (int)(L * cos(a1)), y1 - (int)(L * sin(a1)));
		g->DrawLine(Pens::Black, X1, Y1, x1 + (int)(L * sqrt(2) * cos(a1 + Pi / 4)), y1 - (int)(L * sqrt(2) * sin(a1 + Pi / 4)));
		g->DrawLine(Pens::Black, X1, Y1, x1 + (int)(L * cos(a1 + Pi / 2)), y1 - (int)(L * sin(a1 + Pi / 2)));
		g->DrawLine(Pens::Black, X1, Y1, x1, y1);
	}*/// 
	//-------

	private: System::Void Draw(double x, double y, double L, double a) { 
		int max=(Convert::ToInt16(textBox1->Text)/2);
		if (L > max) {
			Graphics^ g = Graphics::FromHwnd(this->Handle);
			L *= 0.7;
			int x1 = x + L * cos(a);
			int x2 = y - L * sin(a);
			g->DrawLine(Pens::Red, x,y,x1, x2);
			x = x + L * cos(a);
			y = y - L * sin(a);
			Draw(x, y, L, a + Pi / n);
			Draw(x, y, L, a - Pi / m);
		}
	}

//private: System::Void Rect(double x1, double y1, double l, double a1)
//{
//	Graphics^ g = Graphics::FromHwnd(this->Handle);
//
//	double x2 = round(x1 + (l * cos(a1)));
//	double y2 = round(y1 - (l * sin(a1)));
//
//	double x3 = round(x1 + (l * sqrt(2) * cos(a1 + Pi / 4)));
//	double y3 = round(y1 - (l * sqrt(2) * sin(a1 + Pi / 4)));
//
//	double x4 = round(x1 + (l * cos(a1 + Pi / 2)));
//	double y4 = round(y1 - (l * sin(a1 + Pi / 2)));
//
//	g->DrawLine(Pens::Red, (int)x1, (int)y1, (int)x2, (int)y2);
//	g->DrawLine(Pens::Brown, (int)x2, (int)y2, (int)x3, (int)y3);
//	g->DrawLine(Pens::Red, (int)x3, (int)y3, (int)x4, (int)y4);
//	g->DrawLine(Pens::Brown, (int)x4, (int)y4, (int)x1, (int)y1);
//
//}
//private:System::Void Draw(double x, double y, double l, double a)
//{
//	if (l > 0)
//	{
//		Rect(x, y, l, a);
//		Draw(x - l * sin(a),y - l * cos(a),	l / sqrt(2),a + Pi / 4);
//		Draw(x - l * sin(a) + l / sqrt(2) * cos(a + Pi / 4),y - l * cos(a) - l / sqrt(2) * sin(a + Pi / 4),l / sqrt(2),a - Pi / 4);
//	}
//}

//квадратное
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = Graphics::FromHwnd(this->Handle);
	int n = Convert::ToInt16(textBox1->Text);
	if (radioButton1->Checked) {
		g->FillRectangle(Brushes::White, 0, 0, 500, 500);
		g->DrawRectangle(Pens::White, 0, 0, 500, 500);
		H_Fr(150, 228, 150, n);
	}
	if (radioButton2->Checked) {
		g->FillRectangle(Brushes::White, 0, 0, 500, 500);
		g->DrawRectangle(Pens::White, 0, 0, 500, 500);
		Serp_Fr(0, 300, 300 / 2, 0, 300, 300, n);
	}
	if (radioButton3->Checked) {
		g->FillRectangle(Brushes::White, 0, 0, 500, 500);
		Levy_Fr(150, 350, 250, 250, n);
	}
	if (radioButton4->Checked) {
		g->FillRectangle(Brushes::White, 0, 0, 500, 500);
		//Draw(200, 350, n, 0);
		Draw(320.0, 460.0, 200.0, Pi / 2.0);
		//Draw(280, 460, 100, 0);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	textBox1 -> Text = "10";
	radioButton1->Checked=true;
}
};
}
