#pragma once
#include <Windows.h>

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminMenuUserForm
	/// </summary>
	public ref class AdminMenuUserForm : public System::Windows::Forms::Form
	{
	public:
		AdminMenuUserForm(void)
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
		~AdminMenuUserForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::ToolStripButton^ Display;
	private: System::Windows::Forms::ToolStripButton^ Add;
	private: System::Windows::Forms::ToolStripButton^ Change;
	private: System::Windows::Forms::ToolStripDropDownButton^ Delete;
	private: System::Windows::Forms::ToolStripMenuItem^ удалитьВыделенныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ УдалитьВсеToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::Label^ labell;

	private: System::Windows::Forms::Label^ NewUser;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::TextBox^ txtName;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtPatr;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPhone;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtLogin;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPassword;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkAdmin;
	private: System::Windows::Forms::ToolStripDropDownButton^ Save;

	private: System::Windows::Forms::ToolStripMenuItem^ СохранитьвФайлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вПрограммуToolStripMenuItem;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ ChangeSave;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminMenuUserForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Display = (gcnew System::Windows::Forms::ToolStripButton());
			this->Add = (gcnew System::Windows::Forms::ToolStripButton());
			this->Change = (gcnew System::Windows::Forms::ToolStripButton());
			this->Delete = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->удалитьВыделенныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->УдалитьВсеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Save = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->вПрограммуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->СохранитьвФайлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labell = (gcnew System::Windows::Forms::Label());
			this->NewUser = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtPatr = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkAdmin = (gcnew System::Windows::Forms::CheckBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->ChangeSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(0, 252);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(749, 324);
			this->dataGridView1->TabIndex = 1;
			// 
			// Display
			// 
			this->Display->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Display->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Display.Image")));
			this->Display->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(34, 34);
			this->Display->Text = L"Показать";
			this->Display->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::Display_Click);
			// 
			// Add
			// 
			this->Add->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(34, 34);
			this->Add->Text = L"Добавить";
			this->Add->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::Add_Click);
			// 
			// Change
			// 
			this->Change->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Change->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Change.Image")));
			this->Change->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(34, 34);
			this->Change->Text = L"Изменить";
			this->Change->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::Change_Click);
			// 
			// Delete
			// 
			this->Delete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Delete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->удалитьВыделенныйToolStripMenuItem,
					this->УдалитьВсеToolStripMenuItem
			});
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(44, 34);
			this->Delete->Text = L"toolStripDropDownButton1";
			this->Delete->ToolTipText = L"Удалить";
			// 
			// удалитьВыделенныйToolStripMenuItem
			// 
			this->удалитьВыделенныйToolStripMenuItem->Name = L"удалитьВыделенныйToolStripMenuItem";
			this->удалитьВыделенныйToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->удалитьВыделенныйToolStripMenuItem->Text = L"Выделенный";
			this->удалитьВыделенныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::удалитьВыделенныйToolStripMenuItem_Click);
			// 
			// УдалитьВсеToolStripMenuItem
			// 
			this->УдалитьВсеToolStripMenuItem->Name = L"УдалитьВсеToolStripMenuItem";
			this->УдалитьВсеToolStripMenuItem->Size = System::Drawing::Size(182, 26);
			this->УдалитьВсеToolStripMenuItem->Text = L"Все";
			this->УдалитьВсеToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::УдалитьВсеToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(30, 30);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->Save, this->Display,
					this->Add, this->Change, this->Delete
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStrip1->Size = System::Drawing::Size(749, 37);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"ПанельУправления";
			// 
			// Save
			// 
			this->Save->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Save->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вПрограммуToolStripMenuItem,
					this->СохранитьвФайлToolStripMenuItem
			});
			this->Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Save.Image")));
			this->Save->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(44, 34);
			this->Save->Text = L"Сохранить";
			// 
			// вПрограммуToolStripMenuItem
			// 
			this->вПрограммуToolStripMenuItem->Name = L"вПрограммуToolStripMenuItem";
			this->вПрограммуToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->вПрограммуToolStripMenuItem->Text = L"В программу";
			this->вПрограммуToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::вПрограммуToolStripMenuItem_Click);
			// 
			// СохранитьвФайлToolStripMenuItem
			// 
			this->СохранитьвФайлToolStripMenuItem->Name = L"СохранитьвФайлToolStripMenuItem";
			this->СохранитьвФайлToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->СохранитьвФайлToolStripMenuItem->Text = L"В файл";
			this->СохранитьвФайлToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::СохранитьвФайлToolStripMenuItem_Click);
			// 
			// labell
			// 
			this->labell->AutoSize = true;
			this->labell->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labell->ForeColor = System::Drawing::Color::LightBlue;
			this->labell->Location = System::Drawing::Point(49, 58);
			this->labell->Name = L"labell";
			this->labell->Size = System::Drawing::Size(115, 26);
			this->labell->TabIndex = 2;
			this->labell->Text = L"Фамилия:";
			// 
			// NewUser
			// 
			this->NewUser->AutoSize = true;
			this->NewUser->BackColor = System::Drawing::Color::White;
			this->NewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewUser->ForeColor = System::Drawing::Color::MidnightBlue;
			this->NewUser->Location = System::Drawing::Point(465, 0);
			this->NewUser->Name = L"NewUser";
			this->NewUser->Size = System::Drawing::Size(219, 35);
			this->NewUser->TabIndex = 3;
			this->NewUser->Text = L"Пользователь";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtSurname->Location = System::Drawing::Point(172, 58);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(133, 29);
			this->txtSurname->TabIndex = 4;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtName->Location = System::Drawing::Point(172, 93);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(133, 29);
			this->txtName->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(49, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Имя:";
			// 
			// txtPatr
			// 
			this->txtPatr->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPatr->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPatr->Location = System::Drawing::Point(172, 128);
			this->txtPatr->Name = L"txtPatr";
			this->txtPatr->Size = System::Drawing::Size(133, 29);
			this->txtPatr->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(49, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 26);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Отчество:";
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPhone->Location = System::Drawing::Point(172, 163);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(133, 29);
			this->txtPhone->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(49, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 26);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Контакты:";
			// 
			// txtLogin
			// 
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLogin->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtLogin->Location = System::Drawing::Point(561, 58);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(133, 29);
			this->txtLogin->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightBlue;
			this->label5->Location = System::Drawing::Point(454, 58);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 26);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Логин:";
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPassword->Location = System::Drawing::Point(561, 93);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(133, 29);
			this->txtPassword->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightBlue;
			this->label6->Location = System::Drawing::Point(454, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 26);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Пароль:";
			// 
			// checkAdmin
			// 
			this->checkAdmin->AutoSize = true;
			this->checkAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkAdmin->ForeColor = System::Drawing::Color::LightBlue;
			this->checkAdmin->Location = System::Drawing::Point(459, 128);
			this->checkAdmin->Name = L"checkAdmin";
			this->checkAdmin->Size = System::Drawing::Size(199, 30);
			this->checkAdmin->TabIndex = 17;
			this->checkAdmin->Text = L"Администратор";
			this->checkAdmin->UseVisualStyleBackColor = true;
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::LightCyan;
			this->Clear->FlatAppearance->BorderSize = 0;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Clear->Location = System::Drawing::Point(54, 198);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(192, 31);
			this->Clear->TabIndex = 127;
			this->Clear->Text = L"Очистить поля";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::Clear_Click);
			// 
			// ChangeSave
			// 
			this->ChangeSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ChangeSave->FlatAppearance->BorderSize = 0;
			this->ChangeSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ChangeSave->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChangeSave->ForeColor = System::Drawing::Color::MidnightBlue;
			this->ChangeSave->Location = System::Drawing::Point(548, 198);
			this->ChangeSave->Name = L"ChangeSave";
			this->ChangeSave->Size = System::Drawing::Size(146, 31);
			this->ChangeSave->TabIndex = 126;
			this->ChangeSave->Text = L"Сохранить";
			this->ChangeSave->UseVisualStyleBackColor = false;
			this->ChangeSave->Click += gcnew System::EventHandler(this, &AdminMenuUserForm::ChangeSave_Click);
			// 
			// AdminMenuUserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(749, 577);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->ChangeSave);
			this->Controls->Add(this->checkAdmin);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPatr);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->NewUser);
			this->Controls->Add(this->labell);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(749, 577);
			this->MinimumSize = System::Drawing::Size(749, 577);
			this->Name = L"AdminMenuUserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Пользователи";
			this->Shown += gcnew System::EventHandler(this, &AdminMenuUserForm::AdminMenuUserForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void СохранитьвФайлToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Display_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void удалитьВыделенныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void УдалитьВсеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: void Header();
private: void Show();
private: System::Void AdminMenuUserForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void вПрограммуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ChangeSave_Click(System::Object^ sender, System::EventArgs^ e);
};
}
