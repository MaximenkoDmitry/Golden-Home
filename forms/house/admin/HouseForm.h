#pragma once

namespace GOLDENHOMEPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ HouseForm
	/// </summary>
	public ref class HouseForm : public System::Windows::Forms::Form
	{
	public:
		HouseForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~HouseForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::ToolStripButton^ Display;
	private: System::Windows::Forms::ToolStripButton^ Add;
	private: System::Windows::Forms::ToolStripButton^ Change;




	private: System::Windows::Forms::ToolStrip^ toolStrip1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::ToolStripDropDownButton^ Save;
	private: System::Windows::Forms::ToolStripMenuItem^ âÏðîãðàììóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^ Delete;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ âûáðàííûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñåToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ txtComment;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNumOfRooms;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtAdress;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtLandArea;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtLivingSpace;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtSurname;
	private: System::Windows::Forms::Label^ NewUser;
	private: System::Windows::Forms::Label^ labell;
	private: System::Windows::Forms::TextBox^ txtPrice;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtYearBuilt;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtNumOfFloor;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ ChangeSave;










	protected:
















	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HouseForm::typeid));
			this->Display = (gcnew System::Windows::Forms::ToolStripButton());
			this->Add = (gcnew System::Windows::Forms::ToolStripButton());
			this->Change = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->Save = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->âÏðîãðàììóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Delete = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûáðàííûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->txtComment = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNumOfRooms = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtAdress = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtLandArea = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtLivingSpace = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->NewUser = (gcnew System::Windows::Forms::Label());
			this->labell = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtYearBuilt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtNumOfFloor = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->ChangeSave = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Display
			// 
			this->Display->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Display->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Display.Image")));
			this->Display->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(34, 34);
			this->Display->Text = L"Ïîêàçàòü";
			this->Display->Click += gcnew System::EventHandler(this, &HouseForm::Display_Click);
			// 
			// Add
			// 
			this->Add->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(34, 34);
			this->Add->Text = L"Äîáàâèòü";
			this->Add->Click += gcnew System::EventHandler(this, &HouseForm::Add_Click);
			// 
			// Change
			// 
			this->Change->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Change->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Change.Image")));
			this->Change->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Change->Name = L"Change";
			this->Change->Size = System::Drawing::Size(34, 34);
			this->Change->Text = L"Èçìåíèòü";
			this->Change->Click += gcnew System::EventHandler(this, &HouseForm::Change_Click);
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
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// Save
			// 
			this->Save->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Save->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âÏðîãðàììóToolStripMenuItem,
					this->âÔàéëToolStripMenuItem
			});
			this->Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Save.Image")));
			this->Save->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(44, 34);
			this->Save->Text = L"Ñîõðàíèòü";
			// 
			// âÏðîãðàììóToolStripMenuItem
			// 
			this->âÏðîãðàììóToolStripMenuItem->Name = L"âÏðîãðàììóToolStripMenuItem";
			this->âÏðîãðàììóToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->âÏðîãðàììóToolStripMenuItem->Text = L"Â ïðîãðàììó";
			this->âÏðîãðàììóToolStripMenuItem->Click += gcnew System::EventHandler(this, &HouseForm::âÏðîãðàììóToolStripMenuItem_Click);
			// 
			// âÔàéëToolStripMenuItem
			// 
			this->âÔàéëToolStripMenuItem->Name = L"âÔàéëToolStripMenuItem";
			this->âÔàéëToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->âÔàéëToolStripMenuItem->Text = L"Â ôàéë";
			this->âÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &HouseForm::âÔàéëToolStripMenuItem_Click);
			// 
			// Delete
			// 
			this->Delete->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->Delete->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripSeparator1,
					this->âûáðàííûéToolStripMenuItem, this->âñåToolStripMenuItem
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
			// âûáðàííûéToolStripMenuItem
			// 
			this->âûáðàííûéToolStripMenuItem->Name = L"âûáðàííûéToolStripMenuItem";
			this->âûáðàííûéToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->âûáðàííûéToolStripMenuItem->Text = L"Âûáðàííûé";
			this->âûáðàííûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &HouseForm::âûáðàííûéToolStripMenuItem_Click);
			// 
			// âñåToolStripMenuItem
			// 
			this->âñåToolStripMenuItem->Name = L"âñåToolStripMenuItem";
			this->âñåToolStripMenuItem->Size = System::Drawing::Size(176, 26);
			this->âñåToolStripMenuItem->Text = L"Âñå";
			this->âñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &HouseForm::âñåToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 314);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(749, 263);
			this->dataGridView1->TabIndex = 2;
			// 
			// txtComment
			// 
			this->txtComment->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtComment->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtComment->Location = System::Drawing::Point(597, 232);
			this->txtComment->Name = L"txtComment";
			this->txtComment->Size = System::Drawing::Size(90, 29);
			this->txtComment->TabIndex = 71;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightBlue;
			this->label4->Location = System::Drawing::Point(386, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 26);
			this->label4->TabIndex = 70;
			this->label4->Text = L"Êîììåíòàðèé:";
			// 
			// txtNumOfRooms
			// 
			this->txtNumOfRooms->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumOfRooms->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtNumOfRooms->Location = System::Drawing::Point(597, 126);
			this->txtNumOfRooms->Name = L"txtNumOfRooms";
			this->txtNumOfRooms->Size = System::Drawing::Size(90, 29);
			this->txtNumOfRooms->TabIndex = 69;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::LightBlue;
			this->label7->Location = System::Drawing::Point(386, 129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(169, 26);
			this->label7->TabIndex = 68;
			this->label7->Text = L"Êîë-âî êîìíàò:";
			// 
			// txtAdress
			// 
			this->txtAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAdress->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtAdress->Location = System::Drawing::Point(197, 165);
			this->txtAdress->Name = L"txtAdress";
			this->txtAdress->Size = System::Drawing::Size(148, 29);
			this->txtAdress->TabIndex = 67;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightBlue;
			this->label2->Location = System::Drawing::Point(41, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 26);
			this->label2->TabIndex = 66;
			this->label2->Text = L"Àäðåñ:";
			// 
			// txtLandArea
			// 
			this->txtLandArea->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLandArea->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtLandArea->Location = System::Drawing::Point(597, 91);
			this->txtLandArea->Name = L"txtLandArea";
			this->txtLandArea->Size = System::Drawing::Size(90, 29);
			this->txtLandArea->TabIndex = 65;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::LightBlue;
			this->label6->Location = System::Drawing::Point(386, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 26);
			this->label6->TabIndex = 64;
			this->label6->Text = L"Ïëîùàäü ó÷àñòêà:";
			// 
			// txtLivingSpace
			// 
			this->txtLivingSpace->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLivingSpace->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtLivingSpace->Location = System::Drawing::Point(597, 56);
			this->txtLivingSpace->Name = L"txtLivingSpace";
			this->txtLivingSpace->Size = System::Drawing::Size(90, 29);
			this->txtLivingSpace->TabIndex = 63;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::LightBlue;
			this->label5->Location = System::Drawing::Point(386, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(181, 26);
			this->label5->TabIndex = 62;
			this->label5->Text = L"Æèëàÿ ïëîùàäü:";
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPhone->Location = System::Drawing::Point(197, 130);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(148, 29);
			this->txtPhone->TabIndex = 61;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightBlue;
			this->label3->Location = System::Drawing::Point(41, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(117, 26);
			this->label3->TabIndex = 60;
			this->label3->Text = L"Êîíòàêòû:";
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtName->Location = System::Drawing::Point(197, 94);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(148, 29);
			this->txtName->TabIndex = 59;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightBlue;
			this->label1->Location = System::Drawing::Point(41, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 26);
			this->label1->TabIndex = 58;
			this->label1->Text = L"Èìÿ:";
			// 
			// txtSurname
			// 
			this->txtSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSurname->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtSurname->Location = System::Drawing::Point(197, 59);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(148, 29);
			this->txtSurname->TabIndex = 57;
			// 
			// NewUser
			// 
			this->NewUser->AutoSize = true;
			this->NewUser->BackColor = System::Drawing::Color::White;
			this->NewUser->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewUser->ForeColor = System::Drawing::Color::MidnightBlue;
			this->NewUser->Location = System::Drawing::Point(480, 0);
			this->NewUser->Name = L"NewUser";
			this->NewUser->Size = System::Drawing::Size(207, 35);
			this->NewUser->TabIndex = 56;
			this->NewUser->Text = L"Äîì/êîòòåäæ";
			// 
			// labell
			// 
			this->labell->AutoSize = true;
			this->labell->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labell->ForeColor = System::Drawing::Color::LightBlue;
			this->labell->Location = System::Drawing::Point(41, 59);
			this->labell->Name = L"labell";
			this->labell->Size = System::Drawing::Size(115, 26);
			this->labell->TabIndex = 55;
			this->labell->Text = L"Ôàìèëèÿ:";
			// 
			// txtPrice
			// 
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPrice->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtPrice->Location = System::Drawing::Point(197, 200);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(148, 29);
			this->txtPrice->TabIndex = 73;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::LightBlue;
			this->label8->Location = System::Drawing::Point(41, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 26);
			this->label8->TabIndex = 72;
			this->label8->Text = L"Ñòîèìîñòü:";
			// 
			// txtYearBuilt
			// 
			this->txtYearBuilt->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtYearBuilt->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtYearBuilt->Location = System::Drawing::Point(597, 197);
			this->txtYearBuilt->Name = L"txtYearBuilt";
			this->txtYearBuilt->Size = System::Drawing::Size(90, 29);
			this->txtYearBuilt->TabIndex = 75;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::LightBlue;
			this->label9->Location = System::Drawing::Point(386, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(168, 26);
			this->label9->TabIndex = 74;
			this->label9->Text = L"Ãîä ïîñòðîéêè:";
			// 
			// txtNumOfFloor
			// 
			this->txtNumOfFloor->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumOfFloor->ForeColor = System::Drawing::Color::MidnightBlue;
			this->txtNumOfFloor->Location = System::Drawing::Point(597, 162);
			this->txtNumOfFloor->Name = L"txtNumOfFloor";
			this->txtNumOfFloor->Size = System::Drawing::Size(90, 29);
			this->txtNumOfFloor->TabIndex = 77;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::LightBlue;
			this->label10->Location = System::Drawing::Point(386, 165);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(170, 26);
			this->label10->TabIndex = 76;
			this->label10->Text = L"Êîë-âî ýòàæåé:";
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::Color::LightCyan;
			this->Clear->FlatAppearance->BorderSize = 0;
			this->Clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Clear->Location = System::Drawing::Point(46, 277);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(192, 31);
			this->Clear->TabIndex = 127;
			this->Clear->Text = L"Î÷èñòèòü ïîëÿ";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &HouseForm::Clear_Click);
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
			this->ChangeSave->Location = System::Drawing::Point(541, 277);
			this->ChangeSave->Name = L"ChangeSave";
			this->ChangeSave->Size = System::Drawing::Size(146, 31);
			this->ChangeSave->TabIndex = 126;
			this->ChangeSave->Text = L"Ñîõðàíèòü";
			this->ChangeSave->UseVisualStyleBackColor = false;
			this->ChangeSave->Click += gcnew System::EventHandler(this, &HouseForm::ChangeSave_Click);
			// 
			// HouseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(749, 577);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->ChangeSave);
			this->Controls->Add(this->txtNumOfFloor);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtYearBuilt);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtComment);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtNumOfRooms);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtAdress);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLandArea);
			this->Controls->Add(this->label6);
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
			this->Name = L"HouseForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"House";
			this->Shown += gcnew System::EventHandler(this, &HouseForm::HouseForm_Shown);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void âÏðîãðàììóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Display_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Change_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âûáðàííûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void âñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void HouseForm_Shown(System::Object^ sender, System::EventArgs^ e);
	void GOLDENHOMEPROJECT::HouseForm::Header();
	void GOLDENHOMEPROJECT::HouseForm::Show();
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ChangeSave_Click(System::Object^ sender, System::EventArgs^ e);
};
}
