#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BST_search
	/// </summary>
	public ref class BST_search : public System::Windows::Forms::UserControl
	{
	public:
		BST_search(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BST_search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lab1;
	protected: 
	private: System::Windows::Forms::Label^  lab2;
	private: System::Windows::Forms::Label^  lab3;
	private: System::Windows::Forms::Label^  lab4;
	private: System::Windows::Forms::Label^  lab5;
	private: System::Windows::Forms::Label^  lab6;
	private: System::Windows::Forms::Label^  lab7;
	private: System::Windows::Forms::Button^  btn_in;
	private: System::Windows::Forms::Button^  btn_pre;
	private: System::Windows::Forms::Button^  btn_post;
	private: System::Windows::Forms::Button^  btn_res;
	private: System::Windows::Forms::Panel^  panel1;








	private: System::Windows::Forms::Label^  bl7;
	private: System::Windows::Forms::Label^  bl6;
	private: System::Windows::Forms::Label^  bl5;
	private: System::Windows::Forms::Label^  bl4;
	private: System::Windows::Forms::Label^  bl3;
	private: System::Windows::Forms::Label^  bl2;
	private: System::Windows::Forms::Label^  bl1;
	private: System::Windows::Forms::Timer^  timer_in;
	private: System::Windows::Forms::Timer^  timer_pre;
	private: System::Windows::Forms::Timer^  timer_pos;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BST_search::typeid));
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->lab3 = (gcnew System::Windows::Forms::Label());
			this->lab4 = (gcnew System::Windows::Forms::Label());
			this->lab5 = (gcnew System::Windows::Forms::Label());
			this->lab6 = (gcnew System::Windows::Forms::Label());
			this->lab7 = (gcnew System::Windows::Forms::Label());
			this->btn_in = (gcnew System::Windows::Forms::Button());
			this->btn_pre = (gcnew System::Windows::Forms::Button());
			this->btn_post = (gcnew System::Windows::Forms::Button());
			this->btn_res = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bl7 = (gcnew System::Windows::Forms::Label());
			this->bl6 = (gcnew System::Windows::Forms::Label());
			this->bl5 = (gcnew System::Windows::Forms::Label());
			this->bl4 = (gcnew System::Windows::Forms::Label());
			this->bl3 = (gcnew System::Windows::Forms::Label());
			this->bl2 = (gcnew System::Windows::Forms::Label());
			this->bl1 = (gcnew System::Windows::Forms::Label());
			this->timer_in = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_pre = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_pos = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// lab1
			// 
			this->lab1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab1->ForeColor = System::Drawing::Color::Sienna;
			this->lab1->Location = System::Drawing::Point(531, 183);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(70, 70);
			this->lab1->TabIndex = 0;
			this->lab1->Text = L"17";
			this->lab1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab2
			// 
			this->lab2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab2->ForeColor = System::Drawing::Color::Sienna;
			this->lab2->Location = System::Drawing::Point(388, 296);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(70, 70);
			this->lab2->TabIndex = 1;
			this->lab2->Text = L"12";
			this->lab2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab3
			// 
			this->lab3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab3->ForeColor = System::Drawing::Color::Sienna;
			this->lab3->Location = System::Drawing::Point(661, 296);
			this->lab3->Name = L"lab3";
			this->lab3->Size = System::Drawing::Size(70, 70);
			this->lab3->TabIndex = 2;
			this->lab3->Text = L"23";
			this->lab3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab4
			// 
			this->lab4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab4->ForeColor = System::Drawing::Color::Sienna;
			this->lab4->Location = System::Drawing::Point(245, 420);
			this->lab4->Name = L"lab4";
			this->lab4->Size = System::Drawing::Size(70, 70);
			this->lab4->TabIndex = 3;
			this->lab4->Text = L"4";
			this->lab4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab5
			// 
			this->lab5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab5->ForeColor = System::Drawing::Color::Sienna;
			this->lab5->Location = System::Drawing::Point(508, 420);
			this->lab5->Name = L"lab5";
			this->lab5->Size = System::Drawing::Size(70, 70);
			this->lab5->TabIndex = 4;
			this->lab5->Text = L"15";
			this->lab5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab6
			// 
			this->lab6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab6->ForeColor = System::Drawing::Color::Sienna;
			this->lab6->Location = System::Drawing::Point(584, 420);
			this->lab6->Name = L"lab6";
			this->lab6->Size = System::Drawing::Size(70, 70);
			this->lab6->TabIndex = 5;
			this->lab6->Text = L"20";
			this->lab6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab7
			// 
			this->lab7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lab7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab7->ForeColor = System::Drawing::Color::Sienna;
			this->lab7->Location = System::Drawing::Point(763, 420);
			this->lab7->Name = L"lab7";
			this->lab7->Size = System::Drawing::Size(70, 70);
			this->lab7->TabIndex = 6;
			this->lab7->Text = L"47";
			this->lab7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_in
			// 
			this->btn_in->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_in->FlatAppearance->BorderSize = 0;
			this->btn_in->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_in->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_in->ForeColor = System::Drawing::Color::Black;
			this->btn_in->Location = System::Drawing::Point(1000, 21);
			this->btn_in->Name = L"btn_in";
			this->btn_in->Size = System::Drawing::Size(120, 30);
			this->btn_in->TabIndex = 8;
			this->btn_in->Text = L"Inorder";
			this->btn_in->UseVisualStyleBackColor = true;
			this->btn_in->Click += gcnew System::EventHandler(this, &BST_search::btn_in_Click);
			// 
			// btn_pre
			// 
			this->btn_pre->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_pre->FlatAppearance->BorderSize = 0;
			this->btn_pre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_pre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_pre->ForeColor = System::Drawing::Color::Black;
			this->btn_pre->Location = System::Drawing::Point(1000, 61);
			this->btn_pre->Name = L"btn_pre";
			this->btn_pre->Size = System::Drawing::Size(120, 30);
			this->btn_pre->TabIndex = 9;
			this->btn_pre->Text = L"Preorder";
			this->btn_pre->UseVisualStyleBackColor = true;
			this->btn_pre->Click += gcnew System::EventHandler(this, &BST_search::btn_pre_Click);
			// 
			// btn_post
			// 
			this->btn_post->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_post->FlatAppearance->BorderSize = 0;
			this->btn_post->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_post->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_post->ForeColor = System::Drawing::Color::Black;
			this->btn_post->Location = System::Drawing::Point(1000, 103);
			this->btn_post->Name = L"btn_post";
			this->btn_post->Size = System::Drawing::Size(120, 30);
			this->btn_post->TabIndex = 10;
			this->btn_post->Text = L"Postorder";
			this->btn_post->UseVisualStyleBackColor = true;
			this->btn_post->Click += gcnew System::EventHandler(this, &BST_search::btn_post_Click);
			// 
			// btn_res
			// 
			this->btn_res->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_res->FlatAppearance->BorderSize = 0;
			this->btn_res->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_res->ForeColor = System::Drawing::Color::Black;
			this->btn_res->Location = System::Drawing::Point(1000, 151);
			this->btn_res->Name = L"btn_res";
			this->btn_res->Size = System::Drawing::Size(120, 30);
			this->btn_res->TabIndex = 11;
			this->btn_res->Text = L"Reset";
			this->btn_res->UseVisualStyleBackColor = true;
			this->btn_res->Click += gcnew System::EventHandler(this, &BST_search::btn_res_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->bl7);
			this->panel1->Controls->Add(this->bl6);
			this->panel1->Controls->Add(this->bl5);
			this->panel1->Controls->Add(this->bl4);
			this->panel1->Controls->Add(this->bl3);
			this->panel1->Controls->Add(this->bl2);
			this->panel1->Controls->Add(this->bl1);
			this->panel1->Controls->Add(this->btn_res);
			this->panel1->Controls->Add(this->btn_post);
			this->panel1->Controls->Add(this->btn_pre);
			this->panel1->Controls->Add(this->btn_in);
			this->panel1->Controls->Add(this->lab7);
			this->panel1->Controls->Add(this->lab6);
			this->panel1->Controls->Add(this->lab5);
			this->panel1->Controls->Add(this->lab4);
			this->panel1->Controls->Add(this->lab3);
			this->panel1->Controls->Add(this->lab2);
			this->panel1->Controls->Add(this->lab1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Location = System::Drawing::Point(47, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1156, 543);
			this->panel1->TabIndex = 0;
			// 
			// bl7
			// 
			this->bl7->BackColor = System::Drawing::Color::Wheat;
			this->bl7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl7->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl7->Location = System::Drawing::Point(690, 47);
			this->bl7->Name = L"bl7";
			this->bl7->Size = System::Drawing::Size(100, 100);
			this->bl7->TabIndex = 6;
			this->bl7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl6
			// 
			this->bl6->BackColor = System::Drawing::Color::Wheat;
			this->bl6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl6->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl6->Location = System::Drawing::Point(584, 47);
			this->bl6->Name = L"bl6";
			this->bl6->Size = System::Drawing::Size(100, 100);
			this->bl6->TabIndex = 5;
			this->bl6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl5
			// 
			this->bl5->BackColor = System::Drawing::Color::Wheat;
			this->bl5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl5->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl5->Location = System::Drawing::Point(478, 47);
			this->bl5->Name = L"bl5";
			this->bl5->Size = System::Drawing::Size(100, 100);
			this->bl5->TabIndex = 4;
			this->bl5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl4
			// 
			this->bl4->BackColor = System::Drawing::Color::Wheat;
			this->bl4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl4->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl4->Location = System::Drawing::Point(372, 47);
			this->bl4->Name = L"bl4";
			this->bl4->Size = System::Drawing::Size(100, 100);
			this->bl4->TabIndex = 3;
			this->bl4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl3
			// 
			this->bl3->BackColor = System::Drawing::Color::Wheat;
			this->bl3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl3->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl3->Location = System::Drawing::Point(266, 47);
			this->bl3->Name = L"bl3";
			this->bl3->Size = System::Drawing::Size(100, 100);
			this->bl3->TabIndex = 2;
			this->bl3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl2
			// 
			this->bl2->BackColor = System::Drawing::Color::Wheat;
			this->bl2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl2->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl2->Location = System::Drawing::Point(160, 47);
			this->bl2->Name = L"bl2";
			this->bl2->Size = System::Drawing::Size(100, 100);
			this->bl2->TabIndex = 1;
			this->bl2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl1
			// 
			this->bl1->BackColor = System::Drawing::Color::Wheat;
			this->bl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->bl1->Location = System::Drawing::Point(54, 47);
			this->bl1->Name = L"bl1";
			this->bl1->Size = System::Drawing::Size(100, 100);
			this->bl1->TabIndex = 0;
			this->bl1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer_in
			// 
			this->timer_in->Interval = 1500;
			this->timer_in->Tick += gcnew System::EventHandler(this, &BST_search::timer_in_Tick);
			// 
			// timer_pre
			// 
			this->timer_pre->Interval = 1500;
			this->timer_pre->Tick += gcnew System::EventHandler(this, &BST_search::timer_pre_Tick);
			// 
			// timer_pos
			// 
			this->timer_pos->Interval = 1500;
			this->timer_pos->Tick += gcnew System::EventHandler(this, &BST_search::timer_pos_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(572, 228);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(112, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(425, 350);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 84);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(701, 350);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(112, 84);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 14;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(438, 228);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(112, 84);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(602, 350);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(112, 84);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(295, 350);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(112, 84);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// BST_search
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->panel1);
			this->Name = L"BST_search";
			this->Size = System::Drawing::Size(1277, 596);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		static int var1=0;
		static int var2=0;
		static int var3=0;
	private: System::Void btn_in_Click(System::Object^  sender, System::EventArgs^  e) {
				 var1=0;
				 var2=0;
				 var3=0;
				 timer_in->Enabled=false;
				 timer_pre->Enabled=false;
				 timer_pos->Enabled=false;
				 this->bl1->Text="";
				 this->bl2->Text="";
				 this->bl3->Text="";
				 this->bl4->Text="";
				 this->bl5->Text="";
				 this->bl6->Text="";
				 this->bl7->Text="";
				 timer_in->Enabled=true;
				 this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;

			 }
	private: System::Void btn_pre_Click(System::Object^  sender, System::EventArgs^  e) {
				 var1=0;
				 var2=0;
				 var3=0;
				 timer_in->Enabled=false;
				 timer_pre->Enabled=false;
				 timer_pos->Enabled=false;
				 this->bl1->Text="";
				 this->bl2->Text="";
				 this->bl3->Text="";
				 this->bl4->Text="";
				 this->bl5->Text="";
				 this->bl6->Text="";
				 this->bl7->Text="";
				 this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 timer_pre->Enabled=true;
			 }
	private: System::Void btn_post_Click(System::Object^  sender, System::EventArgs^  e) {
				 var1=0;
				 var2=0;
				 var3=0;
				 timer_in->Enabled=false;
				 timer_pre->Enabled=false;
				 timer_pos->Enabled=false;
				 this->bl1->Text="";
				 this->bl2->Text="";
				 this->bl3->Text="";
				 this->bl4->Text="";
				 this->bl5->Text="";
				 this->bl6->Text="";
				 this->bl7->Text="";
				 this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 timer_pos->Enabled=true;
			 }
	private: System::Void btn_res_Click(System::Object^  sender, System::EventArgs^  e) {
				 var1=0;
				 var2=0;
				 var3=0;
				 timer_in->Enabled=false;
				 timer_pre->Enabled=false;
				 timer_pos->Enabled=false;
				 this->bl1->Text="";
				 this->bl2->Text="";
				 this->bl3->Text="";
				 this->bl4->Text="";
				 this->bl5->Text="";
				 this->bl6->Text="";
				 this->bl7->Text="";
				 this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
				 this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
			 }

	private: System::Void timer_in_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(var1==0)
				 {
					 this->bl1->Text=this->lab4->Text;
					 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==1)
				 {
					 this->bl2->Text=this->lab2->Text;
					 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==2)
				 {
					 this->bl3->Text=this->lab5->Text;
					 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==3)
				 {
					 this->bl4->Text=this->lab1->Text;
					 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==4)
				 {
					 this->bl5->Text=this->lab6->Text;
					 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==5)
				 {
					 this->bl6->Text=this->lab3->Text;
					 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1==6)
				 {
					 this->bl7->Text=this->lab7->Text;
					 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var1>=7)
				 {
					 timer_in->Enabled=false;
					 var1=-1;
				 }
				 var1++;
			 }

	private: System::Void timer_pre_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(var2==0)
				 {
					 this->bl1->Text=this->lab1->Text;
					 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==1)
				 {
					 this->bl2->Text=this->lab2->Text;
					 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==2)
				 {
					 this->bl3->Text=this->lab4->Text;
					 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==3)
				 {
					 this->bl4->Text=this->lab5->Text;
					 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==4)
				 {
					 this->bl5->Text=this->lab3->Text;
					 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==5)
				 {
					 this->bl6->Text=this->lab6->Text;
					 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2==6)
				 {
					 this->bl7->Text=this->lab7->Text;
					 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var2>=7)
				 {
					 timer_pre->Enabled=false;
					 var2=-1;
				 }
				 var2++;
			 }
	private: System::Void timer_pos_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(var3==0)
				 {
					 this->bl1->Text=this->lab4->Text;
					 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==1)
				 {
					 this->bl2->Text=this->lab5->Text;
					 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==2)
				 {
					 this->bl3->Text=this->lab2->Text;
					 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==3)
				 {
					 this->bl4->Text=this->lab6->Text;
					 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==4)
				 {
					 this->bl5->Text=this->lab7->Text;
					 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==5)
				 {
					 this->bl6->Text=this->lab3->Text;
					 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
				 }
				 if(var3==6)
				 {
					 this->bl7->Text=this->lab1->Text;
					 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;;
				 }
				 if(var3>=7)
				 {
					 timer_pos->Enabled=false;
					 var3=-1;
				 }
				 var3++;
			 }
	private: System::Void ovalShape6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
