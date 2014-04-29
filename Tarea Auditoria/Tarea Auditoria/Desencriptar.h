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
	private: System::Windows::Forms::TextBox^  tboxConfirmar;
	protected: 
	private: System::Windows::Forms::Label^  lblConfirmar;
	private: System::Windows::Forms::TextBox^  tboxClave;
	private: System::Windows::Forms::Label^  lblClave;
	private: System::Windows::Forms::Button^  btnDesencriptar;
	private: System::Windows::Forms::TextBox^  tboxArchivo;
	private: System::Windows::Forms::Label^  lblArchivo;
	private: System::Windows::Forms::Button^  btnAbrir;


	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::SaveFileDialog^  saveTxt;
	private: System::Windows::Forms::OpenFileDialog^  openTxt;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Desencriptar::typeid));
			this->tboxConfirmar = (gcnew System::Windows::Forms::TextBox());
			this->lblConfirmar = (gcnew System::Windows::Forms::Label());
			this->tboxClave = (gcnew System::Windows::Forms::TextBox());
			this->lblClave = (gcnew System::Windows::Forms::Label());
			this->btnDesencriptar = (gcnew System::Windows::Forms::Button());
			this->tboxArchivo = (gcnew System::Windows::Forms::TextBox());
			this->lblArchivo = (gcnew System::Windows::Forms::Label());
			this->btnAbrir = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->saveTxt = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openTxt = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// tboxConfirmar
			// 
			this->tboxConfirmar->Location = System::Drawing::Point(65, 126);
			this->tboxConfirmar->Name = L"tboxConfirmar";
			this->tboxConfirmar->Size = System::Drawing::Size(204, 20);
			this->tboxConfirmar->TabIndex = 17;
			this->tboxConfirmar->UseSystemPasswordChar = true;
			this->tboxConfirmar->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Desencriptar::tboxConfirmar_KeyDown);
			// 
			// lblConfirmar
			// 
			this->lblConfirmar->AutoSize = true;
			this->lblConfirmar->Location = System::Drawing::Point(8, 126);
			this->lblConfirmar->Name = L"lblConfirmar";
			this->lblConfirmar->Size = System::Drawing::Size(54, 13);
			this->lblConfirmar->TabIndex = 16;
			this->lblConfirmar->Text = L"Confirmar:";
			// 
			// tboxClave
			// 
			this->tboxClave->Location = System::Drawing::Point(65, 95);
			this->tboxClave->Name = L"tboxClave";
			this->tboxClave->Size = System::Drawing::Size(204, 20);
			this->tboxClave->TabIndex = 15;
			this->tboxClave->UseSystemPasswordChar = true;
			this->tboxClave->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Desencriptar::tboxClave_KeyDown);
			// 
			// lblClave
			// 
			this->lblClave->AutoSize = true;
			this->lblClave->Location = System::Drawing::Point(25, 98);
			this->lblClave->Name = L"lblClave";
			this->lblClave->Size = System::Drawing::Size(37, 13);
			this->lblClave->TabIndex = 14;
			this->lblClave->Text = L"Clave:";
			// 
			// btnDesencriptar
			// 
			this->btnDesencriptar->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnDesencriptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDesencriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnDesencriptar->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDesencriptar->Location = System::Drawing::Point(162, 168);
			this->btnDesencriptar->Name = L"btnDesencriptar";
			this->btnDesencriptar->Size = System::Drawing::Size(134, 36);
			this->btnDesencriptar->TabIndex = 13;
			this->btnDesencriptar->Text = L"Desencriptar";
			this->btnDesencriptar->UseVisualStyleBackColor = false;
			this->btnDesencriptar->Click += gcnew System::EventHandler(this, &Desencriptar::btnDesencriptar_Click);
			// 
			// tboxArchivo
			// 
			this->tboxArchivo->BackColor = System::Drawing::SystemColors::Window;
			this->tboxArchivo->Location = System::Drawing::Point(65, 67);
			this->tboxArchivo->Name = L"tboxArchivo";
			this->tboxArchivo->Size = System::Drawing::Size(312, 20);
			this->tboxArchivo->TabIndex = 12;
			this->tboxArchivo->Text = L"C:\\";
			this->tboxArchivo->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Desencriptar::tboxArchivo_KeyDown);
			// 
			// lblArchivo
			// 
			this->lblArchivo->AutoSize = true;
			this->lblArchivo->Location = System::Drawing::Point(16, 70);
			this->lblArchivo->Name = L"lblArchivo";
			this->lblArchivo->Size = System::Drawing::Size(46, 13);
			this->lblArchivo->TabIndex = 11;
			this->lblArchivo->Text = L"Archivo:";
			// 
			// btnAbrir
			// 
			this->btnAbrir->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnAbrir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAbrir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->btnAbrir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnAbrir->Location = System::Drawing::Point(383, 63);
			this->btnAbrir->Name = L"btnAbrir";
			this->btnAbrir->Size = System::Drawing::Size(75, 25);
			this->btnAbrir->TabIndex = 10;
			this->btnAbrir->Text = L"Abrir";
			this->btnAbrir->UseVisualStyleBackColor = false;
			this->btnAbrir->Click += gcnew System::EventHandler(this, &Desencriptar::btnAbrir_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->btnSalir->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnSalir->Location = System::Drawing::Point(383, 12);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 9;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Desencriptar::btnSalir_Click);
			// 
			// saveTxt
			// 
			this->saveTxt->Filter = L"Archivo de Texto|*.txt";
			this->saveTxt->InitialDirectory = L"C:\\";
			this->saveTxt->Title = L"Seleccione directorio para guardar.";
			// 
			// openTxt
			// 
			this->openTxt->Filter = L"Archivo de Texto|*.txt";
			this->openTxt->InitialDirectory = L"C:\\";
			this->openTxt->Title = L"Seleccione archivo a desencriptar.";
			// 
			// Desencriptar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(466, 216);
			this->Controls->Add(this->tboxConfirmar);
			this->Controls->Add(this->lblConfirmar);
			this->Controls->Add(this->tboxClave);
			this->Controls->Add(this->lblClave);
			this->Controls->Add(this->btnDesencriptar);
			this->Controls->Add(this->tboxArchivo);
			this->Controls->Add(this->lblArchivo);
			this->Controls->Add(this->btnAbrir);
			this->Controls->Add(this->btnSalir);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(482, 254);
			this->MinimumSize = System::Drawing::Size(482, 254);
			this->Name = L"Desencriptar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Desencriptar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	private: System::Void btnDesencriptar_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ dirArchivo = gcnew String(""); // Declaro String "dirArchivo" para guardar la direccion del archivo.
			String ^ contArchivo = gcnew String(""); // Declaro String "contArchivo" para guardar el contenido del archivo.
			String ^ contEncriptado = gcnew String(""); // Declaro String "contEncriptado" para guardar el contenido encriptado del archivo.
			String ^ clave = gcnew String(""); // Declaro String "Clave" para guardar la clave usada para encriptar del archivo.

			try{
				dirArchivo = tboxArchivo->Text;
				contArchivo = System::IO::File::ReadAllText(dirArchivo);
						
						if(tboxClave->Text == tboxConfirmar->Text){
								if( saveTxt->ShowDialog() == System::Windows::Forms::DialogResult::OK ){
							
									clave = tboxClave->Text; // Asigno la clave a la variable.

									contArchivo = System::IO::File::ReadAllText(dirArchivo); // Guardo el contenido en el string.		
									
									array<Char>^ caracterArray = contArchivo->ToCharArray();
									array<Char>^ claveArray = clave->ToCharArray();
									array<Char>^ caracterChar = contArchivo->ToCharArray();;
									int caracterInt = 0;
									int sumaInt = 0;
									int incremento = 0;
		
						
									try{
										for(int k=0; k <= (clave->Length); k++)
										{
											sumaInt = sumaInt+int(claveArray[k]);
										}

							
									}
									catch(System::IndexOutOfRangeException ^e){
										Console::WriteLine(e);
									}

									//MessageBox::Show(Convert::ToString(sumaInt));

									incremento = ((sumaInt%7)+(sumaInt%13))+(sumaInt%17);
									
									//MessageBox::Show(Convert::ToString(incremento));

										try{
											for(int i=0; i <= (contArchivo->Length); i++){																	
												caracterInt = int(caracterArray[i]); // Caracter a ASCII
												contEncriptado = contEncriptado+Convert::ToString(Convert::ToChar(caracterInt-incremento)); // Pasar ASCII a Caracter, y juntarlo al string.								
											}
										}
										catch(System::IndexOutOfRangeException ^e){
											Console::WriteLine(e);
										}
										
										//MessageBox::Show(Convert::ToString(contEncriptado));

									System::IO::File::WriteAllText(saveTxt->FileName,contEncriptado);
									MessageBox::Show("¡Archivo desencriptado con exito!","Exito");
									this->Close();
								}
						}
						else{
							MessageBox::Show("Las claves no coinciden.","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation,MessageBoxDefaultButton::Button1);
						}

			}				
			catch(System::Exception ^e){
			Console::WriteLine(e);
			MessageBox::Show("Archivo no encontrado.","Error",MessageBoxButtons::OK,MessageBoxIcon::Exclamation,MessageBoxDefaultButton::Button1);
			}
		}
	private: System::Void tboxArchivo_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 		if (e->KeyCode == Keys::Enter )
				btnDesencriptar_Click(sender, e);
			 }
	private: System::Void tboxClave_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 		if (e->KeyCode == Keys::Enter )
				btnDesencriptar_Click(sender, e);
			 }
	private: System::Void tboxConfirmar_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 		if (e->KeyCode == Keys::Enter )
				btnDesencriptar_Click(sender, e);
			 }
};
}
