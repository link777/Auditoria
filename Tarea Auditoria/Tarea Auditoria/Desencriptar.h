#pragma once

namespace TareaAuditoria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Desencriptar
	/// </summary>
	public ref class Desencriptar : public System::Windows::Forms::Form
	{
	public:
		Desencriptar(void)
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
		~Desencriptar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::Button^  btnAbrir;

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
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnAbrir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnSalir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSalir->Location = System::Drawing::Point(379, 12);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 1;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Desencriptar::btnSalir_Click);
			// 
			// btnAbrir
			// 
			this->btnAbrir->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnAbrir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->btnAbrir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAbrir->Location = System::Drawing::Point(369, 68);
			this->btnAbrir->Name = L"btnAbrir";
			this->btnAbrir->Size = System::Drawing::Size(85, 28);
			this->btnAbrir->TabIndex = 2;
			this->btnAbrir->Text = L"Abrir";
			this->btnAbrir->UseVisualStyleBackColor = false;
			this->btnAbrir->Click += gcnew System::EventHandler(this, &Desencriptar::btnAbrir_Click);
			// 
			// Desencriptar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 193);
			this->Controls->Add(this->btnAbrir);
			this->Controls->Add(this->btnSalir);
			this->MaximizeBox = false;
			this->Name = L"Desencriptar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Desencriptar";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void btnAbrir_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
