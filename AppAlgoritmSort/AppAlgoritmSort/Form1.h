#pragma once

#include "Burbuja.hpp"
#include "Counti.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "RadixSort.h"
#include "HeapSort.h"
#include<iostream>    
#include<array> 
#include <ctime> 
#include <fstream>
#include <string>


using namespace System;
using namespace System::Configuration;

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
		string* ArrayPalabras;
		int* ArrayNumeros;		

	unsigned t0, t1;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ button1;
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
	private: System::Windows::Forms::Label^ lblTiempoStoggeSort;

	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ lblTiempoRandomizedSort;

	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ lblTiempoBinSort;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ lblTiempoCountSort;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ lblTiempoHeapSort;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ lblTiempoRadixSort;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ lblTiempoBucketSort;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ lblTiempoQuickSort;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ lblTiempoMergeSort;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ lblTiempoInsertSort;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ lblTiempoShellSort;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblTiempoBubbleSort;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnBuubleSort;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnLeerCSV;

	private: System::Windows::Forms::GroupBox^ gbTipo;
	private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ tbCantidad;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->paTitulo = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->paBooton = (gcnew System::Windows::Forms::Panel());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->paMedio = (gcnew System::Windows::Forms::Panel());
			this->paDetalle = (gcnew System::Windows::Forms::Panel());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->paLateralIzquierdo = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTiempoStoggeSort = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoRandomizedSort = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoBinSort = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoCountSort = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoHeapSort = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoRadixSort = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoBucketSort = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoQuickSort = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoMergeSort = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoInsertSort = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoShellSort = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblTiempoBubbleSort = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnBuubleSort = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnLeerCSV = (gcnew System::Windows::Forms::Button());
			this->gbTipo = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbCantidad = (gcnew System::Windows::Forms::TextBox());
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
			this->paBooton->Controls->Add(this->btnLimpiar);
			this->paBooton->Controls->Add(this->button1);
			this->paBooton->Controls->Add(this->btnEjecutar);
			this->paBooton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->paBooton->Location = System::Drawing::Point(0, 616);
			this->paBooton->Name = L"paBooton";
			this->paBooton->Size = System::Drawing::Size(1342, 46);
			this->paBooton->TabIndex = 2;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->Location = System::Drawing::Point(1185, 3);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(119, 39);
			this->btnLimpiar->TabIndex = 4;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Form1::btnLimpiar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(618, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
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
			this->btnEjecutar->Visible = false;
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
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(606, 0);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Color = System::Drawing::Color::Blue;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"BobbleSort";
			series1->Name = L"SeriesBurbuja";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Shell Sort";
			series2->Name = L"SeriesShellSort";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Color = System::Drawing::Color::Black;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Insert Sort";
			series3->Name = L"SeriesInsertSort";
			series3->YValuesPerPoint = 2;
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::Green;
			series4->Legend = L"Legend1";
			series4->Name = L"SeriesMergeSort";
			series5->BorderWidth = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series5->Legend = L"Legend1";
			series5->LegendText = L"Quick Sort";
			series5->Name = L"SeriesQuickSort";
			series6->BorderWidth = 2;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series6->Legend = L"Legend1";
			series6->LegendText = L"Bucket Sort";
			series6->Name = L"SeriesBucketSort";
			series7->BorderWidth = 2;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series7->Legend = L"Legend1";
			series7->LegendText = L"Radix Sort";
			series7->Name = L"SeriesRadixSort";
			series8->BorderWidth = 2;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->Color = System::Drawing::Color::DarkMagenta;
			series8->Legend = L"Legend1";
			series8->Name = L"SeriesHeapSort";
			series9->BorderWidth = 2;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->Color = System::Drawing::Color::Fuchsia;
			series9->Legend = L"Legend1";
			series9->LegendText = L"Count Sort";
			series9->Name = L"SeriesCountSort";
			series10->BorderWidth = 2;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->Color = System::Drawing::Color::Lime;
			series10->Legend = L"Legend1";
			series10->LegendText = L"Bin Sort";
			series10->Name = L"SeriesBinSort";
			series11->BorderWidth = 2;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->Color = System::Drawing::Color::Olive;
			series11->Legend = L"Legend1";
			series11->LegendText = L"Randomized";
			series11->Name = L"SeriesRandomized";
			series12->BorderWidth = 2;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->Color = System::Drawing::Color::Gray;
			series12->Legend = L"Legend1";
			series12->LegendText = L"Stogge Sort";
			series12->Name = L"SeriesStoggeSort";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Series->Add(series7);
			this->chart1->Series->Add(series8);
			this->chart1->Series->Add(series9);
			this->chart1->Series->Add(series10);
			this->chart1->Series->Add(series11);
			this->chart1->Series->Add(series12);
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
			this->groupBox1->Controls->Add(this->lblTiempoStoggeSort);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->lblTiempoRandomizedSort);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->lblTiempoBinSort);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->button10);
			this->groupBox1->Controls->Add(this->lblTiempoCountSort);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->button9);
			this->groupBox1->Controls->Add(this->lblTiempoHeapSort);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->lblTiempoRadixSort);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->lblTiempoBucketSort);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->lblTiempoQuickSort);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->lblTiempoMergeSort);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->lblTiempoInsertSort);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->lblTiempoShellSort);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->lblTiempoBubbleSort);
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
			// lblTiempoStoggeSort
			// 
			this->lblTiempoStoggeSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoStoggeSort->Location = System::Drawing::Point(230, 440);
			this->lblTiempoStoggeSort->Name = L"lblTiempoStoggeSort";
			this->lblTiempoStoggeSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoStoggeSort->TabIndex = 36;
			this->lblTiempoStoggeSort->Text = L"0";
			this->lblTiempoStoggeSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(1, 440);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(98, 18);
			this->label29->TabIndex = 35;
			this->label29->Text = L"Stogge Sort";
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
			this->button12->Tag = L"StoggeSort";
			this->button12->Text = L"Ejecutar";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoRandomizedSort
			// 
			this->lblTiempoRandomizedSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTiempoRandomizedSort->Location = System::Drawing::Point(230, 404);
			this->lblTiempoRandomizedSort->Name = L"lblTiempoRandomizedSort";
			this->lblTiempoRandomizedSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoRandomizedSort->TabIndex = 33;
			this->lblTiempoRandomizedSort->Text = L"0";
			this->lblTiempoRandomizedSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(1, 404);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(102, 18);
			this->label27->TabIndex = 32;
			this->label27->Text = L"Randomized";
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
			this->button11->Tag = L"Randomized";
			this->button11->Text = L"Ejecutar";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoBinSort
			// 
			this->lblTiempoBinSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoBinSort->Location = System::Drawing::Point(230, 368);
			this->lblTiempoBinSort->Name = L"lblTiempoBinSort";
			this->lblTiempoBinSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoBinSort->TabIndex = 30;
			this->lblTiempoBinSort->Text = L"0";
			this->lblTiempoBinSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(1, 368);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(69, 18);
			this->label25->TabIndex = 29;
			this->label25->Text = L"Bin Sort";
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
			this->button10->Tag = L"BinSort";
			this->button10->Text = L"Ejecutar";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoCountSort
			// 
			this->lblTiempoCountSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoCountSort->Location = System::Drawing::Point(230, 332);
			this->lblTiempoCountSort->Name = L"lblTiempoCountSort";
			this->lblTiempoCountSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoCountSort->TabIndex = 27;
			this->lblTiempoCountSort->Text = L"0";
			this->lblTiempoCountSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(1, 332);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(90, 18);
			this->label23->TabIndex = 26;
			this->label23->Text = L"Count Sort";
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
			this->button9->Tag = L"CountSort";
			this->button9->Text = L"Ejecutar";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoHeapSort
			// 
			this->lblTiempoHeapSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoHeapSort->Location = System::Drawing::Point(230, 296);
			this->lblTiempoHeapSort->Name = L"lblTiempoHeapSort";
			this->lblTiempoHeapSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoHeapSort->TabIndex = 24;
			this->lblTiempoHeapSort->Text = L"0";
			this->lblTiempoHeapSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1, 296);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(84, 18);
			this->label21->TabIndex = 23;
			this->label21->Text = L"Heap Sort";
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
			this->button8->Tag = L"HeapSort";
			this->button8->Text = L"Ejecutar";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoRadixSort
			// 
			this->lblTiempoRadixSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoRadixSort->Location = System::Drawing::Point(230, 260);
			this->lblTiempoRadixSort->Name = L"lblTiempoRadixSort";
			this->lblTiempoRadixSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoRadixSort->TabIndex = 21;
			this->lblTiempoRadixSort->Text = L"0";
			this->lblTiempoRadixSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1, 260);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(87, 18);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Radix Sort";
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
			this->button7->Tag = L"RadixSort";
			this->button7->Text = L"Ejecutar";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoBucketSort
			// 
			this->lblTiempoBucketSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoBucketSort->Location = System::Drawing::Point(230, 224);
			this->lblTiempoBucketSort->Name = L"lblTiempoBucketSort";
			this->lblTiempoBucketSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoBucketSort->TabIndex = 18;
			this->lblTiempoBucketSort->Text = L"0";
			this->lblTiempoBucketSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1, 224);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 18);
			this->label17->TabIndex = 17;
			this->label17->Text = L"Bucket Sort";
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
			this->button6->Tag = L"BucketSort";
			this->button6->Text = L"Ejecutar";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoQuickSort
			// 
			this->lblTiempoQuickSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoQuickSort->Location = System::Drawing::Point(230, 188);
			this->lblTiempoQuickSort->Name = L"lblTiempoQuickSort";
			this->lblTiempoQuickSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoQuickSort->TabIndex = 15;
			this->lblTiempoQuickSort->Text = L"0";
			this->lblTiempoQuickSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1, 188);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(89, 18);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Quick Sort";
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
			this->button5->Tag = L"QuickSort";
			this->button5->Text = L"Ejecutar";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoMergeSort
			// 
			this->lblTiempoMergeSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoMergeSort->Location = System::Drawing::Point(230, 152);
			this->lblTiempoMergeSort->Name = L"lblTiempoMergeSort";
			this->lblTiempoMergeSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoMergeSort->TabIndex = 12;
			this->lblTiempoMergeSort->Text = L"0";
			this->lblTiempoMergeSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1, 152);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 18);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Merge Sort";
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
			this->button4->Tag = L"MergeSort";
			this->button4->Text = L"Ejecutar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoInsertSort
			// 
			this->lblTiempoInsertSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoInsertSort->Location = System::Drawing::Point(230, 116);
			this->lblTiempoInsertSort->Name = L"lblTiempoInsertSort";
			this->lblTiempoInsertSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoInsertSort->TabIndex = 9;
			this->lblTiempoInsertSort->Text = L"0";
			this->lblTiempoInsertSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1, 116);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 18);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Insert Sort";
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
			this->button3->Tag = L"InsertSort";
			this->button3->Text = L"Ejecutar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoShellSort
			// 
			this->lblTiempoShellSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoShellSort->Location = System::Drawing::Point(230, 80);
			this->lblTiempoShellSort->Name = L"lblTiempoShellSort";
			this->lblTiempoShellSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoShellSort->TabIndex = 6;
			this->lblTiempoShellSort->Text = L"0";
			this->lblTiempoShellSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1, 80);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 18);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Shell Sort";
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
			this->button2->Tag = L"ShellSort";
			this->button2->Text = L"Ejecutar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::btnBuubleSort_Click);
			// 
			// lblTiempoBubbleSort
			// 
			this->lblTiempoBubbleSort->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempoBubbleSort->Location = System::Drawing::Point(230, 44);
			this->lblTiempoBubbleSort->Name = L"lblTiempoBubbleSort";
			this->lblTiempoBubbleSort->Size = System::Drawing::Size(100, 23);
			this->lblTiempoBubbleSort->TabIndex = 3;
			this->lblTiempoBubbleSort->Text = L"0";
			this->lblTiempoBubbleSort->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->btnLeerCSV->Visible = false;
			this->btnLeerCSV->Click += gcnew System::EventHandler(this, &Form1::btnLeerCSV_Click);
			// 
			// gbTipo
			// 
			this->gbTipo->Controls->Add(this->label4);
			this->gbTipo->Controls->Add(this->tbCantidad);
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
			// tbCantidad
			// 
			this->tbCantidad->Location = System::Drawing::Point(91, 32);
			this->tbCantidad->Name = L"tbCantidad";
			this->tbCantidad->Size = System::Drawing::Size(76, 20);
			this->tbCantidad->TabIndex = 2;
			this->tbCantidad->Text = L"10";
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
			this->rbNumeros->Checked = true;
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
		
		_burbuja.bubble_sort(arr, len);


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
		lblTiempoBubbleSort->Text = time.ToString();
		MessageBox::Show("se dio click");

	}
	private: System::Void btnBuubleSort_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Cursor->Current = Cursors::WaitCursor;
		

		Button^ bu = (Button^)sender;
		String^ tag = bu->Tag->ToString();

		lbDesordenado->Items->Clear();
		lbOrdenado->Items->Clear();

		string _tipo_dato = rbNumeros->Checked ? "NUMEROS" : "PALABRAS";
		String^ Cant = tbCantidad->Text;		
		string _StrCant = tostandartString(Cant);		
		int _cant = std::stoi(_StrCant);
		if (tag == "BobbleSort"){			
			AlgoritmoBurbuja(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: "+tag);
		}
		else if (tag == "ShellSort") {
			AlgoritmoShellSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "InsertSort") {
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "MergeSort") {
			AlgoritmoMergeSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "QuickSort") {
			AlgoritmoQuickSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "BucketSort") {
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "RadixSort") {
			AlgoritmoRadixSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "HeapSort") {
			AlgoritmoHeapSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "CountSort") {
			AlgoritmoCountSort(_tipo_dato, _cant);
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "BinSort") {
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "Randomized") {
			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}
		else if (tag == "StoggeSort") {

			MessageBox::Show("Finalizo el Algoritmo: " + tag);
		}

		this->Cursor->Current = Cursors::Default;
	}
	private: System::Void btnLeerCSV_Click(System::Object^ sender, System::EventArgs^ e) {
		float Arr[10];
		Leer1(Arr,10);
		//Leer(Arr,23);
	}
		   void Leer(float arr[],int tam)
		   {
			   try
			   {
				   std::ifstream  fin;				   
				   std::string line;

				   fin.open("V:\\Sistemas C++2023\\AppAlgoritmSort\\AppAlgoritmSort\\data\\data_num_float.csv");				   

				   int i = 0;
				   while (!fin.eof() && tam>i)
				   {
					   std::getline(fin, line);
					   arr[i] = stof(line);
					   i++;
				   }
			   }
			   catch (const std::exception&)
			   {

			   }
		   }
		   void Leer1(float arr[], int tam)
		   {
			   try
			   {
				   std::ifstream  fin;
				   std::string line;
				   //fin.open("V:\\Sistemas C++2023\\AppAlgoritmSort\\AppAlgoritmSort\\data\\data_num_float.csv");
				   fin.open("data\\data_num_float.csv");
				   //fin.open("..\\data\\data_num_float.csv");
				   int i = 0;
				   while (!fin.eof() && i<tam)
				   {
					   std::getline(fin, line);
					   arr[i] = stof(line);
					   i++;
				   }
			   }
			   catch (const std::exception&)
			   {

			   }
		   }
			private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
				this->chart1->Series["SeriesBurbuja"]->Points->AddXY(5,24);
				this->chart1->Series["SeriesBurbuja"]->Points->AddXY(10, 50);
				this->chart1->Series["SeriesBurbuja"]->Points->AddXY(25, 90);
				this->chart1->Series["SeriesBurbuja"]->Points->AddXY(30, 75);
				this->chart1->Series["SeriesBurbuja"]->Points->AddXY(80, 80);
			}
			//************************************************************************************************
			private: static string tostandartString(System::String^ string)
			{
				using System::Runtime::InteropServices::Marshal;
				System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
				char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
				std::string returnString(charPointer,string->Length);
				Marshal::FreeHGlobal(pointer);
				return returnString;

			}
			//************************************************************************************************
			//*****************************			LEER PALABRAS			*******************************
			void LeerPalabras(string arr[], int tamMax)
			{
				try
				{
					std::ifstream  fin;
					std::string line;
					fin.open("data\\data_palabras.csv");
					int i = 0;
					while (!fin.eof() && i < tamMax)
					{
						std::getline(fin, line);
						arr[i] = line;
						i++;
					}
				}
				catch (const std::exception&)
				{

				}
			}
			//************************************************************************************************
			//*****************************			LEER NUMEROS			*******************************
			void LeerNumeros(int arr[], int tamMax)
			{
				try
				{
					std::ifstream  fin;
					std::string line;					
					fin.open("data\\data_num_int.csv");					
					int i = 0;
					while (!fin.eof() && i < tamMax)
					{
						std::getline(fin, line);
						arr[i] = stof(line);
						i++;
					}
				}
				catch (const std::exception&)
				{

				}
			}
			//************************************************************************************************
			//*****************************			METODO BURBUJA			*******************************
			private:System::Void AlgoritmoBurbuja(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros,pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}					
					// Ordenar usando el algoritmo
					Burbuja _burbuja;
					t0 = clock();
					_burbuja.bubble_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);					
					// Mostrar Tiempo
					lblTiempoBubbleSort->Text = time.ToString();
					
					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesBurbuja"]->Points->AddXY(pCantidad, time);
					
				}
				else // PALABRAS
				{

				}
			}
			//*****************************			METODO BURBUJA			*******************************
			//************************************************************************************************
			// //************************************************************************************************
			//*****************************			METODO Shell			*******************************
			private:System::Void AlgoritmoShellSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					ShellSort _ShellSort;
					t0 = clock();
					_ShellSort.shell_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoShellSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesShellSort"]->Points->AddXY(pCantidad, time);

				}
				else // PALABRAS
				{

				}
			}
			//************************************************************************************************
			//*****************************			METODO Counting Sort			*******************************
			private:System::Void AlgoritmoCountSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					Counti _CountingSort;
					t0 = clock();
					_CountingSort.couting_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoBubbleSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesCountSort"]->Points->AddXY(pCantidad, time);
				}
				else // PALABRAS
				{

				}
			}
				   //*****************************			METODO Merge			*******************************
			private:System::Void AlgoritmoMergeSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					MergeSort _MergeSort;
					t0 = clock();
					_MergeSort.merge_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoMergeSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesMergeSort"]->Points->AddXY(pCantidad, time);

				}
				else // PALABRAS
				{

				}
			}
				   //*****************************			METODO QuickSort			*******************************
			private:System::Void AlgoritmoQuickSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					QuickSort _QuickSort;
					t0 = clock();
					_QuickSort.quick_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoQuickSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesQuickSort"]->Points->AddXY(pCantidad, time);

				}
				else // PALABRAS
				{

				}
			}
				   //*****************************			METODO RadixSort			*******************************
			private:System::Void AlgoritmoRadixSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					RadixSort _RadixSort;
					t0 = clock();
					_RadixSort.radix_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoRadixSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesRadixSort"]->Points->AddXY(pCantidad, time);

				}
				else // PALABRAS
				{

				}
			}
				   //*****************************			METODO HeapSort			*******************************
			private:System::Void AlgoritmoHeapSort(string pTipoDato, int pCantidad)
			{
				if (pTipoDato == "NUMEROS")
				{
					//int n = 5; // número de elementos del arreglo
					//int arr[n]; // declaración del arreglo con longitud variable
					// LEER CSV					
					ArrayNumeros = new int[pCantidad];
					LeerNumeros(ArrayNumeros, pCantidad);

					// Mostrar arreglo en listBox de Entrada					
					int i = 0;
					while (i < pCantidad && i < 200)
					{
						int* ptr = ArrayNumeros + i; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbDesordenado->Items->Add(str2);
						i++;
					}
					// Ordenar usando el algoritmo
					HeapSort _HeapSort;
					t0 = clock();
					_HeapSort.heap_sort(ArrayNumeros, pCantidad);
					t1 = clock();
					//Calculando el tiempo
					double time = (double(t1 - t0) / CLOCKS_PER_SEC);
					// Mostrar Tiempo
					lblTiempoHeapSort->Text = time.ToString();

					// Mostrar arreglo Ordenado en listBox de Salida					
					int j = 0;
					while (j < pCantidad && j < 200)
					{
						int* ptr = ArrayNumeros + j; // puntero al elemento i del arreglo
						string var = std::to_string(*ptr);
						String^ str2 = gcnew String(var.c_str());
						lbOrdenado->Items->Add(str2);
						j++;
					}
					delete[] ArrayNumeros;
					//Graficar el Punto
					this->chart1->Series["SeriesHeapSort"]->Points->AddXY(pCantidad, time);

				}
				else // PALABRAS
				{

				}
			}
				   

private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {	
	chart1->Series["SeriesBurbuja"]->Points->Clear();
	chart1->Series["SeriesShellSort"]->Points->Clear();
	chart1->Series["SeriesInsertSort"]->Points->Clear();
	chart1->Series["SeriesMergeSort"]->Points->Clear();
	chart1->Series["SeriesQuickSort"]->Points->Clear();
	chart1->Series["SeriesBucketSort"]->Points->Clear();
	chart1->Series["SeriesRadixSort"]->Points->Clear();
	chart1->Series["SeriesHeapSort"]->Points->Clear();
	chart1->Series["SeriesCountSort"]->Points->Clear();
	chart1->Series["SeriesBinSort"]->Points->Clear();
	chart1->Series["SeriesRandomized"]->Points->Clear();
	chart1->Series["SeriesStoggeSort"]->Points->Clear();
	
}
};
}
