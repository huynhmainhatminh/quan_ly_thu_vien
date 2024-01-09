#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			panel3->Hide();
			panel4->Hide();
			panel5->Hide();
			panel6->Hide();
			panel7->Hide();
			panel8->Hide();
			panel9->Hide();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button10;



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::DataGridView^ dataGridView7;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::Label^ label27;






































	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1200, 45);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Thư Viện Tri Thức Vượt Thời Gian";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1098, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 45);
			this->button2->TabIndex = 2;
			this->button2->Text = L"_";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1143, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(57, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(0, 45);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(225, 655);
			this->panel2->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(3, 564);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(217, 50);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Danh Sách";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &AdminForm::button9_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(3, 508);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(217, 50);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Tìm User";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(3, 452);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(217, 50);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Xóa User";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(3, 396);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(217, 50);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Thêm User";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(3, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(217, 50);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Tìm Sách";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(3, 284);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(217, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Xóa Sách";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(3, 228);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(217, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Thêm Sách";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(25, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Welcome, Admin";
			this->label2->Click += gcnew System::EventHandler(this, &AdminForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(15, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 180);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->BackColor = System::Drawing::Color::SeaGreen;
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Location = System::Drawing::Point(231, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(957, 636);
			this->panel3->TabIndex = 2;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->Location = System::Drawing::Point(783, 6);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(180, 64);
			this->button11->TabIndex = 13;
			this->button11->Text = L"List Users";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &AdminForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(186, 6);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(591, 64);
			this->button12->TabIndex = 14;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(0, 76);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(963, 567);
			this->dataGridView1->TabIndex = 14;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkSeaGreen;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->Location = System::Drawing::Point(6, 6);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(174, 64);
			this->button10->TabIndex = 12;
			this->button10->Text = L"List Books";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &AdminForm::button10_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SeaGreen;
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->dateTimePicker1);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->dataGridView2);
			this->panel4->Location = System::Drawing::Point(231, 51);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(957, 636);
			this->panel4->TabIndex = 3;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(844, 73);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(110, 67);
			this->button14->TabIndex = 27;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &AdminForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(844, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(110, 67);
			this->button13->TabIndex = 26;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &AdminForm::button13_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(511, 73);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 26);
			this->dateTimePicker1->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(376, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 21);
			this->label6->TabIndex = 22;
			this->label6->Text = L"DATE USER : ";
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Member", L"Admin" });
			this->comboBox1->Location = System::Drawing::Point(511, 13);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(104, 26);
			this->comboBox1->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(376, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 21);
			this->label5->TabIndex = 20;
			this->label5->Text = L"TYPE USER : ";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(151, 73);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 21);
			this->textBox2->TabIndex = 19;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(34, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 21);
			this->label4->TabIndex = 18;
			this->label4->Text = L"ID USER : ";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(151, 18);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 21);
			this->textBox1->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(5, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 21);
			this->label3->TabIndex = 16;
			this->label3->Text = L"NAME USER : ";
			// 
			// dataGridView2
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->Location = System::Drawing::Point(0, 146);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(957, 491);
			this->dataGridView2->TabIndex = 15;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::SeaGreen;
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->dataGridView3);
			this->panel5->Location = System::Drawing::Point(231, 51);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(957, 636);
			this->panel5->TabIndex = 26;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(705, 30);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(110, 67);
			this->button16->TabIndex = 28;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &AdminForm::button16_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(589, 30);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(110, 67);
			this->button15->TabIndex = 27;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &AdminForm::button15_Click);
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(278, 78);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 21);
			this->textBox4->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(156, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 21);
			this->label8->TabIndex = 20;
			this->label8->Text = L"ID USER : ";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(278, 30);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 21);
			this->textBox3->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(127, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 21);
			this->label7->TabIndex = 18;
			this->label7->Text = L"NAME USER : ";
			// 
			// dataGridView3
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->EnableHeadersVisualStyles = false;
			this->dataGridView3->Location = System::Drawing::Point(0, 145);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(957, 491);
			this->dataGridView3->TabIndex = 16;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::SeaGreen;
			this->panel6->Controls->Add(this->textBox7);
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->button20);
			this->panel6->Controls->Add(this->button19);
			this->panel6->Controls->Add(this->comboBox2);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->button18);
			this->panel6->Controls->Add(this->button17);
			this->panel6->Controls->Add(this->dataGridView4);
			this->panel6->Location = System::Drawing::Point(231, 51);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(957, 636);
			this->panel6->TabIndex = 29;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(534, 53);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(136, 21);
			this->textBox7->TabIndex = 39;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkBlue;
			this->label12->Location = System::Drawing::Point(428, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 21);
			this->label12->TabIndex = 38;
			this->label12->Text = L"ID USER : ";
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(728, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(110, 67);
			this->button20->TabIndex = 37;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(728, 73);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(110, 67);
			this->button19->TabIndex = 36;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &AdminForm::button19_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Member", L"Admin" });
			this->comboBox2->Location = System::Drawing::Point(562, 13);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(108, 26);
			this->comboBox2->TabIndex = 35;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(428, 13);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 21);
			this->label11->TabIndex = 34;
			this->label11->Text = L"TYPE USER : ";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(217, 53);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 21);
			this->textBox6->TabIndex = 33;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(16, 53);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(177, 21);
			this->label10->TabIndex = 32;
			this->label10->Text = L"PASSWORD USER : ";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(217, 14);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 21);
			this->textBox5->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(66, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 21);
			this->label9->TabIndex = 30;
			this->label9->Text = L"NAME USER : ";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(844, 72);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(110, 67);
			this->button18->TabIndex = 29;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &AdminForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(844, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(110, 67);
			this->button17->TabIndex = 28;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &AdminForm::button17_Click);
			// 
			// dataGridView4
			// 
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView4->EnableHeadersVisualStyles = false;
			this->dataGridView4->Location = System::Drawing::Point(0, 145);
			this->dataGridView4->Name = L"dataGridView4";
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(957, 491);
			this->dataGridView4->TabIndex = 17;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::SeaGreen;
			this->panel7->Controls->Add(this->comboBox3);
			this->panel7->Controls->Add(this->label17);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Controls->Add(this->label16);
			this->panel7->Controls->Add(this->textBox10);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->textBox9);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->textBox8);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Controls->Add(this->button22);
			this->panel7->Controls->Add(this->button21);
			this->panel7->Controls->Add(this->dataGridView5);
			this->panel7->Location = System::Drawing::Point(231, 51);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(957, 636);
			this->panel7->TabIndex = 40;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"Ẩm thực - Nấu ăn", L"Cổ Tích - Thần Thoại", L"Công Nghệ Thông Tin",
					L"Học Ngoại Ngữ", L"Hồi Ký - Tuỳ Bút", L"Huyền bí - Giả Tưởng", L"Khoa Học - Kỹ Thuật", L"Kiếm Hiệp - Tiên Hiệp", L"Kiến Trúc - Xây Dựng",
					L"Kinh Tế - Quản Lý", L"Lịch Sử - Chính Trị", L"Marketing - Bán hàng", L"Nông - Lâm - Ngư", L"Phiêu Lưu - Mạo Hiểm", L"Review Sách",
					L"Tài Liệu Học Tập", L"Tâm Lý - Kỹ Năng Sống", L"Thể Thao - Nghệ Thuật", L"Thư Viện Pháp Luật", L"Tiểu Thuyết Phương Tây", L"Tiểu Thuyết Trung Quốc",
					L"Triết Học", L"Trinh Thám - Hình Sự", L"Truyện Cười - Tiếu Lâm", L"Truyện Ma - Truyện Kinh Dị", L"Truyện Ngắn - Ngôn Tình",
					L"Truyên Teen - Tuổi Học Trò", L"Truyện Tranh", L"Tử Vi - Phong Thủy", L"Văn Hóa - Tôn Giáo", L"Văn Học Việt Nam", L"Y Học - Sức Khỏe"
			});
			this->comboBox3->Location = System::Drawing::Point(599, 68);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(202, 26);
			this->comboBox3->TabIndex = 41;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(428, 72);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(157, 21);
			this->label17->TabIndex = 40;
			this->label17->Text = L"BOOK SUBJECT : ";
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(599, 13);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(202, 21);
			this->textBox11->TabIndex = 39;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(401, 13);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(181, 21);
			this->label16->TabIndex = 38;
			this->label16->Text = L"BOOK PUBLISHER : ";
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(186, 97);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(197, 21);
			this->textBox10->TabIndex = 37;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(16, 97);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(154, 21);
			this->label15->TabIndex = 36;
			this->label15->Text = L"BOOK AUTHOR : ";
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(186, 54);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(197, 21);
			this->textBox9->TabIndex = 35;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(42, 54);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 21);
			this->label14->TabIndex = 34;
			this->label14->Text = L"BOOK TITLE : ";
			// 
			// textBox8
			// 
			this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(186, 13);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(197, 21);
			this->textBox8->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(51, 13);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(125, 21);
			this->label13->TabIndex = 32;
			this->label13->Text = L"BOOK ISBN : ";
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(844, 76);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(110, 67);
			this->button22->TabIndex = 30;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &AdminForm::button22_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(844, 6);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(110, 67);
			this->button21->TabIndex = 29;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &AdminForm::button21_Click);
			// 
			// dataGridView5
			// 
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView5->DefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridView5->EnableHeadersVisualStyles = false;
			this->dataGridView5->Location = System::Drawing::Point(0, 146);
			this->dataGridView5->Name = L"dataGridView5";
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(957, 491);
			this->dataGridView5->TabIndex = 18;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::SeaGreen;
			this->panel8->Controls->Add(this->button24);
			this->panel8->Controls->Add(this->button23);
			this->panel8->Controls->Add(this->textBox12);
			this->panel8->Controls->Add(this->label18);
			this->panel8->Controls->Add(this->textBox13);
			this->panel8->Controls->Add(this->label19);
			this->panel8->Controls->Add(this->dataGridView6);
			this->panel8->Location = System::Drawing::Point(231, 51);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(957, 636);
			this->panel8->TabIndex = 42;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(588, 72);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(110, 67);
			this->button24->TabIndex = 41;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &AdminForm::button24_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(588, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(110, 67);
			this->button23->TabIndex = 40;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &AdminForm::button23_Click);
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(303, 76);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(197, 21);
			this->textBox12->TabIndex = 39;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(159, 76);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(129, 21);
			this->label18->TabIndex = 38;
			this->label18->Text = L"BOOK TITLE : ";
			// 
			// textBox13
			// 
			this->textBox13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(303, 35);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(197, 21);
			this->textBox13->TabIndex = 37;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(168, 35);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(125, 21);
			this->label19->TabIndex = 36;
			this->label19->Text = L"BOOK ISBN : ";
			// 
			// dataGridView6
			// 
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView6->DefaultCellStyle = dataGridViewCellStyle17;
			this->dataGridView6->EnableHeadersVisualStyles = false;
			this->dataGridView6->Location = System::Drawing::Point(0, 145);
			this->dataGridView6->Name = L"dataGridView6";
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->RowHeadersDefaultCellStyle = dataGridViewCellStyle18;
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(957, 491);
			this->dataGridView6->TabIndex = 19;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::SeaGreen;
			this->panel9->Controls->Add(this->dateTimePicker2);
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->button26);
			this->panel9->Controls->Add(this->button25);
			this->panel9->Controls->Add(this->textBox19);
			this->panel9->Controls->Add(this->label26);
			this->panel9->Controls->Add(this->textBox18);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->comboBox4);
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->textBox17);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Controls->Add(this->textBox16);
			this->panel9->Controls->Add(this->label22);
			this->panel9->Controls->Add(this->textBox14);
			this->panel9->Controls->Add(this->label20);
			this->panel9->Controls->Add(this->textBox15);
			this->panel9->Controls->Add(this->label21);
			this->panel9->Controls->Add(this->dataGridView7);
			this->panel9->Location = System::Drawing::Point(231, 51);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(957, 636);
			this->panel9->TabIndex = 42;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(526, 97);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(136, 22);
			this->dateTimePicker2->TabIndex = 57;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(392, 97);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(126, 21);
			this->label27->TabIndex = 56;
			this->label27->Text = L"BOOK DATE : ";
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
			this->button26->Location = System::Drawing::Point(844, 72);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(110, 67);
			this->button26->TabIndex = 55;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &AdminForm::button26_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(844, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(110, 67);
			this->button25->TabIndex = 54;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &AdminForm::button25_Click);
			// 
			// textBox19
			// 
			this->textBox19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox19->BackColor = System::Drawing::Color::White;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(778, 51);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(46, 21);
			this->textBox19->TabIndex = 53;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox19_TextChanged);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(678, 51);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(90, 21);
			this->label26->TabIndex = 52;
			this->label26->Text = L"COPIES : ";
			// 
			// textBox18
			// 
			this->textBox18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox18->BackColor = System::Drawing::Color::White;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(778, 13);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(46, 21);
			this->textBox18->TabIndex = 51;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(681, 13);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(83, 21);
			this->label25->TabIndex = 50;
			this->label25->Text = L"PAGES : ";
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(32) {
				L"Ẩm thực - Nấu ăn", L"Cổ Tích - Thần Thoại", L"Công Nghệ Thông Tin",
					L"Học Ngoại Ngữ", L"Hồi Ký - Tuỳ Bút", L"Huyền bí - Giả Tưởng", L"Khoa Học - Kỹ Thuật", L"Kiếm Hiệp - Tiên Hiệp", L"Kiến Trúc - Xây Dựng",
					L"Kinh Tế - Quản Lý", L"Lịch Sử - Chính Trị", L"Marketing - Bán hàng", L"Nông - Lâm - Ngư", L"Phiêu Lưu - Mạo Hiểm", L"Review Sách",
					L"Tài Liệu Học Tập", L"Tâm Lý - Kỹ Năng Sống", L"Thể Thao - Nghệ Thuật", L"Thư Viện Pháp Luật", L"Tiểu Thuyết Phương Tây", L"Tiểu Thuyết Trung Quốc",
					L"Triết Học", L"Trinh Thám - Hình Sự", L"Truyện Cười - Tiếu Lâm", L"Truyện Ma - Truyện Kinh Dị", L"Truyện Ngắn - Ngôn Tình",
					L"Truyên Teen - Tuổi Học Trò", L"Truyện Tranh", L"Tử Vi - Phong Thủy", L"Văn Hóa - Tôn Giáo", L"Văn Học Việt Nam", L"Y Học - Sức Khỏe"
			});
			this->comboBox4->Location = System::Drawing::Point(511, 53);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(151, 26);
			this->comboBox4->TabIndex = 49;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(334, 58);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(157, 21);
			this->label24->TabIndex = 48;
			this->label24->Text = L"BOOK SUBJECT : ";
			// 
			// textBox17
			// 
			this->textBox17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox17->BackColor = System::Drawing::Color::White;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(511, 13);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(151, 21);
			this->textBox17->TabIndex = 47;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(334, 13);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(154, 21);
			this->label23->TabIndex = 46;
			this->label23->Text = L"BOOK AUTHOR : ";
			// 
			// textBox16
			// 
			this->textBox16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox16->BackColor = System::Drawing::Color::White;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(210, 97);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(155, 21);
			this->textBox16->TabIndex = 45;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(7, 97);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(181, 21);
			this->label22->TabIndex = 44;
			this->label22->Text = L"BOOK PUBLISHER : ";
			// 
			// textBox14
			// 
			this->textBox14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(151, 55);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(158, 21);
			this->textBox14->TabIndex = 43;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(7, 55);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(129, 21);
			this->label20->TabIndex = 42;
			this->label20->Text = L"BOOK TITLE : ";
			// 
			// textBox15
			// 
			this->textBox15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox15->BackColor = System::Drawing::Color::White;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(151, 14);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(158, 21);
			this->textBox15->TabIndex = 41;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(16, 14);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(125, 21);
			this->label21->TabIndex = 40;
			this->label21->Text = L"BOOK ISBN : ";
			// 
			// dataGridView7
			// 
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView7->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle19;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView7->DefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView7->EnableHeadersVisualStyles = false;
			this->dataGridView7->Location = System::Drawing::Point(0, 146);
			this->dataGridView7->Name = L"dataGridView7";
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView7->RowHeadersDefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridView7->RowHeadersVisible = false;
			this->dataGridView7->RowHeadersWidth = 51;
			this->dataGridView7->RowTemplate->Height = 24;
			this->dataGridView7->Size = System::Drawing::Size(957, 491);
			this->dataGridView7->TabIndex = 20;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1200, 700);
			this->ControlBox = false;
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel3->Hide();
	panel9->Hide();
	panel8->Hide();
	panel9->Show();
	this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView7->DataSource = dt;
	dataGridView7->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel3->Hide();
	panel9->Hide();
	panel8->Show();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);

	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView6->DataSource = dt;
	dataGridView6->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView1->DataSource = dt;
	dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView1->DataSource = dt;
	dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel3->Show();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::DarkSeaGreen;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	panel5->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel4->Show();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView2->DataSource = dt;
	dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;

}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	panel4->Hide();
	panel6->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel5->Show();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView3->DataSource = dt;
	dataGridView3->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name_user = this->textBox1->Text;
	String^ id_user = this->textBox2->Text;
	String^ type_user = this->comboBox1->Text;
	String^ date_user = this->dateTimePicker1->Text;
	try {
		if (name_user->Length == 0 && id_user->Length == 0 && type_user->Length == 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data;", % sqlConn);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length > 0 && id_user->Length == 0 && type_user->Length == 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE name = @name_user;", % sqlConn);
			command.Parameters->AddWithValue("@name_user", name_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length == 0 && id_user->Length > 0 && type_user->Length == 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE id = @id_user;", % sqlConn);
			command.Parameters->AddWithValue("@id_user", id_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length == 0 && id_user->Length == 0 && type_user->Length > 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE type_user = @type_user;", % sqlConn);
			command.Parameters->AddWithValue("@type_user", type_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length > 0 && id_user->Length > 0 && type_user->Length == 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE id = @id_user and name = @name_user;", % sqlConn);
			command.Parameters->AddWithValue("@id_user", id_user);
			command.Parameters->AddWithValue("@name_user", name_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length > 0 && id_user->Length == 0 && type_user->Length > 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE name = @name_user and type_user = @type_user;", % sqlConn);
			command.Parameters->AddWithValue("@name_user", name_user);
			command.Parameters->AddWithValue("@type_user", type_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else if (name_user->Length > 0 && id_user->Length > 0 && type_user->Length > 0 && date_user->Length > 0) {
			SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
			sqlConn.Open();
			SqlCommand command("SELECT * FROM user_data WHERE id = @id_user and name = @name_user and type_user = @type_user and date_user=@date_user;", % sqlConn);
			command.Parameters->AddWithValue("@id_user", id_user);
			command.Parameters->AddWithValue("@name_user", name_user);
			command.Parameters->AddWithValue("@type_user", type_user);
			command.Parameters->AddWithValue("@date_user", date_user);
			SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
			DataTable^ dt = gcnew DataTable();
			da->Fill(dt);
			dataGridView2->DataSource = dt;
			dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
	}
	catch (Exception^ e) {
		if (MessageBox::Show(L"Giá Trị Không Tồn Tại", L"Không Tìm Thấy Dữ Liệu", MessageBoxButtons::OK, MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::OK);
		return;
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox1->Clear();
	this->textBox2->Clear();
	this->comboBox1->ResetText();
	this->dateTimePicker1->ResetText();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView2->DataSource = dt;
	dataGridView2->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name_user = this->textBox3->Text;
	String^ id_user = this->textBox4->Text;

	if (name_user->Length == 0 || id_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Xóa Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (name_user->Length == 0 && id_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Xóa Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
		sqlConn.Open();
		SqlCommand command("DELETE FROM user_data where name = @name_user and id = @id_user;", % sqlConn);
		command.Parameters->AddWithValue("@id_user", id_user);
		command.Parameters->AddWithValue("@name_user", name_user);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView3->DataSource = dt;
		dataGridView3->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}

	
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox3->Clear();
	this->textBox4->Clear();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView3->DataSource = dt;
	dataGridView3->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel7->Hide();
	panel8->Hide();
	panel9->Hide();
	panel6->Show();
	label12->Hide();
	textBox7->Hide();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button6->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView4->DataSource = dt;
	dataGridView4->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}

private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	label12->Hide();
	textBox7->Hide();
	String^ name_user = this->textBox5->Text;
	String^ pass_user = this->textBox6->Text;
	String^ type_user = this->comboBox2->Text;
	
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data WHERE name=@name", % sqlConn);
	command.Parameters->AddWithValue("@name", name_user);
	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->Read()) {
		MessageBox::Show(L"Tài Khoản Đã Tồn Tại", L"Thêm Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else if (name_user->Length == 0 || pass_user->Length == 0 || type_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Thêm Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else if (name_user->Length == 0 && pass_user->Length == 0 && type_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Thêm Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else {
		DateTime date;
		SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
		sqlConn.Open();
		SqlCommand command("INSERT INTO user_data (name, password, type_user, date_user) VALUES (@name, @password, @type_user, @date_user);", % sqlConn);
		command.Parameters->AddWithValue("@name", name_user);
		command.Parameters->AddWithValue("@password", pass_user);
		command.Parameters->AddWithValue("@type_user", type_user);
		command.Parameters->AddWithValue("@date_user", date.Today);
		command.ExecuteReader();
		MessageBox::Show(L"Thêm Thành Công", L"Thêm Người Dùng Thành Công", MessageBoxButtons::OK);
	}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox5->Clear();
	this->textBox6->Clear();
	label12->Hide();
	textBox7->Hide();
	this->comboBox2->ResetText();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM user_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView4->DataSource = dt;
	dataGridView4->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	label12->Show();
	textBox7->Show();
	String^ name_user = this->textBox5->Text;
	String^ pass_user = this->textBox6->Text;
	String^ id_user = this->textBox7->Text;
	String^ type_user = this->comboBox2->Text;
	if (name_user->Length == 0 || pass_user->Length == 0 || type_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Cập Nhật Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else if (name_user->Length == 0 && pass_user->Length == 0 && type_user->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Cập Nhật Người Dùng Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else {
		SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
		sqlConn.Open();
		SqlCommand command("UPDATE user_data SET name = @name, password = @password, type_user = @type_user WHERE id = @id_user;", % sqlConn);
		command.Parameters->AddWithValue("@name", name_user);
		command.Parameters->AddWithValue("@password", pass_user);
		command.Parameters->AddWithValue("@type_user", type_user);
		command.Parameters->AddWithValue("@id_user", id_user);
		command.ExecuteReader();
		MessageBox::Show(L"Cập Nhật Thành Công", L"Cập Nhật Người Dùng Thành Công", MessageBoxButtons::OK);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	panel4->Hide();
	panel5->Hide();
	panel6->Hide();
	panel8->Hide();
	panel9->Hide();
	panel7->Show();
	this->button3->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button4->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button5->BackColor = System::Drawing::Color::DarkSeaGreen;
	this->button6->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button7->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button8->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);
	this->button9->BackColor = System::Drawing::Color::FromArgb(14, 128, 87);

	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView5->DataSource = dt;
	dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ book_isbn = this->textBox8->Text;
	String^ book_title = this->textBox9->Text;
	String^ book_author = this->textBox10->Text;
	String^ book_publisher = this->textBox11->Text;
	String^ book_subject = this->comboBox3->Text;
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	if (book_isbn->Length == 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data;", % sqlConn);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn; ", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length > 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE title_book = @book_title;", % sqlConn);
		command.Parameters->AddWithValue("@book_title", book_title);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length == 0 && book_author->Length > 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE author = @book_author;", % sqlConn);
		command.Parameters->AddWithValue("@book_author", book_author);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length > 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE publisher = @book_publisher;", % sqlConn);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length > 0) {
		SqlCommand command("SELECT * FROM book_data WHERE subject_book = @book_subject;", % sqlConn);
		command.Parameters->AddWithValue("@book_subject", book_subject);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length > 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND title_book = @book_title;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length == 0 && book_author->Length > 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND author = @book_author;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_author", book_author);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length > 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND publisher = @book_publisher;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length > 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND subject_book = @book_subject;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_subject", book_subject);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND title_book = @book_title AND author = @book_author;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length > 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND title_book = @book_title AND author = @book_author AND publisher = @book_publisher;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length > 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length > 0 && book_subject->Length > 0) {
		SqlCommand command("SELECT * FROM book_data WHERE isbn = @book_isbn AND title_book = @book_title AND author = @book_author AND publisher = @book_publisher AND subject_book = @book_subject;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		command.Parameters->AddWithValue("@book_subject", book_subject);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length == 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE title_book = @book_title AND author = @book_author;", % sqlConn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length > 0 && book_subject->Length == 0) {
		SqlCommand command("SELECT * FROM book_data WHERE title_book = @book_title AND author = @book_author AND publisher = @book_publisher;", % sqlConn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
	else if (book_isbn->Length == 0 && book_title->Length > 0 && book_author->Length > 0 && book_publisher->Length > 0 && book_subject->Length > 0) {
		SqlCommand command("SELECT * FROM book_data WHERE title_book = @book_title AND author = @book_author AND publisher = @book_publisher AND subject_book = @book_subject;", % sqlConn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_author", book_author);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		command.Parameters->AddWithValue("@book_subject", book_subject);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView5->DataSource = dt;
		dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox8->Clear();
	this->textBox9->Clear();
	this->textBox10->Clear();
	this->textBox11->Clear();
	this->comboBox3->ResetText();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView5->DataSource = dt;
	dataGridView5->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ book_isbn = this->textBox13->Text;
	String^ book_title = this->textBox12->Text;
	if (book_isbn->Length == 0 || book_title->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Xóa Sách Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (book_isbn->Length == 0 && book_title->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Xóa Sách Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
		sqlConn.Open();
		SqlCommand command("DELETE FROM book_data where isbn = @book_isbn and title_book = @book_title;", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
		DataTable^ dt = gcnew DataTable();
		da->Fill(dt);
		dataGridView6->DataSource = dt;
		dataGridView6->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox13->Clear();
	this->textBox12->Clear();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView6->DataSource = dt;
	dataGridView6->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
private: System::Void textBox19_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ book_isbn = this->textBox15->Text;
	String^ book_title = this->textBox14->Text;
	String^ book_author = this->textBox17->Text;
	String^ book_publisher = this->textBox16->Text;
	String^ book_subject = this->comboBox4->Text;
	String^ pages = this->textBox18->Text;
	String^ copies = this->textBox19->Text;
	String^ book_date = this->dateTimePicker2->Text;
	
	if (book_isbn->Length == 0 || book_title->Length == 0 || book_author->Length == 0 || book_publisher->Length == 0 || book_subject->Length == 0 || pages->Length == 0 || copies->Length==0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Thêm Sách Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (book_isbn->Length == 0 && book_title->Length == 0 && book_author->Length == 0 && book_publisher->Length == 0 && book_subject->Length == 0 && pages->Length == 0 && copies->Length == 0) {
		MessageBox::Show(L"Vui Lòng Điền Đầy Đủ Thông Tin", L"Thêm Sách Thất Bại", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
		sqlConn.Open();
		SqlCommand command("INSERT INTO book_data (isbn, title_book, subject_book, author, publisher, date_book, pages, copies) VALUES (@book_isbn, @book_title, @book_subject, @book_author, @book_publisher, @book_date, @pages, @copies);", % sqlConn);
		command.Parameters->AddWithValue("@book_isbn", book_isbn);
		command.Parameters->AddWithValue("@book_title", book_title);
		command.Parameters->AddWithValue("@book_subject", book_subject);
		command.Parameters->AddWithValue("@book_author", book_author);
		command.Parameters->AddWithValue("@book_publisher", book_publisher);
		command.Parameters->AddWithValue("@book_date", book_date);
		command.Parameters->AddWithValue("@pages", pages);
		command.Parameters->AddWithValue("@copies", copies);
		command.ExecuteReader();
		MessageBox::Show(L"Thêm Thành Công", L"Thêm Sách Thành Công", MessageBoxButtons::OK);
	}
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBox15->Clear();
	this->textBox14->Clear();
	this->textBox17->Clear();
	this->textBox16->Clear();
	this->comboBox4->ResetText();
	this->textBox18->Clear();
	this->textBox19->Clear();
	this->dateTimePicker2->ResetText();
	SqlConnection sqlConn("Data Source=localhost\\sqlexpress;Initial Catalog=db_user;Integrated Security=True");
	sqlConn.Open();
	SqlCommand command("SELECT * FROM book_data;", % sqlConn);
	SqlDataAdapter^ da = gcnew SqlDataAdapter(% command);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	dataGridView7->DataSource = dt;
	dataGridView7->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
}
};
}
