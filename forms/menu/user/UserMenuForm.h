#pragma once

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserMenuForm
	/// </summary>
	public ref class UserMenuForm : public System::Windows::Forms::Form
	{
	public:
		UserMenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ house;
	private: System::Windows::Forms::Button^ flat;
	private: System::Windows::Forms::Button^ room;
	private: System::Windows::Forms::Button^ plot;




	private: System::Windows::Forms::Button^ office;

	private: System::Windows::Forms::Button^ building;

	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Timer^ timer;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserMenuForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->house = (gcnew System::Windows::Forms::Button());
			this->flat = (gcnew System::Windows::Forms::Button());
			this->room = (gcnew System::Windows::Forms::Button());
			this->plot = (gcnew System::Windows::Forms::Button());
			this->office = (gcnew System::Windows::Forms::Button());
			this->building = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-69, -174);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1054, 926);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// house
			// 
			this->house->BackColor = System::Drawing::Color::Transparent;
			this->house->FlatAppearance->BorderSize = 0;
			this->house->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->house->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->house->ForeColor = System::Drawing::Color::MidnightBlue;
			this->house->Location = System::Drawing::Point(125, 168);
			this->house->Name = L"house";
			this->house->Size = System::Drawing::Size(261, 54);
			this->house->TabIndex = 1;
			this->house->Text = L"Дом/коттедж";
			this->house->UseVisualStyleBackColor = false;
			this->house->Click += gcnew System::EventHandler(this, &UserMenuForm::house_Click);
			// 
			// flat
			// 
			this->flat->BackColor = System::Drawing::Color::Transparent;
			this->flat->FlatAppearance->BorderSize = 0;
			this->flat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->flat->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flat->ForeColor = System::Drawing::Color::MidnightBlue;
			this->flat->Location = System::Drawing::Point(125, 244);
			this->flat->Name = L"flat";
			this->flat->Size = System::Drawing::Size(261, 54);
			this->flat->TabIndex = 2;
			this->flat->Text = L"Квартира";
			this->flat->UseVisualStyleBackColor = false;
			this->flat->Click += gcnew System::EventHandler(this, &UserMenuForm::flat_Click);
			// 
			// room
			// 
			this->room->BackColor = System::Drawing::Color::Transparent;
			this->room->FlatAppearance->BorderSize = 0;
			this->room->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->room->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->room->ForeColor = System::Drawing::Color::MidnightBlue;
			this->room->Location = System::Drawing::Point(125, 323);
			this->room->Name = L"room";
			this->room->Size = System::Drawing::Size(261, 54);
			this->room->TabIndex = 3;
			this->room->Text = L"Комната";
			this->room->UseVisualStyleBackColor = false;
			this->room->Click += gcnew System::EventHandler(this, &UserMenuForm::room_Click);
			// 
			// plot
			// 
			this->plot->BackColor = System::Drawing::Color::Transparent;
			this->plot->FlatAppearance->BorderSize = 0;
			this->plot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plot->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plot->ForeColor = System::Drawing::Color::MidnightBlue;
			this->plot->Location = System::Drawing::Point(564, 323);
			this->plot->Name = L"plot";
			this->plot->Size = System::Drawing::Size(261, 54);
			this->plot->TabIndex = 6;
			this->plot->Text = L"Участок";
			this->plot->UseVisualStyleBackColor = false;
			this->plot->Click += gcnew System::EventHandler(this, &UserMenuForm::plot_Click);
			// 
			// office
			// 
			this->office->BackColor = System::Drawing::Color::Transparent;
			this->office->FlatAppearance->BorderSize = 0;
			this->office->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->office->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->office->ForeColor = System::Drawing::Color::MidnightBlue;
			this->office->Location = System::Drawing::Point(564, 244);
			this->office->Name = L"office";
			this->office->Size = System::Drawing::Size(261, 54);
			this->office->TabIndex = 5;
			this->office->Text = L"Помещение";
			this->office->UseVisualStyleBackColor = false;
			this->office->Click += gcnew System::EventHandler(this, &UserMenuForm::office_Click);
			// 
			// building
			// 
			this->building->BackColor = System::Drawing::Color::Transparent;
			this->building->FlatAppearance->BorderSize = 0;
			this->building->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->building->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->building->ForeColor = System::Drawing::Color::MidnightBlue;
			this->building->Location = System::Drawing::Point(564, 168);
			this->building->Name = L"building";
			this->building->Size = System::Drawing::Size(261, 54);
			this->building->TabIndex = 4;
			this->building->Text = L"Здание";
			this->building->UseVisualStyleBackColor = false;
			this->building->Click += gcnew System::EventHandler(this, &UserMenuForm::building_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"BankGothic Md BT", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button7->Location = System::Drawing::Point(343, 402);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(261, 54);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Выйти";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &UserMenuForm::button7_Click);
			// 
			// UserMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(951, 577);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->plot);
			this->Controls->Add(this->office);
			this->Controls->Add(this->building);
			this->Controls->Add(this->room);
			this->Controls->Add(this->flat);
			this->Controls->Add(this->house);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(951, 577);
			this->MinimumSize = System::Drawing::Size(951, 577);
			this->Name = L"UserMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserMenuForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void house_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void flat_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void room_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void building_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void office_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void plot_Click(System::Object^ sender, System::EventArgs^ e);
};
}
