#pragma once
#include"Functions.h"
#include "NonResidentialBuilding.h"
#include <Windows.h>
#include <vector>

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ BuildingForm
	/// </summary>
	public ref class BuildingForm : public System::Windows::Forms::Form
	{
	public:
		BuildingForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~BuildingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::ToolStrip^ toolStrip1;



	private: System::Windows::Forms::ToolStripButton^ Display;
	private: System::Windows::Forms::ToolStripButton^ Add;
	private: System::Windows::Forms::ToolStripButton^ Change;
	private: System::Windows::Forms::ToolStripDropDownButton^ Save;
	private: System::Windows::Forms::ToolStripMenuItem^ âÏğîãğàììóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^ Delete;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûáğàííûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñåToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtNumberOfFloors;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtNotLivingSpace;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::Label^ NewUser;
	private: System::Windows::Forms::Label^ labell;
	private: System::Windows::Forms::TextBox^ txtAdress;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtComment;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ ChangeSave;





	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BuildingForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Save = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->âÏğîãğàììóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Display = (gcnew System::Windows::Forms::ToolStripButton());
			this->Add = (gcnew System::Windows::Forms::ToolStripButton());
			this->Change = (gcnew System::Windows::Forms::ToolStripButton());
			this->Delete = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûáğàííûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtNumberOfFloors = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtNotLivingSpace = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->NewUser = (gcnew System::Windows::Forms::Label());
			this->labell = (gcnew System::Windows::Forms::Label());
			this->txtAdress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtComment = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(0, 264);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(749, 316);
			this->dataGridView1->TabIndex = 7;
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::White;
			this->toolStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(30, 30);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->Save, this->Display,
					this->Add, this->Change, this->Delete
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(749, 37);
			this->toolStrip1->TabIndex = 6;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Save
			// 
			this->Save->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Save->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âÏğîãğàììóToolStripMenuItem,
					this->âÔàéëToolStripMenuItem
			});
			this->Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Save.Image")));
			this->Save->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(44, 34);
			this->Save->Text = L"Ñîõğàíèòü";
			// 
			// âÏğîãğàììóToolStripMenuItem
			// 
			this->âÏğîãğàììóToolStripMenuItem->Name = L"âÏğîãğàììóToolStripMenuItem";
			this->âÏğîãğàììóToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->âÏğîãğàììóToolStripMenuItem->Text = L"Â ïğîãğàììó";
			this->âÏğîãğàììóToolStripMenuItem->Click += gcnew System::EventHandler(this, &BuildingForm::âÏğîãğàììóToolStripMenuItem_Click);
			// 
			// âÔàéëToolStripMenuItem
			// 
			this->âÔàéëToolStripMenuItem->Name = L"âÔàéëToolStripMenuItem";
			this->âÔàéëToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->âÔàéëToolStripMenuItem->Text = L"Â ôàéë";
			this->âÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &BuildingForm::âÔàéëToolStripMenuItem_Click);
			// 
			// Display
			// 
			this->Display->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Display->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Display.Image")));
			this->Display->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(34, 34);
			this->Display->Text = L"Ïîêàçàòü";
			this->Display->Click += gcnew System::EventHandler(this, &BuildingForm::Display_Click);
			// 
			// Add
			// 
			this->Add->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(34, 34);
			this->Add->Text = L"Äîáàâèòü";
			this->Add->Click += gcnew System::EventHandler(this, &BuildingForm::Add_Click);
			// 
			// Change
			// 
			this->Change->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Change->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Change.Image")));
			this->Change->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(34, 34);
			this->Change->Text = L"Èçìåíèòü";
			this->Change->Click += gcnew System::EventHandler(this, &BuildingForm::Change_Click);
			// 
			// Delete
			// 
			this->Delete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Delete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripSeparator1,
					this->âûáğàííûéToolStripMenuItem, this->âñåToolStripMenuItem
			});
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(44, 34);
			this->Delete->Text = L"Óäàëèòü";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(173, 6);
			// 
			// âûáğàííûéToolStripMenuItem
			// 
			this->âûáğàííûéToolStripMenuItem->Name = L"âûáğàííûéToolStripMenuItem";
			this->âûáğàííûéToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->âûáğàííûéToolStripMenuItem->Text = L"Âûáğàííûé";
			this->âûáğàííûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &BuildingForm::âûáğàííûéToolStripMenuItem_Click);
			// 
			// âñåToolStripMenuItem
			// 
			this->âñåToolStripMenuItem->Name = L"âñåToolStripMenuItem";
			this->âñåToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->âñåToolStripMenuItem->Text = L"Âñå";
			this->âñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &BuildingForm::âñåToolStripMenuItem_Click);
			// 
			// txtNumberOfFloors
			// 
			this->txtNumberOfFloors->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumberOfFloors->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtNumberOfFloors->Location = System::Drawing::Point(608, 95);
			this->txtNumberOfFloors->Name = L"txtNumberOfFloors";
			this->txtNumberOfFloors->Size = System::Drawing::Size(53, 29);
			this->txtNumberOfFloors->TabIndex = 30;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightBlue;
			this->label6->Location = System::Drawing::Point(416, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 26);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Êîë-âî ıòàæåé:";
			// 
			// txtNotLivingSpace
			// 
			this->txtNotLivingSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNotLivingSpace->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtNotLivingSpace->Location = System::Drawing::Point(608, 60);
			this->txtNotLivingSpace->Name = L"txtNotLivingSpace";
			this->txtNotLivingSpace->Size = System::Drawing::Size(53, 29);
			this->txtNotLivingSpace->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightBlue;
			this->label5->Location = System::Drawing::Point(416, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 26);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Îáù. ïëîùàäü:";
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPhone->Location = System::Drawing::Point(190, 134);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(148, 29);
			this->txtPhone->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(52, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 26);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Êîíòàêòû:";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtName->Location = System::Drawing::Point(190, 98);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(148, 29);
			this->txtName->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(52, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 26);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Èìÿ:";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtSurname->Location = System::Drawing::Point(190, 63);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(148, 29);
			this->txtSurname->TabIndex = 20;
			// 
			// NewUser
			// 
			this->NewUser->AutoSize = true;
			this->NewUser->BackColor = System::Drawing::Color::White;
			this->NewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewUser->ForeColor = System::Drawing::Color::MidnightBlue;
			this->NewUser->Location = System::Drawing::Point(541, 0);
			this->NewUser->Name = L"NewUser";
			this->NewUser->Size = System::Drawing::Size(120, 35);
			this->NewUser->TabIndex = 19;
			this->NewUser->Text = L"Çäàíèå";
			// 
			// labell
			// 
			this->labell->AutoSize = true;
			this->labell->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labell->ForeColor = System::Drawing::Color::LightBlue;
			this->labell->Location = System::Drawing::Point(52, 63);
			this->labell->Name = L"labell";
			this->labell->Size = System::Drawing::Size(115, 26);
			this->labell->TabIndex = 18;
			this->labell->Text = L"Ôàìèëèÿ:";
			// 
			// txtAdress
			// 
			this->txtAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdress->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtAdress->Location = System::Drawing::Point(190, 169);
			this->txtAdress->Name = L"txtAdress";
			this->txtAdress->Size = System::Drawing::Size(148, 29);
			this->txtAdress->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(52, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 26);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Àäğåñ:";
			// 
			// txtComment
			// 
			this->txtComment->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComment->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtComment->Location = System::Drawing::Point(608, 169);
			this->txtComment->Name = L"txtComment";
			this->txtComment->Size = System::Drawing::Size(94, 29);
			this->txtComment->TabIndex = 37;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(416, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 26);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Êîììåíòàğèé:";
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPrice->Location = System::Drawing::Point(608, 134);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(53, 29);
			this->txtPrice->TabIndex = 35;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightBlue;
			this->label7->Location = System::Drawing::Point(416, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 26);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Ñòîèìîñòü:";
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::LightCyan;
			this->Clear->FlatAppearance->BorderSize = 0;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Clear->Location = System::Drawing::Point(57, 213);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(192, 31);
			this->Clear->TabIndex = 125;
			this->Clear->Text = L"Î÷èñòèòü ïîëÿ";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &BuildingForm::Clear_Click);
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
			this->ChangeSave->Location = System::Drawing::Point(556, 213);
			this->ChangeSave->Name = L"ChangeSave";
			this->ChangeSave->Size = System::Drawing::Size(146, 31);
			this->ChangeSave->TabIndex = 124;
			this->ChangeSave->Text = L"Ñîõğàíèòü";
			this->ChangeSave->UseVisualStyleBackColor = false;
			this->ChangeSave->Click += gcnew System::EventHandler(this, &BuildingForm::ChangeSave_Click);
			// 
			// BuildingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(749, 577);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->ChangeSave);
			this->Controls->Add(this->txtComment);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtAdress);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtNumberOfFloors);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtNotLivingSpace);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->NewUser);
			this->Controls->Add(this->labell);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(749, 577);
			this->MinimumSize = System::Drawing::Size(749, 577);
			this->Name = L"BuildingForm";
			this->Text = L"BuildingForm";
			this->Shown += gcnew System::EventHandler(this, &BuildingForm::BuildingForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âÏğîãğàììóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Display_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûáğàííûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	   void Header();
	   void Show();
private: System::Void BuildingForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ChangeSave_Click(System::Object^ sender, System::EventArgs^ e);
};
}
