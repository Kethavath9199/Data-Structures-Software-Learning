#pragma once
#include "moduleQuiz.h"
#include<string.h>
#include <string>
#include <iostream> 
#include <ctime> 
#include <cstdlib>
#using <system.windows.forms.dll>
#using <Microsoft.VisualBasic.dll>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace DataStructuresLearningSoftware {

	/// <summary>
	/// Summary for BST_insertion
	/// </summary>
	public ref class BST_insertion : public System::Windows::Forms::UserControl
	{
	public:
		BST_insertion(void)
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
		~BST_insertion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label6;
	protected: 
	private: System::Windows::Forms::TextBox^  BTinsert_value;
	private: System::Windows::Forms::Button^  InsertBT;















	private: System::Windows::Forms::Timer^  BTinsert_timer;
	private: System::Windows::Forms::Timer^  FixMe;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  quizPanel;
	private: System::Windows::Forms::Panel^  Btree_insert_animation;
	private: System::Windows::Forms::Label^  BT5;
	private: System::Windows::Forms::Label^  BT4;
	private: System::Windows::Forms::Label^  BT6;
	private: System::Windows::Forms::Label^  BT7;
	private: System::Windows::Forms::Label^  BT3;
	private: System::Windows::Forms::Label^  BT2;
	private: System::Windows::Forms::Label^  BT1;
	private: System::Windows::Forms::PictureBox^  PBI2;
	private: System::Windows::Forms::PictureBox^  PBI6;
	private: System::Windows::Forms::PictureBox^  PBI4;
	private: System::Windows::Forms::PictureBox^  PBI1;
	private: System::Windows::Forms::PictureBox^  PBI3;
	private: System::Windows::Forms::PictureBox^  PBI5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BST_insertion::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BTinsert_value = (gcnew System::Windows::Forms::TextBox());
			this->InsertBT = (gcnew System::Windows::Forms::Button());
			this->BTinsert_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->FixMe = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->quizPanel = (gcnew System::Windows::Forms::Panel());
			this->Btree_insert_animation = (gcnew System::Windows::Forms::Panel());
			this->BT5 = (gcnew System::Windows::Forms::Label());
			this->BT4 = (gcnew System::Windows::Forms::Label());
			this->BT6 = (gcnew System::Windows::Forms::Label());
			this->BT7 = (gcnew System::Windows::Forms::Label());
			this->BT3 = (gcnew System::Windows::Forms::Label());
			this->BT2 = (gcnew System::Windows::Forms::Label());
			this->BT1 = (gcnew System::Windows::Forms::Label());
			this->PBI2 = (gcnew System::Windows::Forms::PictureBox());
			this->PBI6 = (gcnew System::Windows::Forms::PictureBox());
			this->PBI4 = (gcnew System::Windows::Forms::PictureBox());
			this->PBI1 = (gcnew System::Windows::Forms::PictureBox());
			this->PBI3 = (gcnew System::Windows::Forms::PictureBox());
			this->PBI5 = (gcnew System::Windows::Forms::PictureBox());
			this->Btree_insert_animation->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI5))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(846, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 21);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Insert Value";
			// 
			// BTinsert_value
			// 
			this->BTinsert_value->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BTinsert_value->Location = System::Drawing::Point(961, 98);
			this->BTinsert_value->Name = L"BTinsert_value";
			this->BTinsert_value->Size = System::Drawing::Size(144, 28);
			this->BTinsert_value->TabIndex = 6;
			// 
			// InsertBT
			// 
			this->InsertBT->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->InsertBT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->InsertBT->Location = System::Drawing::Point(961, 145);
			this->InsertBT->Name = L"InsertBT";
			this->InsertBT->Size = System::Drawing::Size(189, 55);
			this->InsertBT->TabIndex = 5;
			this->InsertBT->Text = L"Insert";
			this->InsertBT->UseVisualStyleBackColor = true;
			this->InsertBT->Click += gcnew System::EventHandler(this, &BST_insertion::InsertBT_Click);
			// 
			// BTinsert_timer
			// 
			this->BTinsert_timer->Interval = 800;
			this->BTinsert_timer->Tick += gcnew System::EventHandler(this, &BST_insertion::BTinsert_timer_Tick);
			// 
			// FixMe
			// 
			this->FixMe->Interval = 800;
			this->FixMe->Tick += gcnew System::EventHandler(this, &BST_insertion::FixMe_Tick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(831, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(446, 204);
			this->label1->TabIndex = 9;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(100, 569);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(482, 27);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Answer the question correctly to pass the module.";
			// 
			// quizPanel
			// 
			this->quizPanel->AutoScroll = true;
			this->quizPanel->Location = System::Drawing::Point(105, 599);
			this->quizPanel->Name = L"quizPanel";
			this->quizPanel->Size = System::Drawing::Size(1030, 450);
			this->quizPanel->TabIndex = 27;
			// 
			// Btree_insert_animation
			// 
			this->Btree_insert_animation->AutoScroll = true;
			this->Btree_insert_animation->BackColor = System::Drawing::Color::Transparent;
			this->Btree_insert_animation->Controls->Add(this->BT5);
			this->Btree_insert_animation->Controls->Add(this->BT4);
			this->Btree_insert_animation->Controls->Add(this->BT6);
			this->Btree_insert_animation->Controls->Add(this->BT7);
			this->Btree_insert_animation->Controls->Add(this->BT3);
			this->Btree_insert_animation->Controls->Add(this->BT2);
			this->Btree_insert_animation->Controls->Add(this->BT1);
			this->Btree_insert_animation->Controls->Add(this->PBI2);
			this->Btree_insert_animation->Controls->Add(this->PBI6);
			this->Btree_insert_animation->Controls->Add(this->PBI4);
			this->Btree_insert_animation->Controls->Add(this->PBI1);
			this->Btree_insert_animation->Controls->Add(this->PBI3);
			this->Btree_insert_animation->Controls->Add(this->PBI5);
			this->Btree_insert_animation->Location = System::Drawing::Point(105, 51);
			this->Btree_insert_animation->Name = L"Btree_insert_animation";
			this->Btree_insert_animation->Size = System::Drawing::Size(711, 442);
			this->Btree_insert_animation->TabIndex = 28;
			// 
			// BT5
			// 
			this->BT5->BackColor = System::Drawing::Color::Wheat;
			this->BT5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT5->Location = System::Drawing::Point(227, 283);
			this->BT5->Name = L"BT5";
			this->BT5->Size = System::Drawing::Size(108, 79);
			this->BT5->TabIndex = 7;
			this->BT5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT5->Visible = false;
			// 
			// BT4
			// 
			this->BT4->BackColor = System::Drawing::Color::Wheat;
			this->BT4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT4->Location = System::Drawing::Point(63, 283);
			this->BT4->Name = L"BT4";
			this->BT4->Size = System::Drawing::Size(108, 79);
			this->BT4->TabIndex = 6;
			this->BT4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT4->Visible = false;
			// 
			// BT6
			// 
			this->BT6->BackColor = System::Drawing::Color::Wheat;
			this->BT6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT6->Location = System::Drawing::Point(341, 283);
			this->BT6->Name = L"BT6";
			this->BT6->Size = System::Drawing::Size(108, 79);
			this->BT6->TabIndex = 5;
			this->BT6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT6->Visible = false;
			// 
			// BT7
			// 
			this->BT7->BackColor = System::Drawing::Color::Wheat;
			this->BT7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT7->Location = System::Drawing::Point(533, 283);
			this->BT7->Name = L"BT7";
			this->BT7->Size = System::Drawing::Size(108, 79);
			this->BT7->TabIndex = 4;
			this->BT7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT7->Visible = false;
			// 
			// BT3
			// 
			this->BT3->BackColor = System::Drawing::Color::Wheat;
			this->BT3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT3->Location = System::Drawing::Point(412, 155);
			this->BT3->Name = L"BT3";
			this->BT3->Size = System::Drawing::Size(108, 79);
			this->BT3->TabIndex = 3;
			this->BT3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT3->Visible = false;
			// 
			// BT2
			// 
			this->BT2->BackColor = System::Drawing::Color::Wheat;
			this->BT2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT2->Location = System::Drawing::Point(147, 155);
			this->BT2->Name = L"BT2";
			this->BT2->Size = System::Drawing::Size(108, 79);
			this->BT2->TabIndex = 2;
			this->BT2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT2->Visible = false;
			// 
			// BT1
			// 
			this->BT1->BackColor = System::Drawing::Color::Wheat;
			this->BT1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT1->Location = System::Drawing::Point(279, 14);
			this->BT1->Name = L"BT1";
			this->BT1->Size = System::Drawing::Size(108, 79);
			this->BT1->TabIndex = 0;
			this->BT1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT1->Visible = false;
			// 
			// PBI2
			// 
			this->PBI2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI2.Image")));
			this->PBI2->Location = System::Drawing::Point(360, 72);
			this->PBI2->Name = L"PBI2";
			this->PBI2->Size = System::Drawing::Size(89, 96);
			this->PBI2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI2->TabIndex = 8;
			this->PBI2->TabStop = false;
			this->PBI2->Visible = false;
			// 
			// PBI6
			// 
			this->PBI6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI6.Image")));
			this->PBI6->Location = System::Drawing::Point(495, 211);
			this->PBI6->Name = L"PBI6";
			this->PBI6->Size = System::Drawing::Size(89, 96);
			this->PBI6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI6->TabIndex = 9;
			this->PBI6->TabStop = false;
			this->PBI6->Visible = false;
			// 
			// PBI4
			// 
			this->PBI4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI4.Image")));
			this->PBI4->Location = System::Drawing::Point(227, 211);
			this->PBI4->Name = L"PBI4";
			this->PBI4->Size = System::Drawing::Size(89, 96);
			this->PBI4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI4->TabIndex = 10;
			this->PBI4->TabStop = false;
			this->PBI4->Visible = false;
			// 
			// PBI1
			// 
			this->PBI1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI1.Image")));
			this->PBI1->Location = System::Drawing::Point(213, 72);
			this->PBI1->Name = L"PBI1";
			this->PBI1->Size = System::Drawing::Size(89, 96);
			this->PBI1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI1->TabIndex = 11;
			this->PBI1->TabStop = false;
			this->PBI1->Visible = false;
			// 
			// PBI3
			// 
			this->PBI3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI3.Image")));
			this->PBI3->Location = System::Drawing::Point(82, 211);
			this->PBI3->Name = L"PBI3";
			this->PBI3->Size = System::Drawing::Size(89, 96);
			this->PBI3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI3->TabIndex = 12;
			this->PBI3->TabStop = false;
			this->PBI3->Visible = false;
			// 
			// PBI5
			// 
			this->PBI5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"PBI5.Image")));
			this->PBI5->Location = System::Drawing::Point(371, 211);
			this->PBI5->Name = L"PBI5";
			this->PBI5->Size = System::Drawing::Size(89, 96);
			this->PBI5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PBI5->TabIndex = 13;
			this->PBI5->TabStop = false;
			this->PBI5->Visible = false;
			// 
			// BST_insertion
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->Btree_insert_animation);
			this->Controls->Add(this->quizPanel);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BTinsert_value);
			this->Controls->Add(this->InsertBT);
			this->Name = L"BST_insertion";
			this->Size = System::Drawing::Size(1277, 1050);
			this->Load += gcnew System::EventHandler(this, &BST_insertion::BST_insertion_Load);
			this->Btree_insert_animation->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PBI5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			String ^ username;
	private: System::Void InsertBT_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->BTinsert_value->Text == ""){
					 MessageBox::Show("Please Enter Value In The TextBox");
					 return ;
				 }
				 int len=this->BTinsert_value->Text->Length;int num=0;
				 for(int i=0;i<len;i++){if(!isdigit(this->BTinsert_value->Text[i])){num=1;}}
				 if(num==1){
					 this->BTinsert_value->Text = "";
					 MessageBox::Show("Please Enter only integers");
				 }
				 else if(int::Parse(this->BTinsert_value->Text)>99 || int::Parse(this->BTinsert_value->Text)<0){
					 this->BTinsert_value->Text = "";
					 MessageBox::Show("Please Enter Value Between 0 and 99");
				 }
				 else{
					 this->BTinsert_value->Enabled = false;
					 this->InsertBT->Enabled = false;
					 if(this->BT1->Visible == false){
						 this->BT1->Text = this->BTinsert_value->Text;
						 this->BT1->Visible = true;
						 this->BTinsert_value->Text = "";
						 this->BTinsert_value->Enabled = true;
						 this->InsertBT->Enabled = true;
						 return ;
					 }
					 if(this->BT2->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) ){
						 BTinsert_timer->Enabled = true;
					 }
					 else if(this->BT3->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text)){
						 BTinsert_timer->Enabled = true;
					 }
					 else if(this->BT4->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT2->Text)){
						 BTinsert_timer->Enabled = true;
					 }
					 else if(this->BT5->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT2->Text)){
						 BTinsert_timer->Enabled = true;
					 }
					 else if(this->BT6->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT3->Text)){
						 BTinsert_timer->Enabled = true;
					 }
					 else if(this->BT7->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT3->Text)){
						 BTinsert_timer->Enabled = true;
					 }
					 else{
						 this->BTinsert_value->Text = "";
						 this->BTinsert_value->Enabled = true;
						 this->InsertBT->Enabled = true;
						 MessageBox::Show("You Have Reached A Maximum Height Of The Binary Search Tree");
					 }
				 }
			 }
	private: System::Void BTinsert_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 int x = int::Parse(this->BTinsert_value->Text);
				 if(this->BT4->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x<=int::Parse(this->BT2->Text)){
					 this->BT4->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT4->Text = this->BTinsert_value->Text;
					 this->BT4->Visible = true;
					 this->PBI3->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(this->BT5->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x>int::Parse(this->BT2->Text)){
					 this->BT5->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT5->Text = this->BTinsert_value->Text;
					 this->BT5->Visible = true;
					 this->PBI4->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(this->BT6->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x<=int::Parse(this->BT3->Text)){
					 this->BT6->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT6->Text = this->BTinsert_value->Text;
					 this->BT6->Visible = true;
					 this->PBI5->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(this->BT7->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x>int::Parse(this->BT3->Text)){
					 this->BT7->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT7->Text = this->BTinsert_value->Text;
					 this->BT7->Visible = true;
					 this->PBI6->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->Visible==false && x> int::Parse(this->BT1->Text)){
					 this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT3->Text = this->BTinsert_value->Text;
					 this->BT3->Visible = true;
					 this->PBI2->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->Visible==false && x<= int::Parse(this->BT1->Text)){
					 this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
					 this->BT2->Text = this->BTinsert_value->Text;
					 this->BT2->Visible = true;
					 this->PBI1->Visible = true;
					 this->BTinsert_value->Text = "";
					 this->BTinsert_value->Enabled = true;
					 this->InsertBT->Enabled = true;
					 BTinsert_timer->Enabled = false;
					 FixMe->Enabled = true;
				 }
				 else if(BT2->Visible==true && this->BT2->BackColor != System::Drawing::SystemColors::MenuHighlight && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && x<= int::Parse(this->BT1->Text)){
					 this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 }
				 else if(BT3->Visible==true && this->BT3->BackColor != System::Drawing::SystemColors::MenuHighlight && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && x> int::Parse(this->BT1->Text)){
					 this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 }
				 else if(this->BT1->Visible == true && this->BT1->BackColor != System::Drawing::SystemColors::MenuHighlight){
					 this->BT1->BackColor = System::Drawing::SystemColors::MenuHighlight;
				 }
			 }
	private: System::Void FixMe_Tick(System::Object^  sender, System::EventArgs^  e) {
				 this->BT1->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT2->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT3->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT4->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT5->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT6->BackColor = System::Drawing::SystemColors::HighlightText;
				 this->BT7->BackColor = System::Drawing::SystemColors::HighlightText;
				 FixMe->Enabled = false;
			 }
	private: System::Void BST_insertion_Load(System::Object^  sender, System::EventArgs^  e) {
				 // Question Load
				 moduleQuiz ^newPanel = gcnew moduleQuiz();
				 // see ds id and module id
				 newPanel->ds_id = 7;
				 newPanel->module_id = 1;
				 newPanel->username = username;
				 newPanel->update_id = 18;
				 newPanel->update_name = "BSTProgress";
				 quizPanel->Controls->Clear();
				 quizPanel->Controls->Add(newPanel);
			 }
};
}
