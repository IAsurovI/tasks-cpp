#pragma once
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <iostream>
#include <string>
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
struct Tovar {
	std::string name;
	int quantity;
	int price;
	int day;
	int month;
	int year;
};
std::vector<Tovar> Tv;
std::vector<Tovar> Tv1;
Tovar t2;

namespace lab18p2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Товар;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private:String^ filename;
	private: int index = 0;
	private: int index1 = 0;


	private: System::Windows::Forms::ToolStripMenuItem^ operationsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ diagramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ referenceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ LookTvToolStripMenuItem;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button5;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ToolStripMenuItem^ tovListToolStripMenuItem;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label5;
















	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Товар = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operationsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->diagramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LookTvToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tovListToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->referenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// Товар
			// 
			this->Товар->AutoSize = true;
			this->Товар->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Товар->Location = System::Drawing::Point(284, 25);
			this->Товар->Name = L"Товар";
			this->Товар->Size = System::Drawing::Size(77, 25);
			this->Товар->TabIndex = 0;
			this->Товар->Text = L"Товар";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Назва товару";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Кількість одиниць товару";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Вартість товару";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Дата надходження товару";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(196, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(196, 39);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(196, 65);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(196, 91);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox4_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(221, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L">>>";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(9, 117);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"<<<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->operationsToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(693, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->closeToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->fileToolStripMenuItem->Text = L"Файл";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->openToolStripMenuItem->Text = L"Відкрити";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeToolStripMenuItem.Image")));
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->closeToolStripMenuItem->Text = L"Закрити";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->saveToolStripMenuItem->Text = L"Зберегти";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->exitToolStripMenuItem->Text = L"Вийти";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// operationsToolStripMenuItem
			// 
			this->operationsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->diagramToolStripMenuItem,
					this->LookTvToolStripMenuItem, this->tovListToolStripMenuItem
			});
			this->operationsToolStripMenuItem->Name = L"operationsToolStripMenuItem";
			this->operationsToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->operationsToolStripMenuItem->Text = L"Операції";
			// 
			// diagramToolStripMenuItem
			// 
			this->diagramToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"diagramToolStripMenuItem.Image")));
			this->diagramToolStripMenuItem->Name = L"diagramToolStripMenuItem";
			this->diagramToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->diagramToolStripMenuItem->Text = L"Діаграма";
			this->diagramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::diagramToolStripMenuItem_Click);
			// 
			// LookTvToolStripMenuItem
			// 
			this->LookTvToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LookTvToolStripMenuItem.Image")));
			this->LookTvToolStripMenuItem->Name = L"LookTvToolStripMenuItem";
			this->LookTvToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->LookTvToolStripMenuItem->Text = L"Перегляд товарів";
			this->LookTvToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::LookTvToolStripMenuItem_Click);
			// 
			// tovListToolStripMenuItem
			// 
			this->tovListToolStripMenuItem->Name = L"tovListToolStripMenuItem";
			this->tovListToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->tovListToolStripMenuItem->Text = L"Список товарів";
			this->tovListToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::tovListToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->referenceToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->helpToolStripMenuItem->Text = L"Допомога";
			// 
			// referenceToolStripMenuItem
			// 
			this->referenceToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"referenceToolStripMenuItem.Image")));
			this->referenceToolStripMenuItem->Name = L"referenceToolStripMenuItem";
			this->referenceToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->referenceToolStripMenuItem->Text = L"Довідка";
			this->referenceToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::referenceToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"aboutToolStripMenuItem.Image")));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->aboutToolStripMenuItem->Text = L"Про програму";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(6, 19);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(332, 131);
			this->chart1->TabIndex = 12;
			this->chart1->Text = L"chart1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(221, 94);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 23;
			this->button3->Text = L">>>";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(9, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"<<<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(196, 68);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 21;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(102, 125);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 20;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(196, 42);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(196, 16);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 18;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox8_KeyPress);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Дата надходження товару";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(90, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Вартість товару:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(135, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Кількість одиниць товару";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Назва товару";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(221, 123);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Пошук";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Location = System::Drawing::Point(22, 235);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(303, 153);
			this->groupBox1->TabIndex = 27;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Пошук товару за вартістю:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->chart1);
			this->groupBox2->Location = System::Drawing::Point(326, 53);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(344, 153);
			this->groupBox2->TabIndex = 28;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Діаграма вартості товарів:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Location = System::Drawing::Point(22, 53);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(303, 153);
			this->groupBox3->TabIndex = 29;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Перегляд товару:";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(326, 241);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(338, 124);
			this->listBox1->TabIndex = 30;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(329, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(693, 404);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Товар);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Товар";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	/*TextBox*/
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		char number = e->KeyChar;
		if ((e->KeyChar <= 47 || e->KeyChar >= 58) && number != 8) e->Handled = true;
	}
	private: System::Void textBox7_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	private: System::Void textBox8_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}
	/*endTextBox*/
	/*Buttons*/
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index < Tv.size() - 1)
		{
			index++;
			button1->Enabled = true;
			button2->Enabled = true;

		}
		else button1->Enabled = false;

		Reload();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index > 0)
		{
			button1->Enabled = true;
			button2->Enabled = true;

			index--;
		}
		else 		button2->Enabled = false;

		Reload();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index1 < Tv1.size() - 1)
		{
			index1++;
			button3->Enabled = true;
			button4->Enabled = true;

		}
		else button3->Enabled = false;

		Reload1();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (index1 > 0)
		{
			button3->Enabled = true;
			button4->Enabled = true;

			index1--;
		}
		else button4->Enabled = false;

		Reload1();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text->Length != 0) {
				button3->Enabled = true;
				Tv1.clear();
				Filter();
				Reload1();
			}
		}
	/*endButtons*/
	private: System::Void Reload() {
		String^ str1 = gcnew String(Tv[index].name.c_str());
		textBox1->Text = str1;
		textBox2->Text = Tv[index].quantity.ToString();
		textBox3->Text = Tv[index].price.ToString();
		String^ date = gcnew String(Tv[index].day + "." + Tv[index].month + "." + Tv[index].year);
		textBox4->Text = date;

	}
	private: System::Void Reload1() {
		if (Tv1.size() != 0) {
			String^ str11 = gcnew String(Tv1[index1].name.c_str());
			textBox8->Text = str11;
			textBox7->Text = Tv1[index1].quantity.ToString();
			String^ date1 = gcnew String(Tv1[index1].day + "." + Tv1[index1].month + "." + Tv1[index1].year);
			textBox5->Text = date1;
		}
		else {
			textBox8->Clear();
			textBox7->Clear();
			textBox5->Clear();
			button3->Enabled = false;
			button4->Enabled = false;
		}

	}
	private: System::Void Filter() {
		int number = Convert::ToInt16(textBox6->Text);
		for (int i = 0; i < Tv.size(); i++) {
			if (Tv[i].price == number) {
				t2.name = Tv[i].name;
				t2.quantity= Tv[i].quantity;
				t2.day = Tv[i].day;
				t2.month = Tv[i].month;
				t2.year = Tv[i].year;
				Tv1.push_back(t2);
			}
		}
	}
	private: System::Void closefile() {
		//label
		groupBox1->Visible = false;
		groupBox2->Visible = false;
		listBox1->Visible = false;

		//label
		//textBox
		textBox5->Visible = false;
		textBox6->Visible = false;
		textBox7->Visible = false;
		textBox8->Visible = false;
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
		textBox8->Clear();
		//textBox
		//button
		button1->Enabled = false;
		button2->Enabled = false;
		
		//button
		//index
		index = 0;
		index1 = 0;
		//index
		//vector
		Tv.clear();
		Tv1.clear();
		listBox1->ClearSelected();//ДОБАВИТЬ ОЧИСТКУ ЛИСТБОКСА
		//vector
	}
	private: System::Void initializeDiagram() {
		chart1->Series[0]->Points->Clear();
		std::ofstream fa;
		fa.open("E://lab18p2//Diagram.txt");
		for (int i = 0; i < Tv.size(); i++)
		{
			chart1->Series[0]->Points->AddXY(i + 1, Tv[i].price);
			fa << Tv[i].price << ' ';
		}
		fa.close();
		/*chart1->Series[0]->Points->Clear();
		std::ofstream f;
		f << Convert::ToInt16(Tv.size()) << "\n";
		f.close();
		std::ofstream fa;
		fa.open("E://lab18p2//Diagram.txt", std::ios::app);
		for (int i = 0; i < Tv.size(); i++)
		{
			fa << Tv[i].price << ' ';
		}
		fa.close();*/
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ OF = gcnew OpenFileDialog();
		OF->ShowDialog();
		filename = OF->FileName;
		System::String^ managed = filename;
		std::string filename = msclr::interop::marshal_as < std::string>(managed);

		std::ifstream f;
		f.open(filename);
		char r[1];
		int s = 0;
		Tovar t1;
		while (!f.eof())
		{
			getline(f, t1.name);
			f >> t1.quantity;
			f >> t1.price;
			f >> t1.day;
			f >> t1.month;
			f >> t1.year;
			f.getline(r, 1, '\n');
			Tv.push_back(t1);
		}
		f.close();
		button1->Enabled = true;
		initializeDiagram();
		Reload();

		chart1->Visible = true;
		chart1->Visible = false;


	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		closefile();
		Close();
	}
	private: System::Void closeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		closefile();

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Visible = false;
		groupBox2->Visible = false;
		button1->Enabled = false;
		button2->Enabled = false; 
		button3->Enabled = false;
		button4->Enabled = false;
		groupBox1->Visible = false;
		
	}
	private: System::Void diagramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Visible = true;
		groupBox2->Visible = true;
		/*MyForm3^ f3 = gcnew MyForm3;
		f3->Show();
		initializeDiagram();*/
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ f1 = gcnew MyForm1;
		f1->Show();
	}
	private: System::Void referenceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f2 = gcnew MyForm2;
		f2->Show();
	}
	private: System::Void LookTvToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Visible = true;
		/*button3->Visible = true;
		button4->Visible = true;
		button5->Visible = true;*/
		button3->Enabled = false;
		button4->Enabled = false;
		button5->Enabled = true;
		textBox5->Visible = true;
		textBox6->Visible = true;
		textBox7->Visible = true;
		textBox8->Visible = true;
	}
	private: System::Void tovListToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Visible = true;
		int srznach = 0;
		for (int i = 0; i < Tv.size(); i++) 
		{
			srznach += Tv[i].price;
			listBox1->Items->Add(gcnew String("•") + gcnew String(Tv[i].name.c_str());
		}
		srznach /= Convert::ToInt16(Tv.size());
		label5->Text=(gcnew String("Середня вартість товарів: " + srznach));
	}
};
}
