#pragma once

#include "Encriptar.h"
#include "Desencriptar.h"
#include <windows.h>

namespace TareaAuditoria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnEncriptar;
	private: System::Windows::Forms::Button^  btnDesencriptar;
	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnEncriptar = (gcnew System::Windows::Forms::Button());
			this->btnDesencriptar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnEncriptar
			// 
			this->btnEncriptar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnEncriptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEncriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEncriptar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnEncriptar->Location = System::Drawing::Point(70, 44);
			this->btnEncriptar->Name = L"btnEncriptar";
			this->btnEncriptar->Size = System::Drawing::Size(145, 60);
			this->btnEncriptar->TabIndex = 0;
			this->btnEncriptar->Text = L"Encriptar";
			this->btnEncriptar->UseVisualStyleBackColor = false;
			this->btnEncriptar->Click += gcnew System::EventHandler(this, &Main::btnEncriptar_Click);
			// 
			// btnDesencriptar
			// 
			this->btnDesencriptar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnDesencriptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDesencriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDesencriptar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDesencriptar->Location = System::Drawing::Point(70, 148);
			this->btnDesencriptar->Name = L"btnDesencriptar";
			this->btnDesencriptar->Size = System::Drawing::Size(145, 60);
			this->btnDesencriptar->TabIndex = 1;
			this->btnDesencriptar->Text = L"Desencriptar";
			this->btnDesencriptar->UseVisualStyleBackColor = false;
			this->btnDesencriptar->Click += gcnew System::EventHandler(this, &Main::btnDesencriptar_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->btnDesencriptar);
			this->Controls->Add(this->btnEncriptar);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(300, 300);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

	private: System::Void btnEncriptar_Click(System::Object^  sender, System::EventArgs^  e){
				Encriptar^ ventEncriptar = gcnew Encriptar();
				ventEncriptar->ShowDialog();
			 }

	private: System::Void btnDesencriptar_Click(System::Object^  sender, System::EventArgs^  e) {
				Desencriptar^ ventDesencriptar = gcnew Desencriptar();
				ventDesencriptar->ShowDialog();
			 }
	};
}

