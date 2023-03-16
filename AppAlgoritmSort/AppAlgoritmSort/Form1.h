#pragma once
#include "Burbuja.hpp"
#include<iostream>    
#include<array> 
#include <ctime> 
#include <fstream>
#include <string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace std;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
			unsigned t0, t1;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ paTitulo;
	protected:
	private: System::Windows::Forms::Panel^ paBooton;
	private: System::Windows::Forms::Panel^ paMedio;
	private: System::Windows::Forms::Button^ btnEjecutar;






	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ paDetalle;









	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Panel^ paLateralIzquierdo;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblTiempoBurbuja;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBuubleSort;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnLeerCSV;

	private: System::Windows::Forms::GroupBox^ gbTipo;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ rbPalabras;
	private: System::Windows::Forms::RadioButton^ rbNumeros;
	private: System::Windows::Forms::Panel^ paListas;
	private: System::Windows::Forms::ListBox^ lbDesordenado;
	private: System::Windows::Forms::ListBox^ lbOrdenado;
	private: System::Windows::Forms::Panel^ paListaCabecera;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;


































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->paTitulo = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->paBooton = (gcnew System::Windows::Forms::Panel());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->paMedio = (gcnew System::Windows::Forms::Panel());
			this->paDetalle = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->paLateralIzquierdo = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoBurbuja = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBuubleSort = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLeerCSV = (gcnew System::Windows::Forms::Button());
			this->gbTipo = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->rbPalabras = (gcnew System::Windows::Forms::RadioButton());
			this->rbNumeros = (gcnew System::Windows::Forms::RadioButton());
			this->paListas = (gcnew System::Windows::Forms::Panel());
			this->lbDesordenado = (gcnew System::Windows::Forms::ListBox());
			this->lbOrdenado = (gcnew System::Windows::Forms::ListBox());
			this->paListaCabecera = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->paTitulo->SuspendLayout();
			this->paBooton->SuspendLayout();
			this->paMedio->SuspendLayout();
			this->paDetalle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->paLateralIzquierdo->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->gbTipo->SuspendLayout();
			this->paListas->SuspendLayout();
			this->paListaCabecera->SuspendLayout();
			this->SuspendLayout();
			// 
			// paTitulo
			// 
			this->paTitulo->BackColor = System::Drawing::Color::SteelBlue;
			this->paTitulo->Controls->Add(this->label3);
			this->paTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->paTitulo->Location = System::Drawing::Point(0, 0);
			this->paTitulo->Name = L"paTitulo";
			this->paTitulo->Size = System::Drawing::Size(1342, 47);
			this->paTitulo->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(512, 7);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(357, 31);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Algoritmos de Ordenamiento";
			// 
			// paBooton
			// 
			this->paBooton->Controls->Add(this->btnEjecutar);
			this->paBooton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->paBooton->Location = System::Drawing::Point(0, 616);
			this->paBooton->Name = L"paBooton";
			this->paBooton->Size = System::Drawing::Size(1342, 46);
			this->paBooton->TabIndex = 2;
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::Color::SteelBlue;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->ForeColor = System::Drawing::Color::White;
			this->btnEjecutar->Location = System::Drawing::Point(12, 3);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(128, 40);
			this->btnEjecutar->TabIndex = 2;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &Form1::btnEjecutar_Click);
			// 
			// paMedio
			// 
			this->paMedio->Controls->Add(this->paDetalle);
			this->paMedio->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paMedio->Location = System::Drawing::Point(0, 47);
			this->paMedio->Name = L"paMedio";
			this->paMedio->Size = System::Drawing::Size(1342, 569);
			this->paMedio->TabIndex = 3;
			// 
			// paDetalle
			// 
			this->paDetalle->Controls->Add(this->chart1);
			this->paDetalle->Controls->Add(this->paLateralIzquierdo);
			this->paDetalle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->paDetalle->Location = System::Drawing::Point(0, 0);
			this->paDetalle->Name = L"paDetalle";
			this->paDetalle->Size = System::Drawing::Size(1342, 569);
			this->paDetalle->TabIndex = 8;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(606, 0);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(736, 569);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// paLateralIzquierdo
			// 
			this->paLateralIzquierdo->Controls->Add(this->groupBox1);
			this->paLateralIzquierdo->Controls->Add(this->panel1);
			this->paLateralIzquierdo->Controls->Add(this->paListas);
			this->paLateralIzquierdo->Dock = System::Windows::Forms::DockStyle::Left;
			this->paLateralIzquierdo->Location = System::Drawing::Point(0, 0);
			this->paLateralIzquierdo->Name = L"paLateralIzquierdo";
			this->paLateralIzquierdo->Size = System::Drawing::Size(606, 569);
			this->paLateralIzquierdo->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->lblTiempoBurbuja);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btnBuubleSort);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(0, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(352, 488);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Algoritmos";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(230, 440);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(100, 23);
			this->label28->TabIndex = 36;
			this->label28->Text = L"0";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1, 440);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(96, 18);
			this->label29->TabIndex = 35;
			this->label29->Text = L"Bubble Sort";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::SteelBlue;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(141, 435);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(68, 30);
			this->button12->TabIndex = 34;
			this->button12->Tag = L"BobbleSort";
			this->button12->Text = L"Ejecutar";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(230, 404);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(100, 23);
			this->label26->TabIndex = 33;
			this->label26->Text = L"0";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1, 404);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(96, 18);
			this->label27->TabIndex = 32;
			this->label27->Text = L"Bubble Sort";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::SteelBlue;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(141, 399);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(68, 30);
			this->button11->TabIndex = 31;
			this->button11->Tag = L"BobbleSort";
			this->button11->Text = L"Ejecutar";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(230, 368);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(100, 23);
			this->label24->TabIndex = 30;
			this->label24->Text = L"0";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(1, 368);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(96, 18);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Bubble Sort";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::SteelBlue;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(141, 363);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 30);
			this->button10->TabIndex = 28;
			this->button10->Tag = L"BobbleSort";
			this->button10->Text = L"Ejecutar";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(230, 332);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(100, 23);
			this->label22->TabIndex = 27;
			this->label22->Text = L"0";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(1, 332);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(96, 18);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Bubble Sort";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::SteelBlue;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(141, 327);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(68, 30);
			this->button9->TabIndex = 25;
			this->button9->Tag = L"BobbleSort";
			this->button9->Text = L"Ejecutar";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(230, 296);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(100, 23);
			this->label20->TabIndex = 24;
			this->label20->Text = L"0";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1, 296);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(96, 18);
			this->label21->TabIndex = 23;
			this->label21->Text = L"Bubble Sort";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::SteelBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(141, 291);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 30);
			this->button8->TabIndex = 22;
			this->button8->Tag = L"BobbleSort";
			this->button8->Text = L"Ejecutar";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(230, 260);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(100, 23);
			this->label18->TabIndex = 21;
			this->label18->Text = L"0";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1, 260);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 18);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Bubble Sort";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::SteelBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(141, 255);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 30);
			this->button7->TabIndex = 19;
			this->button7->Tag = L"BobbleSort";
			this->button7->Text = L"Ejecutar";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(230, 224);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 23);
			this->label16->TabIndex = 18;
			this->label16->Text = L"0";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1, 224);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(96, 18);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Bubble Sort";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::SteelBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(141, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(68, 30);
			this->button6->TabIndex = 16;
			this->button6->Tag = L"BobbleSort";
			this->button6->Text = L"Ejecutar";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(230, 188);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 23);
			this->label14->TabIndex = 15;
			this->label14->Text = L"0";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1, 188);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(96, 18);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Bubble Sort";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::SteelBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(141, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(68, 30);
			this->button5->TabIndex = 13;
			this->button5->Tag = L"BobbleSort";
			this->button5->Text = L"Ejecutar";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(230, 152);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 23);
			this->label12->TabIndex = 12;
			this->label12->Text = L"0";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1, 152);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 18);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Bubble Sort";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SteelBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(141, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(68, 30);
			this->button4->TabIndex = 10;
			this->button4->Tag = L"BobbleSort";
			this->button4->Text = L"Ejecutar";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(230, 116);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 23);
			this->label10->TabIndex = 9;
			this->label10->Text = L"0";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1, 116);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 18);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Bubble Sort";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SteelBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(141, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(68, 30);
			this->button3->TabIndex = 7;
			this->button3->Tag = L"BobbleSort";
			this->button3->Text = L"Ejecutar";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(230, 80);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 23);
			this->label8->TabIndex = 6;
			this->label8->Text = L"0";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 18);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Bubble Sort";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::SteelBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(141, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 30);
			this->button2->TabIndex = 4;
			this->button2->Tag = L"BobbleSort";
			this->button2->Text = L"Ejecutar";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// lblTiempoBurbuja
			// 
			this->lblTiempoBurbuja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoBurbuja->Location = System::Drawing::Point(230, 44);
			this->lblTiempoBurbuja->Name = L"lblTiempoBurbuja";
			this->lblTiempoBurbuja->Size = System::Drawing::Size(100, 23);
			this->lblTiempoBurbuja->TabIndex = 3;
			this->lblTiempoBurbuja->Text = L"0";
			this->lblTiempoBurbuja->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(220, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Tiempo(Seg.)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Bubble Sort";
			// 
			// btnBuubleSort
			// 
			this->btnBuubleSort->BackColor = System::Drawing::Color::SteelBlue;
			this->btnBuubleSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuubleSort->ForeColor = System::Drawing::Color::White;
			this->btnBuubleSort->Location = System::Drawing::Point(141, 39);
			this->btnBuubleSort->Name = L"btnBuubleSort";
			this->btnBuubleSort->Size = System::Drawing::Size(68, 30);
			this->btnBuubleSort->TabIndex = 0;
			this->btnBuubleSort->Tag = L"BobbleSort";
			this->btnBuubleSort->Text = L"Ejecutar";
			this->btnBuubleSort->UseVisualStyleBackColor = false;
			this->btnBuubleSort->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnLeerCSV);
			this->panel1->Controls->Add(this->gbTipo);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 81);
			this->panel1->TabIndex = 4;
			// 
			// btnLeerCSV
			// 
			this->btnLeerCSV->Location = System::Drawing::Point(234, 23);
			this->btnLeerCSV->Name = L"btnLeerCSV";
			this->btnLeerCSV->Size = System::Drawing::Size(102, 40);
			this->btnLeerCSV->TabIndex = 1;
			this->btnLeerCSV->Text = L"button1";
			this->btnLeerCSV->UseVisualStyleBackColor = true;
			this->btnLeerCSV->Click += gcnew System::EventHandler(this, &Form1::btnLeerCSV_Click);
			// 
			// gbTipo
			// 
			this->gbTipo->Controls->Add(this->label4);
			this->gbTipo->Controls->Add(this->textBox1);
			this->gbTipo->Controls->Add(this->rbPalabras);
			this->gbTipo->Controls->Add(this->rbNumeros);
			this->gbTipo->Location = System::Drawing::Point(12, 11);
			this->gbTipo->Name = L"gbTipo";
			this->gbTipo->Size = System::Drawing::Size(197, 61);
			this->gbTipo->TabIndex = 0;
			this->gbTipo->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(92, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Cantidad";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 2;
			// 
			// rbPalabras
			// 
			this->rbPalabras->AutoSize = true;
			this->rbPalabras->Location = System::Drawing::Point(6, 35);
			this->rbPalabras->Name = L"rbPalabras";
			this->rbPalabras->Size = System::Drawing::Size(66, 17);
			this->rbPalabras->TabIndex = 1;
			this->rbPalabras->TabStop = true;
			this->rbPalabras->Text = L"Palabras";
			this->rbPalabras->UseVisualStyleBackColor = true;
			// 
			// rbNumeros
			// 
			this->rbNumeros->AutoSize = true;
			this->rbNumeros->Location = System::Drawing::Point(6, 12);
			this->rbNumeros->Name = L"rbNumeros";
			this->rbNumeros->Size = System::Drawing::Size(67, 17);
			this->rbNumeros->TabIndex = 0;
			this->rbNumeros->TabStop = true;
			this->rbNumeros->Text = L"Números";
			this->rbNumeros->UseVisualStyleBackColor = true;
			// 
			// paListas
			// 
			this->paListas->Controls->Add(this->lbDesordenado);
			this->paListas->Controls->Add(this->lbOrdenado);
			this->paListas->Controls->Add(this->paListaCabecera);
			this->paListas->Dock = System::Windows::Forms::DockStyle::Right;
			this->paListas->Location = System::Drawing::Point(352, 0);
			this->paListas->Name = L"paListas";
			this->paListas->Size = System::Drawing::Size(254, 569);
			this->paListas->TabIndex = 3;
			// 
			// lbDesordenado
			// 
			this->lbDesordenado->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lbDesordenado->FormattingEnabled = true;
			this->lbDesordenado->Location = System::Drawing::Point(0, 34);
			this->lbDesordenado->Name = L"lbDesordenado";
			this->lbDesordenado->Size = System::Drawing::Size(126, 535);
			this->lbDesordenado->TabIndex = 4;
			// 
			// lbOrdenado
			// 
			this->lbOrdenado->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->lbOrdenado->Dock = System::Windows::Forms::DockStyle::Right;
			this->lbOrdenado->FormattingEnabled = true;
			this->lbOrdenado->Location = System::Drawing::Point(126, 34);
			this->lbOrdenado->Name = L"lbOrdenado";
			this->lbOrdenado->Size = System::Drawing::Size(128, 535);
			this->lbOrdenado->TabIndex = 2;
			// 
			// paListaCabecera
			// 
			this->paListaCabecera->Controls->Add(this->label2);
			this->paListaCabecera->Controls->Add(this->label1);
			this->paListaCabecera->Dock = System::Windows::Forms::DockStyle::Top;
			this->paListaCabecera->Location = System::Drawing::Point(0, 0);
			this->paListaCabecera->Name = L"paListaCabecera";
			this->paListaCabecera->Size = System::Drawing::Size(254, 34);
			this->paListaCabecera->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(5, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Desordenado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ordenado";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1342, 662);
			this->Controls->Add(this->paMedio);
			this->Controls->Add(this->paBooton);
			this->Controls->Add(this->paTitulo);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Algoritmos de Ordenamiento";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->paTitulo->ResumeLayout(false);
			this->paTitulo->PerformLayout();
			this->paBooton->ResumeLayout(false);
			this->paMedio->ResumeLayout(false);
			this->paDetalle->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->paLateralIzquierdo->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->gbTipo->ResumeLayout(false);
			this->gbTipo->PerformLayout();
			this->paListas->ResumeLayout(false);
			this->paListaCabecera->ResumeLayout(false);
			this->paListaCabecera->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnEjecutar_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if(this->lbRespuesta->Text=="Texto1")
			this->lbRespuesta->Text = "Texto2";
		else
			this->lbRespuesta->Text = "Texto1";
		*/
		t0 = clock();
		Burbuja _burbuja;
		int  arr[] = { 5,4,30,21,8,0 };		
		int len = end(arr) - begin(arr);
		_burbuja.bubble_sort(arr,len);


		string ArrPalabras[] = { "oscar", "abel","silvia","juan","hilda" };
		int len_ = end(ArrPalabras) - begin(ArrPalabras);
		_burbuja.bubble_sort_Palabras(ArrPalabras, len_);

		for each (string var in ArrPalabras)
		{
			String^ str2 = gcnew String(var.c_str());
			lbOrdenado->Items->Add(str2);
		}
		t1 = clock();
		double time = (double(t1 - t0) / CLOCKS_PER_SEC);
		lblTiempoBurbuja->Text = time.ToString();
		MessageBox::Show("se dio click");

	}
	private: System::Void btnBuubleSort_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ bu = (Button^)sender;
		String^ tag = bu->Tag->ToString();
		if (tag == "BobbleSort"){

		}
		else if (tag == "BuubleSort") {

		}

		
		
	}
	private: System::Void btnLeerCSV_Click(System::Object^ sender, System::EventArgs^ e) {
		int Arr[23];
		Leer(Arr,23);
	}
		   void Leer(int arr[],int tam)
		   {
			   try
			   {
				   std::ifstream  fin;				   
				   std::string line;
				   fin.open("..\\data\\data_num_int.csv");
				   int i = 0;
				   while (!fin.eof() && tam>i)
				   {
					   std::getline(fin, line);
					   arr[i] = stoi(line);
					   i++;
				   }
			   }
			   catch (const std::exception&)
			   {

			   }
		   }
};
}
