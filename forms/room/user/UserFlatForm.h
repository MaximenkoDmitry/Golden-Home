#pragma once
#include <vector>
#include "Flat.h"

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� UserFlatForm
	/// </summary>
	public ref class UserFlatForm : public System::Windows::Forms::Form
	{
	public:
		UserFlatForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~UserFlatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ rightPrice;
	protected:
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::TextBox^ leftPrice;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ NameBuilding;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserFlatForm::typeid));
			this->rightPrice = (gcnew System::Windows::Forms::TextBox());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->leftPrice = (gcnew System::Windows::Forms::TextBox());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NameBuilding = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// rightPrice
			// 
			this->rightPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rightPrice->Location = System::Drawing::Point(896, 145);
			this->rightPrice->Name = L"rightPrice";
			this->rightPrice->Size = System::Drawing::Size(51, 27);
			this->rightPrice->TabIndex = 28;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::LightBlue;
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit->ForeColor = System::Drawing::Color::MidnightBlue;
			this->exit->Location = System::Drawing::Point(24, 27);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(114, 35);
			this->exit->TabIndex = 26;
			this->exit->Text = L"�����";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &UserFlatForm::exit_Click);
			// 
			// leftPrice
			// 
			this->leftPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->leftPrice->Location = System::Drawing::Point(794, 145);
			this->leftPrice->Name = L"leftPrice";
			this->leftPrice->Size = System::Drawing::Size(51, 27);
			this->leftPrice->TabIndex = 25;
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::LightBlue;
			this->Search->FlatAppearance->BorderSize = 0;
			this->Search->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Search->Location = System::Drawing::Point(752, 196);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(197, 35);
			this->Search->TabIndex = 27;
			this->Search->Text = L"�����";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &UserFlatForm::Search_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 101);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(715, 473);
			this->dataGridView1->TabIndex = 24;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(747, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 29);
			this->label4->TabIndex = 30;
			this->label4->Text = L"��";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(851, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 29);
			this->label3->TabIndex = 23;
			this->label3->Text = L"��";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(747, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 29);
			this->label2->TabIndex = 22;
			this->label2->Text = L"����� �� ����:";
			// 
			// NameBuilding
			// 
			this->NameBuilding->AutoSize = true;
			this->NameBuilding->BackColor = System::Drawing::Color::Transparent;
			this->NameBuilding->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameBuilding->ForeColor = System::Drawing::Color::LightBlue;
			this->NameBuilding->Location = System::Drawing::Point(370, 9);
			this->NameBuilding->Name = L"NameBuilding";
			this->NameBuilding->Size = System::Drawing::Size(313, 69);
			this->NameBuilding->TabIndex = 21;
			this->NameBuilding->Text = L"��������";
			// 
			// UserFlatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(977, 607);
			this->Controls->Add(this->rightPrice);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->leftPrice);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NameBuilding);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(977, 607);
			this->MinimumSize = System::Drawing::Size(977, 607);
			this->Name = L"UserFlatForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserFlatForm";
			this->Shown += gcnew System::EventHandler(this, &UserFlatForm::UserFlatForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void UserFlatForm_Shown(System::Object^ sender, System::EventArgs^ e);
	   void ShowFlatUser(vector <Flat> flats);
	   void HeaderFlat();
};
}
