#pragma once
#include "Introduccion.h"
#include"Programa.h"
#include"Creditos.h"

namespace CadenasdeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		SoundPlayer^ sonido = gcnew SoundPlayer("CreditosFinalMusica.wav");
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Button^ BTN_Inicio;







	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ BTN_introduccion;
	private: System::Windows::Forms::PictureBox^ pictureBox1;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->BTN_Inicio = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BTN_introduccion = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BTN_Inicio
			// 
			this->BTN_Inicio->BackColor = System::Drawing::Color::Gold;
			this->BTN_Inicio->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_Inicio->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BTN_Inicio->Location = System::Drawing::Point(226, 358);
			this->BTN_Inicio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BTN_Inicio->Name = L"BTN_Inicio";
			this->BTN_Inicio->Size = System::Drawing::Size(107, 47);
			this->BTN_Inicio->TabIndex = 6;
			this->BTN_Inicio->Text = L"Inicio";
			this->BTN_Inicio->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->BTN_Inicio->UseVisualStyleBackColor = false;
			this->BTN_Inicio->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(214, 497);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 47);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Creditos";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BTN_introduccion
			// 
			this->BTN_introduccion->BackColor = System::Drawing::Color::Gold;
			this->BTN_introduccion->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BTN_introduccion->Location = System::Drawing::Point(168, 425);
			this->BTN_introduccion->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->BTN_introduccion->Name = L"BTN_introduccion";
			this->BTN_introduccion->Size = System::Drawing::Size(227, 47);
			this->BTN_introduccion->TabIndex = 5;
			this->BTN_introduccion->Text = L"Introduccion";
			this->BTN_introduccion->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->BTN_introduccion->UseVisualStyleBackColor = false;
			this->BTN_introduccion->Click += gcnew System::EventHandler(this, &MyForm::BTN_introduccion_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(66, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(419, 351);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MidnightBlue;
			this->ClientSize = System::Drawing::Size(548, 579);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BTN_Inicio);
			this->Controls->Add(this->BTN_introduccion);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void BTN_IntegrantesD_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void BTN_IntegrantesA_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BTN_introduccion_Click(System::Object^ sender, System::EventArgs^ e) {
	Introduccion^ introduccion = gcnew Introduccion();
	this->Visible = false;
	introduccion->ShowDialog();
	this->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Programa^ programa = gcnew Programa();
	this->Visible = false;
	programa->ShowDialog();
	delete programa;
	this->Visible = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Creditos^ creditos = gcnew Creditos();
	this->Visible = false;
	creditos->ShowDialog();
	this->Visible = true;
	if (Visible == true)
	{
		sonido->Stop();
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Width = 376;


}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Width = 876;
	}
};
}
