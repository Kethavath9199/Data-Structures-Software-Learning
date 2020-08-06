#pragma once
#include "Stack_Animations.h"
#include "Stack_Applications.h"
#include "Stack_Implementation_Array.h"
#include "Stack_Implementation_LinkedList.h"
#include "Stack_Introduction.h"
#include "Stack_Resources.h"
#include "Stack_Test.h"
#include "DiscussionForum.h"
#include "Quiz.h"
#include "UI_Queue_Quiz.h"
namespace DataStructuresLearningSoftware {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Stack_Main
	/// </summary>
	public ref class Stack_Main : public System::Windows::Forms::Form
	{
	public:
		Stack_Main(void)
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
		~Stack_Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Label^  lblWelcome;
	private: System::Windows::Forms::Button^  btnBack;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Button^  btnHome;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Stack_Main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnHome = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(175, 720);
			this->panel1->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(0, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 70);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Implementation Using \n Linked List";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Stack_Main::button3_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(0, 260);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(175, 30);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Quiz Time";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Stack_Main::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(0, 230);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(175, 30);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Resouces";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Stack_Main::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(0, 200);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(175, 30);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Play With Stacks";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Stack_Main::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(0, 170);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(175, 30);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Applications";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Stack_Main::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(0, 30);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 70);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Implementation Using  Arrays";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Stack_Main::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Introduction";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Stack_Main::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->lblWelcome);
			this->panel2->Controls->Add(this->btnBack);
			this->panel2->Controls->Add(this->btnNext);
			this->panel2->Controls->Add(this->btnHome);
			this->panel2->Location = System::Drawing::Point(175, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1104, 50);
			this->panel2->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(58, 0);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 50);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Discussion";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Stack_Main::button8_Click);
			// 
			// lblWelcome
			// 
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblWelcome->ForeColor = System::Drawing::Color::Black;
			this->lblWelcome->Location = System::Drawing::Point(242, 15);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(698, 20);
			this->lblWelcome->TabIndex = 15;
			this->lblWelcome->Text = L"label1";
			this->lblWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btnBack
			// 
			this->btnBack->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBack.Image")));
			this->btnBack->Location = System::Drawing::Point(8, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(50, 50);
			this->btnBack->TabIndex = 14;
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &Stack_Main::btnBack_Click);
			// 
			// btnNext
			// 
			this->btnNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnNext->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNext.Image")));
			this->btnNext->Location = System::Drawing::Point(996, 0);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(50, 50);
			this->btnNext->TabIndex = 13;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &Stack_Main::btnNext_Click_1);
			// 
			// btnHome
			// 
			this->btnHome->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHome->FlatAppearance->BorderSize = 0;
			this->btnHome->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnHome->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHome.Image")));
			this->btnHome->Location = System::Drawing::Point(1046, 0);
			this->btnHome->Name = L"btnHome";
			this->btnHome->Size = System::Drawing::Size(50, 50);
			this->btnHome->TabIndex = 12;
			this->btnHome->UseVisualStyleBackColor = true;
			this->btnHome->Click += gcnew System::EventHandler(this, &Stack_Main::btnHome_Click);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(175, 50);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1105, 670);
			this->panel3->TabIndex = 1;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Stack_Main::panel3_Paint);
			// 
			// Stack_Main
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Stack_Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stack_Main";
			this->Load += gcnew System::EventHandler(this, &Stack_Main::Stack_Main_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: 
		int curid;
		String ^ username;
		String ^ fullname;
		int modulesCompleted;

		void display()
		{
			if(curid==1)
			{
				button1->PerformClick();
			}
			else if(curid==2)
			{
				button2->PerformClick();
			}
			else if(curid==3)
			{
				button3->PerformClick();
			}
			else if(curid==4)
			{
				button4->PerformClick();
			}
			else if(curid==5)
			{
				button5->PerformClick();
			}
			else if(curid==6)
			{
				button6->PerformClick();
			}
			else if(curid==7)
			{
				button7->PerformClick();
			}
		}
		void modulescheck()
		{
			OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
			DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

			DB_Connection->Open();
			String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
			OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
			OleDbDataReader ^ reader = cmd->ExecuteReader();
			if(reader->Read()){
				modulesCompleted = reader->GetInt32(13);
			}
			DB_Connection->Close();
		}
	private: System::Void Stack_Main_Load(System::Object^  sender, System::EventArgs^  e) {
				 panel3->AutoScroll=true;
				 curid=1;
				 display();
				 modulesCompleted=0;
				 OleDb::OleDbConnection ^ DB_Connection = gcnew OleDb::OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="+IO::Path::GetDirectoryName(Application::StartupPath)+"\\Database.accdb";

				 DB_Connection->Open();
				 String ^readString = "SELECT * FROM Users WHERE UserName='"+username+"'";
				 OleDbCommand ^ cmd = gcnew OleDbCommand(readString, DB_Connection);
				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 if(reader->Read()){
					 fullname = reader->GetString(2);
					 modulesCompleted = reader->GetInt32(13);
				 }
				 lblWelcome->Text = "Welcome, "+fullname;
				 panel3->AutoScroll=true;
				 DB_Connection->Close();

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 curid=1;
				 btnBack->Hide();
				 btnNext->Show();
				 button1->BackColor = Color::PaleTurquoise;
				 button2->BackColor = Color::LightSeaGreen;
				 button3->BackColor = Color::LightSeaGreen;
				 button4->BackColor = Color::LightSeaGreen;
				 button5->BackColor = Color::LightSeaGreen;
				 button6->BackColor = Color::LightSeaGreen;
				 button7->BackColor = Color::LightSeaGreen;
				 panel3->Controls->Clear();
				 panel3->Controls->Add(gcnew Stack_Introduction);
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 curid=2;
				 btnBack->Show();
				 btnNext->Show();
				 button1->BackColor = Color::LightSeaGreen;
				 button2->BackColor = Color::PaleTurquoise;
				 button3->BackColor = Color::LightSeaGreen;
				 button4->BackColor = Color::LightSeaGreen;
				 button5->BackColor = Color::LightSeaGreen;
				 button6->BackColor = Color::LightSeaGreen;
				 button7->BackColor = Color::LightSeaGreen;
				 panel3->Controls->Clear();
				 Stack_Implementation_Array ^ newquiz = gcnew Stack_Implementation_Array;
				 newquiz->username= username;
				 panel3->Controls->Add(newquiz);
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=0)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else{
					 curid=3;
					 btnBack->Show();
					 btnNext->Show();
					 button1->BackColor = Color::LightSeaGreen;
					 button2->BackColor = Color::LightSeaGreen;
					 button3->BackColor = Color::PaleTurquoise;
					 button4->BackColor = Color::LightSeaGreen;
					 button5->BackColor = Color::LightSeaGreen;
					 button6->BackColor = Color::LightSeaGreen;
					 button7->BackColor = Color::LightSeaGreen;
					 panel3->Controls->Clear();
					 Stack_Implementation_LinkedList ^ newquiz = gcnew Stack_Implementation_LinkedList;
					 newquiz->username= username;
					 panel3->Controls->Add(newquiz);
				 }	 
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=1)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else{

					 curid=4;
					 btnBack->Show();
					 btnNext->Show();
					 button1->BackColor = Color::LightSeaGreen;
					 button2->BackColor = Color::LightSeaGreen;
					 button3->BackColor = Color::LightSeaGreen;
					 button4->BackColor = Color::PaleTurquoise;
					 button5->BackColor = Color::LightSeaGreen;
					 button6->BackColor = Color::LightSeaGreen;
					 button7->BackColor = Color::LightSeaGreen;
					 panel3->Controls->Clear();
					 panel3->Controls->Add(gcnew Stack_Applications);}
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=1)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else{
					 curid=5;
					 btnBack->Show();
					 btnNext->Show();
					 button1->BackColor = Color::LightSeaGreen;
					 button2->BackColor = Color::LightSeaGreen;
					 button3->BackColor = Color::LightSeaGreen;
					 button4->BackColor = Color::LightSeaGreen;
					 button5->BackColor = Color::PaleTurquoise;
					 button6->BackColor = Color::LightSeaGreen;
					 button7->BackColor = Color::LightSeaGreen;
					 panel3->Controls->Clear();
					 panel3->Controls->Add(gcnew Stack_Animations);}
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=1)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else{
					 curid=6;
					 btnBack->Show();
					 btnNext->Show();
					 button1->BackColor = Color::LightSeaGreen;
					 button2->BackColor = Color::LightSeaGreen;
					 button3->BackColor = Color::LightSeaGreen;
					 button4->BackColor = Color::LightSeaGreen;
					 button5->BackColor = Color::LightSeaGreen;
					 button6->BackColor = Color::PaleTurquoise;
					 button7->BackColor = Color::LightSeaGreen;
					 panel3->Controls->Clear();
					 panel3->Controls->Add(gcnew Stack_Resources);}
			 }
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=1)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else{
					 curid=7;
					 btnBack->Show();
					 btnNext->Hide();
					 button1->BackColor = Color::LightSeaGreen;
					 button2->BackColor = Color::LightSeaGreen;
					 button3->BackColor = Color::LightSeaGreen;
					 button4->BackColor = Color::LightSeaGreen;
					 button5->BackColor = Color::LightSeaGreen;
					 button6->BackColor = Color::LightSeaGreen;
					 button7->BackColor = Color::PaleTurquoise;
					 panel3->Controls->Clear();
					 Quiz ^newUserControl = gcnew Quiz();
					 newUserControl->username = username;
					 newUserControl->ds_id = 5;
					 panel3->Controls->Add(newUserControl);

				 }
			 }
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel3->Controls->Clear();
				 DiscussionForum ^ discuss = gcnew DiscussionForum;
				 discuss->username=username;
				 discuss->module="Stack";
				 panel3->Controls->Add(discuss);
			 }
	private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(this->Owner!=nullptr)
				 {
					 this->Owner->Visible=true;
				 }
				 this->Close();

			 }
	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e) {
				 curid--;
				 display();
			 }
	private: System::Void btnNext_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 modulescheck();
				 if(modulesCompleted<=1&&curid==3)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else if(modulesCompleted<=0&&curid==2)
				 {
					 MessageBox::Show("Please Complete the Previous Module to access this.");
				 }
				 else
				 {
					 curid++;
					 display();
				 }
			 }
	private: System::Void btnHome_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	};
}