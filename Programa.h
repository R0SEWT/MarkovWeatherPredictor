#pragma once
#include"ConfigurarLimites.h"
#include"MatrizTransicion.h"
#include"math.h"
#include"ErroNoEstocastico.h"
#include <msclr/marshal_cppstd.h>


namespace CadenasdeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Drawing::Imaging;
	using namespace System::Drawing::Text;
	using namespace System::Drawing::Printing;



	/// <summary>
	/// Resumen de Programa
	/// </summary>
	public ref class Programa : public System::Windows::Forms::Form
	{
	private:
		vector<short>* limites_superiores;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_configurar_limites;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

		   MatrizTransicion* matriz_maniana;


	public:
		Programa(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			limites_superiores = new vector<short>();
			
			limites_superiores->push_back(35);
			limites_superiores->push_back(55);
			limites_superiores->push_back(75);
			limites_superiores->push_back(100);

			matriz_maniana = new MatrizTransicion(70, *limites_superiores, "Trujillo");// se inicializa con los dias

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Programa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbx_Dias_BD;
	protected:




	private: System::Windows::Forms::Label^ lbl_Ts;
	private: System::Windows::Forms::Label^ lbl_Ps;
	private: System::Windows::Forms::Label^ lbl_Pn;
	private: System::Windows::Forms::Label^ lbl_Tn;

	private:System::Drawing::Graphics^ g;
	private: System::Windows::Forms::Label^ lbl_DiasBD;
	private: System::Windows::Forms::Label^ lbl_dias_pronostico;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ lbl_NDias;
	private: System::Windows::Forms::Label^ lbl_ClimaHoy;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::ComboBox^ comboBox1;





		   /// <summary>
		   /// Variable del diseñador necesaria.
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Programa::typeid));
			   this->tbx_Dias_BD = (gcnew System::Windows::Forms::TextBox());
			   this->lbl_Ts = (gcnew System::Windows::Forms::Label());
			   this->lbl_Ps = (gcnew System::Windows::Forms::Label());
			   this->lbl_Pn = (gcnew System::Windows::Forms::Label());
			   this->lbl_Tn = (gcnew System::Windows::Forms::Label());
			   this->lbl_DiasBD = (gcnew System::Windows::Forms::Label());
			   this->lbl_dias_pronostico = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->lbl_NDias = (gcnew System::Windows::Forms::Label());
			   this->lbl_ClimaHoy = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->btn_configurar_limites = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			   this->groupBox1->SuspendLayout();
			   this->groupBox2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // tbx_Dias_BD
			   // 
			   this->tbx_Dias_BD->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbx_Dias_BD->Location = System::Drawing::Point(205, 32);
			   this->tbx_Dias_BD->Name = L"tbx_Dias_BD";
			   this->tbx_Dias_BD->Size = System::Drawing::Size(44, 28);
			   this->tbx_Dias_BD->TabIndex = 0;
			   // 
			   // lbl_Ts
			   // 
			   this->lbl_Ts->AutoSize = true;
			   this->lbl_Ts->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_Ts->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_Ts->Location = System::Drawing::Point(741, 113);
			   this->lbl_Ts->Name = L"lbl_Ts";
			   this->lbl_Ts->Size = System::Drawing::Size(0, 24);
			   this->lbl_Ts->TabIndex = 5;
			   // 
			   // lbl_Ps
			   // 
			   this->lbl_Ps->AutoSize = true;
			   this->lbl_Ps->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_Ps->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_Ps->Location = System::Drawing::Point(873, 113);
			   this->lbl_Ps->Name = L"lbl_Ps";
			   this->lbl_Ps->Size = System::Drawing::Size(0, 24);
			   this->lbl_Ps->TabIndex = 6;
			   // 
			   // lbl_Pn
			   // 
			   this->lbl_Pn->AutoSize = true;
			   this->lbl_Pn->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_Pn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_Pn->Location = System::Drawing::Point(735, 212);
			   this->lbl_Pn->Name = L"lbl_Pn";
			   this->lbl_Pn->Size = System::Drawing::Size(0, 24);
			   this->lbl_Pn->TabIndex = 7;
			   // 
			   // lbl_Tn
			   // 
			   this->lbl_Tn->AutoSize = true;
			   this->lbl_Tn->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_Tn->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_Tn->Location = System::Drawing::Point(870, 210);
			   this->lbl_Tn->Name = L"lbl_Tn";
			   this->lbl_Tn->Size = System::Drawing::Size(0, 24);
			   this->lbl_Tn->TabIndex = 8;
			   // 
			   // lbl_DiasBD
			   // 
			   this->lbl_DiasBD->AutoSize = true;
			   this->lbl_DiasBD->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_DiasBD->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_DiasBD->Location = System::Drawing::Point(16, 35);
			   this->lbl_DiasBD->Name = L"lbl_DiasBD";
			   this->lbl_DiasBD->Size = System::Drawing::Size(172, 21);
			   this->lbl_DiasBD->TabIndex = 9;
			   this->lbl_DiasBD->Text = L"NUMERO DE DIAS";
			   // 
			   // lbl_dias_pronostico
			   // 
			   this->lbl_dias_pronostico->AutoSize = true;
			   this->lbl_dias_pronostico->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_dias_pronostico->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_dias_pronostico->ForeColor = System::Drawing::SystemColors::Control;
			   this->lbl_dias_pronostico->Location = System::Drawing::Point(303, 243);
			   this->lbl_dias_pronostico->Name = L"lbl_dias_pronostico";
			   this->lbl_dias_pronostico->Size = System::Drawing::Size(206, 21);
			   this->lbl_dias_pronostico->TabIndex = 10;
			   this->lbl_dias_pronostico->Text = L"Matriz en dias: [1,4]";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::SystemColors::Control;
			   this->label1->Location = System::Drawing::Point(127, 45);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(378, 33);
			   this->label1->TabIndex = 11;
			   this->label1->Text = L"ELIJA EL CLIMA DE HOY!";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::White;
			   this->button1->Location = System::Drawing::Point(548, 243);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(39, 23);
			   this->button1->TabIndex = 12;
			   this->button1->Text = L"1";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Programa::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(593, 243);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(39, 23);
			   this->button2->TabIndex = 13;
			   this->button2->Text = L"2";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Programa::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::White;
			   this->button3->Location = System::Drawing::Point(638, 243);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(39, 23);
			   this->button3->TabIndex = 14;
			   this->button3->Text = L"3";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &Programa::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::White;
			   this->button4->Location = System::Drawing::Point(683, 243);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(39, 23);
			   this->button4->TabIndex = 15;
			   this->button4->Text = L"4";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &Programa::button4_Click);
			   // 
			   // lbl_NDias
			   // 
			   this->lbl_NDias->AutoSize = true;
			   this->lbl_NDias->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_NDias->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_NDias->ForeColor = System::Drawing::SystemColors::Control;
			   this->lbl_NDias->Location = System::Drawing::Point(705, 485);
			   this->lbl_NDias->Name = L"lbl_NDias";
			   this->lbl_NDias->Size = System::Drawing::Size(0, 21);
			   this->lbl_NDias->TabIndex = 16;
			   // 
			   // lbl_ClimaHoy
			   // 
			   this->lbl_ClimaHoy->AutoSize = true;
			   this->lbl_ClimaHoy->BackColor = System::Drawing::Color::Transparent;
			   this->lbl_ClimaHoy->Location = System::Drawing::Point(394, 575);
			   this->lbl_ClimaHoy->Name = L"lbl_ClimaHoy";
			   this->lbl_ClimaHoy->Size = System::Drawing::Size(0, 16);
			   this->lbl_ClimaHoy->TabIndex = 21;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(664, 102);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(50, 50);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 22;
			   this->pictureBox1->TabStop = false;
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(664, 197);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(50, 50);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 23;
			   this->pictureBox2->TabStop = false;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			   this->pictureBox3->Location = System::Drawing::Point(800, 102);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(50, 50);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox3->TabIndex = 24;
			   this->pictureBox3->TabStop = false;
			   this->pictureBox3->Click += gcnew System::EventHandler(this, &Programa::pictureBox3_Click);
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			   this->pictureBox4->Location = System::Drawing::Point(800, 197);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(50, 50);
			   this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox4->TabIndex = 25;
			   this->pictureBox4->TabStop = false;
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::Color::White;
			   this->comboBox1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Location = System::Drawing::Point(114, 76);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(210, 29);
			   this->comboBox1->TabIndex = 28;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			   this->pictureBox5->Location = System::Drawing::Point(138, 102);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Size = System::Drawing::Size(50, 50);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox5->TabIndex = 29;
			   this->pictureBox5->TabStop = false;
			   this->pictureBox5->Click += gcnew System::EventHandler(this, &Programa::pictureBox5_Click);
			   // 
			   // pictureBox6
			   // 
			   this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			   this->pictureBox6->Location = System::Drawing::Point(455, 102);
			   this->pictureBox6->Name = L"pictureBox6";
			   this->pictureBox6->Size = System::Drawing::Size(50, 50);
			   this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox6->TabIndex = 30;
			   this->pictureBox6->TabStop = false;
			   this->pictureBox6->Click += gcnew System::EventHandler(this, &Programa::pictureBox6_Click);
			   // 
			   // pictureBox7
			   // 
			   this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			   this->pictureBox7->Location = System::Drawing::Point(453, 197);
			   this->pictureBox7->Name = L"pictureBox7";
			   this->pictureBox7->Size = System::Drawing::Size(50, 50);
			   this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox7->TabIndex = 31;
			   this->pictureBox7->TabStop = false;
			   this->pictureBox7->Click += gcnew System::EventHandler(this, &Programa::pictureBox7_Click);
			   // 
			   // pictureBox8
			   // 
			   this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			   this->pictureBox8->Location = System::Drawing::Point(138, 197);
			   this->pictureBox8->Name = L"pictureBox8";
			   this->pictureBox8->Size = System::Drawing::Size(50, 50);
			   this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox8->TabIndex = 32;
			   this->pictureBox8->TabStop = false;
			   this->pictureBox8->Click += gcnew System::EventHandler(this, &Programa::pictureBox8_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(693, 45);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(197, 33);
			   this->label2->TabIndex = 33;
			   this->label2->Text = L"Clima en %";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(16, 79);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(84, 21);
			   this->label3->TabIndex = 34;
			   this->label3->Text = L"CIUDAD";
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->pictureBox9);
			   this->groupBox1->Controls->Add(this->label13);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->lbl_DiasBD);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->tbx_Dias_BD);
			   this->groupBox1->Controls->Add(this->comboBox1);
			   this->groupBox1->Controls->Add(this->btn_configurar_limites);
			   this->groupBox1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->groupBox1->ForeColor = System::Drawing::SystemColors::Control;
			   this->groupBox1->Location = System::Drawing::Point(19, 88);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(956, 129);
			   this->groupBox1->TabIndex = 35;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"DATOS";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label13->Location = System::Drawing::Point(675, 28);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(245, 21);
			   this->label13->TabIndex = 36;
			   this->label13->Text = L"GENERAR BASE DE DATOS";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->Location = System::Drawing::Point(342, 28);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(274, 21);
			   this->label5->TabIndex = 35;
			   this->label5->Text = L"CONFIGURACION DE LIMITES";
			   // 
			   // btn_configurar_limites
			   // 
			   this->btn_configurar_limites->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_configurar_limites.Image")));
			   this->btn_configurar_limites->Location = System::Drawing::Point(453, 63);
			   this->btn_configurar_limites->Name = L"btn_configurar_limites";
			   this->btn_configurar_limites->Size = System::Drawing::Size(50, 50);
			   this->btn_configurar_limites->TabIndex = 27;
			   this->btn_configurar_limites->UseVisualStyleBackColor = true;
			   this->btn_configurar_limites->Click += gcnew System::EventHandler(this, &Programa::btn_configurar_limites_Click);
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			   this->label4->Location = System::Drawing::Point(243, 21);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(527, 52);
			   this->label4->TabIndex = 36;
			   this->label4->Text = L"CLOUD TECHNOLOGY";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::SystemColors::Control;
			   this->label6->Location = System::Drawing::Point(522, 485);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(167, 21);
			   this->label6->TabIndex = 37;
			   this->label6->Text = L"MATRIZ DEL DIA:";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->ForeColor = System::Drawing::SystemColors::Control;
			   this->label7->Location = System::Drawing::Point(226, 485);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(235, 21);
			   this->label7->TabIndex = 38;
			   this->label7->Text = L"MATRIZ DE TRANSICION";
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->label12);
			   this->groupBox2->Controls->Add(this->label11);
			   this->groupBox2->Controls->Add(this->label10);
			   this->groupBox2->Controls->Add(this->label9);
			   this->groupBox2->Controls->Add(this->label1);
			   this->groupBox2->Controls->Add(this->label2);
			   this->groupBox2->Controls->Add(this->pictureBox6);
			   this->groupBox2->Controls->Add(this->pictureBox5);
			   this->groupBox2->Controls->Add(this->pictureBox7);
			   this->groupBox2->Controls->Add(this->pictureBox8);
			   this->groupBox2->Controls->Add(this->pictureBox4);
			   this->groupBox2->Controls->Add(this->pictureBox3);
			   this->groupBox2->Controls->Add(this->lbl_Ts);
			   this->groupBox2->Controls->Add(this->pictureBox2);
			   this->groupBox2->Controls->Add(this->lbl_Ps);
			   this->groupBox2->Controls->Add(this->pictureBox1);
			   this->groupBox2->Controls->Add(this->lbl_Pn);
			   this->groupBox2->Controls->Add(this->lbl_Tn);
			   this->groupBox2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->groupBox2->ForeColor = System::Drawing::SystemColors::Control;
			   this->groupBox2->Location = System::Drawing::Point(19, 515);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(966, 287);
			   this->groupBox2->TabIndex = 39;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"CLIMA";
			   this->groupBox2->Enter += gcnew System::EventHandler(this, &Programa::groupBox2_Enter);
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label12->Location = System::Drawing::Point(351, 257);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(251, 21);
			   this->label12->TabIndex = 37;
			   this->label12->Text = L"PARCIALMENTE NUBLADO";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label11->Location = System::Drawing::Point(52, 257);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(234, 21);
			   this->label11->TabIndex = 36;
			   this->label11->Text = L"TOTALMENTE NUBLADO";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label10->Location = System::Drawing::Point(351, 155);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(242, 21);
			   this->label10->TabIndex = 35;
			   this->label10->Text = L"PARCIALMENTE SOLEADO";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->label9->Location = System::Drawing::Point(52, 155);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(225, 21);
			   this->label9->TabIndex = 34;
			   this->label9->Text = L"TOTALMENTE SOLEADO";
			   this->label9->Click += gcnew System::EventHandler(this, &Programa::label9_Click);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(354, 812);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(354, 16);
			   this->label8->TabIndex = 40;
			   this->label8->Text = L"© 2023 Cloud Tecnology. Todos los derechos reservados.";
			   this->label8->Click += gcnew System::EventHandler(this, &Programa::label8_Click);
			   // 
			   // pictureBox9
			   // 
			   this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			   this->pictureBox9->Location = System::Drawing::Point(773, 53);
			   this->pictureBox9->Name = L"pictureBox9";
			   this->pictureBox9->Size = System::Drawing::Size(65, 60);
			   this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox9->TabIndex = 41;
			   this->pictureBox9->TabStop = false;
			   this->pictureBox9->Click += gcnew System::EventHandler(this, &Programa::pictureBox9_Click);
			   // 
			   // Programa
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::SteelBlue;
			   this->ClientSize = System::Drawing::Size(1002, 870);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->groupBox2);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->groupBox1);
			   this->Controls->Add(this->lbl_ClimaHoy);
			   this->Controls->Add(this->lbl_NDias);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->lbl_dias_pronostico);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			   this->Name = L"Programa";
			   this->Text = L"Programa";
			   this->TopMost = true;
			   this->Load += gcnew System::EventHandler(this, &Programa::Programa_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void btn_Matriz_Click(System::Object^ sender, System::EventArgs^ e) {

		//pedir los dias que vamos a procesar al txbox	

		if (tbx_Dias_BD->Text != "") {
			System::String^ name_aux;

			name_aux = tbx_Dias_BD->Text;
			int n_aux = Convert::ToInt64(name_aux);
			if (n_aux <= 60 || n_aux >= 90) {
				//avisar que se cambio el valor a 80 con txb
				n_aux = 80;
			}


			//declaramos la matriz


			// obtenemos los dias a predecir en el futuro
			name_aux = lbl_NDias->Text;
			n_aux = Convert::ToInt64(name_aux);

			matriz_maniana->updateMatrizN(n_aux); // metodo de la matriz xd

			// mostramos las matrices
			Graphics^ g = this->CreateGraphics();	//para mostrar usarmeos la clase graphics

			//necesitamos un fuente y una brocha
			//matriz uno

			Pen^ pen2 = gcnew Pen(Color::Black, 2);
			SolidBrush^ sb2 = gcnew SolidBrush(Color::Azure);

			Drawing::Font^ miFuente = gcnew Drawing::Font("Arial Black", 9);
			int x, y, separacion;
			x = 190;
			y = 230;
			separacion = 40;


			g->FillRectangle(sb2, x, y, 4 * separacion, 4 * separacion);

			for (int i = 0; i <= 4; i++)// lineas verticales
			{
				g->DrawLine(pen2, x + i * separacion, y, x + i * separacion, y + 4 * separacion);
			}
			for (int i = 0; i <= 4; i++)//lineas horizontales
			{
				g->DrawLine(pen2, x, y + i * separacion, x + 4 * separacion, y + i * separacion);
			}



			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{

					name_aux = Convert::ToString((acortarADecimales(matriz_maniana->getPercMatriz(i, j))));
					g->DrawString(name_aux, miFuente, Brushes::Black, x + separacion * j, y + separacion * i);
				}

			}
			//matriz dos

			x += 200;


			g->FillRectangle(sb2, x, y, 4 * separacion, 4 * separacion);

			for (int i = 0; i <= 4; i++)// lineas verticales
			{
				g->DrawLine(pen2, x + i * separacion, y, x + i * separacion, y + 4 * separacion);
			}
			for (int i = 0; i <= 4; i++)//lineas horizontales
			{
				g->DrawLine(pen2, x, y + i * separacion, x + 4 * separacion, y + i * separacion);
			}


			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					name_aux = Convert::ToString((acortarADecimales(matriz_maniana->potenciaMatriz(i, j))));
					g->DrawString(name_aux, miFuente, Brushes::Black, x + separacion * j, y + separacion * i);
				}

			}





			// mostramos estatus today
			name_aux = lbl_ClimaHoy->Text;

			int idx_hoy = -1;

			if (name_aux == "TS") {
				idx_hoy = 0;
			}
			else if (name_aux == "PS") {
				idx_hoy = 1;
			}
			else if (name_aux == "PN") {
				idx_hoy = 2;
			}
			else if (name_aux == "TN") {
				idx_hoy = 3;
			}

			if (idx_hoy != -1) {
				this->lbl_Ts->Text = Convert::ToString(acortarADecimales(matriz_maniana->potenciaMatriz(0, idx_hoy)) * 100) + "%";
				this->lbl_Ps->Text = Convert::ToString(acortarADecimales(matriz_maniana->potenciaMatriz(1, idx_hoy)) * 100) + "%";
				this->lbl_Pn->Text = Convert::ToString(acortarADecimales(matriz_maniana->potenciaMatriz(2, idx_hoy)) * 100) + "%";
				this->lbl_Tn->Text = Convert::ToString(acortarADecimales(matriz_maniana->potenciaMatriz(3, idx_hoy)) * 100) + "%";
			}


		}
		//validarEstocastica();




	}
	private: System::Void btn_Stats_Click(System::Object^ sender, System::EventArgs^ e) {

	}double acortarADecimales(double n) {
		return (((int)(n * 1000)) / 10) / 100.0;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbl_NDias->Text = "2";
		btn_Matriz_Click(sender, e);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbl_NDias->Text = "1";
		btn_Matriz_Click(sender, e);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbl_NDias->Text = "3";
		btn_Matriz_Click(sender, e);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		
		lbl_NDias->Text = "4";
		btn_Matriz_Click(sender, e);
	}



	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Programa_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Trujillo");
		comboBox1->Items->Add("Urubamba");
		comboBox1->Items->Add("Cajamarca");
		comboBox1->Items->Add("Puerto Maldonado");
		comboBox1->Items->Add("Huaraz");

	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_configurar_limites_Click(System::Object^ sender, System::EventArgs^ e) {

		ConfigurarLimites^ limitesForm = gcnew ConfigurarLimites;
		this->Visible = false;
		limitesForm->ShowDialog();

		limites_superiores = limitesForm->DameLimites();

		this->Visible = true;
	}
	private: void updateMatriz() {
		System::String^ name_aux;

		name_aux = tbx_Dias_BD->Text;
		int dias_bd = Convert::ToInt64(name_aux);
		if (dias_bd < 60 || dias_bd > 90) {
			//avisar que se cambio el valor a 80 con txb
			dias_bd = 80;
		}

		name_aux = comboBox1->Text;

		string city = msclr::interop::marshal_as<string>(name_aux);

		//declaramos la matriz

		MatrizTransicion* matriz_maniana2;

		matriz_maniana2 = new MatrizTransicion(dias_bd, *limites_superiores, city);// se inicializa con los dias

		matriz_maniana = matriz_maniana2;
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_ClimaHoy->Text = "TS";
		btn_Matriz_Click(sender, e);
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_ClimaHoy->Text = "PS";
		btn_Matriz_Click(sender, e);

	}
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_ClimaHoy->Text = "PN";
		btn_Matriz_Click(sender, e);
	}
	private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
		lbl_ClimaHoy->Text = "TN";
		btn_Matriz_Click(sender, e);
	}

	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	updateMatriz();
}
	   /*void validarEstocastica() {
		   for (int i = 0; i < 4; i++)
		   {
			   for (int j = 0; j < 4; j++)
			   {
				   if (matriz_maniana->getPercMatriz(i, j) == 1) {
					   ErroNoEstocastico^ error = gcnew ErroNoEstocastico();
					
					   error->ShowDialog();

					   return;
				   }

			   }

		   }
	   }*/
};
	; }


