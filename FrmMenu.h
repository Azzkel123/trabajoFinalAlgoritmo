#pragma once
#include "FrmIntrucciones.h"
#include "FrmCreditos.h"
//#include "FrmMundoIA.h"
#include <Windows.h>

namespace tb2Algoritmo {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //Para Path y File

	public ref class FrmMenu : public System::Windows::Forms::Form
	{
	public:
		FrmMenu(void)
		{
			InitializeComponent();
		}
	protected:
		~FrmMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::Button^ btnJugar;
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Button^ btnInstrucciones;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnCreditos;

	protected:
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmMenu::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->btnInstrucciones = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, 0);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1259, 936);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &FrmMenu::axWindowsMediaPlayer1_Enter);
			// 
			// btnJugar
			// 
			this->btnJugar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnJugar.Image")));
			this->btnJugar->Location = System::Drawing::Point(791, 268);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(194, 71);
			this->btnJugar->TabIndex = 1;
			this->btnJugar->UseVisualStyleBackColor = true;
			this->btnJugar->Click += gcnew System::EventHandler(this, &FrmMenu::btnJugar_Click);
			// 
			// lblTitulo
			// 
			this->lblTitulo->BackColor = System::Drawing::Color::Transparent;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::Color::Black;
			this->lblTitulo->Location = System::Drawing::Point(254, 63);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lblTitulo->Size = System::Drawing::Size(582, 63);
			this->lblTitulo->TabIndex = 2;
			this->lblTitulo->Text = L"IA VS PENSAMIENTO CRITICO";
			// 
			// btnInstrucciones
			// 
			this->btnInstrucciones->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnInstrucciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnInstrucciones.Image")));
			this->btnInstrucciones->Location = System::Drawing::Point(791, 397);
			this->btnInstrucciones->Name = L"btnInstrucciones";
			this->btnInstrucciones->Size = System::Drawing::Size(194, 49);
			this->btnInstrucciones->TabIndex = 3;
			this->btnInstrucciones->UseVisualStyleBackColor = true;
			this->btnInstrucciones->Click += gcnew System::EventHandler(this, &FrmMenu::btnInstrucciones_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSalir.Image")));
			this->btnSalir->Location = System::Drawing::Point(791, 463);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(194, 48);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &FrmMenu::btnSalir_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnCreditos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCreditos.Image")));
			this->btnCreditos->Location = System::Drawing::Point(791, 345);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(194, 46);
			this->btnCreditos->TabIndex = 5;
			this->btnCreditos->UseVisualStyleBackColor = true;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &FrmMenu::btnCreditos_Click);
			// 
			// FrmMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1259, 936);
			this->Controls->Add(this->btnCreditos);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnInstrucciones);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->btnJugar);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Name = L"FrmMenu";
			this->Text = L"Menu Principal";
			this->Load += gcnew System::EventHandler(this, &FrmMenu::FrmMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void FrmMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		// Ruta al video dentro del proyecto
		String^ videoPath = Path::Combine(Application::StartupPath, "FondoMenu.mp4");

		if (!File::Exists(videoPath)) {
			return;
		}

		axWindowsMediaPlayer1->URL = videoPath;
		axWindowsMediaPlayer1->uiMode = "none";
		axWindowsMediaPlayer1->stretchToFit = true;
		axWindowsMediaPlayer1->settings->autoStart = true;
		axWindowsMediaPlayer1->settings->setMode("loop", true);
		axWindowsMediaPlayer1->settings->volume = 50;
	}
		

	private: System::Void btnCreditos_Click(System::Object^ sender, System::EventArgs^ e) {
		FrmCreditos^ frmCreditos = gcnew FrmCreditos();
		frmCreditos->ShowDialog();
	}
private: System::Void btnInstrucciones_Click(System::Object^ sender, System::EventArgs^ e) {
	FrmIntrucciones^ frmInstrucciones = gcnew FrmIntrucciones();
	frmInstrucciones->ShowDialog();
}
private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("¿Estas seguro que deseas salir?", "Confirmar salida",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void axWindowsMediaPlayer1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnJugar_Click(System::Object^ sender, System::EventArgs^ e) {
	/*FrmMundoIA^ frmMundoIA = gcnew FrmMundoIA();
	this->Hide();
	frmMundoIA->ShowDialog();
	this->Show();*/
}
};
}