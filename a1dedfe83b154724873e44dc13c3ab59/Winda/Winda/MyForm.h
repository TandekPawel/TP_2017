#pragma once

namespace Winda {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

		static
			int czas_winda = 0;
			int czas_wejscie = 0;
			int czas_skok = 0;
			int kier_skok = 0;
			int wsiadl = 0;
			int licznik_pieter = 0;
	
	

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  N_Winda;
	protected:

	private: System::Windows::Forms::PictureBox^  Szyb;
	private: System::Windows::Forms::PictureBox^  Winda;
	private: System::Windows::Forms::PictureBox^  Ludz;

	protected:



	private: System::Windows::Forms::Button^  Exit;



	private: System::Windows::Forms::Button^  Wlacznik;
	private: System::Windows::Forms::Button^  Wejscie;
	private: System::Windows::Forms::Timer^  Z_Winda;
	private: System::Windows::Forms::Timer^  Z_Wejscie;
	private: System::Windows::Forms::Timer^  Z_Skok;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->N_Winda = (gcnew System::Windows::Forms::Label());
			this->Szyb = (gcnew System::Windows::Forms::PictureBox());
			this->Winda = (gcnew System::Windows::Forms::PictureBox());
			this->Ludz = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Wlacznik = (gcnew System::Windows::Forms::Button());
			this->Wejscie = (gcnew System::Windows::Forms::Button());
			this->Z_Winda = (gcnew System::Windows::Forms::Timer(this->components));
			this->Z_Wejscie = (gcnew System::Windows::Forms::Timer(this->components));
			this->Z_Skok = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ludz))->BeginInit();
			this->SuspendLayout();
			// 
			// N_Winda
			// 
			this->N_Winda->AutoSize = true;
			this->N_Winda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->N_Winda->Location = System::Drawing::Point(576, 9);
			this->N_Winda->Name = L"N_Winda";
			this->N_Winda->Size = System::Drawing::Size(184, 55);
			this->N_Winda->TabIndex = 0;
			this->N_Winda->Text = L"WINDA";
			// 
			// Szyb
			// 
			this->Szyb->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Szyb.Image")));
			this->Szyb->Location = System::Drawing::Point(-4, 80);
			this->Szyb->Name = L"Szyb";
			this->Szyb->Size = System::Drawing::Size(1351, 756);
			this->Szyb->TabIndex = 1;
			this->Szyb->TabStop = false;
			// 
			// Winda
			// 
			this->Winda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Winda.Image")));
			this->Winda->Location = System::Drawing::Point(436, 684);
			this->Winda->Name = L"Winda";
			this->Winda->Size = System::Drawing::Size(449, 149);
			this->Winda->TabIndex = 2;
			this->Winda->TabStop = false;
			// 
			// Ludz
			// 
			this->Ludz->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ludz.Image")));
			this->Ludz->Location = System::Drawing::Point(9, 734);
			this->Ludz->Margin = System::Windows::Forms::Padding(0);
			this->Ludz->Name = L"Ludz";
			this->Ludz->Size = System::Drawing::Size(54, 91);
			this->Ludz->TabIndex = 3;
			this->Ludz->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Exit->Location = System::Drawing::Point(1687, 969);
			this->Exit->Margin = System::Windows::Forms::Padding(0);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(120, 54);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// Wlacznik
			// 
			this->Wlacznik->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Wlacznik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wlacznik->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Wlacznik->Location = System::Drawing::Point(1687, 894);
			this->Wlacznik->Name = L"Wlacznik";
			this->Wlacznik->Size = System::Drawing::Size(120, 55);
			this->Wlacznik->TabIndex = 5;
			this->Wlacznik->Text = L"Jedz";
			this->Wlacznik->UseVisualStyleBackColor = false;
			this->Wlacznik->Click += gcnew System::EventHandler(this, &MyForm::Wlacznik_Click);
			// 
			// Wejscie
			// 
			this->Wejscie->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Wejscie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wejscie->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Wejscie->Location = System::Drawing::Point(1687, 787);
			this->Wejscie->Name = L"Wejscie";
			this->Wejscie->Size = System::Drawing::Size(120, 84);
			this->Wejscie->TabIndex = 6;
			this->Wejscie->Text = L"Wejdz Wyjdz";
			this->Wejscie->UseVisualStyleBackColor = false;
			this->Wejscie->Click += gcnew System::EventHandler(this, &MyForm::Wejscie_Click);
			// 
			// Z_Winda
			// 
			this->Z_Winda->Interval = 15;
			this->Z_Winda->Tick += gcnew System::EventHandler(this, &MyForm::Z_Winda_Tick);
			// 
			// Z_Wejscie
			// 
			this->Z_Wejscie->Interval = 5;
			this->Z_Wejscie->Tick += gcnew System::EventHandler(this, &MyForm::Z_Wejscie_Tick_1);
			// 
			// Z_Skok
			// 
			this->Z_Skok->Interval = 15;
			this->Z_Skok->Tick += gcnew System::EventHandler(this, &MyForm::Z_Skok_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1832, 1044);
			this->Controls->Add(this->Wejscie);
			this->Controls->Add(this->Wlacznik);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Ludz);
			this->Controls->Add(this->Winda);
			this->Controls->Add(this->Szyb);
			this->Controls->Add(this->N_Winda);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Szyb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Winda))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Ludz))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void Wlacznik_Click(System::Object^  sender, System::EventArgs^  e) {
	licznik_pieter++;
	this->Z_Winda->Start();
}
private: System::Void Z_Winda_Tick(System::Object^  sender, System::EventArgs^  e) {
	czas_winda++;
	if (czas_winda == 150)
	{
		this->Z_Winda->Stop();
		czas_winda = 0;
	}
	this->Winda->Top += -1;
	this->Ludz->Top += -1;
}
private: System::Void Wejscie_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Z_Wejscie->Start();
	this->Z_Skok->Start();
}
private: System::Void Z_Wejscie_Tick_1(System::Object^  sender, System::EventArgs^  e) {
	czas_wejscie++;
	if (czas_wejscie == 625)
	{
		this->Z_Wejscie->Stop();
		this->Z_Skok->Stop();
		czas_wejscie = 0;
		wsiadl = 1;
	}

	switch (wsiadl)
	{
		case 0:
		{
			this->Ludz->Left += 1;
			break;
		}
		case 1:
		{
			if (licznik_pieter % 2 == 1)
			{
				this->Ludz->Left += 1;
			}
			else
			{
				this->Ludz->Left += -1;
			}
			break;
		}
		default:
			break;
	}
	
}
private: System::Void Z_Skok_Tick(System::Object^  sender, System::EventArgs^  e) {
	if (kier_skok == 0)
	{
		czas_skok++;
		this->Ludz->Top += -1;
		if (czas_skok == 5)
		{
			czas_skok = 0;
			kier_skok = 1;
		}
	}
	else
	{
		czas_skok++;
		this->Ludz->Top += 1;
		if (czas_skok == 5)
		{
			czas_skok = 0;
			kier_skok = 0;
		}

	}
}
};
}
