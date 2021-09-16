#pragma once
#include"AuthorizationForm.h"
#include"AdminMenuUserForm.h"
#include <Windows.h>

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminMenuForm
	/// </summary>
	public ref class AdminMenuForm : public System::Windows::Forms::Form
	{
	public:
		AdminMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: void customizeDesing() {
		panel3->Visible = false;
	}

	private: void hideSubMenu(){
		if (panel3->Visible == true) {
			panel3->Visible = false;
		}
	}

	private: void showSubMenu(Panel^ submenu) {
		if (submenu->Visible == false) {
			hideSubMenu();
			submenu->Visible = true;
		}
		else {
			submenu->Visible = false;
		}
	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AdminMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Property;

	protected:


	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Panel^ panel1;




	private: System::Windows::Forms::Panel^ PnlFormLoader;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ Time;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ Office;
	private: System::Windows::Forms::Button^ Plot;
	private: System::Windows::Forms::Button^ Building;
	private: System::Windows::Forms::Button^ House;
	private: System::Windows::Forms::Button^ Flat;
	private: System::Windows::Forms::Button^ Room;
	private: System::Windows::Forms::Panel^ panel3;
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	public:
	private: System::ComponentModel::IContainer^ components;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Property = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Plot = (gcnew System::Windows::Forms::Button());
			this->Office = (gcnew System::Windows::Forms::Button());
			this->House = (gcnew System::Windows::Forms::Button());
			this->Flat = (gcnew System::Windows::Forms::Button());
			this->Building = (gcnew System::Windows::Forms::Button());
			this->Room = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->PnlFormLoader = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->button1->Location = System::Drawing::Point(-6, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Пользователи";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminMenuForm::button1_Click);
			// 
			// Property
			// 
			this->Property->BackColor = System::Drawing::Color::Transparent;
			this->Property->FlatAppearance->BorderSize = 0;
			this->Property->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Property->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Property->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(126)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->Property->Location = System::Drawing::Point(-6, 219);
			this->Property->Name = L"Property";
			this->Property->Size = System::Drawing::Size(211, 63);
			this->Property->TabIndex = 2;
			this->Property->Text = L"Недвижимость";
			this->Property->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->Property->UseVisualStyleBackColor = false;
			this->Property->Click += gcnew System::EventHandler(this, &AdminMenuForm::Property_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->ForeColor = System::Drawing::Color::White;
			this->buttonExit->Location = System::Drawing::Point(0, 519);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(205, 58);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &AdminMenuForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->buttonExit);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Property);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(205, 577);
			this->panel1->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel3->Controls->Add(this->Plot);
			this->panel3->Controls->Add(this->Office);
			this->panel3->Controls->Add(this->House);
			this->panel3->Controls->Add(this->Flat);
			this->panel3->Controls->Add(this->Building);
			this->panel3->Controls->Add(this->Room);
			this->panel3->Location = System::Drawing::Point(2, 286);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(200, 227);
			this->panel3->TabIndex = 6;
			this->panel3->Visible = false;
			// 
			// Plot
			// 
			this->Plot->BackColor = System::Drawing::Color::Transparent;
			this->Plot->FlatAppearance->BorderSize = 0;
			this->Plot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Plot->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Plot->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Plot->Location = System::Drawing::Point(-2, 185);
			this->Plot->Name = L"Plot";
			this->Plot->Size = System::Drawing::Size(205, 31);
			this->Plot->TabIndex = 13;
			this->Plot->Text = L"Участок";
			this->Plot->UseVisualStyleBackColor = false;
			this->Plot->Click += gcnew System::EventHandler(this, &AdminMenuForm::Plot_Click);
			// 
			// Office
			// 
			this->Office->BackColor = System::Drawing::Color::Transparent;
			this->Office->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->Office->FlatAppearance->BorderSize = 0;
			this->Office->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Office->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Office->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Office->Location = System::Drawing::Point(-2, 148);
			this->Office->Name = L"Office";
			this->Office->Size = System::Drawing::Size(205, 31);
			this->Office->TabIndex = 12;
			this->Office->Text = L"Помещение";
			this->Office->UseVisualStyleBackColor = false;
			this->Office->Click += gcnew System::EventHandler(this, &AdminMenuForm::Office_Click);
			// 
			// House
			// 
			this->House->BackColor = System::Drawing::Color::Transparent;
			this->House->FlatAppearance->BorderSize = 0;
			this->House->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->House->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->House->ForeColor = System::Drawing::Color::DodgerBlue;
			this->House->Location = System::Drawing::Point(-2, 0);
			this->House->Name = L"House";
			this->House->Size = System::Drawing::Size(205, 31);
			this->House->TabIndex = 9;
			this->House->Text = L"Дом/коттедж";
			this->House->UseVisualStyleBackColor = false;
			this->House->Click += gcnew System::EventHandler(this, &AdminMenuForm::House_Click);
			// 
			// Flat
			// 
			this->Flat->BackColor = System::Drawing::Color::Transparent;
			this->Flat->FlatAppearance->BorderSize = 0;
			this->Flat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Flat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Flat->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Flat->Location = System::Drawing::Point(-2, 37);
			this->Flat->Name = L"Flat";
			this->Flat->Size = System::Drawing::Size(205, 31);
			this->Flat->TabIndex = 11;
			this->Flat->Text = L"Квартира";
			this->Flat->UseVisualStyleBackColor = false;
			this->Flat->Click += gcnew System::EventHandler(this, &AdminMenuForm::Flat_Click);
			// 
			// Building
			// 
			this->Building->BackColor = System::Drawing::Color::Transparent;
			this->Building->FlatAppearance->BorderSize = 0;
			this->Building->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Building->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Building->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Building->Location = System::Drawing::Point(-2, 111);
			this->Building->Name = L"Building";
			this->Building->Size = System::Drawing::Size(205, 31);
			this->Building->TabIndex = 14;
			this->Building->Text = L"Здание";
			this->Building->UseVisualStyleBackColor = false;
			this->Building->Click += gcnew System::EventHandler(this, &AdminMenuForm::Building_Click);
			// 
			// Room
			// 
			this->Room->BackColor = System::Drawing::Color::Transparent;
			this->Room->FlatAppearance->BorderSize = 0;
			this->Room->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Room->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Room->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Room->Location = System::Drawing::Point(-2, 74);
			this->Room->Name = L"Room";
			this->Room->Size = System::Drawing::Size(205, 31);
			this->Room->TabIndex = 10;
			this->Room->Text = L"Комната";
			this->Room->UseVisualStyleBackColor = false;
			this->Room->Click += gcnew System::EventHandler(this, &AdminMenuForm::Room_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->Date);
			this->panel2->Controls->Add(this->Time);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(205, 144);
			this->panel2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LawnGreen;
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 26);
			this->label2->TabIndex = 3;
			this->label2->Text = L"User:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LawnGreen;
			this->label1->Location = System::Drawing::Point(77, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::Color::White;
			this->Date->Location = System::Drawing::Point(21, 97);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(169, 38);
			this->Date->TabIndex = 1;
			this->Date->Text = L"01/01/2001";
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Location = System::Drawing::Point(33, 42);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(141, 62);
			this->Time->TabIndex = 0;
			this->Time->Text = L"00:00";
			// 
			// PnlFormLoader
			// 
			this->PnlFormLoader->Location = System::Drawing::Point(208, 0);
			this->PnlFormLoader->Name = L"PnlFormLoader";
			this->PnlFormLoader->Size = System::Drawing::Size(742, 577);
			this->PnlFormLoader->TabIndex = 5;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &AdminMenuForm::timer1_Tick);
			// 
			// AdminMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(951, 577);
			this->Controls->Add(this->PnlFormLoader);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(951, 577);
			this->MinimumSize = System::Drawing::Size(951, 577);
			this->Name = L"AdminMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Администратор";
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
private: System::Void Property_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void House_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Flat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Room_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Building_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Office_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Plot_Click(System::Object^ sender, System::EventArgs^ e);
};
}
