#pragma once

namespace TareaAuditoria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Text;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Resumen de Encriptar
	/// </summary>
	public ref class Encriptar : public System::Windows::Forms::Form
	{
	public:
		Encriptar(void)
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
		~Encriptar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::Button^  btnAbrir;
	private: System::Windows::Forms::Label^  lblArchivo;
	private: System::Windows::Forms::TextBox^  tboxArchivo;
	private: System::Windows::Forms::OpenFileDialog^  openTxt;
	private: System::Windows::Forms::Button^  btnEncriptar;
	private: System::Windows::Forms::Label^  lblClave;
	private: System::Windows::Forms::TextBox^  tboxClave;
	private: System::Windows::Forms::Label^  lblConfirmar;
	private: System::Windows::Forms::TextBox^  tboxConfirmar;
	private: System::Windows::Forms::SaveFileDialog^  saveTxt;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Encriptar::typeid));
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnAbrir = (gcnew System::Windows::Forms::Button());
			this->lblArchivo = (gcnew System::Windows::Forms::Label());
			this->tboxArchivo = (gcnew System::Windows::Forms::TextBox());
			this->openTxt = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnEncriptar = (gcnew System::Windows::Forms::Button());
			this->lblClave = (gcnew System::Windows::Forms::Label());
			this->tboxClave = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmar = (gcnew System::Windows::Forms::Label());
			this->tboxConfirmar = (gcnew System::Windows::Forms::TextBox());
			this->saveTxt = (gcnew System::Windows::Forms::SaveFileDialog());
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
			this->btnSalir->TabIndex = 0;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Encriptar::btnSalir_Click);
			// 
			// btnAbrir
			// 
			this->btnAbrir->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnAbrir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->btnAbrir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAbrir->Location = System::Drawing::Point(379, 63);
			this->btnAbrir->Name = L"btnAbrir";
			this->btnAbrir->Size = System::Drawing::Size(75, 25);
			this->btnAbrir->TabIndex = 1;
			this->btnAbrir->Text = L"Abrir";
			this->btnAbrir->UseVisualStyleBackColor = false;
			this->btnAbrir->Click += gcnew System::EventHandler(this, &Encriptar::btnAbrir_Click);
			// 
			// lblArchivo
			// 
			this->lblArchivo->AutoSize = true;
			this->lblArchivo->Location = System::Drawing::Point(12, 70);
			this->lblArchivo->Name = L"lblArchivo";
			this->lblArchivo->Size = System::Drawing::Size(46, 13);
			this->lblArchivo->TabIndex = 2;
			this->lblArchivo->Text = L"Archivo:";
			// 
			// tboxArchivo
			// 
			this->tboxArchivo->BackColor = System::Drawing::SystemColors::Window;
			this->tboxArchivo->Location = System::Drawing::Point(61, 67);
			this->tboxArchivo->Name = L"tboxArchivo";
			this->tboxArchivo->Size = System::Drawing::Size(312, 20);
			this->tboxArchivo->TabIndex = 3;
			this->tboxArchivo->Text = L"C:\\";
			this->tboxArchivo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Encriptar::tboxArchivo_KeyDown);
			// 
			// openTxt
			// 
			this->openTxt->Filter = L"Archivo de Texto|*.txt";
			this->openTxt->InitialDirectory = L"C:\\";
			this->openTxt->Title = L"Seleccione archivo a encriptar.";
			// 
			// btnEncriptar
			// 
			this->btnEncriptar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnEncriptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEncriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEncriptar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnEncriptar->Location = System::Drawing::Point(172, 168);
			this->btnEncriptar->Name = L"btnEncriptar";
			this->btnEncriptar->Size = System::Drawing::Size(109, 36);
			this->btnEncriptar->TabIndex = 4;
			this->btnEncriptar->Text = L"Encriptar";
			this->btnEncriptar->UseVisualStyleBackColor = false;
			this->btnEncriptar->Click += gcnew System::EventHandler(this, &Encriptar::btnEncriptar_Click);
			// 
			// lblClave
			// 
			this->lblClave->AutoSize = true;
			this->lblClave->Location = System::Drawing::Point(21, 98);
			this->lblClave->Name = L"lblClave";
			this->lblClave->Size = System::Drawing::Size(37, 13);
			this->lblClave->TabIndex = 5;
			this->lblClave->Text = L"Clave:";
			// 
			// tboxClave
			// 
			this->tboxClave->Location = System::Drawing::Point(61, 95);
			this->tboxClave->Name = L"tboxClave";
			this->tboxClave->Size = System::Drawing::Size(204, 20);
			this->tboxClave->TabIndex = 6;
			this->tboxClave->UseSystemPasswordChar = true;
			this->tboxClave->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Encriptar::tboxClave_KeyDown);
			// 
			// lblConfirmar
			// 
			this->lblConfirmar->AutoSize = true;
			this->lblConfirmar->Location = System::Drawing::Point(4, 126);
			this->lblConfirmar->Name = L"lblConfirmar";
			this->lblConfirmar->Size = System::Drawing::Size(54, 13);
			this->lblConfirmar->TabIndex = 7;
			this->lblConfirmar->Text = L"Confirmar:";
			// 
			// tboxConfirmar
			// 
			this->tboxConfirmar->Location = System::Drawing::Point(61, 126);
			this->tboxConfirmar->Name = L"tboxConfirmar";
			this->tboxConfirmar->Size = System::Drawing::Size(204, 20);
			this->tboxConfirmar->TabIndex = 8;
			this->tboxConfirmar->UseSystemPasswordChar = true;
			this->tboxConfirmar->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Encriptar::tboxConfirmar_KeyDown);
			// 
			// saveTxt
			// 
			this->saveTxt->Filter = L"Archivo de Texto|*.txt";
			this->saveTxt->InitialDirectory = L"C:\\";
			this->saveTxt->Title = L"Seleccione directorio para guardar.";
			// 
			// Encriptar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 216);
			this->Controls->Add(this->tboxConfirmar);
			this->Controls->Add(this->lblConfirmar);
			this->Controls->Add(this->tboxClave);
			this->Controls->Add(this->lblClave);
			this->Controls->Add(this->btnEncriptar);
			this->Controls->Add(this->tboxArchivo);
			this->Controls->Add(this->lblArchivo);
			this->Controls->Add(this->btnAbrir);
			this->Controls->Add(this->btnSalir);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Encriptar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Encriptar";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Encriptar::Encriptar_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Encriptar::Encriptar_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Encriptar_Load(System::Object^  sender, System::EventArgs^  e) {
			}

	private: System::Void Encriptar_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 }
	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void btnAbrir_Click(System::Object^  sender, System::EventArgs^  e) {
				
				String ^ dirArchivo = gcnew String(""); // Declaro String "contArchivo" para guardar el contenido del archivo.
				
				if( openTxt->ShowDialog() == System::Windows::Forms::DialogResult::OK )
					{
						tboxArchivo->Text = openTxt->FileName; // Pongo directorio en Textbox.
						dirArchivo = tboxArchivo->Text; // Leo el Directorio en el Textbox en caso de que cambie.
					}

			 }

	private: System::Void btnEncriptar_Click(System::Object^  sender, System::EventArgs^  e) {

			String ^ dirArchivo = gcnew String(""); // Declaro String "dirArchivo" para guardar la direccion del archivo.
			String ^ contArchivo = gcnew String(""); // Declaro String "contArchivo" para guardar el contenido del archivo.
			String ^ contEncriptado = gcnew String(""); // Declaro String "contEncriptado" para guardar el contenido encriptado del archivo.
			String ^ clave = gcnew String(""); // Declaro String "Clave" para guardar la clave usada para encriptar del archivo.

			try{
				dirArchivo = tboxArchivo->Text;
				contArchivo = System::IO::File::ReadAllText(dirArchivo, System::Text::Encoding::GetEncoding(1252));
						
				if(tboxClave->Text->Length >= 6){
						if(tboxClave->Text == tboxConfirmar->Text){
								if( saveTxt->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
							
									clave = tboxClave->Text; // Asigno la clave a la variable.

									contArchivo = System::IO::File::ReadAllText(dirArchivo, System::Text::Encoding::GetEncoding(1252)); // Guardo el contenido en el string.		
									
									array<Char>^ caracterArray = contArchivo->ToCharArray();
									array<Char>^ claveArray = clave->ToCharArray();
									array<Char>^ caracterChar = contArchivo->ToCharArray();;
									int caracterInt = 0;
									int sumaInt = 0;
									int incremento = 0;
		
															
									for(int k=0; k < (clave->Length); k++)
									{
										sumaInt += int(claveArray[k]);
									}

							
									//MessageBox::Show(Convert::ToString(sumaInt));

									incremento = ((sumaInt%7)+(sumaInt%13))+(sumaInt%17);
									
									//MessageBox::Show(Convert::ToString(incremento));

									
									for(int i=0; i < (contArchivo->Length); i++){																	
										caracterInt = int(caracterArray[i]); // Caracter a ASCII
										contEncriptado += Convert::ToString(Convert::ToChar(caracterInt+incremento)); // Pasar ASCII a Caracter, y juntarlo al string.								
									}

										
									//MessageBox::Show(Convert::ToString(contEncriptado));

									System::IO::File::WriteAllText(saveTxt->FileName,contEncriptado);
									MessageBox::Show("¡Archivo encriptado con exito!","Exito");
									this->Close();
								}
						}
						else{
							MessageBox::Show("Las claves no coinciden.","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation,MessageBoxDefaultButton::Button1);
						}
				}
				else{
					MessageBox::Show("La clave debe tener al menos 6 caracteres.","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation,MessageBoxDefaultButton::Button1);
				}
			}				
			catch(System::Exception ^e){
			Console::WriteLine(e);
			MessageBox::Show(Convert::ToString(e),"Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation,MessageBoxDefaultButton::Button1);
			}
		}
	private: System::Void tboxArchivo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				if (e->KeyCode == Keys::Enter )
                btnEncriptar_Click(sender, e);
			 }

	private: System::Void tboxClave_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				if (e->KeyCode == Keys::Enter )
                btnEncriptar_Click(sender, e);
			 }

	private: System::Void tboxConfirmar_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				if (e->KeyCode == Keys::Enter )
                btnEncriptar_Click(sender, e);
			 }
};
}
