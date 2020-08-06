


#pragma once
#include "moduleQuiz.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BST_deletion
	/// </summary>
	public ref class BST_deletion : public System::Windows::Forms::UserControl
	{
	public:
		BST_deletion(void)
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
		~BST_deletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BTree_delete_but;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  BTree_stop_but;


	private: System::Windows::Forms::RadioButton^  RB1;
	private: System::Windows::Forms::RadioButton^  RB2;
	private: System::Windows::Forms::RadioButton^  RB3;

















	private: System::Windows::Forms::Timer^  BTdeletetimer1;
	private: System::Windows::Forms::Timer^  BTdeletetimer2;
	private: System::Windows::Forms::Timer^  BTdeletetimer3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  quizPanel;
	private: System::Windows::Forms::Panel^  delete_animation1;
	private: System::Windows::Forms::Label^  Checklabel;
	private: System::Windows::Forms::Label^  Infolabel;
	private: System::Windows::Forms::Label^  DL2;
	private: System::Windows::Forms::Label^  DL3;
	private: System::Windows::Forms::Label^  DL7;
	private: System::Windows::Forms::Label^  DL6;
	private: System::Windows::Forms::Label^  DL4;
	private: System::Windows::Forms::Label^  DL5;
	private: System::Windows::Forms::Label^  DL1;
	private: System::Windows::Forms::PictureBox^  PB2;
	private: System::Windows::Forms::PictureBox^  PB6;
	private: System::Windows::Forms::PictureBox^  PB4;
	private: System::Windows::Forms::PictureBox^  PB3;
	private: System::Windows::Forms::PictureBox^  PB5;
	private: System::Windows::Forms::PictureBox^  PB1;



	private: System::ComponentModel::IContainer^  components;















	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BST_deletion::typeid));
			this->BTree_delete_but = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RB2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB3 = (gcnew System::Windows::Forms::RadioButton());
			this->RB1 = (gcnew System::Windows::Forms::RadioButton());
			this->BTree_stop_but = (gcnew System::Windows::Forms::Button());
			this->BTdeletetimer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BTdeletetimer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BTdeletetimer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->delete_animation1 = (gcnew System::Windows::Forms::Panel());
			this->Checklabel = (gcnew System::Windows::Forms::Label());
			this->Infolabel = (gcnew System::Windows::Forms::Label());
			this->DL2 = (gcnew System::Windows::Forms::Label());
			this->DL3 = (gcnew System::Windows::Forms::Label());
			this->DL7 = (gcnew System::Windows::Forms::Label());
			this->DL6 = (gcnew System::Windows::Forms::Label());
			this->DL4 = (gcnew System::Windows::Forms::Label());
			this->DL5 = (gcnew System::Windows::Forms::Label());
			this->DL1 = (gcnew System::Windows::Forms::Label());
			this->PB2 = (gcnew System::Windows::Forms::PictureBox());
			this->PB6 = (gcnew System::Windows::Forms::PictureBox());
			this->PB4 = (gcnew System::Windows::Forms::PictureBox());
			this->PB3 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5 = (gcnew System::Windows::Forms::PictureBox());
			this->PB1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->delete_animation1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB1))->BeginInit();
			this->SuspendLayout();
			// 
			// BTree_delete_but
			// 
			this->BTree_delete_but->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTree_delete_but->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTree_delete_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->BTree_delete_but->ForeColor = System::Drawing::Color::Black;
			this->BTree_delete_but->Location = System::Drawing::Point(19, 183);
			this->BTree_delete_but->Name = L"BTree_delete_but";
			this->BTree_delete_but->Size = System::Drawing::Size(141, 40);
			this->BTree_delete_but->TabIndex = 0;
			this->BTree_delete_but->Text = L"Delete";
			this->BTree_delete_but->UseVisualStyleBackColor = true;
			this->BTree_delete_but->Click += gcnew System::EventHandler(this, &BST_deletion::BTree_delete_but_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::DarkKhaki;
			this->groupBox1->Controls->Add(this->RB2);
			this->groupBox1->Controls->Add(this->RB3);
			this->groupBox1->Controls->Add(this->RB1);
			this->groupBox1->Controls->Add(this->BTree_stop_but);
			this->groupBox1->Controls->Add(this->BTree_delete_but);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::Sienna;
			this->groupBox1->Location = System::Drawing::Point(886, 192);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 254);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select One To See Animation";
			// 
			// RB2
			// 
			this->RB2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RB2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB2->Location = System::Drawing::Point(46, 75);
			this->RB2->Name = L"RB2";
			this->RB2->Size = System::Drawing::Size(256, 38);
			this->RB2->TabIndex = 4;
			this->RB2->Text = L"Delete Node With One Child";
			this->RB2->UseVisualStyleBackColor = true;
			// 
			// RB3
			// 
			this->RB3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RB3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB3->Location = System::Drawing::Point(46, 121);
			this->RB3->Name = L"RB3";
			this->RB3->Size = System::Drawing::Size(233, 38);
			this->RB3->TabIndex = 3;
			this->RB3->Text = L"Delete Node With Two Child";
			this->RB3->UseVisualStyleBackColor = true;
			// 
			// RB1
			// 
			this->RB1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RB1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB1->Location = System::Drawing::Point(46, 33);
			this->RB1->Name = L"RB1";
			this->RB1->Size = System::Drawing::Size(167, 32);
			this->RB1->TabIndex = 2;
			this->RB1->Text = L"Delete Leaf Node";
			this->RB1->UseVisualStyleBackColor = true;
			// 
			// BTree_stop_but
			// 
			this->BTree_stop_but->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BTree_stop_but->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->BTree_stop_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BTree_stop_but->ForeColor = System::Drawing::Color::Black;
			this->BTree_stop_but->Location = System::Drawing::Point(186, 183);
			this->BTree_stop_but->Name = L"BTree_stop_but";
			this->BTree_stop_but->Size = System::Drawing::Size(152, 40);
			this->BTree_stop_but->TabIndex = 1;
			this->BTree_stop_but->Text = L"Stop";
			this->BTree_stop_but->UseVisualStyleBackColor = true;
			this->BTree_stop_but->Click += gcnew System::EventHandler(this, &BST_deletion::BTree_stop_but_Click);
			// 
			// BTdeletetimer1
			// 
			this->BTdeletetimer1->Interval = 1800;
			this->BTdeletetimer1->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer1_Tick);
			// 
			// BTdeletetimer2
			// 
			this->BTdeletetimer2->Interval = 1800;
			this->BTdeletetimer2->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer2_Tick);
			// 
			// BTdeletetimer3
			// 
			this->BTdeletetimer3->Interval = 1800;
			this->BTdeletetimer3->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer3_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(15, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1277, 137);
			this->label1->TabIndex = 3;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(37, 628);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(482, 27);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Answer the question correctly to pass the module.";
			// 
			// quizPanel
			// 
			this->quizPanel->AutoScroll = true;
			this->quizPanel->Location = System::Drawing::Point(42, 658);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 27;
			// 
			// delete_animation1
			// 
			this->delete_animation1->BackColor = System::Drawing::Color::Transparent;
			this->delete_animation1->Controls->Add(this->Checklabel);
			this->delete_animation1->Controls->Add(this->Infolabel);
			this->delete_animation1->Controls->Add(this->DL2);
			this->delete_animation1->Controls->Add(this->DL3);
			this->delete_animation1->Controls->Add(this->DL7);
			this->delete_animation1->Controls->Add(this->DL6);
			this->delete_animation1->Controls->Add(this->DL4);
			this->delete_animation1->Controls->Add(this->DL5);
			this->delete_animation1->Controls->Add(this->DL1);
			this->delete_animation1->Controls->Add(this->PB2);
			this->delete_animation1->Controls->Add(this->PB6);
			this->delete_animation1->Controls->Add(this->PB4);
			this->delete_animation1->Controls->Add(this->PB3);
			this->delete_animation1->Controls->Add(this->PB5);
			this->delete_animation1->Controls->Add(this->PB1);
			this->delete_animation1->Location = System::Drawing::Point(42, 192);
			this->delete_animation1->Name = L"delete_animation1";
			this->delete_animation1->Size = System::Drawing::Size(822, 367);
			this->delete_animation1->TabIndex = 3;
			// 
			// Checklabel
			// 
			this->Checklabel->BackColor = System::Drawing::Color::Wheat;
			this->Checklabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Checklabel->Location = System::Drawing::Point(715, 41);
			this->Checklabel->Name = L"Checklabel";
			this->Checklabel->Size = System::Drawing::Size(39, 37);
			this->Checklabel->TabIndex = 8;
			this->Checklabel->Visible = false;
			// 
			// Infolabel
			// 
			this->Infolabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Infolabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Infolabel->Location = System::Drawing::Point(36, 309);
			this->Infolabel->Name = L"Infolabel";
			this->Infolabel->Size = System::Drawing::Size(718, 49);
			this->Infolabel->TabIndex = 7;
			this->Infolabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL2
			// 
			this->DL2->BackColor = System::Drawing::Color::Wheat;
			this->DL2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL2->Location = System::Drawing::Point(223, 108);
			this->DL2->Name = L"DL2";
			this->DL2->Size = System::Drawing::Size(70, 70);
			this->DL2->TabIndex = 6;
			this->DL2->Text = L"11";
			this->DL2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL3
			// 
			this->DL3->BackColor = System::Drawing::Color::Wheat;
			this->DL3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL3->Location = System::Drawing::Point(488, 108);
			this->DL3->Name = L"DL3";
			this->DL3->Size = System::Drawing::Size(70, 70);
			this->DL3->TabIndex = 5;
			this->DL3->Text = L"34";
			this->DL3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL7
			// 
			this->DL7->BackColor = System::Drawing::Color::Wheat;
			this->DL7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL7->Location = System::Drawing::Point(590, 229);
			this->DL7->Name = L"DL7";
			this->DL7->Size = System::Drawing::Size(70, 70);
			this->DL7->TabIndex = 4;
			this->DL7->Text = L"97";
			this->DL7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL6
			// 
			this->DL6->BackColor = System::Drawing::Color::Wheat;
			this->DL6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL6->Location = System::Drawing::Point(392, 229);
			this->DL6->Name = L"DL6";
			this->DL6->Size = System::Drawing::Size(70, 70);
			this->DL6->TabIndex = 3;
			this->DL6->Text = L"28";
			this->DL6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL4
			// 
			this->DL4->BackColor = System::Drawing::Color::Wheat;
			this->DL4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL4->Location = System::Drawing::Point(91, 229);
			this->DL4->Name = L"DL4";
			this->DL4->Size = System::Drawing::Size(70, 70);
			this->DL4->TabIndex = 2;
			this->DL4->Text = L"-7";
			this->DL4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL5
			// 
			this->DL5->BackColor = System::Drawing::Color::Wheat;
			this->DL5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL5->Location = System::Drawing::Point(316, 229);
			this->DL5->Name = L"DL5";
			this->DL5->Size = System::Drawing::Size(70, 70);
			this->DL5->TabIndex = 1;
			this->DL5->Text = L"17";
			this->DL5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL1
			// 
			this->DL1->BackColor = System::Drawing::Color::Wheat;
			this->DL1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL1->Location = System::Drawing::Point(359, 8);
			this->DL1->Name = L"DL1";
			this->DL1->Size = System::Drawing::Size(70, 70);
			this->DL1->TabIndex = 0;
			this->DL1->Text = L"23";
			this->DL1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PB2
			// 
			this->PB2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB2.Image")));
			this->PB2->Location = System::Drawing::Point(405, 56);
			this->PB2->Name = L"PB2";
			this->PB2->Size = System::Drawing::Size(109, 81);
			this->PB2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB2->TabIndex = 9;
			this->PB2->TabStop = false;
			// 
			// PB6
			// 
			this->PB6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB6.Image")));
			this->PB6->Location = System::Drawing::Point(520, 160);
			this->PB6->Name = L"PB6";
			this->PB6->Size = System::Drawing::Size(109, 81);
			this->PB6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB6->TabIndex = 10;
			this->PB6->TabStop = false;
			// 
			// PB4
			// 
			this->PB4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB4.Image")));
			this->PB4->Location = System::Drawing::Point(242, 160);
			this->PB4->Name = L"PB4";
			this->PB4->Size = System::Drawing::Size(109, 81);
			this->PB4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB4->TabIndex = 11;
			this->PB4->TabStop = false;
			// 
			// PB3
			// 
			this->PB3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB3.Image")));
			this->PB3->Location = System::Drawing::Point(138, 160);
			this->PB3->Name = L"PB3";
			this->PB3->Size = System::Drawing::Size(109, 81);
			this->PB3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB3->TabIndex = 12;
			this->PB3->TabStop = false;
			// 
			// PB5
			// 
			this->PB5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB5.Image")));
			this->PB5->Location = System::Drawing::Point(405, 160);
			this->PB5->Name = L"PB5";
			this->PB5->Size = System::Drawing::Size(109, 81);
			this->PB5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB5->TabIndex = 13;
			this->PB5->TabStop = false;
			// 
			// PB1
			// 
			this->PB1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PB1.Image")));
			this->PB1->Location = System::Drawing::Point(268, 56);
			this->PB1->Name = L"PB1";
			this->PB1->Size = System::Drawing::Size(109, 81);
			this->PB1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PB1->TabIndex = 14;
			this->PB1->TabStop = false;
			// 
			// BST_deletion
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->delete_animation1);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BST_deletion";
			this->Size = System::Drawing::Size(1277, 1150);
			this->Load += gcnew System::EventHandler(this, &BST_deletion::BST_deletion_Load);
			this->groupBox1->ResumeLayout(false);
			this->delete_animation1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String ^ username;
	private: System::Void BST_deletion_Load(System::Object^  sender, System::EventArgs^  e){
				 // Question Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 // see ds id and module id
				 newPanel->ds_id = 7;
				 newPanel->module_id = 2;
				 newPanel->username = username;
				 newPanel->update_id = 18;
				 newPanel->update_name = "BSTProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
	private: System::Void BTree_delete_but_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->RB1->Checked == true){
					 this->Checklabel->Text = "0";
					 this->BTree_delete_but->Enabled = false;
					 this->Infolabel->Text = "Let Us Delete 17 , a LEAF NODE .";
					 BTdeletetimer1->Enabled = true;
				 }
				 else if(this->RB2->Checked == true){
					 this->Checklabel->Text = "0";
					 this->BTree_delete_but->Enabled = false;
					 this->DL6->Visible = false;
					 this->PB5->Visible = false;
					 this->Infolabel->Text = "Let Us Delete 34 , Node With One Child .";
					 BTdeletetimer2->Enabled = true;
				 }
				 else if(this->RB3->Checked == true){
					 this->Checklabel->Text = "0";
					 this->BTree_delete_but->Enabled = false;
					 this->Infolabel->Text = "Let Us Delete 23 , Node With Two Child .";
					 BTdeletetimer3->Enabled = true;
				 }
				 else{
					 MessageBox::Show("Please Select Any Animation Option In Delete");
				 }
			 }
	private: System::Void BTdeletetimer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Checklabel->Text == "6"){
					 this->DL5->Visible = true;
					 this->PB4->Visible = true;
					 this->Infolabel->Text = "";
					 this->DL5->BackColor =  System::Drawing::Color::Wheat;
					 this->DL1->BackColor = System::Drawing::Color::Wheat;
					 this->DL2->BackColor = System::Drawing::Color::Wheat;
					 this->BTree_delete_but->Enabled = true;
					 BTdeletetimer1->Enabled = false;
				 }
				 else if(this->Checklabel->Text == "5"){
					 this->Checklabel->Text = "6";
					 this->DL5->Visible = false;
					 this->PB4->Visible = false;
				 }
				 else if(this->Checklabel->Text == "4"){
					 this->Checklabel->Text = "5";
					 this->Infolabel->Text = "Now Simply Delete 17 From The BST";
				 }
				 else if(this->Checklabel->Text == "3"){
					 this->Checklabel->Text = "4";
					 this->DL5->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "2"){
					 this->Checklabel->Text = "3";
					 this->DL2->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "1"){
					 this->Checklabel->Text = "2";
					 this->Infolabel->Text = "First Of All We Will Search For 17 Starting From Root Node";
					 this->DL1->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "0"){
					 this->Checklabel->Text = "1";
				 }	
			 }
	private: System::Void BTree_stop_but_Click(System::Object^  sender, System::EventArgs^  e) {
				 BTdeletetimer1->Enabled = false;
				 BTdeletetimer2->Enabled = false;
				 BTdeletetimer3->Enabled = false;
				 this->Infolabel->Text = "";

				 this->DL5->BackColor = System::Drawing::Color::Wheat;
				 this->DL1->BackColor = System::Drawing::Color::Wheat;
				 this->DL2->BackColor = System::Drawing::Color::Wheat;
				 this->DL3->BackColor = System::Drawing::Color::Wheat;
				 this->DL4->BackColor = System::Drawing::Color::Wheat;
				 this->DL6->BackColor = System::Drawing::Color::Wheat;
				 this->DL7->BackColor = System::Drawing::Color::Wheat;

				 this->DL5->Visible = true;
				 this->DL1->Visible = true;
				 this->DL2->Visible = true;
				 this->DL3->Visible = true;
				 this->DL4->Visible = true;
				 this->DL6->Visible = true;
				 this->DL7->Visible = true;

				 this->PB1->Visible = true;
				 this->PB2->Visible = true;
				 this->PB3->Visible = true;
				 this->PB4->Visible = true;
				 this->PB5->Visible = true;
				 this->PB6->Visible = true;

				 this->DL5->Text = "17";
				 this->DL1->Text = "23";
				 this->DL2->Text = "11";
				 this->DL3->Text = "34";
				 this->DL4->Text = "-7";
				 this->DL6->Text = "28";
				 this->DL7->Text = "97";
				 this->BTree_delete_but->Enabled = true;
			 }
	private: System::Void BTdeletetimer2_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Checklabel->Text == "5"){
					 this->DL3->Text = "34";
					 this->DL7->Text = "97";
					 this->DL7->Visible = true;
					 this->DL6->Visible = true;
					 this->PB6->Visible = true;
					 this->PB5->Visible = true;
					 this->Infolabel->Text = "";
					 this->DL7->BackColor = System::Drawing::Color::Wheat;
					 this->DL1->BackColor = System::Drawing::Color::Wheat;
					 this->DL3->BackColor = System::Drawing::Color::Wheat;
					 this->BTree_delete_but->Enabled = true;
					 BTdeletetimer2->Enabled = false;
				 }
				 else if(this->Checklabel->Text == "4"){
					 this->Checklabel->Text = "5";
					 this->DL3->BackColor = System::Drawing::Color::DarkOrange;
					 this->DL3->Text = "97";
					 this->DL7->Visible = false;
					 this->PB6->Visible = false;
					 this->Infolabel->Text = "That's It !!";
				 }
				 else if(this->Checklabel->Text == "3"){
					 this->Checklabel->Text = "4";
					 this->Infolabel->Text = "Now , Simply Delete 34 And Replace It With Its Child 97";
				 }
				 else if(this->Checklabel->Text == "2"){
					 this->Checklabel->Text = "3";
					 this->DL3->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "1"){
					 this->Checklabel->Text = "2";
					 this->Infolabel->Text = "First Of All We Will Search For 34 Starting From Root Node";
					 this->DL1->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "0"){
					 this->Checklabel->Text = "1";
				 }
			 }
	private: System::Void BTdeletetimer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Checklabel->Text == "7"){
					 this->Infolabel->Text = "";
					 this->DL1->BackColor = System::Drawing::Color::Wheat;
					 this->DL3->BackColor = System::Drawing::Color::Wheat;		  
					 this->DL6->BackColor = System::Drawing::Color::Wheat;		 
					 this->DL1->Visible = true;		  
					 this->DL3->Visible = true;	  
					 this->DL6->Visible = true; 
					 this->PB5->Visible = true;
					 this->DL1->Text = "23"; 
					 this->DL3->Text = "34"; 
					 this->DL6->Text = "28";
					 this->BTree_delete_but->Enabled = true;
					 BTdeletetimer3->Enabled = false;
				 }
				 else if(this->Checklabel->Text == "6"){
					 this->Checklabel->Text = "7";
					 this->DL6->Visible = false;
					 this->PB5->Visible = false;
					 this->Infolabel->Text = "You're Done !!";
				 }
				 else if(this->Checklabel->Text == "5"){
					 this->Checklabel->Text = "6";
					 this->DL1->Text = "28";
					 this->Infolabel->Text = "Now ,Delete The Inorder Successor Node Simply As We Delete A Leaf Node";
				 }
				 else if(this->Checklabel->Text == "4"){
					 this->Checklabel->Text = "5";
					 this->Infolabel->Text = "Now , Simply Copy The Node Value Of The Inorder Successor In The Node To Be Deleted";
				 }
				 else if(this->Checklabel->Text == "3"){
					 this->Checklabel->Text = "4";
					 this->DL6->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "2"){
					 this->Checklabel->Text = "3";
					 this->DL3->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "1"){
					 this->Checklabel->Text = "2";
					 this->Infolabel->Text = "First Of All, We Find The Inorder Successor Of The Node ,ie Leftmost Node In Right Subtree";
					 this->DL1->BackColor = System::Drawing::Color::DarkOrange;
				 }
				 else if(this->Checklabel->Text == "0"){
					 this->Checklabel->Text = "1";
				 }
			 }
	};
}
