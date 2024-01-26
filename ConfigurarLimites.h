#pragma once

#include <vector>
using namespace std;

namespace CadenasdeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ConfigurarLimites
	/// </summary>
	public ref class ConfigurarLimites : public System::Windows::Forms::Form

	{
	public:
		ConfigurarLimites(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ConfigurarLimites()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	protected:

	public:
	
	

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ConfigurarLimites::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(100, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 32);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(208, 62);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 32);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(314, 62);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 32);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(100, 174);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 32);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(208, 174);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 32);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(314, 174);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 32);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox7_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(367, 109);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 50);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 29;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(151, 109);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 50);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 28;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(254, 109);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(50, 50);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 27;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(50, 109);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(50, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 26;
			this->pictureBox12->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 16);
			this->label1->TabIndex = 30;
			this->label1->Text = L"0%";
			this->label1->Click += gcnew System::EventHandler(this, &ConfigurarLimites::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(106, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 16);
			this->label2->TabIndex = 31;
			this->label2->Text = L"35";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(207, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 16);
			this->label3->TabIndex = 32;
			this->label3->Text = L"55";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(320, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 16);
			this->label4->TabIndex = 33;
			this->label4->Text = L"75";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(424, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 34;
			this->label5->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(126, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 16);
			this->label6->TabIndex = 35;
			this->label6->Text = L"%";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(229, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(19, 16);
			this->label7->TabIndex = 36;
			this->label7->Text = L"%";
			this->label7->Click += gcnew System::EventHandler(this, &ConfigurarLimites::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(342, 125);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(19, 16);
			this->label8->TabIndex = 37;
			this->label8->Text = L"%";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 28);
			this->button1->TabIndex = 38;
			this->button1->Text = L"+10";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(87, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(65, 29);
			this->button2->TabIndex = 39;
			this->button2->Text = L"-10";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(194, 31);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(66, 25);
			this->button3->TabIndex = 40;
			this->button3->Text = L"+10";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(197, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 25);
			this->button4->TabIndex = 41;
			this->button4->Text = L"-10";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(293, 32);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(68, 24);
			this->button5->TabIndex = 42;
			this->button5->Text = L"+10";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(303, 214);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(69, 25);
			this->button6->TabIndex = 43;
			this->button6->Text = L"-10";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ConfigurarLimites::button6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(455, 125);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 16);
			this->label9->TabIndex = 44;
			this->label9->Text = L"%";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(402, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 45;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ConfigurarLimites::pictureBox3_Click);
			// 
			// ConfigurarLimites
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Peru;
			this->ClientSize = System::Drawing::Size(486, 315);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ConfigurarLimites";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ConfigurarLimites";
			this->Load += gcnew System::EventHandler(this, &ConfigurarLimites::ConfigurarLimites_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name_aux;
		System::String^ name;
		name_aux = label2->Text;
		name = label3->Text;
		int i = Convert::ToInt64(name_aux);
		int a = Convert::ToInt64(name);
		if (i < a - 1)
		{
			label2->Text = Convert::ToString(++i);
		}
		delete name_aux;
	}
private: System::Void ConfigurarLimites_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	name_aux = label2->Text;
	int i = Convert::ToInt64(name_aux);
	if (i > 1)
	{
		label2->Text = Convert::ToString(--i);
	}
	delete name_aux;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ nam;
	nam = label4->Text;
	int az = Convert::ToInt64(nam);
	name_aux = label3->Text;
	int a = Convert::ToInt64(name_aux);
	if (a < az-1)
	{
		label3->Text = Convert::ToString(++a);
	}
	delete name_aux;
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ name_x;
	name_aux = label3->Text;
	int i = Convert::ToInt64(name_aux);
	name_x = label2->Text;
	int am = Convert::ToInt64(name_x);
	if (i > am +1)
	{
		label3->Text = Convert::ToString(--i);
	}
	delete name_aux;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	name_aux = label4->Text;
	int az = Convert::ToInt64(name_aux);
	if (az < 99)
	{
		label4->Text = Convert::ToString(++az);
	}
	delete name_aux;
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ aux;
	name_aux = label4->Text;
	int i = Convert::ToInt64(name_aux);
	aux = label3->Text;
	int ad = Convert::ToInt64(aux);

	if (i > ad + 1)
	{
		label4->Text = Convert::ToString(--i);
	}
	delete name_aux;
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ name;
	name_aux = label2->Text;
	name = label3->Text;
	int i = Convert::ToInt64(name_aux);
	int a = Convert::ToInt64(name);
	if (i < a - 10)
	{
		label2->Text = Convert::ToString(i + 10);
		
	}
	delete name_aux;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	name_aux = label2->Text;
	int i = Convert::ToInt64(name_aux);
	if (i > 10)
	{
		label2->Text = Convert::ToString(i - 10);
	}
	delete name_aux;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ nam;
	nam = label4->Text;
	int az = Convert::ToInt64(nam);
	name_aux = label3->Text;
	int a = Convert::ToInt64(name_aux);
	if (a < az - 10)
	{
		label3->Text = Convert::ToString(a + 10);
	}
	delete name_aux;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ name_x;
	name_aux = label3->Text;
	int i = Convert::ToInt64(name_aux);
	name_x = label2->Text;
	int am = Convert::ToInt64(name_x);
	if (i > am + 10)
	{
		label3->Text = Convert::ToString(i - 10);
	}
	delete name_aux;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	name_aux = label4->Text;
	int az = Convert::ToInt64(name_aux);
	if (az < 89)
	{
		label4->Text = Convert::ToString(az + 10);
	}
	delete name_aux;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ name_aux;
	System::String^ aux;
	name_aux = label4->Text;
	int i = Convert::ToInt64(name_aux);
	aux = label3->Text;
	int ad = Convert::ToInt64(aux);

	if (i > ad + 10)
	{
		label4->Text = Convert::ToString(i - 10);
	}
	delete name_aux;
}
public:
	vector<short>* DameLimites()
	{
		vector<short>* limites;
		limites = new vector<short>();

		limites->push_back(Convert::ToInt16(label2->Text));
		limites->push_back(Convert::ToInt16(label3->Text));
		limites->push_back(Convert::ToInt16(label4->Text));
		limites->push_back(Convert::ToInt16(label5->Text));

		return limites;
	}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
