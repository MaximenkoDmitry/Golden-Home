#pragma once

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� RoomForm
	/// </summary>
	public ref class RoomForm : public System::Windows::Forms::Form
	{
	public:
		RoomForm(void)
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
		~RoomForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;



	private: System::Windows::Forms::ToolStripButton^ Display;
	private: System::Windows::Forms::ToolStripButton^ Add;
	private: System::Windows::Forms::ToolStripButton^ Change;
	private: System::Windows::Forms::ToolStripDropDownButton^ Save;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^ Delete;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtNumOfFloor;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtYearBuilt;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtComment;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::TextBox^ txtAdress;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLivingSpace;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::Label^ NewUser;
	private: System::Windows::Forms::Label^ labell;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Save = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Display = (gcnew System::Windows::Forms::ToolStripButton());
			this->Add = (gcnew System::Windows::Forms::ToolStripButton());
			this->Change = (gcnew System::Windows::Forms::ToolStripButton());
			this->Delete = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtNumOfFloor = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtYearBuilt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtComment = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtAdress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLivingSpace = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->NewUser = (gcnew System::Windows::Forms::Label());
			this->labell = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 277);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(749, 303);
			this->dataGridView1->TabIndex = 5;
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
			this->toolStrip1->TabIndex = 4;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Save
			// 
			this->Save->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Save->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������ToolStripMenuItem,
					this->�����ToolStripMenuItem
			});
			this->Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Save.Image")));
			this->Save->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(44, 34);
			this->Save->Text = L"���������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoomForm::����������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->�����ToolStripMenuItem->Text = L"� ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoomForm::�����ToolStripMenuItem_Click);
			// 
			// Display
			// 
			this->Display->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Display->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Display.Image")));
			this->Display->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(34, 34);
			this->Display->Text = L"��������";
			this->Display->Click += gcnew System::EventHandler(this, &RoomForm::Display_Click);
			// 
			// Add
			// 
			this->Add->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(34, 34);
			this->Add->Text = L"��������";
			this->Add->Click += gcnew System::EventHandler(this, &RoomForm::Add_Click);
			// 
			// Change
			// 
			this->Change->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Change->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Change.Image")));
			this->Change->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(34, 34);
			this->Change->Text = L"��������";
			this->Change->Click += gcnew System::EventHandler(this, &RoomForm::Change_Click);
			// 
			// Delete
			// 
			this->Delete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Delete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripSeparator1,
					this->���������ToolStripMenuItem, this->���ToolStripMenuItem
			});
			this->Delete->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Delete.Image")));
			this->Delete->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(44, 34);
			this->Delete->Text = L"�������";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(173, 6);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoomForm::���������ToolStripMenuItem_Click);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->���ToolStripMenuItem->Text = L"���";
			this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RoomForm::���ToolStripMenuItem_Click);
			// 
			// txtNumOfFloor
			// 
			this->txtNumOfFloor->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtNumOfFloor->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumOfFloor->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtNumOfFloor->Location = System::Drawing::Point(601, 97);
			this->txtNumOfFloor->Name = L"txtNumOfFloor";
			this->txtNumOfFloor->Size = System::Drawing::Size(90, 22);
			this->txtNumOfFloor->TabIndex = 121;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::LightBlue;
			this->label10->Location = System::Drawing::Point(382, 95);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 26);
			this->label10->TabIndex = 120;
			this->label10->Text = L"����:";
			// 
			// txtYearBuilt
			// 
			this->txtYearBuilt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtYearBuilt->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtYearBuilt->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtYearBuilt->Location = System::Drawing::Point(601, 133);
			this->txtYearBuilt->Name = L"txtYearBuilt";
			this->txtYearBuilt->Size = System::Drawing::Size(90, 22);
			this->txtYearBuilt->TabIndex = 119;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::LightBlue;
			this->label9->Location = System::Drawing::Point(382, 130);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 26);
			this->label9->TabIndex = 118;
			this->label9->Text = L"��� ���������:";
			// 
			// txtPrice
			// 
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPrice->Location = System::Drawing::Point(210, 203);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(148, 22);
			this->txtPrice->TabIndex = 117;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::LightBlue;
			this->label8->Location = System::Drawing::Point(54, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 26);
			this->label8->TabIndex = 116;
			this->label8->Text = L"���������:";
			// 
			// txtComment
			// 
			this->txtComment->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtComment->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComment->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtComment->Location = System::Drawing::Point(601, 168);
			this->txtComment->Name = L"txtComment";
			this->txtComment->Size = System::Drawing::Size(90, 22);
			this->txtComment->TabIndex = 115;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(382, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 26);
			this->label4->TabIndex = 114;
			this->label4->Text = L"�����������:";
			// 
			// txtAdress
			// 
			this->txtAdress->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdress->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtAdress->Location = System::Drawing::Point(210, 168);
			this->txtAdress->Name = L"txtAdress";
			this->txtAdress->Size = System::Drawing::Size(148, 22);
			this->txtAdress->TabIndex = 111;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(54, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 26);
			this->label2->TabIndex = 110;
			this->label2->Text = L"�����:";
			// 
			// txtLivingSpace
			// 
			this->txtLivingSpace->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtLivingSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLivingSpace->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtLivingSpace->Location = System::Drawing::Point(601, 59);
			this->txtLivingSpace->Name = L"txtLivingSpace";
			this->txtLivingSpace->Size = System::Drawing::Size(90, 22);
			this->txtLivingSpace->TabIndex = 109;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightBlue;
			this->label5->Location = System::Drawing::Point(382, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 26);
			this->label5->TabIndex = 108;
			this->label5->Text = L"����� �������:";
			// 
			// txtPhone
			// 
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPhone->Location = System::Drawing::Point(210, 133);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(148, 22);
			this->txtPhone->TabIndex = 107;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(54, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 26);
			this->label3->TabIndex = 106;
			this->label3->Text = L"��������:";
			// 
			// txtName
			// 
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtName->Location = System::Drawing::Point(210, 97);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(148, 22);
			this->txtName->TabIndex = 105;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(54, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 26);
			this->label1->TabIndex = 104;
			this->label1->Text = L"���:";
			// 
			// txtSurname
			// 
			this->txtSurname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtSurname->Location = System::Drawing::Point(210, 62);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(148, 22);
			this->txtSurname->TabIndex = 103;
			// 
			// NewUser
			// 
			this->NewUser->AutoSize = true;
			this->NewUser->BackColor = System::Drawing::Color::White;
			this->NewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewUser->ForeColor = System::Drawing::Color::MidnightBlue;
			this->NewUser->Location = System::Drawing::Point(493, 0);
			this->NewUser->Name = L"NewUser";
			this->NewUser->Size = System::Drawing::Size(139, 35);
			this->NewUser->TabIndex = 102;
			this->NewUser->Text = L"�������";
			// 
			// labell
			// 
			this->labell->AutoSize = true;
			this->labell->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labell->ForeColor = System::Drawing::Color::LightBlue;
			this->labell->Location = System::Drawing::Point(54, 59);
			this->labell->Name = L"labell";
			this->labell->Size = System::Drawing::Size(115, 26);
			this->labell->TabIndex = 101;
			this->labell->Text = L"�������:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightCyan;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button2->Location = System::Drawing::Point(59, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 31);
			this->button2->TabIndex = 123;
			this->button2->Text = L"�������� ����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RoomForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->button1->Location = System::Drawing::Point(574, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 31);
			this->button1->TabIndex = 122;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RoomForm::button1_Click);
			// 
			// RoomForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(749, 577);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtNumOfFloor);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtYearBuilt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtComment);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAdress);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLivingSpace);
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
			this->Name = L"RoomForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RoomForm";
			this->Shown += gcnew System::EventHandler(this, &RoomForm::RoomForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Display_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RoomForm_Shown(System::Object^ sender, System::EventArgs^ e);
void Show();
void Header();
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
